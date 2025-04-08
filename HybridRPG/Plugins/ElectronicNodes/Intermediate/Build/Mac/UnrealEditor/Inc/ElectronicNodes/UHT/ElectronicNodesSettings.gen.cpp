// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElectronicNodes/Public/ElectronicNodesSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectronicNodesSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ELECTRONICNODES_API UClass* Z_Construct_UClass_UElectronicNodesSettings();
ELECTRONICNODES_API UClass* Z_Construct_UClass_UElectronicNodesSettings_NoRegister();
ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule();
ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EMinDistanceStyle();
ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_ESelectionRule();
ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EWireAlignment();
ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EWirePriority();
ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EWireStyle();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema_NoRegister();
UPackage* Z_Construct_UPackage__Script_ElectronicNodes();
// End Cross Module References

// Begin Enum EWireStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWireStyle;
static UEnum* EWireStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWireStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWireStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EWireStyle, (UObject*)Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EWireStyle"));
	}
	return Z_Registration_Info_UEnum_EWireStyle.OuterSingleton;
}
template<> ELECTRONICNODES_API UEnum* StaticEnum<EWireStyle>()
{
	return EWireStyle_StaticEnum();
}
struct Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "EWireStyle::Default" },
		{ "Manhattan.Name", "EWireStyle::Manhattan" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "Subway.Name", "EWireStyle::Subway" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWireStyle::Default", (int64)EWireStyle::Default },
		{ "EWireStyle::Manhattan", (int64)EWireStyle::Manhattan },
		{ "EWireStyle::Subway", (int64)EWireStyle::Subway },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
	nullptr,
	"EWireStyle",
	"EWireStyle",
	Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ElectronicNodes_EWireStyle()
{
	if (!Z_Registration_Info_UEnum_EWireStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWireStyle.InnerSingleton, Z_Construct_UEnum_ElectronicNodes_EWireStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWireStyle.InnerSingleton;
}
// End Enum EWireStyle

// Begin Enum EWireAlignment
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWireAlignment;
static UEnum* EWireAlignment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWireAlignment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWireAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EWireAlignment, (UObject*)Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EWireAlignment"));
	}
	return Z_Registration_Info_UEnum_EWireAlignment.OuterSingleton;
}
template<> ELECTRONICNODES_API UEnum* StaticEnum<EWireAlignment>()
{
	return EWireAlignment_StaticEnum();
}
struct Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "EWireAlignment::Left" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "Right.Name", "EWireAlignment::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWireAlignment::Right", (int64)EWireAlignment::Right },
		{ "EWireAlignment::Left", (int64)EWireAlignment::Left },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
	nullptr,
	"EWireAlignment",
	"EWireAlignment",
	Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ElectronicNodes_EWireAlignment()
{
	if (!Z_Registration_Info_UEnum_EWireAlignment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWireAlignment.InnerSingleton, Z_Construct_UEnum_ElectronicNodes_EWireAlignment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWireAlignment.InnerSingleton;
}
// End Enum EWireAlignment

// Begin Enum EWirePriority
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWirePriority;
static UEnum* EWirePriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWirePriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWirePriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EWirePriority, (UObject*)Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EWirePriority"));
	}
	return Z_Registration_Info_UEnum_EWirePriority.OuterSingleton;
}
template<> ELECTRONICNODES_API UEnum* StaticEnum<EWirePriority>()
{
	return EWirePriority_StaticEnum();
}
struct Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "Node.Name", "EWirePriority::Node" },
		{ "None.Name", "EWirePriority::None" },
		{ "Pin.Name", "EWirePriority::Pin" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWirePriority::None", (int64)EWirePriority::None },
		{ "EWirePriority::Node", (int64)EWirePriority::Node },
		{ "EWirePriority::Pin", (int64)EWirePriority::Pin },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
	nullptr,
	"EWirePriority",
	"EWirePriority",
	Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ElectronicNodes_EWirePriority()
{
	if (!Z_Registration_Info_UEnum_EWirePriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWirePriority.InnerSingleton, Z_Construct_UEnum_ElectronicNodes_EWirePriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWirePriority.InnerSingleton;
}
// End Enum EWirePriority

// Begin Enum EMinDistanceStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMinDistanceStyle;
static UEnum* EMinDistanceStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMinDistanceStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMinDistanceStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EMinDistanceStyle, (UObject*)Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EMinDistanceStyle"));
	}
	return Z_Registration_Info_UEnum_EMinDistanceStyle.OuterSingleton;
}
template<> ELECTRONICNODES_API UEnum* StaticEnum<EMinDistanceStyle>()
{
	return EMinDistanceStyle_StaticEnum();
}
struct Z_Construct_UEnum_ElectronicNodes_EMinDistanceStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Line.Name", "EMinDistanceStyle::Line" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "Spline.Name", "EMinDistanceStyle::Spline" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMinDistanceStyle::Line", (int64)EMinDistanceStyle::Line },
		{ "EMinDistanceStyle::Spline", (int64)EMinDistanceStyle::Spline },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElectronicNodes_EMinDistanceStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
	nullptr,
	"EMinDistanceStyle",
	"EMinDistanceStyle",
	Z_Construct_UEnum_ElectronicNodes_EMinDistanceStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EMinDistanceStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EMinDistanceStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ElectronicNodes_EMinDistanceStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ElectronicNodes_EMinDistanceStyle()
{
	if (!Z_Registration_Info_UEnum_EMinDistanceStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMinDistanceStyle.InnerSingleton, Z_Construct_UEnum_ElectronicNodes_EMinDistanceStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMinDistanceStyle.InnerSingleton;
}
// End Enum EMinDistanceStyle

// Begin Enum EBubbleDisplayRule
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBubbleDisplayRule;
static UEnum* EBubbleDisplayRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBubbleDisplayRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBubbleDisplayRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule, (UObject*)Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EBubbleDisplayRule"));
	}
	return Z_Registration_Info_UEnum_EBubbleDisplayRule.OuterSingleton;
}
template<> ELECTRONICNODES_API UEnum* StaticEnum<EBubbleDisplayRule>()
{
	return EBubbleDisplayRule_StaticEnum();
}
struct Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Name", "EBubbleDisplayRule::Always" },
		{ "BlueprintType", "true" },
		{ "DisplayOnSelection.Name", "EBubbleDisplayRule::DisplayOnSelection" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "MoveOnSelection.Name", "EBubbleDisplayRule::MoveOnSelection" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBubbleDisplayRule::Always", (int64)EBubbleDisplayRule::Always },
		{ "EBubbleDisplayRule::DisplayOnSelection", (int64)EBubbleDisplayRule::DisplayOnSelection },
		{ "EBubbleDisplayRule::MoveOnSelection", (int64)EBubbleDisplayRule::MoveOnSelection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
	nullptr,
	"EBubbleDisplayRule",
	"EBubbleDisplayRule",
	Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule()
{
	if (!Z_Registration_Info_UEnum_EBubbleDisplayRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBubbleDisplayRule.InnerSingleton, Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBubbleDisplayRule.InnerSingleton;
}
// End Enum EBubbleDisplayRule

// Begin Enum ESelectionRule
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESelectionRule;
static UEnum* ESelectionRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESelectionRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESelectionRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_ESelectionRule, (UObject*)Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("ESelectionRule"));
	}
	return Z_Registration_Info_UEnum_ESelectionRule.OuterSingleton;
}
template<> ELECTRONICNODES_API UEnum* StaticEnum<ESelectionRule>()
{
	return ESelectionRule_StaticEnum();
}
struct Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Far.Name", "ESelectionRule::Far" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "Near.Name", "ESelectionRule::Near" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESelectionRule::Near", (int64)ESelectionRule::Near },
		{ "ESelectionRule::Far", (int64)ESelectionRule::Far },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
	nullptr,
	"ESelectionRule",
	"ESelectionRule",
	Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ElectronicNodes_ESelectionRule()
{
	if (!Z_Registration_Info_UEnum_ESelectionRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESelectionRule.InnerSingleton, Z_Construct_UEnum_ElectronicNodes_ESelectionRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESelectionRule.InnerSingleton;
}
// End Enum ESelectionRule

// Begin Class UElectronicNodesSettings
void UElectronicNodesSettings::StaticRegisterNativesUElectronicNodesSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UElectronicNodesSettings);
UClass* Z_Construct_UClass_UElectronicNodesSettings_NoRegister()
{
	return UElectronicNodesSettings::StaticClass();
}
struct Z_Construct_UClass_UElectronicNodesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Electronic Nodes Plugin" },
		{ "IncludePath", "ElectronicNodesSettings.h" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterActivate_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Activate or deactivate the whole plugin. Default: true */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate or deactivate the whole plugin. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseGlobalSettings_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Use global settings across all your projects. When activated, it will load the global settings (overwriting this one).\n\x09If no global settings exists, it will create it based on this one. Future updates will then be saved to global settings. */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Use global settings across all your projects. When activated, it will load the global settings (overwriting this one).\n      If no global settings exists, it will create it based on this one. Future updates will then be saved to global settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadGlobalSettings_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Force reload the global settings (if it was modified outside this instance for example). */" },
		{ "EditCondition", "UseGlobalSettings" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Force reload the global settings (if it was modified outside this instance for example)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivatePopupOnUpdate_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Display a popup with changelog on update. Default: tru */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Display a popup with changelog on update. Default: tru" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnBlueprint_MetaData[] = {
		{ "Category", "Activation|Schema" },
		{ "Comment", "/* Activate Electronic Nodes on Blueprint graphs. Default: true */" },
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate Electronic Nodes on Blueprint graphs. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnMaterial_MetaData[] = {
		{ "Category", "Activation|Schema" },
		{ "Comment", "/* Activate Electronic Nodes on Material graphs. Default: true */" },
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate Electronic Nodes on Material graphs. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnAnimation_MetaData[] = {
		{ "Category", "Activation|Schema" },
		{ "Comment", "/* Activate Electronic Nodes on Animation graphs. Default: true */" },
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate Electronic Nodes on Animation graphs. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnVoxelPlugin_MetaData[] = {
		{ "Category", "Activation|Schema" },
		{ "Comment", "/* Activate Electronic Nodes on VoxelPlugin (available on the marketplace). Default: true */" },
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate Electronic Nodes on VoxelPlugin (available on the marketplace). Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseHotPatch_MetaData[] = {
		{ "Category", "Activation|Schema" },
		{ "Comment", "/* Hot patch hardcoded Unreal functions (only available on Windows) to make some more features available. NEED A RESTART OF THE ENGINE! Default: true */" },
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Hot patch hardcoded Unreal functions (only available on Windows) to make some more features available. NEED A RESTART OF THE ENGINE! Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnNiagara_MetaData[] = {
		{ "Category", "Activation|Schema" },
		{ "Comment", "/* Activate Electronic Nodes on Niagara. Default: true */" },
		{ "EditCondition", "MasterActivate && UseHotPatch" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate Electronic Nodes on Niagara. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnBehaviorTree_MetaData[] = {
		{ "Category", "Activation|Schema" },
		{ "Comment", "/* Activate Electronic Nodes on Behavior Tree. Default: false */" },
		{ "EditCondition", "MasterActivate && UseHotPatch" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate Electronic Nodes on Behavior Tree. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnControlRig_MetaData[] = {
		{ "Category", "Activation|Schema" },
		{ "Comment", "/* Activate Electronic Nodes on Control Rig. Default: true */" },
		{ "EditCondition", "MasterActivate && UseHotPatch" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate Electronic Nodes on Control Rig. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnMetasound_MetaData[] = {
		{ "Category", "Activation|Schema" },
		{ "Comment", "/* Activate Electronic Nodes on Metasound. Default: true */" },
		{ "EditCondition", "MasterActivate && UseHotPatch" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate Electronic Nodes on Metasound. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnReferenceViewer_MetaData[] = {
		{ "Category", "Activation|Schema" },
		{ "Comment", "/* Activate Electronic Nodes on Reference Viewer. Default: true */" },
		{ "EditCondition", "MasterActivate && UseHotPatch" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate Electronic Nodes on Reference Viewer. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomGraphSchemas_MetaData[] = {
		{ "Category", "Activation|Schema" },
		{ "Comment", "/* Activate Electronic Nodes on custom graphs. WARNING: some graphs might need Hot Patch, and some graphs might not work at all */" },
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate Electronic Nodes on custom graphs. WARNING: some graphs might need Hot Patch, and some graphs might not work at all" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFallback_MetaData[] = {
		{ "Category", "Activation|Debug" },
		{ "Comment", "/* Activate Electronic Nodes everywhere, for debugging purpose only. Default: false */" },
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate Electronic Nodes everywhere, for debugging purpose only. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplaySchemaName_MetaData[] = {
		{ "Category", "Activation|Debug" },
		{ "Comment", "/* Display schema name in log. Default: false */" },
		{ "EditCondition", "MasterActivate" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Display schema name in log. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireStyle_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Wire style of graph. \"Manhattan\" is for 90deg angles, \"Subway\" is for 45deg angles. */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Wire style of graph. \"Manhattan\" is for 90deg angles, \"Subway\" is for 45deg angles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireAlignment_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Specify wire alignment. Default: right. */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Specify wire alignment. Default: right." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WirePriority_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Specify wire alignment priority (when a Node is connected to a Pin). Default: none. */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Specify wire alignment priority (when a Node is connected to a Pin). Default: none." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundRadius_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Round radius of the wires. Default: 10 */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Round radius of the wires. Default: 10" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireThickness_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Thickness of the wire (multiplier). Default: 1 */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Thickness of the wire (multiplier). Default: 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceToStyle_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Bellow this distance, wires will be drawn as straight. Default: 24 */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Bellow this distance, wires will be drawn as straight. Default: 24" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceStyle_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Style for wires bellow MinDistanceToStyle. Default: Line */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Style for wires bellow MinDistanceToStyle. Default: Line" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalOffset_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Horizontal offset of wires from nodes. Default: 16 */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Horizontal offset of wires from nodes. Default: 16" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisablePinOffset_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Disable the offset for pins. Default: false */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Disable the offset for pins. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixZoomDisplacement_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Fix default zoomed-out wire displacement. Default: true */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Fix default zoomed-out wire displacement. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwriteExecWireStyle_MetaData[] = {
		{ "Category", "Exec Wire Style" },
		{ "Comment", "/* Use a specific draw style for exec wires. Default: false */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Use a specific draw style for exec wires. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireStyleForExec_MetaData[] = {
		{ "Category", "Exec Wire Style" },
		{ "Comment", "/* Specific wire style for exec wires. Default: Manhattan */" },
		{ "EditCondition", "OverwriteExecWireStyle" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Specific wire style for exec wires. Default: Manhattan" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireAlignmentForExec_MetaData[] = {
		{ "Category", "Exec Wire Style" },
		{ "Comment", "/* Specify wire alignment for exe wires. Default: right. */" },
		{ "EditCondition", "OverwriteExecWireStyle" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Specify wire alignment for exe wires. Default: right." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WirePriorityForExec_MetaData[] = {
		{ "Category", "Exec Wire Style" },
		{ "Comment", "/* Specify wire alignment priority (when a Node is connected to a Pin) for exe wires. Default: node. */" },
		{ "EditCondition", "OverwriteExecWireStyle" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Specify wire alignment priority (when a Node is connected to a Pin) for exe wires. Default: node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateRibbon_MetaData[] = {
		{ "Category", "Ribbon Style (experimental)" },
		{ "Comment", "/* Activate ribbon cables for overlapping wires. */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate ribbon cables for overlapping wires." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RibbonOffset_MetaData[] = {
		{ "Category", "Ribbon Style (experimental)" },
		{ "Comment", "/* Offset between ribbon wires. Default: 4 */" },
		{ "EditCondition", "ActivateRibbon" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Offset between ribbon wires. Default: 4" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RibbonMergeOffset_MetaData[] = {
		{ "Category", "Ribbon Style (experimental)" },
		{ "Comment", "/* Offset of wires when merge into ribbon. Default: 20 */" },
		{ "EditCondition", "ActivateRibbon" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Offset of wires when merge into ribbon. Default: 20" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RibbonPushOutside_MetaData[] = {
		{ "Category", "Ribbon Style (experimental)" },
		{ "Comment", "/* Push the offset outside the node (instead of going for the middle). Default: false */" },
		{ "EditCondition", "ActivateRibbon" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Push the offset outside the node (instead of going for the middle). Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceDrawBubbles_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "Comment", "/* Show moving bubbles on the wires. Default: false */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Show moving bubbles on the wires. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawBubblesOnlyOnExec_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "Comment", "/* Draw bubbles only on exec wires. Default: true */" },
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Draw bubbles only on exec wires. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleDisplayRule_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "Comment", "/* Display rules to show/move bubbles only near selected nodes. Default: Always */" },
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Display rules to show/move bubbles only near selected nodes. Default: Always" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionRule_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "Comment", "/* If selection only consider close nodes (near) or every related nodes (far). Default: Near */" },
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "If selection only consider close nodes (near) or every related nodes (far). Default: Near" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleZoomThreshold_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMax", "7" },
		{ "ClampMin", "-12" },
		{ "Comment", "/* Disable bubbles above a certain zoom level. Default: -2 */" },
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Disable bubbles above a certain zoom level. Default: -2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleSize_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/* Size of bubbles on the wires. Default: 2.0 */" },
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Size of bubbles on the wires. Default: 2.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleSpeed_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Speed of bubbles on the wires. Default: 4.0 */" },
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Speed of bubbles on the wires. Default: 4.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleSpace_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/* Space between bubbles on the wires. Default: 20.0 */" },
		{ "EditCondition", "ForceDrawBubbles" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Space between bubbles on the wires. Default: 20.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginVersionUpdate_MetaData[] = {
		{ "Comment", "/* Internal value to fix elements on plugin update. */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Internal value to fix elements on plugin update." },
	};
#endif // WITH_METADATA
	static void NewProp_MasterActivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MasterActivate;
	static void NewProp_UseGlobalSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseGlobalSettings;
	static void NewProp_LoadGlobalSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadGlobalSettings;
	static void NewProp_ActivatePopupOnUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivatePopupOnUpdate;
	static void NewProp_ActivateOnBlueprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateOnBlueprint;
	static void NewProp_ActivateOnMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateOnMaterial;
	static void NewProp_ActivateOnAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateOnAnimation;
	static void NewProp_ActivateOnVoxelPlugin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateOnVoxelPlugin;
	static void NewProp_UseHotPatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseHotPatch;
	static void NewProp_ActivateOnNiagara_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateOnNiagara;
	static void NewProp_ActivateOnBehaviorTree_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateOnBehaviorTree;
	static void NewProp_ActivateOnControlRig_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateOnControlRig;
	static void NewProp_ActivateOnMetasound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateOnMetasound;
	static void NewProp_ActivateOnReferenceViewer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateOnReferenceViewer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomGraphSchemas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomGraphSchemas;
	static void NewProp_ActivateFallback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateFallback;
	static void NewProp_DisplaySchemaName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisplaySchemaName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WireStyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WireStyle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WireAlignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WireAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WirePriority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WirePriority;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RoundRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WireThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceToStyle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MinDistanceStyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MinDistanceStyle;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_HorizontalOffset;
	static void NewProp_DisablePinOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisablePinOffset;
	static void NewProp_FixZoomDisplacement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FixZoomDisplacement;
	static void NewProp_OverwriteExecWireStyle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverwriteExecWireStyle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WireStyleForExec_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WireStyleForExec;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WireAlignmentForExec_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WireAlignmentForExec;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WirePriorityForExec_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WirePriorityForExec;
	static void NewProp_ActivateRibbon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateRibbon;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RibbonOffset;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RibbonMergeOffset;
	static void NewProp_RibbonPushOutside_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RibbonPushOutside;
	static void NewProp_ForceDrawBubbles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceDrawBubbles;
	static void NewProp_DrawBubblesOnlyOnExec_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawBubblesOnlyOnExec;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BubbleDisplayRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BubbleDisplayRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionRule;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BubbleZoomThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BubbleSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BubbleSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BubbleSpace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PluginVersionUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElectronicNodesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->MasterActivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate = { "MasterActivate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterActivate_MetaData), NewProp_MasterActivate_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_UseGlobalSettings_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->UseGlobalSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_UseGlobalSettings = { "UseGlobalSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_UseGlobalSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseGlobalSettings_MetaData), NewProp_UseGlobalSettings_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_LoadGlobalSettings_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->LoadGlobalSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_LoadGlobalSettings = { "LoadGlobalSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_LoadGlobalSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadGlobalSettings_MetaData), NewProp_LoadGlobalSettings_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivatePopupOnUpdate_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivatePopupOnUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivatePopupOnUpdate = { "ActivatePopupOnUpdate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivatePopupOnUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivatePopupOnUpdate_MetaData), NewProp_ActivatePopupOnUpdate_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateOnBlueprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint = { "ActivateOnBlueprint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnBlueprint_MetaData), NewProp_ActivateOnBlueprint_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateOnMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial = { "ActivateOnMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnMaterial_MetaData), NewProp_ActivateOnMaterial_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateOnAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation = { "ActivateOnAnimation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnAnimation_MetaData), NewProp_ActivateOnAnimation_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnVoxelPlugin_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateOnVoxelPlugin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnVoxelPlugin = { "ActivateOnVoxelPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnVoxelPlugin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnVoxelPlugin_MetaData), NewProp_ActivateOnVoxelPlugin_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_UseHotPatch_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->UseHotPatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_UseHotPatch = { "UseHotPatch", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_UseHotPatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseHotPatch_MetaData), NewProp_UseHotPatch_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnNiagara_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateOnNiagara = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnNiagara = { "ActivateOnNiagara", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnNiagara_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnNiagara_MetaData), NewProp_ActivateOnNiagara_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBehaviorTree_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateOnBehaviorTree = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBehaviorTree = { "ActivateOnBehaviorTree", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBehaviorTree_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnBehaviorTree_MetaData), NewProp_ActivateOnBehaviorTree_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnControlRig_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateOnControlRig = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnControlRig = { "ActivateOnControlRig", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnControlRig_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnControlRig_MetaData), NewProp_ActivateOnControlRig_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMetasound_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateOnMetasound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMetasound = { "ActivateOnMetasound", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMetasound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnMetasound_MetaData), NewProp_ActivateOnMetasound_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnReferenceViewer_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateOnReferenceViewer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnReferenceViewer = { "ActivateOnReferenceViewer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnReferenceViewer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnReferenceViewer_MetaData), NewProp_ActivateOnReferenceViewer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_CustomGraphSchemas_Inner = { "CustomGraphSchemas", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UEdGraphSchema_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_CustomGraphSchemas = { "CustomGraphSchemas", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, CustomGraphSchemas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomGraphSchemas_MetaData), NewProp_CustomGraphSchemas_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateFallback_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateFallback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateFallback = { "ActivateFallback", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateFallback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFallback_MetaData), NewProp_ActivateFallback_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisplaySchemaName_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->DisplaySchemaName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisplaySchemaName = { "DisplaySchemaName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisplaySchemaName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplaySchemaName_MetaData), NewProp_DisplaySchemaName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle = { "WireStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireStyle), Z_Construct_UEnum_ElectronicNodes_EWireStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireStyle_MetaData), NewProp_WireStyle_MetaData) }; // 1488415685
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment = { "WireAlignment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireAlignment), Z_Construct_UEnum_ElectronicNodes_EWireAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireAlignment_MetaData), NewProp_WireAlignment_MetaData) }; // 335682993
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority = { "WirePriority", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, WirePriority), Z_Construct_UEnum_ElectronicNodes_EWirePriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WirePriority_MetaData), NewProp_WirePriority_MetaData) }; // 335996318
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RoundRadius = { "RoundRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, RoundRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundRadius_MetaData), NewProp_RoundRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireThickness = { "WireThickness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireThickness_MetaData), NewProp_WireThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MinDistanceToStyle = { "MinDistanceToStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, MinDistanceToStyle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistanceToStyle_MetaData), NewProp_MinDistanceToStyle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MinDistanceStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MinDistanceStyle = { "MinDistanceStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, MinDistanceStyle), Z_Construct_UEnum_ElectronicNodes_EMinDistanceStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistanceStyle_MetaData), NewProp_MinDistanceStyle_MetaData) }; // 3673234337
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_HorizontalOffset = { "HorizontalOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, HorizontalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalOffset_MetaData), NewProp_HorizontalOffset_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->DisablePinOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset = { "DisablePinOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisablePinOffset_MetaData), NewProp_DisablePinOffset_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->FixZoomDisplacement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement = { "FixZoomDisplacement", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixZoomDisplacement_MetaData), NewProp_FixZoomDisplacement_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->OverwriteExecWireStyle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle = { "OverwriteExecWireStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwriteExecWireStyle_MetaData), NewProp_OverwriteExecWireStyle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec = { "WireStyleForExec", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireStyleForExec), Z_Construct_UEnum_ElectronicNodes_EWireStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireStyleForExec_MetaData), NewProp_WireStyleForExec_MetaData) }; // 1488415685
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec = { "WireAlignmentForExec", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireAlignmentForExec), Z_Construct_UEnum_ElectronicNodes_EWireAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireAlignmentForExec_MetaData), NewProp_WireAlignmentForExec_MetaData) }; // 335682993
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec = { "WirePriorityForExec", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, WirePriorityForExec), Z_Construct_UEnum_ElectronicNodes_EWirePriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WirePriorityForExec_MetaData), NewProp_WirePriorityForExec_MetaData) }; // 335996318
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ActivateRibbon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon = { "ActivateRibbon", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateRibbon_MetaData), NewProp_ActivateRibbon_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonOffset = { "RibbonOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, RibbonOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RibbonOffset_MetaData), NewProp_RibbonOffset_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonMergeOffset = { "RibbonMergeOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, RibbonMergeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RibbonMergeOffset_MetaData), NewProp_RibbonMergeOffset_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonPushOutside_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->RibbonPushOutside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonPushOutside = { "RibbonPushOutside", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonPushOutside_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RibbonPushOutside_MetaData), NewProp_RibbonPushOutside_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->ForceDrawBubbles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles = { "ForceDrawBubbles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceDrawBubbles_MetaData), NewProp_ForceDrawBubbles_MetaData) };
void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DrawBubblesOnlyOnExec_SetBit(void* Obj)
{
	((UElectronicNodesSettings*)Obj)->DrawBubblesOnlyOnExec = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DrawBubblesOnlyOnExec = { "DrawBubblesOnlyOnExec", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DrawBubblesOnlyOnExec_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawBubblesOnlyOnExec_MetaData), NewProp_DrawBubblesOnlyOnExec_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule = { "BubbleDisplayRule", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleDisplayRule), Z_Construct_UEnum_ElectronicNodes_EBubbleDisplayRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleDisplayRule_MetaData), NewProp_BubbleDisplayRule_MetaData) }; // 2776346436
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule = { "SelectionRule", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, SelectionRule), Z_Construct_UEnum_ElectronicNodes_ESelectionRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionRule_MetaData), NewProp_SelectionRule_MetaData) }; // 1268349482
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleZoomThreshold = { "BubbleZoomThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleZoomThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleZoomThreshold_MetaData), NewProp_BubbleZoomThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSize = { "BubbleSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleSize_MetaData), NewProp_BubbleSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpeed = { "BubbleSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleSpeed_MetaData), NewProp_BubbleSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpace = { "BubbleSpace", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleSpace_MetaData), NewProp_BubbleSpace_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_PluginVersionUpdate = { "PluginVersionUpdate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElectronicNodesSettings, PluginVersionUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginVersionUpdate_MetaData), NewProp_PluginVersionUpdate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElectronicNodesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MasterActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_UseGlobalSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_LoadGlobalSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivatePopupOnUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnVoxelPlugin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_UseHotPatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnNiagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnBehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnControlRig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnMetasound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateOnReferenceViewer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_CustomGraphSchemas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_CustomGraphSchemas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisplaySchemaName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RoundRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MinDistanceToStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MinDistanceStyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_MinDistanceStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_HorizontalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DisablePinOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_OverwriteExecWireStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireAlignmentForExec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WirePriorityForExec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonMergeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonPushOutside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_DrawBubblesOnlyOnExec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleDisplayRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_SelectionRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleZoomThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_PluginVersionUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UElectronicNodesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ElectronicNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UElectronicNodesSettings_Statics::ClassParams = {
	&UElectronicNodesSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UElectronicNodesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UElectronicNodesSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UElectronicNodesSettings()
{
	if (!Z_Registration_Info_UClass_UElectronicNodesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UElectronicNodesSettings.OuterSingleton, Z_Construct_UClass_UElectronicNodesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UElectronicNodesSettings.OuterSingleton;
}
template<> ELECTRONICNODES_API UClass* StaticClass<UElectronicNodesSettings>()
{
	return UElectronicNodesSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UElectronicNodesSettings);
UElectronicNodesSettings::~UElectronicNodesSettings() {}
// End Class UElectronicNodesSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWireStyle_StaticEnum, TEXT("EWireStyle"), &Z_Registration_Info_UEnum_EWireStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1488415685U) },
		{ EWireAlignment_StaticEnum, TEXT("EWireAlignment"), &Z_Registration_Info_UEnum_EWireAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 335682993U) },
		{ EWirePriority_StaticEnum, TEXT("EWirePriority"), &Z_Registration_Info_UEnum_EWirePriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 335996318U) },
		{ EMinDistanceStyle_StaticEnum, TEXT("EMinDistanceStyle"), &Z_Registration_Info_UEnum_EMinDistanceStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3673234337U) },
		{ EBubbleDisplayRule_StaticEnum, TEXT("EBubbleDisplayRule"), &Z_Registration_Info_UEnum_EBubbleDisplayRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2776346436U) },
		{ ESelectionRule_StaticEnum, TEXT("ESelectionRule"), &Z_Registration_Info_UEnum_ESelectionRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1268349482U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UElectronicNodesSettings, UElectronicNodesSettings::StaticClass, TEXT("UElectronicNodesSettings"), &Z_Registration_Info_UClass_UElectronicNodesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UElectronicNodesSettings), 2472372006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_266484489(TEXT("/Script/ElectronicNodes"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
