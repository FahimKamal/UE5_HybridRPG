/* Copyright (C) 2024 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#pragma once

#include "CoreMinimal.h"

#include "ElectronicNodesSettings.h"
#include "Modules/ModuleInterface.h"

class FElectronicNodesModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void ToggleMasterActivation() const;

private:
	UElectronicNodesSettings* ElectronicNodesSettings = nullptr;
	FString GlobalSettingsFile;

	void ReloadConfiguration(UObject* Object, struct FPropertyChangedEvent& Property);
};
