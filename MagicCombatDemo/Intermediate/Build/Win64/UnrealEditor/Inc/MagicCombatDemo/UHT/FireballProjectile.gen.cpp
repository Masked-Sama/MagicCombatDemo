// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicCombatDemo/Private/FireballProjectile/FireballProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireballProjectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MAGICCOMBATDEMO_API UClass* Z_Construct_UClass_AFireballProjectile();
MAGICCOMBATDEMO_API UClass* Z_Construct_UClass_AFireballProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_MagicCombatDemo();
// End Cross Module References

// Begin Class AFireballProjectile
void AFireballProjectile::StaticRegisterNativesAFireballProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFireballProjectile);
UClass* Z_Construct_UClass_AFireballProjectile_NoRegister()
{
	return AFireballProjectile::StaticClass();
}
struct Z_Construct_UClass_AFireballProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FireballProjectile/FireballProjectile.h" },
		{ "ModuleRelativePath", "Private/FireballProjectile/FireballProjectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireballProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFireballProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicCombatDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireballProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFireballProjectile_Statics::ClassParams = {
	&AFireballProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireballProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AFireballProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFireballProjectile()
{
	if (!Z_Registration_Info_UClass_AFireballProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFireballProjectile.OuterSingleton, Z_Construct_UClass_AFireballProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFireballProjectile.OuterSingleton;
}
template<> MAGICCOMBATDEMO_API UClass* StaticClass<AFireballProjectile>()
{
	return AFireballProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFireballProjectile);
AFireballProjectile::~AFireballProjectile() {}
// End Class AFireballProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MyCareerPersonalProject_MagicCombat_MagicCombatDemo_MagicCombatDemo_Source_MagicCombatDemo_Private_FireballProjectile_FireballProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFireballProjectile, AFireballProjectile::StaticClass, TEXT("AFireballProjectile"), &Z_Registration_Info_UClass_AFireballProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFireballProjectile), 1387476319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MyCareerPersonalProject_MagicCombat_MagicCombatDemo_MagicCombatDemo_Source_MagicCombatDemo_Private_FireballProjectile_FireballProjectile_h_527374454(TEXT("/Script/MagicCombatDemo"),
	Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MyCareerPersonalProject_MagicCombat_MagicCombatDemo_MagicCombatDemo_Source_MagicCombatDemo_Private_FireballProjectile_FireballProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MyCareerPersonalProject_MagicCombat_MagicCombatDemo_MagicCombatDemo_Source_MagicCombatDemo_Private_FireballProjectile_FireballProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
