// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicCombatDemo/Private/BubbleShield/ShieldBubbleActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShieldBubbleActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MAGICCOMBATDEMO_API UClass* Z_Construct_UClass_AShieldBubbleActor();
MAGICCOMBATDEMO_API UClass* Z_Construct_UClass_AShieldBubbleActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MagicCombatDemo();
// End Cross Module References

// Begin Class AShieldBubbleActor
void AShieldBubbleActor::StaticRegisterNativesAShieldBubbleActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShieldBubbleActor);
UClass* Z_Construct_UClass_AShieldBubbleActor_NoRegister()
{
	return AShieldBubbleActor::StaticClass();
}
struct Z_Construct_UClass_AShieldBubbleActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BubbleShield/ShieldBubbleActor.h" },
		{ "ModuleRelativePath", "Private/BubbleShield/ShieldBubbleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BubbleMesh_MetaData[] = {
		{ "Category", "ShieldBubbleActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/BubbleShield/ShieldBubbleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxShieldHP_MetaData[] = {
		{ "Category", "ShieldBubbleActor" },
		{ "ModuleRelativePath", "Private/BubbleShield/ShieldBubbleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BubbleMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxShieldHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShieldBubbleActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShieldBubbleActor_Statics::NewProp_BubbleMesh = { "BubbleMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldBubbleActor, BubbleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BubbleMesh_MetaData), NewProp_BubbleMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldBubbleActor_Statics::NewProp_MaxShieldHP = { "MaxShieldHP", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldBubbleActor, MaxShieldHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxShieldHP_MetaData), NewProp_MaxShieldHP_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShieldBubbleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldBubbleActor_Statics::NewProp_BubbleMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldBubbleActor_Statics::NewProp_MaxShieldHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldBubbleActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShieldBubbleActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicCombatDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldBubbleActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShieldBubbleActor_Statics::ClassParams = {
	&AShieldBubbleActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShieldBubbleActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShieldBubbleActor_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldBubbleActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AShieldBubbleActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShieldBubbleActor()
{
	if (!Z_Registration_Info_UClass_AShieldBubbleActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShieldBubbleActor.OuterSingleton, Z_Construct_UClass_AShieldBubbleActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShieldBubbleActor.OuterSingleton;
}
template<> MAGICCOMBATDEMO_API UClass* StaticClass<AShieldBubbleActor>()
{
	return AShieldBubbleActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldBubbleActor);
AShieldBubbleActor::~AShieldBubbleActor() {}
// End Class AShieldBubbleActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MyCareerPersonalProject_MagicCombat_MagicCombatDemo_MagicCombatDemo_Source_MagicCombatDemo_Private_BubbleShield_ShieldBubbleActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShieldBubbleActor, AShieldBubbleActor::StaticClass, TEXT("AShieldBubbleActor"), &Z_Registration_Info_UClass_AShieldBubbleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShieldBubbleActor), 757714495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MyCareerPersonalProject_MagicCombat_MagicCombatDemo_MagicCombatDemo_Source_MagicCombatDemo_Private_BubbleShield_ShieldBubbleActor_h_43249180(TEXT("/Script/MagicCombatDemo"),
	Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MyCareerPersonalProject_MagicCombat_MagicCombatDemo_MagicCombatDemo_Source_MagicCombatDemo_Private_BubbleShield_ShieldBubbleActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MyCareerPersonalProject_MagicCombat_MagicCombatDemo_MagicCombatDemo_Source_MagicCombatDemo_Private_BubbleShield_ShieldBubbleActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
