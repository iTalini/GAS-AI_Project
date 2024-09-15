// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/Interactable/PickupBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_AInteractableBase();
GASPROJECT_API UClass* Z_Construct_UClass_APickupBase();
GASPROJECT_API UClass* Z_Construct_UClass_APickupBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Class APickupBase Function Use
static FName NAME_APickupBase_Use = FName(TEXT("Use"));
void APickupBase::Use()
{
	ProcessEvent(FindFunctionChecked(NAME_APickupBase_Use),NULL);
}
struct Z_Construct_UFunction_APickupBase_Use_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable/PickupBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupBase_Use_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupBase, nullptr, "Use", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_Use_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupBase_Use_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APickupBase_Use()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupBase_Use_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APickupBase::execUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Use_Implementation();
	P_NATIVE_END;
}
// End Class APickupBase Function Use

// Begin Class APickupBase
void APickupBase::StaticRegisterNativesAPickupBase()
{
	UClass* Class = APickupBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Use", &APickupBase::execUse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupBase);
UClass* Z_Construct_UClass_APickupBase_NoRegister()
{
	return APickupBase::StaticClass();
}
struct Z_Construct_UClass_APickupBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Interactable/PickupBase.h" },
		{ "ModuleRelativePath", "Public/Interactable/PickupBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupBaseThumbnail_MetaData[] = {
		{ "Category", "PickupBase Properties" },
		{ "ModuleRelativePath", "Public/Interactable/PickupBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "PickupBase Properties" },
		{ "ModuleRelativePath", "Public/Interactable/PickupBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "PickupBase Properties" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Interactable/PickupBase.h" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupBaseThumbnail;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupBase_Use, "Use" }, // 1178310571
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_PickupBaseThumbnail = { "PickupBaseThumbnail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupBase, PickupBaseThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupBaseThumbnail_MetaData), NewProp_PickupBaseThumbnail_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupBase, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupBase, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_PickupBaseThumbnail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APickupBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInteractableBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupBase_Statics::ClassParams = {
	&APickupBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APickupBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APickupBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickupBase()
{
	if (!Z_Registration_Info_UClass_APickupBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupBase.OuterSingleton, Z_Construct_UClass_APickupBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickupBase.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<APickupBase>()
{
	return APickupBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickupBase);
APickupBase::~APickupBase() {}
// End Class APickupBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickupBase, APickupBase::StaticClass, TEXT("APickupBase"), &Z_Registration_Info_UClass_APickupBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupBase), 3322016977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h_189127168(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
