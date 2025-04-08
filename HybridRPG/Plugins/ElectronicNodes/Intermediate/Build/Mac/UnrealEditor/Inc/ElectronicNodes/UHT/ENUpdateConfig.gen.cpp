// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElectronicNodes/Private/Popup/ENUpdateConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENUpdateConfig() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ELECTRONICNODES_API UClass* Z_Construct_UClass_UENUpdateConfig();
ELECTRONICNODES_API UClass* Z_Construct_UClass_UENUpdateConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_ElectronicNodes();
// End Cross Module References

// Begin Class UENUpdateConfig
void UENUpdateConfig::StaticRegisterNativesUENUpdateConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UENUpdateConfig);
UClass* Z_Construct_UClass_UENUpdateConfig_NoRegister()
{
	return UENUpdateConfig::StaticClass();
}
struct Z_Construct_UClass_UENUpdateConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Popup/ENUpdateConfig.h" },
		{ "ModuleRelativePath", "Private/Popup/ENUpdateConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginVersionUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Private/Popup/ENUpdateConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PluginVersionUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UENUpdateConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UENUpdateConfig_Statics::NewProp_PluginVersionUpdate = { "PluginVersionUpdate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UENUpdateConfig, PluginVersionUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginVersionUpdate_MetaData), NewProp_PluginVersionUpdate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UENUpdateConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UENUpdateConfig_Statics::NewProp_PluginVersionUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UENUpdateConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UENUpdateConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ElectronicNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UENUpdateConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UENUpdateConfig_Statics::ClassParams = {
	&UENUpdateConfig::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UENUpdateConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UENUpdateConfig_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UENUpdateConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UENUpdateConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UENUpdateConfig()
{
	if (!Z_Registration_Info_UClass_UENUpdateConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UENUpdateConfig.OuterSingleton, Z_Construct_UClass_UENUpdateConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UENUpdateConfig.OuterSingleton;
}
template<> ELECTRONICNODES_API UClass* StaticClass<UENUpdateConfig>()
{
	return UENUpdateConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UENUpdateConfig);
UENUpdateConfig::~UENUpdateConfig() {}
// End Class UENUpdateConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Private_Popup_ENUpdateConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UENUpdateConfig, UENUpdateConfig::StaticClass, TEXT("UENUpdateConfig"), &Z_Registration_Info_UClass_UENUpdateConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UENUpdateConfig), 1490539414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Private_Popup_ENUpdateConfig_h_3766110535(TEXT("/Script/ElectronicNodes"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Private_Popup_ENUpdateConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ElectronicNodes_Source_ElectronicNodes_Private_Popup_ENUpdateConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
