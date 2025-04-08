/* Copyright (C) 2024 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#include "ENConnectionDrawingPolicy.h"
#include "ENPathDrawer.h"
#include "SGraphPanel.h"
#include "Framework/Application/SlateApplication.h"
#include "MaterialGraph/MaterialGraphSchema.h"
#include "Policies/ENAnimGraphConnectionDrawingPolicy.h"
#include "Policies/ENBehaviorTreeConnectionDrawingPolicy.h"
#include "Policies/ENMaterialGraphConnectionDrawingPolicy.h"
#include "Popup/ENWardenPopup.h"
//#include "Policies/ENMetasoundConnectionDrawingPolicy.h"


FConnectionDrawingPolicy* FENConnectionDrawingPolicyFactory::CreateConnectionPolicy(const class UEdGraphSchema* Schema, int32 InBackLayerID, int32 InFrontLayerID, float ZoomFactor, const class FSlateRect& InClippingRect, class FSlateWindowElementList& InDrawElements, class UEdGraph* InGraphObj) const
{
	const UElectronicNodesSettings& ElectronicNodesSettings = *GetDefault<UElectronicNodesSettings>();
	if (!ElectronicNodesSettings.MasterActivate)
	{
		return nullptr;
	}

	//ENWardenPopup::Register();
	const FName ClassName = Schema->GetClass()->GetFName();

	if (ElectronicNodesSettings.DisplaySchemaName)
	{
		UE_LOG(LogTemp, Log, TEXT("[EN] %s"), *ClassName.ToString());
	}

	if (ElectronicNodesSettings.ActivateOnAnimation)
	{
		if (ClassName == "AnimationTransitionSchema")
		{
			return new FENAnimGraphConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
		}

		if (ClassName == "AnimationGraphSchema" || ClassName == "AnimationStateGraphSchema")
		{
			return new FENAnimGraphConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
		}
	}

	if (ElectronicNodesSettings.ActivateOnVoxelPlugin && ClassName == "VoxelGraphSchema")
	{
		return new FENConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
	}

	if (ElectronicNodesSettings.ActivateOnNiagara && ClassName == "EdGraphSchema_Niagara")
	{
		return new FENConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
	}

	if (ElectronicNodesSettings.ActivateOnBehaviorTree && ClassName == "EdGraphSchema_BehaviorTree")
	{
		return new FENBehaviorTreeConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
	}

	if (ElectronicNodesSettings.ActivateOnControlRig && ClassName == "ControlRigGraphSchema")
	{
		return new FENConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
	}

	if (ElectronicNodesSettings.ActivateOnMetasound && ClassName == "MetasoundEditorGraphSchema")
	{
		//return new FENMetasoundConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
	}

	if (ElectronicNodesSettings.ActivateOnReferenceViewer && ClassName == "ReferenceViewerSchema")
	{
		return new FENConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
	}

	if (ElectronicNodesSettings.ActivateOnBlueprint && Schema->IsA(UEdGraphSchema_K2::StaticClass()))
	{
		return new FENConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
	}

	if (ElectronicNodesSettings.ActivateOnMaterial && Schema->IsA(UMaterialGraphSchema::StaticClass()))
	{
		return new FENMaterialGraphConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
	}

	for (const auto& Type : ElectronicNodesSettings.CustomGraphSchemas)
	{
		if (Schema->IsA(Type))
		{
			return new FENConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
		}
	}

	if (ElectronicNodesSettings.ActivateFallback)
	{
		return new FENConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
	}

	return nullptr;
}

void FENConnectionDrawingPolicy::DrawConnection(int32 LayerId, const FVector2D& Start, const FVector2D& End, const FConnectionParams& Params)
{
	const bool RightPriority = ENIsRightPriority(Params);

	this->_LayerId = LayerId;
	this->_Params = &Params;
	ClosestDistanceSquared = MAX_FLT;

	FENPathDrawer PathDrawer(LayerId, ZoomFactor, RightPriority, &Params, &DrawElementsList, this);
	FVector2D StartDirection = (Params.StartDirection == EGPD_Output) ? FVector2D(1.0f, 0.0f) : FVector2D(-1.0f, 0.0f);
	FVector2D EndDirection = (Params.EndDirection == EGPD_Input) ? FVector2D(1.0f, 0.0f) : FVector2D(-1.0f, 0.0f);

	if (FVector2D::Distance(Start, End) < ElectronicNodesSettings.MinDistanceToStyle * ZoomFactor)
	{
		switch (ElectronicNodesSettings.MinDistanceStyle)
		{
		case EMinDistanceStyle::Line:
			PathDrawer.DrawLine(Start, End);
			break;
		case EMinDistanceStyle::Spline:
			PathDrawer.DrawDefaultWire(Start, StartDirection, End, EndDirection);
			break;
		}
		return;
	}

	if (IsTree)
	{
		StartDirection = FVector2D(0.0f, 1.0f);
		EndDirection = FVector2D(0.0f, 1.0f);
	}

	FVector2D NewStart = Start;
	FVector2D NewEnd = End;

	ENCorrectZoomDisplacement(NewStart, NewEnd);
	ENProcessRibbon(_LayerId, NewStart, StartDirection, NewEnd, EndDirection, Params);

	EWireStyle WireStyle = ElectronicNodesSettings.WireStyle;

	if (ElectronicNodesSettings.OverwriteExecWireStyle)
	{
		if (((Params.AssociatedPin1 != nullptr) && Params.AssociatedPin1->PinType.PinCategory.ToString() == "exec") ||
			((Params.AssociatedPin2 != nullptr) && Params.AssociatedPin2->PinType.PinCategory.ToString() == "exec"))
		{
			if (ElectronicNodesSettings.WireStyleForExec != EWireStyle::Default)
			{
				WireStyle = ElectronicNodesSettings.WireStyleForExec;
			}
		}
	}

	/*
	const int8 MembersCount = this->ENGetPinMembersCount(Params.AssociatedPin1);

	if (MembersCount > 1)
	{
		for (int i = 0; i < MembersCount; i++)
		{
			const float Factor = static_cast<float>(i) - (static_cast<float>(MembersCount) / 2.0f) + 0.5f;
			auto MultipleStart = NewStart + FVector2d(0, 4.0f * Factor * ZoomFactor);
			auto MultipleEnd = NewEnd + FVector2d(0, 4.0f * Factor * ZoomFactor);
			this->ENDrawMainWire(&PathDrawer, WireStyle, MultipleStart, StartDirection, MultipleEnd, EndDirection, Params);
		}
	}
	else
	{
		this->ENDrawMainWire(&PathDrawer, WireStyle, NewStart, StartDirection, NewEnd, EndDirection, Params);
	}
	*/

	this->ENDrawMainWire(&PathDrawer, WireStyle, NewStart, StartDirection, NewEnd, EndDirection, Params);

	if (Settings->bTreatSplinesLikePins)
	{
		const float QueryDistanceTriggerThresholdSquared = FMath::Square(Settings->SplineHoverTolerance + Params.WireThickness * 0.5f);
		const bool bCloseToSpline = ClosestDistanceSquared < QueryDistanceTriggerThresholdSquared;

		if (bCloseToSpline)
		{
			if (ClosestDistanceSquared < SplineOverlapResult.GetDistanceSquared())
			{
				const float SquaredDistToPin1 = (Params.AssociatedPin1 != nullptr) ? (Start - ClosestPoint).SizeSquared() : FLT_MAX;
				const float SquaredDistToPin2 = (Params.AssociatedPin2 != nullptr) ? (End - ClosestPoint).SizeSquared() : FLT_MAX;

				SplineOverlapResult = FGraphSplineOverlapResult(Params.AssociatedPin1, Params.AssociatedPin2, ClosestDistanceSquared, SquaredDistToPin1, SquaredDistToPin2, false);
			}
		}
	}
}

int8 FENConnectionDrawingPolicy::ENGetPinMembersCount(const UEdGraphPin* Pin)
{
	if (Pin == nullptr)
	{
		return 1;
	}

	if (Pin->PinType.PinSubCategoryObject.IsValid())
	{
		const auto TypeName = Pin->PinType.PinSubCategoryObject.Get()->GetName();
		if (TypeName == "Vector4")
		{
			return 4;
		}

		if (TypeName == "Vector" || TypeName == "IntVector")
		{
			return 3;
		}

		if (TypeName == "Vector2D" || TypeName == "IntPoint")
		{
			return 2;
		}
	}

	return 1;
}

void FENConnectionDrawingPolicy::ENDrawMainWire(FENPathDrawer* PathDrawer, EWireStyle WireStyle, FVector2D& InStart, FVector2D& StartDirection, FVector2D& InEnd, FVector2D& EndDirection, const FConnectionParams& Params)
{
	const float Offset = ElectronicNodesSettings.HorizontalOffset * ZoomFactor;

	FVector2D Start = InStart;
	FVector2D End = InEnd;

	if (ElectronicNodesSettings.DisablePinOffset)
	{
		if (!((Params.AssociatedPin1 != nullptr) && (Params.AssociatedPin1->GetName() == "OutputPin")))
		{
			PathDrawer->DrawOffset(Start, StartDirection, Offset, false);
		}
		if (!((Params.AssociatedPin2 != nullptr) && (Params.AssociatedPin2->GetName() == "InputPin")))
		{
			PathDrawer->DrawOffset(End, EndDirection, Offset, true);
		}
	}
	else
	{
		PathDrawer->DrawOffset(Start, StartDirection, Offset, false);
		PathDrawer->DrawOffset(End, EndDirection, Offset, true);
	}

	switch (WireStyle)
	{
	case EWireStyle::Manhattan:
		PathDrawer->DrawManhattanWire(Start, StartDirection, End, EndDirection);
		break;
	case EWireStyle::Subway:
		PathDrawer->DrawSubwayWire(Start, StartDirection, End, EndDirection);
		break;
	default:
		PathDrawer->DrawDefaultWire(Start, StartDirection, End, EndDirection);
	}
}

void FENConnectionDrawingPolicy::ENCorrectZoomDisplacement(FVector2D& Start, FVector2D& End) const
{
	if (ElectronicNodesSettings.FixZoomDisplacement)
	{
		const float ZoomDisplacement = ZoomFactor * -19.0f + 8.0f;
		if (ZoomDisplacement > 0)
		{
			Start.X += ZoomDisplacement / 2.0f;
			End.X -= ZoomDisplacement / 2.0f;
		}
	}
}

void FENConnectionDrawingPolicy::ENProcessRibbon(int32 LayerId, FVector2D& Start, FVector2D& StartDirection, FVector2D& End, FVector2D& EndDirection, const FConnectionParams& Params)
{
	int32 DepthOffsetX = 0;
	int32 DepthOffsetY = 0;

	if (ElectronicNodesSettings.ActivateRibbon && !IsTree)
	{
		for (ENRibbonConnection RibbonConnection : RibbonConnections)
		{
			if (RibbonConnection.Horizontal)
			{
				if (FMath::Abs(Start.Y - RibbonConnection.Main) < ElectronicNodesSettings.RibbonOffset)
				{
					const float CurrentMax = FMath::Max(Start.X, End.X);
					const float CurrentMin = FMath::Min(Start.X, End.X);
					const float RibbonMax = FMath::Max(RibbonConnection.Start, RibbonConnection.End);
					const float RibbonMin = FMath::Min(RibbonConnection.Start, RibbonConnection.End);

					if (FMath::IsNearlyEqual(RibbonMin, CurrentMin, KINDA_SMALL_NUMBER) ||
						FMath::IsNearlyEqual(RibbonMax, CurrentMin, KINDA_SMALL_NUMBER) ||
						FMath::IsNearlyEqual(RibbonMin, CurrentMax, KINDA_SMALL_NUMBER) ||
						FMath::IsNearlyEqual(RibbonMax, CurrentMax, KINDA_SMALL_NUMBER))
					{
						continue;
					}

					if (FMath::Min(CurrentMax, RibbonMax) > FMath::Max(CurrentMin, RibbonMin) - 1.0f)
					{
						if (End.Y - RibbonConnection.Sub > 0)
						{
							DepthOffsetY = FMath::Max(DepthOffsetY, FMath::Max(1, RibbonConnection.Depth + 1));
						}
						else
						{
							DepthOffsetY = FMath::Min(DepthOffsetY, FMath::Min(-1, RibbonConnection.Depth - 1));
						}
					}
				}
			}
		}
		for (ENRibbonConnection RibbonConnection : RibbonConnections)
		{
			if (!RibbonConnection.Horizontal)
			{
				if (FMath::Abs(End.X - RibbonConnection.Main) < ElectronicNodesSettings.RibbonOffset)
				{
					const float CurrentMax = FMath::Max(Start.Y, End.Y);
					const float CurrentMin = FMath::Min(Start.Y, End.Y);
					const float RibbonMax = FMath::Max(RibbonConnection.Start, RibbonConnection.End);
					const float RibbonMin = FMath::Min(RibbonConnection.Start, RibbonConnection.End);

					if (FMath::IsNearlyEqual(RibbonMin, CurrentMin, KINDA_SMALL_NUMBER) ||
						FMath::IsNearlyEqual(RibbonMax, CurrentMin, KINDA_SMALL_NUMBER) ||
						FMath::IsNearlyEqual(RibbonMin, CurrentMax, KINDA_SMALL_NUMBER) ||
						FMath::IsNearlyEqual(RibbonMax, CurrentMax, KINDA_SMALL_NUMBER))
					{
						continue;
					}

					if (FMath::Min(CurrentMax, RibbonMax) > FMath::Max(CurrentMin, RibbonMin) - 1.0f)
					{
						if ((Start.Y - RibbonConnection.Start) * FMath::Sign(End.Y - Start.Y) > 0 || ElectronicNodesSettings.RibbonPushOutside)
						{
							DepthOffsetX = FMath::Max(DepthOffsetX, FMath::Max(1, RibbonConnection.Depth + 1));
						}
						else
						{
							DepthOffsetX = FMath::Min(DepthOffsetX, FMath::Min(-1, RibbonConnection.Depth - 1));
						}

						if (DepthOffsetY != 0)
						{
							DepthOffsetX = FMath::Sign(End.Y - Start.Y) * DepthOffsetY;
						}
					}
				}
			}
		}

		RibbonConnections.Add(ENRibbonConnection(Start.Y, End.Y, true, Start.X, End.X, DepthOffsetY));
		RibbonConnections.Add(ENRibbonConnection(End.X, Start.X, false, Start.Y, End.Y, DepthOffsetX));

		FVector2D StartKey(FMath::FloorToInt(Start.X), FMath::FloorToInt(Start.Y));
		FVector2D EndKey(FMath::FloorToInt(End.X), FMath::FloorToInt(End.Y));

		FENPathDrawer PathDrawer(LayerId, ZoomFactor, true, &Params, &DrawElementsList, this);

		if (DepthOffsetY != 0)
		{
			FVector2D NewStart = Start;
			NewStart.X += ElectronicNodesSettings.RibbonMergeOffset * ZoomFactor * StartDirection.X;
			NewStart.Y += static_cast<int32>(ElectronicNodesSettings.RibbonOffset) * DepthOffsetY * ZoomFactor;

			PathDrawer.DrawManhattanWire(Start, StartDirection, NewStart, StartDirection);

			Start = NewStart;
		}

		if (DepthOffsetX != 0)
		{
			FVector2D NewEnd = End;
			NewEnd.X -= static_cast<int32>(ElectronicNodesSettings.RibbonOffset) * DepthOffsetX * ZoomFactor * EndDirection.X;

			if (DepthOffsetX * EndDirection.X > 0)
			{
				PathDrawer.DrawManhattanWire(NewEnd, EndDirection, End, EndDirection);
			}

			End = NewEnd;
		}
	}
}

bool FENConnectionDrawingPolicy::ENIsRightPriority(const FConnectionParams& Params)
{
	bool RightPriority = (ElectronicNodesSettings.WireAlignment == EWireAlignment::Right);
	EWirePriority WirePriority = ElectronicNodesSettings.WirePriority;

	if (ElectronicNodesSettings.OverwriteExecWireStyle)
	{
		if (((Params.AssociatedPin1 != nullptr) && Params.AssociatedPin1->PinType.PinCategory.ToString() == "exec") ||
			((Params.AssociatedPin2 != nullptr) && Params.AssociatedPin2->PinType.PinCategory.ToString() == "exec"))
		{
			RightPriority = (ElectronicNodesSettings.WireAlignmentForExec == EWireAlignment::Right);
			WirePriority = ElectronicNodesSettings.WirePriorityForExec;
		}
	}

	if (WirePriority != EWirePriority::None)
	{
		if ((Params.AssociatedPin1 != nullptr) && (Params.AssociatedPin2 != nullptr))
		{
			const bool IsOutputPin = (Params.AssociatedPin1->GetName() == "OutputPin");
			const bool IsInputPin = (Params.AssociatedPin2->GetName() == "InputPin");
			if (IsOutputPin ^ IsInputPin)
			{
				switch (WirePriority)
				{
				case EWirePriority::Node:
					RightPriority = IsOutputPin;
					break;
				case EWirePriority::Pin:
					RightPriority = IsInputPin;
					break;
				default:
					break;
				}
			}
		}
	}

	return RightPriority;
}

int32 FENConnectionDrawingPolicy::ENGetZoomLevel()
{
	const float ZoomLevels[] = {2.0f, 1.875f, 1.75f, 1.675f, 1.5f, 1.375f, 1.25f, 1.0f, 0.875f, 0.75f, 0.675f, 0.5f, 0.375f, 0.25f, 0.225f, 0.2f, 0.175f, 0.15f, 0.125f, 0.1f};

	for (int32 i = 0; i < 20; i++)
	{
		if (ZoomFactor > ZoomLevels[i] - KINDA_SMALL_NUMBER)
		{
			return 7 - i;
		}
	}

	return -12;
}

TSharedPtr<SGraphPanel> FENConnectionDrawingPolicy::GetGraphPanel()
{
	FSlateApplication& SlateApplication = FSlateApplication::Get();
	const TSharedPtr<SWidget> Widget = SlateApplication.GetUserFocusedWidget(0);
	if (Widget.IsValid() && Widget->GetTypeAsString() == "SGraphPanel")
	{
		return StaticCastSharedPtr<SGraphPanel>(Widget);
	}
	return nullptr;
}

void FENConnectionDrawingPolicy::BuildRelatedNodes(UEdGraphNode* Node, TArray<UEdGraphNode*>& RelatedNodes, bool InputCheck = true, bool OutputCheck = true)
{
	if (RelatedNodes.Find(Node) != INDEX_NONE && (!InputCheck || !OutputCheck))
	{
		return;
	}
	RelatedNodes.Push(Node);

	for (auto Pin : Node->Pins)
	{
		if (InputCheck && Pin->Direction == EGPD_Input)
		{
			for (auto LinkedPin : Pin->LinkedTo)
			{
				UEdGraphNode* LinkedNode = LinkedPin->GetOwningNode();
				if (ElectronicNodesSettings.SelectionRule == ESelectionRule::Far || LinkedNode->GetName().StartsWith("K2Node_Knot_"))
				{
					BuildRelatedNodes(LinkedNode, RelatedNodes, true, false);
				}
				else
				{
					RelatedNodes.Push(LinkedNode);
				}
			}
		}

		if (OutputCheck && Pin->Direction == EGPD_Output)
		{
			for (auto LinkedPin : Pin->LinkedTo)
			{
				UEdGraphNode* LinkedNode = LinkedPin->GetOwningNode();
				if (ElectronicNodesSettings.SelectionRule == ESelectionRule::Far || LinkedNode->GetName().StartsWith("K2Node_Knot_"))
				{
					BuildRelatedNodes(LinkedNode, RelatedNodes, false, true);
				}
				else
				{
					RelatedNodes.Push(LinkedNode);
				}
			}
		}
	}
}

void FENConnectionDrawingPolicy::ENDrawBubbles(const FVector2D& Start, const FVector2D& StartTangent, const FVector2D& End, const FVector2D& EndTangent)
{
	const bool ENDrawBubbles = ElectronicNodesSettings.ForceDrawBubbles
	&& (ElectronicNodesSettings.BubbleZoomThreshold <= ENGetZoomLevel())
	&& (!ElectronicNodesSettings.DrawBubblesOnlyOnExec ||
		(_Params->AssociatedPin1 != nullptr && _Params->AssociatedPin1->PinType.PinCategory.ToString() == "exec")
		|| (_Params->AssociatedPin2 != nullptr && _Params->AssociatedPin2->PinType.PinCategory.ToString() == "exec")
		);
	
	if (_Params->bDrawBubbles || ENDrawBubbles)
	{
		bool LinkedBubbles = true;

		if (!_Params->bDrawBubbles)
		{
			LinkedBubbles = false;

			if (ElectronicNodesSettings.BubbleDisplayRule == EBubbleDisplayRule::DisplayOnSelection ||
				ElectronicNodesSettings.BubbleDisplayRule == EBubbleDisplayRule::MoveOnSelection)
			{
				TSharedPtr<SGraphPanel> GraphPanel = this->GetGraphPanel();
				if (GraphPanel.IsValid())
				{
					if (_Params->AssociatedPin1 != nullptr && _Params->AssociatedPin2 != nullptr)
					{
						for (auto SelectedNode : GraphPanel->SelectionManager.SelectedNodes)
						{
							TArray<UEdGraphNode*> RelatedNodes;
							UEdGraphNode* SelectedGraphNode = StaticCast<UEdGraphNode*>(SelectedNode);
							this->BuildRelatedNodes(SelectedGraphNode, RelatedNodes);

							if (RelatedNodes.Find(_Params->AssociatedPin1->GetOwningNode()) != INDEX_NONE && RelatedNodes.Find(_Params->AssociatedPin2->GetOwningNode()) != INDEX_NONE)
							{
								LinkedBubbles = true;
							}
						}
					}
				}
			}
		}

		if (!LinkedBubbles && ElectronicNodesSettings.BubbleDisplayRule == EBubbleDisplayRule::DisplayOnSelection)
		{
			return;
		}

		FInterpCurve<float> SplineReparamTable;
		const float SplineLength = (Start - End).Size();
		int32 NumBubbles = FMath::CeilToInt(SplineLength / (ElectronicNodesSettings.BubbleSpace * ZoomFactor));
		NumBubbles = FMath::Min(NumBubbles, 1000);

		float BubbleSpeed = ElectronicNodesSettings.BubbleSpeed;
		if (!LinkedBubbles && ElectronicNodesSettings.BubbleDisplayRule == EBubbleDisplayRule::MoveOnSelection)
		{
			BubbleSpeed = 0.0f;
		}
		FVector2D BubbleSize = BubbleImage->ImageSize * ZoomFactor * 0.1f * ElectronicNodesSettings.BubbleSize * FMath::Sqrt(_Params->WireThickness);
		if (_Params->bDrawBubbles)
		{
			BubbleSize *= 1.25f;
		}
		const float Time = (FPlatformTime::Seconds() - GStartTime);

		const float AlphaOffset = FMath::Frac(Time * BubbleSpeed);

		for (int32 i = 0; i < NumBubbles; ++i)
		{
			const float Alpha = (AlphaOffset + i) / NumBubbles;
			FVector2D BubblePos;
			if (StartTangent != FVector2D::ZeroVector && EndTangent != FVector2D::ZeroVector)
			{
				if ((StartTangent != EndTangent) && ((StartTangent * EndTangent) == FVector2D::ZeroVector))
				{
					BubblePos = Start + StartTangent * FMath::Sin(Alpha * PI / 2.0f) + EndTangent * (1.0f - FMath::Cos(Alpha * PI / 2.0f));
				}
				else
				{
					BubblePos = FMath::CubicInterp(Start, StartTangent, End, EndTangent, Alpha);
				}
			}
			else
			{
				BubblePos = FMath::Lerp(Start, End, Alpha);
			}
			BubblePos -= (BubbleSize * 0.5f);

			FSlateDrawElement::MakeBox(
				DrawElementsList,
				_LayerId,
				FPaintGeometry(BubblePos, BubbleSize, ZoomFactor),
				BubbleImage,
				ESlateDrawEffect::None,
				_Params->WireColor
			);
		}
	}
}

void FENConnectionDrawingPolicy::ENDrawArrow(const FVector2D& Start, const FVector2D& End)
{
	if (MidpointImage != nullptr && (Start - End).Size() > 4 * MinXOffset)
	{
		const FVector2D MidpointDrawPos = (Start + End) / 2.0f - MidpointRadius * 0.75f;
		const FVector2D SlopeUnnormalized = (End - Start);
		const float AngleInRadians = FMath::Atan2(SlopeUnnormalized.Y, SlopeUnnormalized.X);

		FSlateDrawElement::MakeRotatedBox(DrawElementsList, _LayerId, FPaintGeometry(MidpointDrawPos, MidpointImage->ImageSize * ZoomFactor * 0.75f, ZoomFactor * 0.75f),
		                                  MidpointImage, ESlateDrawEffect::None, AngleInRadians, TOptional<FVector2D>(), FSlateDrawElement::RelativeToElement, _Params->WireColor);
	}
}

void FENConnectionDrawingPolicy::DrawDebugPoint(const FVector2D& Position, FLinearColor Color)
{
	const FVector2D BubbleSize = BubbleImage->ImageSize * ZoomFactor * 0.1f * ElectronicNodesSettings.BubbleSize * FMath::Sqrt(_Params->WireThickness);
	const FVector2D BubblePos = Position - (BubbleSize * 0.5f);

	FSlateDrawElement::MakeBox(
		DrawElementsList,
		_LayerId,
		FPaintGeometry(BubblePos, BubbleSize, ZoomFactor),
		BubbleImage,
		ESlateDrawEffect::None,
		Color
	);
}

void FENConnectionDrawingPolicy::ENComputeClosestPoint(const FVector2D& Start, const FVector2D& End)
{
	const FVector2D TemporaryPoint = FMath::ClosestPointOnSegment2D(LocalMousePosition, Start, End);
	const float TemporaryDistance = (LocalMousePosition - TemporaryPoint).SizeSquared();

	if (TemporaryDistance < ClosestDistanceSquared)
	{
		ClosestDistanceSquared = TemporaryDistance;
		ClosestPoint = TemporaryPoint;
	}
}

void FENConnectionDrawingPolicy::ENComputeClosestPointDefault(const FVector2D& Start, const FVector2D& StartTangent, const FVector2D& End, const FVector2D& EndTangent)
{
	const float Offset = 50.0 * ZoomFactor;
	const FVector2D MinStart = FVector2D(FMath::Min(Start.X, End.X) - Offset, FMath::Min(Start.Y, End.Y));
	const FVector2D MaxEnd = FVector2D(FMath::Max(Start.X, End.X) + Offset, FMath::Max(Start.Y, End.Y));

	const FBox2D Bounds(MinStart, MaxEnd);
	const bool bCloseToSpline = Bounds.ComputeSquaredDistanceToPoint(LocalMousePosition) < 1.0f;

	if (bCloseToSpline)
	{
		const float StepInterval = 1.0f / 16.0f;
		const float Tangent = (End - Start).Size();
		FVector2D PointOnSpline1 = FMath::CubicInterp(Start, StartTangent * Tangent, End, EndTangent * Tangent, 0.0f);
		for (float TestAlpha = 0.0f; TestAlpha < 1.0f; TestAlpha += StepInterval)
		{
			const FVector2D PointOnSpline2 = FMath::CubicInterp(Start, StartTangent * Tangent, End, EndTangent * Tangent, TestAlpha + StepInterval);

			const FVector2D ClosestPointToSegment = FMath::ClosestPointOnSegment2D(LocalMousePosition, PointOnSpline1, PointOnSpline2);
			const float DistanceSquared = (LocalMousePosition - ClosestPointToSegment).SizeSquared();

			if (DistanceSquared < ClosestDistanceSquared)
			{
				ClosestDistanceSquared = DistanceSquared;
				ClosestPoint = ClosestPointToSegment;
			}

			PointOnSpline1 = PointOnSpline2;
		}
	}
}
