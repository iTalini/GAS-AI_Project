// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/AI/GAS_PatrolRoute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_PatrolRoute() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_AGAS_PatrolRoute();
GASPROJECT_API UClass* Z_Construct_UClass_AGAS_PatrolRoute_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Class AGAS_PatrolRoute Function GetSplinePointAsWorldPosition
struct Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition_Statics
{
	struct GAS_PatrolRoute_eventGetSplinePointAsWorldPosition_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/GAS_PatrolRoute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_PatrolRoute_eventGetSplinePointAsWorldPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_PatrolRoute, nullptr, "GetSplinePointAsWorldPosition", nullptr, nullptr, Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition_Statics::GAS_PatrolRoute_eventGetSplinePointAsWorldPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition_Statics::GAS_PatrolRoute_eventGetSplinePointAsWorldPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_PatrolRoute::execGetSplinePointAsWorldPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetSplinePointAsWorldPosition();
	P_NATIVE_END;
}
// End Class AGAS_PatrolRoute Function GetSplinePointAsWorldPosition

// Begin Class AGAS_PatrolRoute Function IncrementPatrolRoute
struct Z_Construct_UFunction_AGAS_PatrolRoute_IncrementPatrolRoute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/GAS_PatrolRoute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_PatrolRoute_IncrementPatrolRoute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_PatrolRoute, nullptr, "IncrementPatrolRoute", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_PatrolRoute_IncrementPatrolRoute_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_PatrolRoute_IncrementPatrolRoute_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGAS_PatrolRoute_IncrementPatrolRoute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_PatrolRoute_IncrementPatrolRoute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_PatrolRoute::execIncrementPatrolRoute)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementPatrolRoute();
	P_NATIVE_END;
}
// End Class AGAS_PatrolRoute Function IncrementPatrolRoute

// Begin Class AGAS_PatrolRoute
void AGAS_PatrolRoute::StaticRegisterNativesAGAS_PatrolRoute()
{
	UClass* Class = AGAS_PatrolRoute::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSplinePointAsWorldPosition", &AGAS_PatrolRoute::execGetSplinePointAsWorldPosition },
		{ "IncrementPatrolRoute", &AGAS_PatrolRoute::execIncrementPatrolRoute },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAS_PatrolRoute);
UClass* Z_Construct_UClass_AGAS_PatrolRoute_NoRegister()
{
	return AGAS_PatrolRoute::StaticClass();
}
struct Z_Construct_UClass_AGAS_PatrolRoute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AI/GAS_PatrolRoute.h" },
		{ "ModuleRelativePath", "Public/AI/GAS_PatrolRoute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolRoute_MetaData[] = {
		{ "Category", "GAS_PatrolRoute" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/GAS_PatrolRoute.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolRoute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGAS_PatrolRoute_GetSplinePointAsWorldPosition, "GetSplinePointAsWorldPosition" }, // 3950628120
		{ &Z_Construct_UFunction_AGAS_PatrolRoute_IncrementPatrolRoute, "IncrementPatrolRoute" }, // 1680385701
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAS_PatrolRoute>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_PatrolRoute_Statics::NewProp_PatrolRoute = { "PatrolRoute", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_PatrolRoute, PatrolRoute), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolRoute_MetaData), NewProp_PatrolRoute_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAS_PatrolRoute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_PatrolRoute_Statics::NewProp_PatrolRoute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_PatrolRoute_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGAS_PatrolRoute_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_PatrolRoute_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAS_PatrolRoute_Statics::ClassParams = {
	&AGAS_PatrolRoute::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGAS_PatrolRoute_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_PatrolRoute_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_PatrolRoute_Statics::Class_MetaDataParams), Z_Construct_UClass_AGAS_PatrolRoute_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGAS_PatrolRoute()
{
	if (!Z_Registration_Info_UClass_AGAS_PatrolRoute.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAS_PatrolRoute.OuterSingleton, Z_Construct_UClass_AGAS_PatrolRoute_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGAS_PatrolRoute.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<AGAS_PatrolRoute>()
{
	return AGAS_PatrolRoute::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGAS_PatrolRoute);
AGAS_PatrolRoute::~AGAS_PatrolRoute() {}
// End Class AGAS_PatrolRoute

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_AI_GAS_PatrolRoute_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGAS_PatrolRoute, AGAS_PatrolRoute::StaticClass, TEXT("AGAS_PatrolRoute"), &Z_Registration_Info_UClass_AGAS_PatrolRoute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAS_PatrolRoute), 2015895438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_AI_GAS_PatrolRoute_h_422388962(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_AI_GAS_PatrolRoute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_AI_GAS_PatrolRoute_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
