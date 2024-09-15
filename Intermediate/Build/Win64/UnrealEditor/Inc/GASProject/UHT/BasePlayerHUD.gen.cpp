// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/HUD/BasePlayerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlayerHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
GASPROJECT_API UClass* Z_Construct_UClass_ABasePlayerHUD();
GASPROJECT_API UClass* Z_Construct_UClass_ABasePlayerHUD_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_UBaseHUDWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Class ABasePlayerHUD
void ABasePlayerHUD::StaticRegisterNativesABasePlayerHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasePlayerHUD);
UClass* Z_Construct_UClass_ABasePlayerHUD_NoRegister()
{
	return ABasePlayerHUD::StaticClass();
}
struct Z_Construct_UClass_ABasePlayerHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/BasePlayerHUD.h" },
		{ "ModuleRelativePath", "Public/HUD/BasePlayerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/HUD/BasePlayerHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlayerHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABasePlayerHUD_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePlayerHUD, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePlayerHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePlayerHUD_Statics::NewProp_HUDWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasePlayerHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePlayerHUD_Statics::ClassParams = {
	&ABasePlayerHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABasePlayerHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasePlayerHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasePlayerHUD()
{
	if (!Z_Registration_Info_UClass_ABasePlayerHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePlayerHUD.OuterSingleton, Z_Construct_UClass_ABasePlayerHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasePlayerHUD.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<ABasePlayerHUD>()
{
	return ABasePlayerHUD::StaticClass();
}
ABasePlayerHUD::ABasePlayerHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayerHUD);
ABasePlayerHUD::~ABasePlayerHUD() {}
// End Class ABasePlayerHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_HUD_BasePlayerHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasePlayerHUD, ABasePlayerHUD::StaticClass, TEXT("ABasePlayerHUD"), &Z_Registration_Info_UClass_ABasePlayerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePlayerHUD), 882575129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_HUD_BasePlayerHUD_h_3687620648(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_HUD_BasePlayerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_HUD_BasePlayerHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
