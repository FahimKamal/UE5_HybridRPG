/* Copyright (C) 2024 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"

#define LOCTEXT_NAMESPACE "ENCommands"

class ENCommands : public TCommands<ENCommands>
{
public:
    ENCommands()
        : TCommands<ENCommands>(
            TEXT("ElectronicNodes"),
            FText::FromString("Electronic Nodes"),
            NAME_None,
            "ElectronicNodesStyle")
    {
    }

    TSharedPtr<FUICommandInfo> ToggleMasterActivation;

    virtual void RegisterCommands() override
    {
        UI_COMMAND(ToggleMasterActivation, "Toggle Master Activation", "Toggle activation of Electronic Nodes", EUserInterfaceActionType::Button, FInputChord());
    }
};

#undef LOCTEXT_NAMESPACE
