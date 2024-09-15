// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/Interactable/InteractableBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_AGASProjectCharacter_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_AInteractableBase();
GASPROJECT_API UClass* Z_Construct_UClass_AInteractableBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Class AInteractableBase Function Interact
struct InteractableBase_eventInteract_Parms
{
	AGASProjectCharacter* InteractCharacter;
};
static FName NAME_AInteractableBase_Interact = FName(TEXT("Interact"));
void AInteractableBase::Interact(AGASProjectCharacter* InteractCharacter)
{
	InteractableBase_eventInteract_Parms Parms;
	Parms.InteractCharacter=InteractCharacter;
	ProcessEvent(FindFunctionChecked(NAME_AInteractableBase_Interact),&Parms);
}
struct Z_Construct_UFunction_AInteractableBase_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactable/InteractableBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableBase_Interact_Statics::NewProp_InteractCharacter = { "InteractCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableBase_eventInteract_Parms, InteractCharacter), Z_Construct_UClass_AGASProjectCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableBase_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableBase_Interact_Statics::NewProp_InteractCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableBase_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableBase_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableBase, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_AInteractableBase_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableBase_Interact_Statics::PropPointers), sizeof(InteractableBase_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableBase_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableBase_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractableBase_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableBase_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableBase_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableBase::execInteract)
{
	P_GET_OBJECT(AGASProjectCharacter,Z_Param_InteractCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_InteractCharacter);
	P_NATIVE_END;
}
// End Class AInteractableBase Function Interact

// Begin Class AInteractableBase
void AInteractableBase::StaticRegisterNativesAInteractableBase()
{
	UClass* Class = AInteractableBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact", &AInteractableBase::execInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractableBase);
UClass* Z_Construct_UClass_AInteractableBase_NoRegister()
{
	return AInteractableBase::StaticClass();
}
struct Z_Construct_UClass_AInteractableBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interactable/InteractableBase.h" },
		{ "ModuleRelativePath", "Public/Interactable/InteractableBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableMesh_MetaData[] = {
		{ "Category", "Interactable Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*We can assume all interatables will have a static mesh*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactable/InteractableBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "We can assume all interatables will have a static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableHelpText_MetaData[] = {
		{ "Category", "Interactable Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*We can assume all interatables will have some help text*/" },
#endif
		{ "ModuleRelativePath", "Public/Interactable/InteractableBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "We can assume all interatables will have some help text" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableMesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InteractableHelpText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractableBase_Interact, "Interact" }, // 1745171399
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableBase_Statics::NewProp_InteractableMesh = { "InteractableMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableBase, InteractableMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableMesh_MetaData), NewProp_InteractableMesh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AInteractableBase_Statics::NewProp_InteractableHelpText = { "InteractableHelpText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableBase, InteractableHelpText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableHelpText_MetaData), NewProp_InteractableHelpText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBase_Statics::NewProp_InteractableMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBase_Statics::NewProp_InteractableHelpText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractableBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableBase_Statics::ClassParams = {
	&AInteractableBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInteractableBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractableBase()
{
	if (!Z_Registration_Info_UClass_AInteractableBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableBase.OuterSingleton, Z_Construct_UClass_AInteractableBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractableBase.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<AInteractableBase>()
{
	return AInteractableBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableBase);
AInteractableBase::~AInteractableBase() {}
// End Class AInteractableBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableBase, AInteractableBase::StaticClass, TEXT("AInteractableBase"), &Z_Registration_Info_UClass_AInteractableBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableBase), 1478674055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h_748184016(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
