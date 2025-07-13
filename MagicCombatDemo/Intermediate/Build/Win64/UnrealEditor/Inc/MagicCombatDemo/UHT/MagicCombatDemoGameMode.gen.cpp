// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicCombatDemo/MagicCombatDemoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicCombatDemoGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MAGICCOMBATDEMO_API UClass* Z_Construct_UClass_AMagicCombatDemoGameMode();
MAGICCOMBATDEMO_API UClass* Z_Construct_UClass_AMagicCombatDemoGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MagicCombatDemo();
// End Cross Module References

// Begin Class AMagicCombatDemoGameMode
void AMagicCombatDemoGameMode::StaticRegisterNativesAMagicCombatDemoGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagicCombatDemoGameMode);
UClass* Z_Construct_UClass_AMagicCombatDemoGameMode_NoRegister()
{
	return AMagicCombatDemoGameMode::StaticClass();
}
struct Z_Construct_UClass_AMagicCombatDemoGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MagicCombatDemoGameMode.h" },
		{ "ModuleRelativePath", "MagicCombatDemoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicCombatDemoGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMagicCombatDemoGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicCombatDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCombatDemoGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicCombatDemoGameMode_Statics::ClassParams = {
	&AMagicCombatDemoGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicCombatDemoGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMagicCombatDemoGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMagicCombatDemoGameMode()
{
	if (!Z_Registration_Info_UClass_AMagicCombatDemoGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagicCombatDemoGameMode.OuterSingleton, Z_Construct_UClass_AMagicCombatDemoGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMagicCombatDemoGameMode.OuterSingleton;
}
template<> MAGICCOMBATDEMO_API UClass* StaticClass<AMagicCombatDemoGameMode>()
{
	return AMagicCombatDemoGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicCombatDemoGameMode);
AMagicCombatDemoGameMode::~AMagicCombatDemoGameMode() {}
// End Class AMagicCombatDemoGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MagicCombatDemo_Source_MagicCombatDemo_MagicCombatDemoGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMagicCombatDemoGameMode, AMagicCombatDemoGameMode::StaticClass, TEXT("AMagicCombatDemoGameMode"), &Z_Registration_Info_UClass_AMagicCombatDemoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicCombatDemoGameMode), 1408942263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MagicCombatDemo_Source_MagicCombatDemo_MagicCombatDemoGameMode_h_116235477(TEXT("/Script/MagicCombatDemo"),
	Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MagicCombatDemo_Source_MagicCombatDemo_MagicCombatDemoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MagicCombatDemo_Source_MagicCombatDemo_MagicCombatDemoGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
