/* Copyright (C) 2024 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#pragma once

#include "Engine/DeveloperSettings.h"
#include "ENUpdateConfig.generated.h"

UCLASS(config = EditorPerProjectUserSettings)
class ELECTRONICNODES_API UENUpdateConfig : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UENUpdateConfig()
	{
	}

	UPROPERTY(config)
	FString PluginVersionUpdate = "";
};
