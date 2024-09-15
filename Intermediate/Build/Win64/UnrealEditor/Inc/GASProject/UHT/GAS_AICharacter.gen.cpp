// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/Character/GAS_AICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_AICharacter() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_AGAS_AICharacter();
GASPROJECT_API UClass* Z_Construct_UClass_AGAS_AICharacter_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_AGAS_BasicEnemyAIController_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_AGAS_PatrolRoute_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_AGASProjectCharacter();
GASPROJECT_API UEnum* Z_Construct_UEnum_GASProject_EGAS_EnemyMovementSpeed();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Class AGAS_AICharacter Function CheckHealthBarVisibility
struct Z_Construct_UFunction_AGAS_AICharacter_CheckHealthBarVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_CheckHealthBarVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter, nullptr, "CheckHealthBarVisibility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_CheckHealthBarVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_CheckHealthBarVisibility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGAS_AICharacter_CheckHealthBarVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_CheckHealthBarVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter::execCheckHealthBarVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckHealthBarVisibility();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter Function CheckHealthBarVisibility

// Begin Class AGAS_AICharacter Function DestroyWeapon
struct Z_Construct_UFunction_AGAS_AICharacter_DestroyWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_DestroyWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter, nullptr, "DestroyWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_DestroyWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_DestroyWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGAS_AICharacter_DestroyWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_DestroyWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter::execDestroyWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyWeapon();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter Function DestroyWeapon

// Begin Class AGAS_AICharacter Function GetAIC_Enemy
struct Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy_Statics
{
	struct GAS_AICharacter_eventGetAIC_Enemy_Parms
	{
		AGAS_BasicEnemyAIController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_eventGetAIC_Enemy_Parms, ReturnValue), Z_Construct_UClass_AGAS_BasicEnemyAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter, nullptr, "GetAIC_Enemy", nullptr, nullptr, Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy_Statics::GAS_AICharacter_eventGetAIC_Enemy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy_Statics::GAS_AICharacter_eventGetAIC_Enemy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter::execGetAIC_Enemy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGAS_BasicEnemyAIController**)Z_Param__Result=P_THIS->GetAIC_Enemy();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter Function GetAIC_Enemy

// Begin Class AGAS_AICharacter Function GetAttackRadius
struct Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius_Statics
{
	struct GAS_AICharacter_eventGetAttackRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_eventGetAttackRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter, nullptr, "GetAttackRadius", nullptr, nullptr, Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius_Statics::GAS_AICharacter_eventGetAttackRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius_Statics::GAS_AICharacter_eventGetAttackRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter::execGetAttackRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttackRadius();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter Function GetAttackRadius

// Begin Class AGAS_AICharacter Function GetBehaviorTree
struct Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree_Statics
{
	struct GAS_AICharacter_eventGetBehaviorTree_Parms
	{
		UBehaviorTree* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_eventGetBehaviorTree_Parms, ReturnValue), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter, nullptr, "GetBehaviorTree", nullptr, nullptr, Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree_Statics::GAS_AICharacter_eventGetBehaviorTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree_Statics::GAS_AICharacter_eventGetBehaviorTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter::execGetBehaviorTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBehaviorTree**)Z_Param__Result=P_THIS->GetBehaviorTree();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter Function GetBehaviorTree

// Begin Class AGAS_AICharacter Function GetDefendRadius
struct Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius_Statics
{
	struct GAS_AICharacter_eventGetDefendRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_eventGetDefendRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter, nullptr, "GetDefendRadius", nullptr, nullptr, Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius_Statics::GAS_AICharacter_eventGetDefendRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius_Statics::GAS_AICharacter_eventGetDefendRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter::execGetDefendRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDefendRadius();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter Function GetDefendRadius

// Begin Class AGAS_AICharacter Function GetWeaponActor
struct Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor_Statics
{
	struct GAS_AICharacter_eventGetWeaponActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_eventGetWeaponActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter, nullptr, "GetWeaponActor", nullptr, nullptr, Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor_Statics::GAS_AICharacter_eventGetWeaponActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor_Statics::GAS_AICharacter_eventGetWeaponActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter::execGetWeaponActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetWeaponActor();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter Function GetWeaponActor

// Begin Class AGAS_AICharacter Function OnDeath
static FName NAME_AGAS_AICharacter_OnDeath = FName(TEXT("OnDeath"));
void AGAS_AICharacter::OnDeath()
{
	ProcessEvent(FindFunctionChecked(NAME_AGAS_AICharacter_OnDeath),NULL);
}
struct Z_Construct_UFunction_AGAS_AICharacter_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Death" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGAS_AICharacter_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter::execOnDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeath_Implementation();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter Function OnDeath

// Begin Class AGAS_AICharacter Function OnMontageBlendingOut
struct Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics
{
	struct GAS_AICharacter_eventOnMontageBlendingOut_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_eventOnMontageBlendingOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((GAS_AICharacter_eventOnMontageBlendingOut_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_AICharacter_eventOnMontageBlendingOut_Parms), &Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter, nullptr, "OnMontageBlendingOut", nullptr, nullptr, Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::GAS_AICharacter_eventOnMontageBlendingOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::GAS_AICharacter_eventOnMontageBlendingOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter::execOnMontageBlendingOut)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class AGAS_AICharacter Function OnMontageBlendingOut

// Begin Class AGAS_AICharacter Function OnMontageEnded
struct Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics
{
	struct GAS_AICharacter_eventOnMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((GAS_AICharacter_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GAS_AICharacter_eventOnMontageEnded_Parms), &Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter, nullptr, "OnMontageEnded", nullptr, nullptr, Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::GAS_AICharacter_eventOnMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::GAS_AICharacter_eventOnMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter::execOnMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class AGAS_AICharacter Function OnMontageEnded

// Begin Class AGAS_AICharacter Function SetAttackRadius
struct Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius_Statics
{
	struct GAS_AICharacter_eventSetAttackRadius_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_eventSetAttackRadius_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter, nullptr, "SetAttackRadius", nullptr, nullptr, Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius_Statics::GAS_AICharacter_eventSetAttackRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius_Statics::GAS_AICharacter_eventSetAttackRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter::execSetAttackRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttackRadius(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class AGAS_AICharacter Function SetAttackRadius

// Begin Class AGAS_AICharacter Function SetDefendRadius
struct Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius_Statics
{
	struct GAS_AICharacter_eventSetDefendRadius_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_eventSetDefendRadius_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter, nullptr, "SetDefendRadius", nullptr, nullptr, Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius_Statics::GAS_AICharacter_eventSetDefendRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius_Statics::GAS_AICharacter_eventSetDefendRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter::execSetDefendRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefendRadius(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class AGAS_AICharacter Function SetDefendRadius

// Begin Class AGAS_AICharacter Function SetMovementSpeedType
struct Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics
{
	struct GAS_AICharacter_eventSetMovementSpeedType_Parms
	{
		EGAS_EnemyMovementSpeed MovementType;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_eventSetMovementSpeedType_Parms, MovementType), Z_Construct_UEnum_GASProject_EGAS_EnemyMovementSpeed, METADATA_PARAMS(0, nullptr) }; // 2146356130
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_AICharacter_eventSetMovementSpeedType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::NewProp_MovementType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::NewProp_MovementType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter, nullptr, "SetMovementSpeedType", nullptr, nullptr, Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::GAS_AICharacter_eventSetMovementSpeedType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::GAS_AICharacter_eventSetMovementSpeedType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter::execSetMovementSpeedType)
{
	P_GET_ENUM(EGAS_EnemyMovementSpeed,Z_Param_MovementType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->SetMovementSpeedType(EGAS_EnemyMovementSpeed(Z_Param_MovementType));
	P_NATIVE_END;
}
// End Class AGAS_AICharacter Function SetMovementSpeedType

// Begin Class AGAS_AICharacter Function SpawnWeapon
struct Z_Construct_UFunction_AGAS_AICharacter_SpawnWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Weapon*/" },
#endif
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_AICharacter_SpawnWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_AICharacter, nullptr, "SpawnWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_AICharacter_SpawnWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGAS_AICharacter_SpawnWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGAS_AICharacter_SpawnWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_AICharacter_SpawnWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGAS_AICharacter::execSpawnWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnWeapon();
	P_NATIVE_END;
}
// End Class AGAS_AICharacter Function SpawnWeapon

// Begin Class AGAS_AICharacter
void AGAS_AICharacter::StaticRegisterNativesAGAS_AICharacter()
{
	UClass* Class = AGAS_AICharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckHealthBarVisibility", &AGAS_AICharacter::execCheckHealthBarVisibility },
		{ "DestroyWeapon", &AGAS_AICharacter::execDestroyWeapon },
		{ "GetAIC_Enemy", &AGAS_AICharacter::execGetAIC_Enemy },
		{ "GetAttackRadius", &AGAS_AICharacter::execGetAttackRadius },
		{ "GetBehaviorTree", &AGAS_AICharacter::execGetBehaviorTree },
		{ "GetDefendRadius", &AGAS_AICharacter::execGetDefendRadius },
		{ "GetWeaponActor", &AGAS_AICharacter::execGetWeaponActor },
		{ "OnDeath", &AGAS_AICharacter::execOnDeath },
		{ "OnMontageBlendingOut", &AGAS_AICharacter::execOnMontageBlendingOut },
		{ "OnMontageEnded", &AGAS_AICharacter::execOnMontageEnded },
		{ "SetAttackRadius", &AGAS_AICharacter::execSetAttackRadius },
		{ "SetDefendRadius", &AGAS_AICharacter::execSetDefendRadius },
		{ "SetMovementSpeedType", &AGAS_AICharacter::execSetMovementSpeedType },
		{ "SpawnWeapon", &AGAS_AICharacter::execSpawnWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAS_AICharacter);
UClass* Z_Construct_UClass_AGAS_AICharacter_NoRegister()
{
	return AGAS_AICharacter::StaticClass();
}
struct Z_Construct_UClass_AGAS_AICharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/GAS_AICharacter.h" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolRoute_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GAS_AICharacter" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoggingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfPlayersWhoSeesCharacter_MetaData[] = {
		{ "Category", "Statistic" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BehaviorTree / EQS" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BehaviorTree / EQS" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefendRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BehaviorTree / EQS" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Death Animation*/" },
#endif
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Death Animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponActorClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Weapon*/" },
#endif
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Character/GAS_AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolRoute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkingSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JoggingSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintingSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountOfPlayersWhoSeesCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefendRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathAnimation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponActorClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponSocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGAS_AICharacter_CheckHealthBarVisibility, "CheckHealthBarVisibility" }, // 4097600316
		{ &Z_Construct_UFunction_AGAS_AICharacter_DestroyWeapon, "DestroyWeapon" }, // 3964817161
		{ &Z_Construct_UFunction_AGAS_AICharacter_GetAIC_Enemy, "GetAIC_Enemy" }, // 608792060
		{ &Z_Construct_UFunction_AGAS_AICharacter_GetAttackRadius, "GetAttackRadius" }, // 2089933531
		{ &Z_Construct_UFunction_AGAS_AICharacter_GetBehaviorTree, "GetBehaviorTree" }, // 789201642
		{ &Z_Construct_UFunction_AGAS_AICharacter_GetDefendRadius, "GetDefendRadius" }, // 1599953521
		{ &Z_Construct_UFunction_AGAS_AICharacter_GetWeaponActor, "GetWeaponActor" }, // 756826041
		{ &Z_Construct_UFunction_AGAS_AICharacter_OnDeath, "OnDeath" }, // 1430462392
		{ &Z_Construct_UFunction_AGAS_AICharacter_OnMontageBlendingOut, "OnMontageBlendingOut" }, // 341499672
		{ &Z_Construct_UFunction_AGAS_AICharacter_OnMontageEnded, "OnMontageEnded" }, // 1517074669
		{ &Z_Construct_UFunction_AGAS_AICharacter_SetAttackRadius, "SetAttackRadius" }, // 336021715
		{ &Z_Construct_UFunction_AGAS_AICharacter_SetDefendRadius, "SetDefendRadius" }, // 2505568703
		{ &Z_Construct_UFunction_AGAS_AICharacter_SetMovementSpeedType, "SetMovementSpeedType" }, // 4258545279
		{ &Z_Construct_UFunction_AGAS_AICharacter_SpawnWeapon, "SpawnWeapon" }, // 3814115327
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAS_AICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_PatrolRoute = { "PatrolRoute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter, PatrolRoute), Z_Construct_UClass_AGAS_PatrolRoute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolRoute_MetaData), NewProp_PatrolRoute_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_IdleSpeed = { "IdleSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter, IdleSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleSpeed_MetaData), NewProp_IdleSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_WalkingSpeed = { "WalkingSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter, WalkingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkingSpeed_MetaData), NewProp_WalkingSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_JoggingSpeed = { "JoggingSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter, JoggingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoggingSpeed_MetaData), NewProp_JoggingSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_SprintingSpeed = { "SprintingSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter, SprintingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintingSpeed_MetaData), NewProp_SprintingSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_AmountOfPlayersWhoSeesCharacter = { "AmountOfPlayersWhoSeesCharacter", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter, AmountOfPlayersWhoSeesCharacter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountOfPlayersWhoSeesCharacter_MetaData), NewProp_AmountOfPlayersWhoSeesCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0124080000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_AttackRadius = { "AttackRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter, AttackRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRadius_MetaData), NewProp_AttackRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_DefendRadius = { "DefendRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter, DefendRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefendRadius_MetaData), NewProp_DefendRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_DeathAnimation = { "DeathAnimation", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter, DeathAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathAnimation_MetaData), NewProp_DeathAnimation_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_WeaponActorClass = { "WeaponActorClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter, WeaponActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponActorClass_MetaData), NewProp_WeaponActorClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_WeaponSocketName = { "WeaponSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAS_AICharacter, WeaponSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponSocketName_MetaData), NewProp_WeaponSocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAS_AICharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_PatrolRoute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_IdleSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_WalkingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_JoggingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_SprintingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_AmountOfPlayersWhoSeesCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_AttackRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_DefendRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_DeathAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_WeaponActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_AICharacter_Statics::NewProp_WeaponSocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_AICharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGAS_AICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGASProjectCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_AICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAS_AICharacter_Statics::ClassParams = {
	&AGAS_AICharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGAS_AICharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_AICharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_AICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGAS_AICharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGAS_AICharacter()
{
	if (!Z_Registration_Info_UClass_AGAS_AICharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAS_AICharacter.OuterSingleton, Z_Construct_UClass_AGAS_AICharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGAS_AICharacter.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<AGAS_AICharacter>()
{
	return AGAS_AICharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGAS_AICharacter);
AGAS_AICharacter::~AGAS_AICharacter() {}
// End Class AGAS_AICharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGAS_AICharacter, AGAS_AICharacter::StaticClass, TEXT("AGAS_AICharacter"), &Z_Registration_Info_UClass_AGAS_AICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAS_AICharacter), 82115151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h_3665312955(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
