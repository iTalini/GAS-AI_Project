// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/Mode/GASProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GASPROJECT_API UClass* Z_Construct_UClass_AGASProjectGameMode();
GASPROJECT_API UClass* Z_Construct_UClass_AGASProjectGameMode_NoRegister();
GASPROJECT_API UEnum* Z_Construct_UEnum_GASProject_EHUDState();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Class AGASProjectGameMode Function SetHUDState
struct Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics
{
	struct GASProjectGameMode_eventSetHUDState_Parms
	{
		EHUDState NewHUDState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/Mode/GASProjectGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewHUDState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewHUDState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics::NewProp_NewHUDState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics::NewProp_NewHUDState = { "NewHUDState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectGameMode_eventSetHUDState_Parms, NewHUDState), Z_Construct_UEnum_GASProject_EHUDState, METADATA_PARAMS(0, nullptr) }; // 2937070439
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics::NewProp_NewHUDState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics::NewProp_NewHUDState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectGameMode, nullptr, "SetHUDState", nullptr, nullptr, Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics::GASProjectGameMode_eventSetHUDState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics::GASProjectGameMode_eventSetHUDState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectGameMode_SetHUDState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectGameMode_SetHUDState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectGameMode::execSetHUDState)
{
	P_GET_ENUM(EHUDState,Z_Param_NewHUDState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHUDState(EHUDState(Z_Param_NewHUDState));
	P_NATIVE_END;
}
// End Class AGASProjectGameMode Function SetHUDState

// Begin Class AGASProjectGameMode
void AGASProjectGameMode::StaticRegisterNativesAGASProjectGameMode()
{
	UClass* Class = AGASProjectGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHUDState", &AGASProjectGameMode::execSetHUDState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGASProjectGameMode);
UClass* Z_Construct_UClass_AGASProjectGameMode_NoRegister()
{
	return AGASProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_AGASProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Mode/GASProjectGameMode.h" },
		{ "ModuleRelativePath", "Public/Mode/GASProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGASProjectGameMode_SetHUDState, "SetHUDState" }, // 2661687500
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGASProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGASProjectGameMode_Statics::ClassParams = {
	&AGASProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGASProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGASProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AGASProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGASProjectGameMode.OuterSingleton, Z_Construct_UClass_AGASProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGASProjectGameMode.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<AGASProjectGameMode>()
{
	return AGASProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGASProjectGameMode);
AGASProjectGameMode::~AGASProjectGameMode() {}
// End Class AGASProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Mode_GASProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGASProjectGameMode, AGASProjectGameMode::StaticClass, TEXT("AGASProjectGameMode"), &Z_Registration_Info_UClass_AGASProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASProjectGameMode), 4187321529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Mode_GASProjectGameMode_h_3829545614(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Mode_GASProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Mode_GASProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
