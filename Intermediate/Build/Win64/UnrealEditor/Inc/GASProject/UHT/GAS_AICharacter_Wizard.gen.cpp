// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/Character/GAS_AICharacter_Wizard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_AICharacter_Wizard() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_AGAS_AICharacter();
GASPROJECT_API UClass* Z_Construct_UClass_AGAS_AICharacter_Wizard();
GASPROJECT_API UClass* Z_Construct_UClass_AGAS_AICharacter_Wizard_NoRegister();
GASPROJECT_API UFunction* Z_Construct_UDelegateFunction_GASProject_OnTeleportEnd__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Delegate FOnTeleportEnd
struct Z_Construct_UDelegateFunction_GASProject_OnTeleportEnd__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter_Wizard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASProject_OnTeleportEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASProject, nullptr, "OnTeleportEnd__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASProject_OnTeleportEnd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASProject_OnTeleportEnd__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GASProject_OnTeleportEnd__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASProject_OnTeleportEnd__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTeleportEnd_DelegateWrapper(const FMulticastScriptDelegate& OnTeleportEnd)
{
	OnTeleportEnd.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnTeleportEnd

// Begin Class AGAS_AICharacter_Wizard Function CallOnTeleportEndDelegate
struct Z_Construct_UFunction_AGAS_AICharacter_Wizard_CallOnTeleportEndDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter_Wizard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_Wizard_CallOnTeleportEndDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter_Wizard, nullptr, "CallOnTeleportEndDelegate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_CallOnTeleportEndDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_Wizard_CallOnTeleportEndDelegate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGAS_AICharacter_Wizard_CallOnTeleportEndDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_Wizard_CallOnTeleportEndDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter_Wizard::execCallOnTeleportEndDelegate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallOnTeleportEndDelegate();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter_Wizard Function CallOnTeleportEndDelegate

// Begin Class AGAS_AICharacter_Wizard Function GetDynMaterial
struct Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial_Statics
{
	struct GAS_AICharacter_Wizard_eventGetDynMaterial_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter_Wizard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_Wizard_eventGetDynMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter_Wizard, nullptr, "GetDynMaterial", nullptr, nullptr, Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial_Statics::GAS_AICharacter_Wizard_eventGetDynMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial_Statics::GAS_AICharacter_Wizard_eventGetDynMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter_Wizard::execGetDynMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynMaterial();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter_Wizard Function GetDynMaterial

// Begin Class AGAS_AICharacter_Wizard Function GetTeleportationPoint
struct Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint_Statics
{
	struct GAS_AICharacter_Wizard_eventGetTeleportationPoint_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter_Wizard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_Wizard_eventGetTeleportationPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter_Wizard, nullptr, "GetTeleportationPoint", nullptr, nullptr, Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint_Statics::GAS_AICharacter_Wizard_eventGetTeleportationPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint_Statics::GAS_AICharacter_Wizard_eventGetTeleportationPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter_Wizard::execGetTeleportationPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetTeleportationPoint();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter_Wizard Function GetTeleportationPoint

// Begin Class AGAS_AICharacter_Wizard Function MakeWizardInvisible
struct Z_Construct_UFunction_AGAS_AICharacter_Wizard_MakeWizardInvisible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter_Wizard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_Wizard_MakeWizardInvisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter_Wizard, nullptr, "MakeWizardInvisible", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_MakeWizardInvisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_Wizard_MakeWizardInvisible_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGAS_AICharacter_Wizard_MakeWizardInvisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_Wizard_MakeWizardInvisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter_Wizard::execMakeWizardInvisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MakeWizardInvisible();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter_Wizard Function MakeWizardInvisible

// Begin Class AGAS_AICharacter_Wizard Function MakeWizardVisible
struct Z_Construct_UFunction_AGAS_AICharacter_Wizard_MakeWizardVisible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter_Wizard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_Wizard_MakeWizardVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter_Wizard, nullptr, "MakeWizardVisible", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_MakeWizardVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_Wizard_MakeWizardVisible_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGAS_AICharacter_Wizard_MakeWizardVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_Wizard_MakeWizardVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter_Wizard::execMakeWizardVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MakeWizardVisible();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter_Wizard Function MakeWizardVisible

// Begin Class AGAS_AICharacter_Wizard Function SetTeleportationPoint
struct Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint_Statics
{
	struct GAS_AICharacter_Wizard_eventSetTeleportationPoint_Parms
	{
		FVector NewPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter_Wizard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint_Statics::NewProp_NewPoint = { "NewPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_Wizard_eventSetTeleportationPoint_Parms, NewPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint_Statics::NewProp_NewPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter_Wizard, nullptr, "SetTeleportationPoint", nullptr, nullptr, Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint_Statics::GAS_AICharacter_Wizard_eventSetTeleportationPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint_Statics::GAS_AICharacter_Wizard_eventSetTeleportationPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter_Wizard::execSetTeleportationPoint)
{
	P_GET_STRUCT(FVector,Z_Param_NewPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeleportationPoint(Z_Param_NewPoint);
	P_NATIVE_END;
}
// End Class AGAS_AICharacter_Wizard Function SetTeleportationPoint

// Begin Class AGAS_AICharacter_Wizard Function TimelineCallback
struct Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback_Statics
{
	struct GAS_AICharacter_Wizard_eventTimelineCallback_Parms
	{
		float val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter_Wizard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_Wizard_eventTimelineCallback_Parms, val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback_Statics::NewProp_val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter_Wizard, nullptr, "TimelineCallback", nullptr, nullptr, Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback_Statics::GAS_AICharacter_Wizard_eventTimelineCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback_Statics::GAS_AICharacter_Wizard_eventTimelineCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter_Wizard::execTimelineCallback)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimelineCallback(Z_Param_val);
	P_NATIVE_END;
}
// End Class AGAS_AICharacter_Wizard Function TimelineCallback

// Begin Class AGAS_AICharacter_Wizard Function TimelineFinishedCallback
struct Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineFinishedCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter_Wizard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineFinishedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter_Wizard, nullptr, "TimelineFinishedCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineFinishedCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineFinishedCallback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineFinishedCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineFinishedCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter_Wizard::execTimelineFinishedCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimelineFinishedCallback();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter_Wizard Function TimelineFinishedCallback

// Begin Class AGAS_AICharacter_Wizard
void AGAS_AICharacter_Wizard::StaticRegisterNativesAGAS_AICharacter_Wizard()
{
	UClass* Class = AGAS_AICharacter_Wizard::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallOnTeleportEndDelegate", &AGAS_AICharacter_Wizard::execCallOnTeleportEndDelegate },
		{ "GetDynMaterial", &AGAS_AICharacter_Wizard::execGetDynMaterial },
		{ "GetTeleportationPoint", &AGAS_AICharacter_Wizard::execGetTeleportationPoint },
		{ "MakeWizardInvisible", &AGAS_AICharacter_Wizard::execMakeWizardInvisible },
		{ "MakeWizardVisible", &AGAS_AICharacter_Wizard::execMakeWizardVisible },
		{ "SetTeleportationPoint", &AGAS_AICharacter_Wizard::execSetTeleportationPoint },
		{ "TimelineCallback", &AGAS_AICharacter_Wizard::execTimelineCallback },
		{ "TimelineFinishedCallback", &AGAS_AICharacter_Wizard::execTimelineFinishedCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAS_AICharacter_Wizard);
UClass* Z_Construct_UClass_AGAS_AICharacter_Wizard_NoRegister()
{
	return AGAS_AICharacter_Wizard::StaticClass();
}
struct Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/GAS_AICharacter_Wizard.h" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter_Wizard.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeleportEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter_Wizard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityTimeline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter_Wizard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter_Wizard.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineLength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter_Wizard.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeleportEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisibilityTimeline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimelineLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGAS_AICharacter_Wizard_CallOnTeleportEndDelegate, "CallOnTeleportEndDelegate" }, // 2554118047
		{ &Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetDynMaterial, "GetDynMaterial" }, // 2144001840
		{ &Z_Construct_UFunction_AGAS_AICharacter_Wizard_GetTeleportationPoint, "GetTeleportationPoint" }, // 462946412
		{ &Z_Construct_UFunction_AGAS_AICharacter_Wizard_MakeWizardInvisible, "MakeWizardInvisible" }, // 2964913366
		{ &Z_Construct_UFunction_AGAS_AICharacter_Wizard_MakeWizardVisible, "MakeWizardVisible" }, // 3934303578
		{ &Z_Construct_UFunction_AGAS_AICharacter_Wizard_SetTeleportationPoint, "SetTeleportationPoint" }, // 3043828393
		{ &Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineCallback, "TimelineCallback" }, // 4135479186
		{ &Z_Construct_UFunction_AGAS_AICharacter_Wizard_TimelineFinishedCallback, "TimelineFinishedCallback" }, // 982943373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAS_AICharacter_Wizard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::NewProp_OnTeleportEnd = { "OnTeleportEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter_Wizard, OnTeleportEnd), Z_Construct_UDelegateFunction_GASProject_OnTeleportEnd__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeleportEnd_MetaData), NewProp_OnTeleportEnd_MetaData) }; // 3878107837
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::NewProp_VisibilityTimeline = { "VisibilityTimeline", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter_Wizard, VisibilityTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityTimeline_MetaData), NewProp_VisibilityTimeline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter_Wizard, FloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatCurve_MetaData), NewProp_FloatCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::NewProp_TimelineLength = { "TimelineLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter_Wizard, TimelineLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineLength_MetaData), NewProp_TimelineLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::NewProp_OnTeleportEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::NewProp_VisibilityTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::NewProp_FloatCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::NewProp_TimelineLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGAS_AICharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::ClassParams = {
	&AGAS_AICharacter_Wizard::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::Class_MetaDataParams), Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGAS_AICharacter_Wizard()
{
	if (!Z_Registration_Info_UClass_AGAS_AICharacter_Wizard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAS_AICharacter_Wizard.OuterSingleton, Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGAS_AICharacter_Wizard.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<AGAS_AICharacter_Wizard>()
{
	return AGAS_AICharacter_Wizard::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGAS_AICharacter_Wizard);
AGAS_AICharacter_Wizard::~AGAS_AICharacter_Wizard() {}
// End Class AGAS_AICharacter_Wizard

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_Wizard_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGAS_AICharacter_Wizard, AGAS_AICharacter_Wizard::StaticClass, TEXT("AGAS_AICharacter_Wizard"), &Z_Registration_Info_UClass_AGAS_AICharacter_Wizard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAS_AICharacter_Wizard), 983005557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_Wizard_h_1334739191(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_Wizard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_Wizard_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
