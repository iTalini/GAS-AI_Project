// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/Controllers/GAS_BasicEnemyAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_BasicEnemyAIController() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_AGAS_BasicAIController();
GASPROJECT_API UClass* Z_Construct_UClass_AGAS_BasicEnemyAIController();
GASPROJECT_API UClass* Z_Construct_UClass_AGAS_BasicEnemyAIController_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_AGASProjectCharacter_NoRegister();
GASPROJECT_API UEnum* Z_Construct_UEnum_GASProject_EGAS_AIState();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Class AGAS_BasicEnemyAIController Function GetCurrentState
struct Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics
{
	struct GAS_BasicEnemyAIController_eventGetCurrentState_Parms
	{
		EGAS_AIState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controllers/GAS_BasicEnemyAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_BasicEnemyAIController_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_GASProject_EGAS_AIState, METADATA_PARAMS(0, nullptr) }; // 1855668893
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_BasicEnemyAIController, nullptr, "GetCurrentState", nullptr, nullptr, Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics::GAS_BasicEnemyAIController_eventGetCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics::GAS_BasicEnemyAIController_eventGetCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_BasicEnemyAIController::execGetCurrentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGAS_AIState*)Z_Param__Result=P_THIS->GetCurrentState();
	P_NATIVE_END;
}
// End Class AGAS_BasicEnemyAIController Function GetCurrentState

// Begin Class AGAS_BasicEnemyAIController Function TryToSetStateAsAttacking
struct Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics
{
	struct GAS_BasicEnemyAIController_eventTryToSetStateAsAttacking_Parms
	{
		AActor* TargetActor;
		bool bUseLastKnownAttackTarget;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BehaviorTree / EQS Update" },
		{ "CPP_Default_bUseLastKnownAttackTarget", "false" },
		{ "ModuleRelativePath", "Public/Controllers/GAS_BasicEnemyAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static void NewProp_bUseLastKnownAttackTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLastKnownAttackTarget;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_BasicEnemyAIController_eventTryToSetStateAsAttacking_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::NewProp_bUseLastKnownAttackTarget_SetBit(void* Obj)
{
	((GAS_BasicEnemyAIController_eventTryToSetStateAsAttacking_Parms*)Obj)->bUseLastKnownAttackTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::NewProp_bUseLastKnownAttackTarget = { "bUseLastKnownAttackTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_BasicEnemyAIController_eventTryToSetStateAsAttacking_Parms), &Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::NewProp_bUseLastKnownAttackTarget_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_BasicEnemyAIController_eventTryToSetStateAsAttacking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_BasicEnemyAIController_eventTryToSetStateAsAttacking_Parms), &Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::NewProp_bUseLastKnownAttackTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_BasicEnemyAIController, nullptr, "TryToSetStateAsAttacking", nullptr, nullptr, Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::GAS_BasicEnemyAIController_eventTryToSetStateAsAttacking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::GAS_BasicEnemyAIController_eventTryToSetStateAsAttacking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_BasicEnemyAIController::execTryToSetStateAsAttacking)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_UBOOL(Z_Param_bUseLastKnownAttackTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryToSetStateAsAttacking(Z_Param_TargetActor,Z_Param_bUseLastKnownAttackTarget);
	P_NATIVE_END;
}
// End Class AGAS_BasicEnemyAIController Function TryToSetStateAsAttacking

// Begin Class AGAS_BasicEnemyAIController Function TryToSetStateAsDead
struct Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics
{
	struct GAS_BasicEnemyAIController_eventTryToSetStateAsDead_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BehaviorTree / EQS Update" },
		{ "ModuleRelativePath", "Public/Controllers/GAS_BasicEnemyAIController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_BasicEnemyAIController_eventTryToSetStateAsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_BasicEnemyAIController_eventTryToSetStateAsDead_Parms), &Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_BasicEnemyAIController, nullptr, "TryToSetStateAsDead", nullptr, nullptr, Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics::GAS_BasicEnemyAIController_eventTryToSetStateAsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics::GAS_BasicEnemyAIController_eventTryToSetStateAsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_BasicEnemyAIController::execTryToSetStateAsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryToSetStateAsDead();
	P_NATIVE_END;
}
// End Class AGAS_BasicEnemyAIController Function TryToSetStateAsDead

// Begin Class AGAS_BasicEnemyAIController Function TryToSetStateAsInvestigating
struct Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics
{
	struct GAS_BasicEnemyAIController_eventTryToSetStateAsInvestigating_Parms
	{
		FVector Location;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BehaviorTree / EQS Update" },
		{ "ModuleRelativePath", "Public/Controllers/GAS_BasicEnemyAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_BasicEnemyAIController_eventTryToSetStateAsInvestigating_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_BasicEnemyAIController_eventTryToSetStateAsInvestigating_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_BasicEnemyAIController_eventTryToSetStateAsInvestigating_Parms), &Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_BasicEnemyAIController, nullptr, "TryToSetStateAsInvestigating", nullptr, nullptr, Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::GAS_BasicEnemyAIController_eventTryToSetStateAsInvestigating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::GAS_BasicEnemyAIController_eventTryToSetStateAsInvestigating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_BasicEnemyAIController::execTryToSetStateAsInvestigating)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryToSetStateAsInvestigating(Z_Param_Location);
	P_NATIVE_END;
}
// End Class AGAS_BasicEnemyAIController Function TryToSetStateAsInvestigating

// Begin Class AGAS_BasicEnemyAIController Function TryToSetStateAsPassive
struct Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics
{
	struct GAS_BasicEnemyAIController_eventTryToSetStateAsPassive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BehaviorTree / EQS Update" },
		{ "ModuleRelativePath", "Public/Controllers/GAS_BasicEnemyAIController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GAS_BasicEnemyAIController_eventTryToSetStateAsPassive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_BasicEnemyAIController_eventTryToSetStateAsPassive_Parms), &Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_BasicEnemyAIController, nullptr, "TryToSetStateAsPassive", nullptr, nullptr, Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics::GAS_BasicEnemyAIController_eventTryToSetStateAsPassive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics::GAS_BasicEnemyAIController_eventTryToSetStateAsPassive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_BasicEnemyAIController::execTryToSetStateAsPassive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryToSetStateAsPassive();
	P_NATIVE_END;
}
// End Class AGAS_BasicEnemyAIController Function TryToSetStateAsPassive

// Begin Class AGAS_BasicEnemyAIController
void AGAS_BasicEnemyAIController::StaticRegisterNativesAGAS_BasicEnemyAIController()
{
	UClass* Class = AGAS_BasicEnemyAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentState", &AGAS_BasicEnemyAIController::execGetCurrentState },
		{ "TryToSetStateAsAttacking", &AGAS_BasicEnemyAIController::execTryToSetStateAsAttacking },
		{ "TryToSetStateAsDead", &AGAS_BasicEnemyAIController::execTryToSetStateAsDead },
		{ "TryToSetStateAsInvestigating", &AGAS_BasicEnemyAIController::execTryToSetStateAsInvestigating },
		{ "TryToSetStateAsPassive", &AGAS_BasicEnemyAIController::execTryToSetStateAsPassive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAS_BasicEnemyAIController);
UClass* Z_Construct_UClass_AGAS_BasicEnemyAIController_NoRegister()
{
	return AGAS_BasicEnemyAIController::StaticClass();
}
struct Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/GAS_BasicEnemyAIController.h" },
		{ "ModuleRelativePath", "Public/Controllers/GAS_BasicEnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTargetKeyName_MetaData[] = {
		{ "Category", "BehaviorTree / EQS" },
		{ "ModuleRelativePath", "Public/Controllers/GAS_BasicEnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponentKeyName_MetaData[] = {
		{ "Category", "BehaviorTree / EQS" },
		{ "ModuleRelativePath", "Public/Controllers/GAS_BasicEnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateKeyName_MetaData[] = {
		{ "Category", "BehaviorTree / EQS" },
		{ "ModuleRelativePath", "Public/Controllers/GAS_BasicEnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointOfInterestKeyName_MetaData[] = {
		{ "Category", "BehaviorTree / EQS" },
		{ "ModuleRelativePath", "Public/Controllers/GAS_BasicEnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRadiusKeyName_MetaData[] = {
		{ "Category", "BehaviorTree / EQS" },
		{ "ModuleRelativePath", "Public/Controllers/GAS_BasicEnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefendRadiusKeyName_MetaData[] = {
		{ "Category", "BehaviorTree / EQS" },
		{ "ModuleRelativePath", "Public/Controllers/GAS_BasicEnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTarget_MetaData[] = {
		{ "Category", "BehaviorTree / EQS" },
		{ "ModuleRelativePath", "Public/Controllers/GAS_BasicEnemyAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttackTargetKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AbilitySystemComponentKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StateKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PointOfInterestKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttackRadiusKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefendRadiusKeyName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGAS_BasicEnemyAIController_GetCurrentState, "GetCurrentState" }, // 2396045473
		{ &Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsAttacking, "TryToSetStateAsAttacking" }, // 107818681
		{ &Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsDead, "TryToSetStateAsDead" }, // 2932412981
		{ &Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsInvestigating, "TryToSetStateAsInvestigating" }, // 2836906033
		{ &Z_Construct_UFunction_AGAS_BasicEnemyAIController_TryToSetStateAsPassive, "TryToSetStateAsPassive" }, // 1939090890
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAS_BasicEnemyAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::NewProp_AttackTargetKeyName = { "AttackTargetKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_BasicEnemyAIController, AttackTargetKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTargetKeyName_MetaData), NewProp_AttackTargetKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::NewProp_AbilitySystemComponentKeyName = { "AbilitySystemComponentKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_BasicEnemyAIController, AbilitySystemComponentKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponentKeyName_MetaData), NewProp_AbilitySystemComponentKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::NewProp_StateKeyName = { "StateKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_BasicEnemyAIController, StateKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateKeyName_MetaData), NewProp_StateKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::NewProp_PointOfInterestKeyName = { "PointOfInterestKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_BasicEnemyAIController, PointOfInterestKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointOfInterestKeyName_MetaData), NewProp_PointOfInterestKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::NewProp_AttackRadiusKeyName = { "AttackRadiusKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_BasicEnemyAIController, AttackRadiusKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRadiusKeyName_MetaData), NewProp_AttackRadiusKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::NewProp_DefendRadiusKeyName = { "DefendRadiusKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_BasicEnemyAIController, DefendRadiusKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefendRadiusKeyName_MetaData), NewProp_DefendRadiusKeyName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::NewProp_AttackTarget = { "AttackTarget", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_BasicEnemyAIController, AttackTarget), Z_Construct_UClass_AGASProjectCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTarget_MetaData), NewProp_AttackTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::NewProp_AttackTargetKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::NewProp_AbilitySystemComponentKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::NewProp_StateKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::NewProp_PointOfInterestKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::NewProp_AttackRadiusKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::NewProp_DefendRadiusKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::NewProp_AttackTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGAS_BasicAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::ClassParams = {
	&AGAS_BasicEnemyAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGAS_BasicEnemyAIController()
{
	if (!Z_Registration_Info_UClass_AGAS_BasicEnemyAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAS_BasicEnemyAIController.OuterSingleton, Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGAS_BasicEnemyAIController.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<AGAS_BasicEnemyAIController>()
{
	return AGAS_BasicEnemyAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGAS_BasicEnemyAIController);
AGAS_BasicEnemyAIController::~AGAS_BasicEnemyAIController() {}
// End Class AGAS_BasicEnemyAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicEnemyAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGAS_BasicEnemyAIController, AGAS_BasicEnemyAIController::StaticClass, TEXT("AGAS_BasicEnemyAIController"), &Z_Registration_Info_UClass_AGAS_BasicEnemyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAS_BasicEnemyAIController), 1172129581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicEnemyAIController_h_2574567653(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicEnemyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicEnemyAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
