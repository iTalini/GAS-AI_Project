// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/GAS/GAS_GABaseRangedAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_GABaseRangedAttack() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GASPROJECT_API UClass* Z_Construct_UClass_UGAS_GABaseAttack();
GASPROJECT_API UClass* Z_Construct_UClass_UGAS_GABaseRangedAttack();
GASPROJECT_API UClass* Z_Construct_UClass_UGAS_GABaseRangedAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Class UGAS_GABaseRangedAttack
void UGAS_GABaseRangedAttack::StaticRegisterNativesUGAS_GABaseRangedAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_GABaseRangedAttack);
UClass* Z_Construct_UClass_UGAS_GABaseRangedAttack_NoRegister()
{
	return UGAS_GABaseRangedAttack::StaticClass();
}
struct Z_Construct_UClass_UGAS_GABaseRangedAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GAS/GAS_GABaseRangedAttack.h" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseRangedAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceBetweenHandAndCenterOfProj_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseRangedAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceBetweenHandAndCenterOfProj;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_GABaseRangedAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_GABaseRangedAttack_Statics::NewProp_DistanceBetweenHandAndCenterOfProj = { "DistanceBetweenHandAndCenterOfProj", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseRangedAttack, DistanceBetweenHandAndCenterOfProj), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceBetweenHandAndCenterOfProj_MetaData), NewProp_DistanceBetweenHandAndCenterOfProj_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAS_GABaseRangedAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseRangedAttack_Statics::NewProp_DistanceBetweenHandAndCenterOfProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GABaseRangedAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGAS_GABaseRangedAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGAS_GABaseAttack,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GABaseRangedAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_GABaseRangedAttack_Statics::ClassParams = {
	&UGAS_GABaseRangedAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGAS_GABaseRangedAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GABaseRangedAttack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GABaseRangedAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_GABaseRangedAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_GABaseRangedAttack()
{
	if (!Z_Registration_Info_UClass_UGAS_GABaseRangedAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_GABaseRangedAttack.OuterSingleton, Z_Construct_UClass_UGAS_GABaseRangedAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_GABaseRangedAttack.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<UGAS_GABaseRangedAttack>()
{
	return UGAS_GABaseRangedAttack::StaticClass();
}
UGAS_GABaseRangedAttack::UGAS_GABaseRangedAttack() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_GABaseRangedAttack);
UGAS_GABaseRangedAttack::~UGAS_GABaseRangedAttack() {}
// End Class UGAS_GABaseRangedAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseRangedAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_GABaseRangedAttack, UGAS_GABaseRangedAttack::StaticClass, TEXT("UGAS_GABaseRangedAttack"), &Z_Registration_Info_UClass_UGAS_GABaseRangedAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_GABaseRangedAttack), 1500706359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseRangedAttack_h_2382706761(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseRangedAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseRangedAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
