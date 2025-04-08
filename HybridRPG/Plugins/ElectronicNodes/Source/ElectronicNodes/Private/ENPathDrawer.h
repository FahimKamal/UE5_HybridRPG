/* Copyright (C) 2024 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#pragma once

#include "CoreMinimal.h"
#include "ConnectionDrawingPolicy.h"
#include "ENConnectionDrawingPolicy.h"
#include "../Public/ElectronicNodesSettings.h"

class FENPathDrawer
{
public:
	FENPathDrawer(int32& LayerId, float& ZoomFactor, bool RightPriority, const FConnectionParams* Params, FSlateWindowElementList* DrawElementsList, FENConnectionDrawingPolicy* ConnectionDrawingPolicy);

	void DrawManhattanWire(const FVector2D& Start, const FVector2D& StartDirection, const FVector2D& End, const FVector2D& EndDirection);
	void DrawSubwayWire(const FVector2D& Start, const FVector2D& StartDirection, const FVector2D& End, const FVector2D& EndDirection);
	void DrawDefaultWire(const FVector2D& Start, const FVector2D& StartDirection, const FVector2D& End, const FVector2D& EndDirection);

	void DrawIntersectionRadius(const FVector2D& Start, const FVector2D& StartDirection, const FVector2D& End, const FVector2D& EndDirection);
	void DrawIntersectionDiagRadius(const FVector2D& Start, const FVector2D& StartDirection, const FVector2D& End, const FVector2D& EndDirection);

	void DrawSimpleRadius(const FVector2D& Start, const FVector2D& StartDirection, const int32& AngleDeg, FVector2D& out_End, FVector2D& out_EndDirection, bool Backward = false);
	void DrawUTurn(const FVector2D& Start, const FVector2D& StartDirection, float Direction, FVector2D& out_End, FVector2D& out_EndDirection, bool Backward = false);
	void DrawCorrectionOrtho(const FVector2D& Start, const FVector2D& StartDirection, const float& Displacement, FVector2D& out_End, FVector2D& out_EndDirection, bool Backward = false);

	float GetRadiusOffset(const int32& AngleDeg = 0, bool Perpendicular = false);
	float GetRadiusTangent(const int32& AngleDeg = 0);
	float GetIntersectionOffset(const int32& AngleDeg = 0, bool Diagonal = false);

	void DrawOffset(FVector2D& Start, FVector2D& StartDirection, const float& Offset, bool Backward = false);
	void DrawLine(const FVector2D& Start, const FVector2D& End);
	void DrawRadius(const FVector2D& Start, const FVector2D& StartDirection, const FVector2D& End, const FVector2D& EndDirection, const int32& AngleDeg);
	void DrawSpline(const FVector2D& Start, const FVector2D& StartDirection, const FVector2D& End, const FVector2D& EndDirection);

	void DebugColor(const FLinearColor& Color);

private:
	const UElectronicNodesSettings& ElectronicNodesSettings = *GetDefault<UElectronicNodesSettings>();

	int32 LayerId;
	float ZoomFactor;
	bool RightPriority;

	FLinearColor WireColor;
	const FConnectionParams* Params;
	FSlateWindowElementList* DrawElementsList;
	FENConnectionDrawingPolicy* ConnectionDrawingPolicy;

	int32 MaxDepthWire = 5;
};
