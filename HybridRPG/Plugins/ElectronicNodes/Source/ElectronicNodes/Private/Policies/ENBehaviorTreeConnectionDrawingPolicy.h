/* Copyright (C) 2024 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#pragma once

#include "CoreMinimal.h"
#include "ENConnectionDrawingPolicy.h"
#include "BehaviorTreeConnectionDrawingPolicy.h"

class FENBehaviorTreeConnectionDrawingPolicy : public FBehaviorTreeConnectionDrawingPolicy
{
public:
	FENBehaviorTreeConnectionDrawingPolicy(int32 InBackLayerID, int32 InFrontLayerID, float ZoomFactor, const FSlateRect& InClippingRect, FSlateWindowElementList& InDrawElements, UEdGraph* InGraphObj)
		: FBehaviorTreeConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj)
	{
		this->ConnectionDrawingPolicy = new FENConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj, true);
	}

	virtual void DrawConnection(int32 LayerId, const FVector2D& Start, const FVector2D& End, const FConnectionParams& Params) override
	{
		this->ConnectionDrawingPolicy->SetMousePosition(LocalMousePosition);
		this->ConnectionDrawingPolicy->DrawConnection(LayerId, Start, End, Params);
		SplineOverlapResult = FGraphSplineOverlapResult(this->ConnectionDrawingPolicy->SplineOverlapResult);
	}

	virtual void DrawSplineWithArrow(const FGeometry& StartGeom, const FGeometry& EndGeom, const FConnectionParams& Params) override
	{
		const FVector2D StartGeomDrawSize = StartGeom.GetDrawSize();
		const FVector2D StartCenter = FVector2D(
			StartGeom.AbsolutePosition.X + StartGeomDrawSize.X / 2,
			StartGeom.AbsolutePosition.Y + StartGeomDrawSize.Y);

		const FVector2D EndGeomDrawSize = EndGeom.GetDrawSize();
		const FVector2D EndCenter = FVector2D(
			EndGeom.AbsolutePosition.X + EndGeomDrawSize.X / 2,
			EndGeom.AbsolutePosition.Y);

		DrawSplineWithArrow(StartCenter, EndCenter, Params);
	}

	virtual void DrawPreviewConnector(const FGeometry& PinGeometry, const FVector2D& StartPoint, const FVector2D& EndPoint, UEdGraphPin* Pin) override
	{
		FConnectionParams Params;
		DetermineWiringStyle(Pin, nullptr, /*inout*/ Params);

		if (Pin->Direction == EEdGraphPinDirection::EGPD_Output)
		{
			const FVector2D GeomDrawSize = PinGeometry.GetDrawSize();
			const FVector2D Center = FVector2D(
				PinGeometry.AbsolutePosition.X + GeomDrawSize.X / 2,
				PinGeometry.AbsolutePosition.Y + GeomDrawSize.Y);

			DrawSplineWithArrow(Center, EndPoint, Params);
		}
		else
		{
			const FVector2D GeomDrawSize = PinGeometry.GetDrawSize();
			const FVector2D Center = FVector2D(
				PinGeometry.AbsolutePosition.X + GeomDrawSize.X / 2,
				PinGeometry.AbsolutePosition.Y);

			DrawSplineWithArrow(StartPoint, Center, Params);
		}
	}

	virtual void DrawSplineWithArrow(const FVector2D& StartAnchorPoint, const FVector2D& EndAnchorPoint, const FConnectionParams& Params) override
	{
		// bUserFlag1 indicates that we need to reverse the direction of connection (used by debugger)
		const FVector2D& P0 = Params.bUserFlag1 ? EndAnchorPoint : StartAnchorPoint;
		const FVector2D& P1 = Params.bUserFlag1 ? StartAnchorPoint : EndAnchorPoint;

		Internal_DrawLineWithStraightArrow(P0, P1, Params);
	}

	void Internal_DrawLineWithStraightArrow(const FVector2D& StartAnchorPoint, const FVector2D& EndAnchorPoint, const FConnectionParams& Params)
	{
		DrawConnection(WireLayerID, StartAnchorPoint, EndAnchorPoint, Params);

		const FVector2D ArrowDrawPos = EndAnchorPoint - ArrowRadius;

		FSlateDrawElement::MakeRotatedBox(
			DrawElementsList,
			ArrowLayerID,
			FPaintGeometry(ArrowDrawPos, ArrowImage->ImageSize * ZoomFactor, ZoomFactor),
			ArrowImage,
			ESlateDrawEffect::None,
			HALF_PI,
			TOptional<FVector2D>(),
			FSlateDrawElement::RelativeToElement,
			Params.WireColor
		);
	}

	~FENBehaviorTreeConnectionDrawingPolicy()
	{
		delete ConnectionDrawingPolicy;
	}

private:
	FENConnectionDrawingPolicy* ConnectionDrawingPolicy;
};
