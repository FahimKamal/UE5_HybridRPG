// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ElectronicNodesSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELECTRONICNODES_ElectronicNodesSettings_generated_h
#error "ElectronicNodesSettings.generated.h already included, missing '#pragma once' in ElectronicNodesSettings.h"
#endif
#define ELECTRONICNODES_ElectronicNodesSettings_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElectronicNodesSettings(); \
	friend struct Z_Construct_UClass_UElectronicNodesSettings_Statics; \
public: \
	DECLARE_CLASS(UElectronicNodesSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElectronicNodes"), NO_API) \
	DECLARE_SERIALIZER(UElectronicNodesSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UElectronicNodesSettings(UElectronicNodesSettings&&); \
	UElectronicNodesSettings(const UElectronicNodesSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElectronicNodesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElectronicNodesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UElectronicNodesSettings) \
	NO_API virtual ~UElectronicNodesSettings();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_55_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_58_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELECTRONICNODES_API UClass* StaticClass<class UElectronicNodesSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Public_ElectronicNodesSettings_h


#define FOREACH_ENUM_EWIRESTYLE(op) \
	op(EWireStyle::Default) \
	op(EWireStyle::Manhattan) \
	op(EWireStyle::Subway) 

enum class EWireStyle : uint8;
template<> struct TIsUEnumClass<EWireStyle> { enum { Value = true }; };
template<> ELECTRONICNODES_API UEnum* StaticEnum<EWireStyle>();

#define FOREACH_ENUM_EWIREALIGNMENT(op) \
	op(EWireAlignment::Right) \
	op(EWireAlignment::Left) 

enum class EWireAlignment : uint8;
template<> struct TIsUEnumClass<EWireAlignment> { enum { Value = true }; };
template<> ELECTRONICNODES_API UEnum* StaticEnum<EWireAlignment>();

#define FOREACH_ENUM_EWIREPRIORITY(op) \
	op(EWirePriority::None) \
	op(EWirePriority::Node) \
	op(EWirePriority::Pin) 

enum class EWirePriority : uint8;
template<> struct TIsUEnumClass<EWirePriority> { enum { Value = true }; };
template<> ELECTRONICNODES_API UEnum* StaticEnum<EWirePriority>();

#define FOREACH_ENUM_EMINDISTANCESTYLE(op) \
	op(EMinDistanceStyle::Line) \
	op(EMinDistanceStyle::Spline) 

enum class EMinDistanceStyle : uint8;
template<> struct TIsUEnumClass<EMinDistanceStyle> { enum { Value = true }; };
template<> ELECTRONICNODES_API UEnum* StaticEnum<EMinDistanceStyle>();

#define FOREACH_ENUM_EBUBBLEDISPLAYRULE(op) \
	op(EBubbleDisplayRule::Always) \
	op(EBubbleDisplayRule::DisplayOnSelection) \
	op(EBubbleDisplayRule::MoveOnSelection) 

enum class EBubbleDisplayRule : uint8;
template<> struct TIsUEnumClass<EBubbleDisplayRule> { enum { Value = true }; };
template<> ELECTRONICNODES_API UEnum* StaticEnum<EBubbleDisplayRule>();

#define FOREACH_ENUM_ESELECTIONRULE(op) \
	op(ESelectionRule::Near) \
	op(ESelectionRule::Far) 

enum class ESelectionRule : uint8;
template<> struct TIsUEnumClass<ESelectionRule> { enum { Value = true }; };
template<> ELECTRONICNODES_API UEnum* StaticEnum<ESelectionRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
