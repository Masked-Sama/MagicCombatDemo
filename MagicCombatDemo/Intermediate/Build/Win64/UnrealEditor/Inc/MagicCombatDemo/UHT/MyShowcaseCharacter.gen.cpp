// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicCombatDemo/Private/Character/MyShowcaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyShowcaseCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MAGICCOMBATDEMO_API UClass* Z_Construct_UClass_AMyShowcaseCharacter();
MAGICCOMBATDEMO_API UClass* Z_Construct_UClass_AMyShowcaseCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MagicCombatDemo();
// End Cross Module References

// Begin Class AMyShowcaseCharacter
void AMyShowcaseCharacter::StaticRegisterNativesAMyShowcaseCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyShowcaseCharacter);
UClass* Z_Construct_UClass_AMyShowcaseCharacter_NoRegister()
{
	return AMyShowcaseCharacter::StaticClass();
}
struct Z_Construct_UClass_AMyShowcaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/MyShowcaseCharacter.h" },
		{ "ModuleRelativePath", "Private/Character/MyShowcaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowcaseMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Input Mapping Context */" },
#endif
		{ "ModuleRelativePath", "Private/Character/MyShowcaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Movement Actions */" },
#endif
		{ "ModuleRelativePath", "Private/Character/MyShowcaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/Character/MyShowcaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/Character/MyShowcaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastFireballAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Abilities Actions */" },
#endif
		{ "ModuleRelativePath", "Private/Character/MyShowcaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abilities Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastShieldAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/Character/MyShowcaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastTeleportAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/Character/MyShowcaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* CameraComponents */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Character/MyShowcaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CameraComponents" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Character/MyShowcaseCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowcaseMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastFireballAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastShieldAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastTeleportAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyShowcaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_ShowcaseMappingContext = { "ShowcaseMappingContext", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyShowcaseCharacter, ShowcaseMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowcaseMappingContext_MetaData), NewProp_ShowcaseMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyShowcaseCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyShowcaseCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyShowcaseCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_CastFireballAction = { "CastFireballAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyShowcaseCharacter, CastFireballAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastFireballAction_MetaData), NewProp_CastFireballAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_CastShieldAction = { "CastShieldAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyShowcaseCharacter, CastShieldAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastShieldAction_MetaData), NewProp_CastShieldAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_CastTeleportAction = { "CastTeleportAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyShowcaseCharacter, CastTeleportAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastTeleportAction_MetaData), NewProp_CastTeleportAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyShowcaseCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyShowcaseCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyShowcaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_ShowcaseMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_CastFireballAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_CastShieldAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_CastTeleportAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyShowcaseCharacter_Statics::NewProp_FollowCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyShowcaseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyShowcaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MagicCombatDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyShowcaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyShowcaseCharacter_Statics::ClassParams = {
	&AMyShowcaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyShowcaseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyShowcaseCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyShowcaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyShowcaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyShowcaseCharacter()
{
	if (!Z_Registration_Info_UClass_AMyShowcaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyShowcaseCharacter.OuterSingleton, Z_Construct_UClass_AMyShowcaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyShowcaseCharacter.OuterSingleton;
}
template<> MAGICCOMBATDEMO_API UClass* StaticClass<AMyShowcaseCharacter>()
{
	return AMyShowcaseCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyShowcaseCharacter);
AMyShowcaseCharacter::~AMyShowcaseCharacter() {}
// End Class AMyShowcaseCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MyCareerPersonalProject_MagicCombat_MagicCombatDemo_MagicCombatDemo_Source_MagicCombatDemo_Private_Character_MyShowcaseCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyShowcaseCharacter, AMyShowcaseCharacter::StaticClass, TEXT("AMyShowcaseCharacter"), &Z_Registration_Info_UClass_AMyShowcaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyShowcaseCharacter), 2094394506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MyCareerPersonalProject_MagicCombat_MagicCombatDemo_MagicCombatDemo_Source_MagicCombatDemo_Private_Character_MyShowcaseCharacter_h_505853784(TEXT("/Script/MagicCombatDemo"),
	Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MyCareerPersonalProject_MagicCombat_MagicCombatDemo_MagicCombatDemo_Source_MagicCombatDemo_Private_Character_MyShowcaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ceret_OneDrive_Desktop_MyCareerPersonalProject_MagicCombat_MagicCombatDemo_MagicCombatDemo_Source_MagicCombatDemo_Private_Character_MyShowcaseCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
