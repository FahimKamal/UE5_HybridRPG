/* Copyright (C) 2024 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#include "NodeFactoryPatch.h"
#include "ConnectionDrawingPolicy.h"
#include "ENConnectionDrawingPolicy.h"
#include "AnimationStateMachineSchema.h"
#include "AnimationGraphFactory.h"

FConnectionDrawingPolicy* FNodeFactoryPatch::CreateConnectionPolicy_Hook(
	const UEdGraphSchema* Schema, int32 InBackLayerID, int32 InFrontLayerID, float ZoomFactor,
	const FSlateRect& InClippingRect, FSlateWindowElementList& InDrawElements, UEdGraph* InGraphObj)
{
	const TSharedPtr<FENConnectionDrawingPolicyFactory> ENConnectionFactory = MakeShareable(
		new FENConnectionDrawingPolicyFactory);

	FConnectionDrawingPolicy* ConnectionDrawingPolicy = ENConnectionFactory->CreateConnectionPolicy(
		Schema, InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);

	if (!ConnectionDrawingPolicy)
	{
		ConnectionDrawingPolicy = Schema->CreateConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor,
		                                                                InClippingRect, InDrawElements, InGraphObj);
	}

	if (!ConnectionDrawingPolicy && Schema->IsA(UAnimationStateMachineSchema::StaticClass()))
	{
		const TSharedPtr<FAnimationGraphPinConnectionFactory> AnimationGraphFactory = MakeShareable(
			new FAnimationGraphPinConnectionFactory);
		ConnectionDrawingPolicy = AnimationGraphFactory->CreateConnectionPolicy(
			Schema, InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
	}

	if (!ConnectionDrawingPolicy)
	{
		ConnectionDrawingPolicy = new FConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor,
		                                                       InClippingRect, InDrawElements);
	}

	return ConnectionDrawingPolicy;
}
