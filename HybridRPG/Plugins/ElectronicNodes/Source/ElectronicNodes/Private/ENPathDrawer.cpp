/* Copyright (C) 2024 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#include "ENPathDrawer.h"

FENPathDrawer::FENPathDrawer(int32& LayerId, float& ZoomFactor, bool RightPriority, const FConnectionParams* Params, FSlateWindowElementList* DrawElementsList, FENConnectionDrawingPolicy* ConnectionDrawingPolicy)
{
	this->LayerId = LayerId;
	this->ZoomFactor = ZoomFactor;
	this->RightPriority = RightPriority;
	this->Params = Params;
	WireColor = Params->WireColor;
	this->DrawElementsList = DrawElementsList;
	this->ConnectionDrawingPolicy = ConnectionDrawingPolicy;
}

void FENPathDrawer::DrawManhattanWire(const FVector2D& Start, const FVector2D& StartDirection, const FVector2D& End, const FVector2D& EndDirection)
{
	if (!MaxDepthWire--)
	{
		return;
	}

	if (FMath::IsNearlyZero((End - Start).SizeSquared(), KINDA_SMALL_NUMBER))
	{
		return;
	}

	const bool SameDirection = FVector2D::DistSquared(StartDirection, EndDirection) < KINDA_SMALL_NUMBER;
	const bool StraightDirection = FMath::IsNearlyZero(FVector2D::CrossProduct(StartDirection, EndDirection), KINDA_SMALL_NUMBER);
	const bool ForwardDirection = FVector2D::DotProduct(End - Start, StartDirection) > KINDA_SMALL_NUMBER;

	const float DistanceOrtho = FVector2D::CrossProduct(End - Start, StartDirection);
	const float DistanceStraight = FVector2D::DotProduct(End - Start, StartDirection);

	FVector2D NewStart = Start, NewStartDirection = StartDirection;
	FVector2D NewEnd = End, NewEndDirection = EndDirection;

	const int32 DirectionAngle = FMath::Sign(DistanceOrtho);

	DebugColor(FLinearColor(1.0f, 1.0f, 1.0f));

	if (SameDirection)
	{
		if ((Start + StartDirection * FVector2D::Distance(Start, End) - End).IsNearlyZero(KINDA_SMALL_NUMBER))
		{
			DrawLine(Start, End);
			return;
		}
		else if (FMath::IsNearlyEqual(FVector2D::DotProduct((End - Start).GetSafeNormal(), StartDirection), -1.0f, KINDA_SMALL_NUMBER))
		{
			DebugColor(FLinearColor(0.5f, 0.5f, 0.5f));
			DrawSimpleRadius(Start, StartDirection, -90, NewStart, NewStartDirection, false);
			DrawSimpleRadius(End, EndDirection, 90, NewEnd, NewEndDirection, true);
		}
		else if ((FMath::Abs(End.X - Start.X) < 2 * GetRadiusOffset()) && (FMath::Abs(End.Y - Start.Y)) < 4 * GetRadiusOffset())
		{
			const float Multiplier = FVector2D::Distance(Start, End) / 32.0f;
			DebugColor(FLinearColor(0.5f, 1.0f, 0.0f));
			DrawSpline(Start, StartDirection * Multiplier, End, EndDirection * Multiplier);
			return;
		}
		else if (!ForwardDirection && (FMath::Abs(DistanceOrtho) < 4.0f * GetRadiusOffset()))
		{
			DebugColor(FLinearColor(1.0f, 0.0f, 0.0f));
			DrawUTurn(Start, StartDirection, DirectionAngle, NewStart, NewStartDirection, false);
		}
		else if (FMath::Abs(End.Y - Start.Y) < 2.0f * GetRadiusOffset())
		{
			DebugColor(FLinearColor(1.0f, 0.5f, 0.0f));
			DrawCorrectionOrtho(End, EndDirection, DistanceOrtho, NewEnd, NewEndDirection, true);
		}
		else if (FMath::Abs(End.X - Start.X) < 2.0f * GetRadiusOffset() && FMath::IsNearlyEqual(StartDirection.Y, 1.0f, KINDA_SMALL_NUMBER) && FMath::IsNearlyEqual(EndDirection.Y, 1.0f, KINDA_SMALL_NUMBER))
		{
			DebugColor(FLinearColor(1.0f, 0.5f, 0.0f));
			DrawCorrectionOrtho(End, EndDirection, DistanceOrtho, NewEnd, NewEndDirection, true);
		}
		else
		{
			DebugColor(FLinearColor(1.0f, 0.0f, 1.0f));
			if (DistanceStraight < 2.0f * GetRadiusOffset())
			{
				if (FMath::Abs(DistanceOrtho) < 4.0f * GetRadiusOffset())
				{
					DrawUTurn(Start, StartDirection, DirectionAngle, NewStart, NewStartDirection, false);
				}
				else
				{
					DrawUTurn(End, EndDirection, DirectionAngle, NewEnd, NewEndDirection, true);
				}
			}
			else
			{
				const float Direction = -FMath::Sign(DistanceOrtho);

				if (RightPriority)
				{
					DrawSimpleRadius(End, EndDirection, 90 * Direction, NewEnd, NewEndDirection, true);
				}
				else
				{
					DrawSimpleRadius(Start, StartDirection, 90 * Direction, NewStart, NewStartDirection, false);
				}
			}
		}
	}
	else if (!StraightDirection)
	{
		DrawIntersectionRadius(Start, StartDirection, End, EndDirection);
		return;
	}
	else
	{
		if (FMath::Sign(DistanceStraight) > 0)
		{
			DebugColor(FLinearColor(0.5f, 0, 0.5f));
			DrawSimpleRadius(End, EndDirection, 90 * DirectionAngle, NewEnd, NewEndDirection, true);
		}
		else
		{
			DebugColor(FLinearColor(1.0f, 0, 1.0f));
			DrawSimpleRadius(Start, StartDirection, -90 * DirectionAngle, NewStart, NewStartDirection, false);
		}
	}

	DrawManhattanWire(NewStart, NewStartDirection, NewEnd, NewEndDirection);
}

void FENPathDrawer::DrawSubwayWire(const FVector2D& Start, const FVector2D& StartDirection, const FVector2D& End, const FVector2D& EndDirection)
{
	if (!MaxDepthWire--)
	{
		return;
	}

	if (FMath::IsNearlyZero((End - Start).SizeSquared(), KINDA_SMALL_NUMBER))
	{
		return;
	}

	const bool StartDirection90 = FMath::IsNearlyEqual(FMath::Abs(StartDirection.X), 1.0f, KINDA_SMALL_NUMBER) || FMath::IsNearlyEqual(FMath::Abs(StartDirection.Y), 1.0f, KINDA_SMALL_NUMBER);
	const bool EndDirection90 = FMath::IsNearlyEqual(FMath::Abs(EndDirection.X), 1.0f, KINDA_SMALL_NUMBER) || FMath::IsNearlyEqual(FMath::Abs(EndDirection.Y), 1.0f, KINDA_SMALL_NUMBER);

	const bool SameDirection = FVector2D::DistSquared(StartDirection, EndDirection) < KINDA_SMALL_NUMBER;
	const bool StraightDirection = FMath::IsNearlyZero(FVector2D::CrossProduct(StartDirection, EndDirection), KINDA_SMALL_NUMBER);
	const bool ForwardDirection = FVector2D::DotProduct(End - Start, StartDirection) > KINDA_SMALL_NUMBER;

	const float DistanceOrtho = FVector2D::CrossProduct(End - Start, StartDirection);
	const float DistanceStraight = FVector2D::DotProduct(End - Start, StartDirection);
	const float DirectionOffset = (FMath::Abs(End.X - Start.X) - FMath::Abs(End.Y - Start.Y)) * (FMath::IsNearlyEqual(FMath::Abs(StartDirection.X), 1.0f, KINDA_SMALL_NUMBER) ? 1 : -1);

	const int32 DirectionAngle = FMath::Sign(DistanceOrtho);

	FVector2D NewStart = Start, NewStartDirection = StartDirection;
	FVector2D NewEnd = End, NewEndDirection = EndDirection;

	DebugColor(FLinearColor(1.0f, 1.0f, 1.0f));

	if (!StraightDirection)
	{
		if (StartDirection90 && EndDirection90)
		{
			DrawIntersectionDiagRadius(Start, StartDirection, End, EndDirection);
		}
		else
		{
			DrawIntersectionRadius(Start, StartDirection, End, EndDirection);
		}
		return;
	}
	else if (SameDirection)
	{
		if ((Start + StartDirection * FVector2D::Distance(Start, End) - End).IsNearlyZero(KINDA_SMALL_NUMBER))
		{
			DrawLine(Start, End);
			return;
		}
		else if (FVector2D::Distance(Start, End) < 4 * GetRadiusOffset())
		{
			DrawManhattanWire(Start, StartDirection, End, EndDirection);
			return;
		}
		else if (FMath::IsNearlyEqual(FVector2D::DotProduct((End - Start).GetSafeNormal(), StartDirection), -1.0f, KINDA_SMALL_NUMBER))
		{
			DebugColor(FLinearColor(0.5f, 0.5f, 0.5f));
			DrawSimpleRadius(Start, StartDirection, -90, NewStart, NewStartDirection, false);
			DrawSimpleRadius(End, EndDirection, 90, NewEnd, NewEndDirection, true);
		}
		else if (ForwardDirection && DirectionOffset > 2 * GetIntersectionOffset(45, false))
		{
			DebugColor(FLinearColor(0.0f, 1.0f, 0.0f));

			if (FMath::Abs(DistanceOrtho) < 2 * GetIntersectionOffset(45, true))
			{
				if ((FMath::Abs(DistanceOrtho) < 2 * GetIntersectionOffset(45, false)) && (FMath::Abs(DistanceStraight) > 2 * GetRadiusOffset()))
				{
					DebugColor(FLinearColor(0.0f, 0.5f, 0.0f));
					DrawCorrectionOrtho(End, EndDirection, DistanceOrtho, NewEnd, NewEndDirection, true);
				}
			}
			else
			{
				if (RightPriority)
				{
					DrawSimpleRadius(End, EndDirection, -45 * DirectionAngle, NewEnd, NewEndDirection, true);
				}
				else
				{
					DrawSimpleRadius(Start, StartDirection, -45 * DirectionAngle, NewStart, NewStartDirection, false);
				}
			}
		}
		else
		{
			if (DistanceStraight < 2 * GetRadiusOffset())
			{
				DebugColor(FLinearColor(1.0f, 1.0f, 0.0f));
				int32 Direction = -FMath::Sign(DistanceOrtho);
				DrawSimpleRadius(Start, StartDirection, 90 * Direction, NewStart, NewStartDirection, false);
				DrawSimpleRadius(End, EndDirection, 90 * Direction, NewEnd, NewEndDirection, true);
			}
			else if (DirectionOffset > 2 * GetIntersectionOffset(45, false))
			{
				DebugColor(FLinearColor(0, 0, 1.0f));
				DrawSimpleRadius(End, EndDirection, -45 * DirectionAngle, NewEnd, NewEndDirection, true);
			}
			else
			{
				DebugColor(FLinearColor(0, 0.5f, 0));
				DrawSimpleRadius(End, EndDirection, -90 * DirectionAngle, NewEnd, NewEndDirection, true);
			}
		}
	}
	else
	{
		if (FMath::Sign(DistanceStraight) > 0)
		{
			DebugColor(FLinearColor(0.5f, 0, 0.5f));
			DrawSimpleRadius(End, EndDirection, 90 * DirectionAngle, NewEnd, NewEndDirection, true);
		}
		else
		{
			DebugColor(FLinearColor(1.0f, 0, 1.0f));
			DrawSimpleRadius(Start, StartDirection, -90 * DirectionAngle, NewStart, NewStartDirection, false);
		}
	}

	DrawSubwayWire(NewStart, NewStartDirection, NewEnd, NewEndDirection);
}

void FENPathDrawer::DrawDefaultWire(const FVector2D& Start, const FVector2D& StartDirection, const FVector2D& End, const FVector2D& EndDirection)
{
	const float Tangent = (End - Start).Size();

	FSlateDrawElement::MakeDrawSpaceSpline(*DrawElementsList, LayerId,
	                                       Start, StartDirection * Tangent, End, EndDirection * Tangent,
	                                       Params->WireThickness * ElectronicNodesSettings.WireThickness, ESlateDrawEffect::None, WireColor);

	ConnectionDrawingPolicy->ENComputeClosestPointDefault(Start, StartDirection, End, EndDirection);

	ConnectionDrawingPolicy->ENDrawBubbles(Start, StartDirection * Tangent, End, EndDirection * Tangent);
}

void FENPathDrawer::DrawIntersectionRadius(const FVector2D& Start, const FVector2D& StartDirection, const FVector2D& End, const FVector2D& EndDirection)
{
	const int32 AngleDeg = FMath::RoundToInt(FMath::UnwindDegrees(FMath::RadiansToDegrees(FMath::Atan2(StartDirection.Y, StartDirection.X) - FMath::Atan2(EndDirection.Y, EndDirection.X))));

	const float StartOffset = GetIntersectionOffset(AngleDeg, false);
	const float EndOffset = GetIntersectionOffset(AngleDeg, true);

	const float T = (EndDirection.X * (Start.Y - End.Y) - EndDirection.Y * (Start.X - End.X)) / (-EndDirection.X * StartDirection.Y + StartDirection.X * EndDirection.Y);
	const FVector2D Intersection = Start + T * StartDirection;

	const FVector2D StartStop = Intersection - StartDirection * StartOffset;
	const FVector2D EndStop = Intersection + EndDirection * EndOffset;

	DebugColor(FLinearColor(1.0f, 1.0f, 1.0f));
	DrawLine(Start, StartStop);

	DebugColor(FLinearColor(0.0f, 0.0f, 1.0f));
	DrawRadius(StartStop, StartDirection, EndStop, EndDirection, AngleDeg);

	DebugColor(FLinearColor(1.0f, 1.0f, 1.0f));
	DrawLine(EndStop, End);
}

void FENPathDrawer::DrawIntersectionDiagRadius(const FVector2D& Start, const FVector2D& StartDirection, const FVector2D& End, const FVector2D& EndDirection)
{
	const float DirectionOffset = FMath::Abs(End.X - Start.X) - FMath::Abs(End.Y - Start.Y);

	FVector2D NewStart = Start;
	FVector2D NewEnd = End;

	FVector2D NewStartClose, NewStartCloseDirection;
	FVector2D NewEndClose, NewEndCloseDirection;

	int32 Direction;

	if (FMath::IsNearlyEqual(FMath::Abs(StartDirection.X), 1.0f, KINDA_SMALL_NUMBER))
	{
		Direction = FMath::RoundToInt(FMath::Sign(End.Y - Start.Y) * StartDirection.X);
		if (DirectionOffset > 0)
		{
			NewStart += FVector2D(1.0f, 0.0f) * DirectionOffset * StartDirection.X;
		}
		else
		{
			NewEnd += FVector2D(0.0f, 1.0f) * DirectionOffset * FMath::Sign(End.Y - Start.Y);
		}
	}
	else
	{
		Direction = FMath::RoundToInt(FMath::Sign(Start.Y - End.Y) * EndDirection.X);

		if (DirectionOffset > 0)
		{
			NewEnd -= FVector2D(1.0f, 0.0f) * DirectionOffset * EndDirection.X;
		}
		else
		{
			NewStart -= FVector2D(0.0f, 1.0f) * DirectionOffset * FMath::Sign(End.Y - Start.Y);
		}
	}

	DebugColor(FLinearColor(1.0f, 1.0f, 1.0f));
	DrawLine(Start, NewStart);
	DrawLine(NewEnd, End);

	DebugColor(FLinearColor(0.0f, 0.0f, 1.0f));
	DrawSimpleRadius(NewStart, StartDirection, 45 * Direction, NewStartClose, NewStartCloseDirection, false);
	DrawSimpleRadius(NewEnd, EndDirection, -45 * Direction, NewEndClose, NewEndCloseDirection, true);

	DebugColor(FLinearColor(1.0f, 1.0f, 1.0f));
	DrawLine(NewStartClose, NewEndClose);
}

void FENPathDrawer::DrawSimpleRadius(const FVector2D& Start, const FVector2D& StartDirection, const int32& AngleDeg, FVector2D& out_End, FVector2D& out_EndDirection, bool Backward)
{
	const float StartOffset = GetRadiusOffset(AngleDeg, false);
	const float PerpendicularOffset = GetRadiusOffset(AngleDeg, true);
	const FVector2D PerpendicularDirection = StartDirection.GetRotated(FMath::Sign(AngleDeg) * 90);
	out_EndDirection = StartDirection.GetRotated(AngleDeg);

	if (Backward)
	{
		out_End = Start - (StartDirection * StartOffset + PerpendicularDirection * PerpendicularOffset);
		DrawRadius(out_End, out_EndDirection, Start, StartDirection, AngleDeg);
	}
	else
	{
		out_End = Start + (StartDirection * StartOffset + PerpendicularDirection * PerpendicularOffset);
		DrawRadius(Start, StartDirection, out_End, out_EndDirection, AngleDeg);
	}
}

void FENPathDrawer::DrawUTurn(const FVector2D& Start, const FVector2D& StartDirection, float Direction, FVector2D& out_End, FVector2D& out_EndDirection, bool Backward)
{
	const float BackwardDirection = Backward ? -1.0f : 1.0f;

	const FVector2D MidDirection = StartDirection.GetRotated(FMath::Sign(Direction) * 90 * BackwardDirection);
	const FVector2D Mid = Start + (StartDirection + MidDirection) * GetRadiusOffset() * BackwardDirection;

	out_EndDirection = -StartDirection;
	out_End = Start + MidDirection * 2.0f * GetRadiusOffset() * BackwardDirection;

	if (Backward)
	{
		DrawRadius(out_End, out_EndDirection, Mid, MidDirection, 90);
		DrawRadius(Mid, MidDirection, Start, StartDirection, 90);
	}
	else
	{
		DrawRadius(Start, StartDirection, Mid, MidDirection, 90);
		DrawRadius(Mid, MidDirection, out_End, out_EndDirection, 90);
	}
}

void FENPathDrawer::DrawCorrectionOrtho(const FVector2D& Start, const FVector2D& StartDirection, const float& Displacement, FVector2D& out_End, FVector2D& out_EndDirection, bool Backward)
{
	out_EndDirection = StartDirection;
	const FVector2D StartDirectionOrtho = StartDirection.GetRotated(90);

	if (Backward)
	{
		out_End = Start - 2.0f * StartDirection * GetRadiusOffset() + StartDirectionOrtho * Displacement;
		DrawSpline(out_End, out_EndDirection, Start, StartDirection);
	}
	else
	{
		out_End = Start + 2.0f * StartDirection * GetRadiusOffset() + StartDirectionOrtho * Displacement;
		DrawSpline(out_End, out_EndDirection, Start, StartDirection);
	}
}

float FENPathDrawer::GetRadiusOffset(const int32& AngleDeg, bool Perpendicular)
{
	float RadiusOffset = 1.0f;
	int32 AbsAngle = FMath::Abs(AngleDeg);

	if (Perpendicular)
	{
		AbsAngle = 180 - AbsAngle;
	}

	switch (AbsAngle)
	{
	case 45:
		RadiusOffset *= FMath::Sqrt(2.0f) / 2.0f;
		break;
	case 90:
		RadiusOffset *= 1.0f;
		break;
	case 135:
		RadiusOffset *= (1.0f - (FMath::Sqrt(2.0f) / 2.0f));
		break;
	case 180:
		RadiusOffset *= 2.0f;
		break;
	default: break;
	}

	return RadiusOffset * ZoomFactor * ElectronicNodesSettings.RoundRadius;
}

float FENPathDrawer::GetRadiusTangent(const int32& AngleDeg)
{
	float Tangent = 2 * FMath::Sqrt(2.0f) - 1;

	switch (FMath::Abs(AngleDeg))
	{
	case 0:
		Tangent *= 4.0f / Tangent;
		break;
	case 45:
		Tangent *= 0.55166f;
		break;
	case 90:
		Tangent = 4 * (FMath::Sqrt(2.0f) - 1);
		break;
	case 135:
		Tangent *= 2.0f / Tangent;
		break;
	case 180:
		Tangent *= 4.0f / Tangent;
		break;
	default: break;
	}

	return Tangent * ZoomFactor * ElectronicNodesSettings.RoundRadius;
}

float FENPathDrawer::GetIntersectionOffset(const int32& AngleDeg, bool Diagonal)
{
	float IntersectionOffset = 1.0f;

	switch (FMath::Abs(AngleDeg))
	{
	case 45:
		if (Diagonal)
		{
			IntersectionOffset *= (1.0f - FMath::Sqrt(2.0f) / 2.0f) * FMath::Sqrt(2.0f);
		}
		else
		{
			IntersectionOffset *= FMath::Sqrt(2.0f) - 1.0f;
		}
		break;
	case 90:
		IntersectionOffset *= 1.0f;
		break;
	case 135:
		//RadiusOffset *= (1.0f - (FMath::Sqrt(2.0f) / 2.0f));
		break;
	default:
		break;
	}

	return IntersectionOffset * ZoomFactor * ElectronicNodesSettings.RoundRadius;
}

void FENPathDrawer::DrawOffset(FVector2D& Start, FVector2D& StartDirection, const float& Offset, bool Backward)
{
	FVector2D NewStart = Start;

	if (Backward)
	{
		NewStart -= StartDirection * Offset;
		DrawLine(NewStart, Start);
	}
	else
	{
		NewStart += StartDirection * Offset;
		DrawLine(Start, NewStart);
	}

	Start = NewStart;
}

void FENPathDrawer::DrawLine(const FVector2D& Start, const FVector2D& End)
{
	if (FMath::IsNearlyZero((End - Start).SizeSquared(), KINDA_SMALL_NUMBER))
	{
		return;
	}

	FSlateDrawElement::MakeDrawSpaceSpline(*DrawElementsList, LayerId,
	                                       Start, FVector2D::ZeroVector, End, FVector2D::ZeroVector,
	                                       Params->WireThickness * ElectronicNodesSettings.WireThickness, ESlateDrawEffect::None, WireColor);

	ConnectionDrawingPolicy->ENComputeClosestPoint(Start, End);
	ConnectionDrawingPolicy->ENDrawBubbles(Start, FVector2D::ZeroVector, End, FVector2D::ZeroVector);
	if (FVector2D::DistSquared(Start, End) > 50.0f)
	{
		ConnectionDrawingPolicy->ENDrawArrow(Start, End);
	}
}

void FENPathDrawer::DrawRadius(const FVector2D& Start, const FVector2D& StartDirection, const FVector2D& End, const FVector2D& EndDirection, const int32& AngleDeg)
{
	const float Tangent = GetRadiusTangent(AngleDeg);
	const float Offset = GetRadiusOffset(AngleDeg);

	FSlateDrawElement::MakeDrawSpaceSpline(*DrawElementsList, LayerId,
	                                       Start, StartDirection * Tangent, End, EndDirection * Tangent,
	                                       Params->WireThickness * ElectronicNodesSettings.WireThickness, ESlateDrawEffect::None, WireColor);

	ConnectionDrawingPolicy->ENDrawBubbles(Start, StartDirection * Offset, End, EndDirection * Offset);
}

void FENPathDrawer::DrawSpline(const FVector2D& Start, const FVector2D& StartDirection, const FVector2D& End, const FVector2D& EndDirection)
{
	const float Tangent = GetRadiusTangent();

	FSlateDrawElement::MakeDrawSpaceSpline(*DrawElementsList, LayerId,
	                                       Start, StartDirection * Tangent, End, EndDirection * Tangent,
	                                       Params->WireThickness * ElectronicNodesSettings.WireThickness, ESlateDrawEffect::None, WireColor);

	ConnectionDrawingPolicy->ENComputeClosestPointDefault(Start, StartDirection * Tangent, End, EndDirection * Tangent);
	ConnectionDrawingPolicy->ENDrawBubbles(Start, StartDirection * Tangent, End, EndDirection * Tangent);
}

void FENPathDrawer::DebugColor(const FLinearColor& Color)
{
	if (ElectronicNodesSettings.Debug)
	{
		WireColor = Color;
	}
}
