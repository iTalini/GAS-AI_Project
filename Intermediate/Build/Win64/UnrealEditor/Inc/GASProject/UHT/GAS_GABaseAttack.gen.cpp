// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/GAS/GAS_GABaseAttack.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_GABaseAttack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GASPROJECT_API UClass* Z_Construct_UClass_AGASProjectCharacter_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_UGAS_GABaseAbility();
GASPROJECT_API UClass* Z_Construct_UClass_UGAS_GABaseAttack();
GASPROJECT_API UClass* Z_Construct_UClass_UGAS_GABaseAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Class UGAS_GABaseAttack Function AddAbilitieCue
static FName NAME_UGAS_GABaseAttack_AddAbilitieCue = FName(TEXT("AddAbilitieCue"));
void UGAS_GABaseAttack::AddAbilitieCue()
{
	ProcessEvent(FindFunctionChecked(NAME_UGAS_GABaseAttack_AddAbilitieCue),NULL);
}
struct Z_Construct_UFunction_UGAS_GABaseAttack_AddAbilitieCue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_AddAbilitieCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "AddAbilitieCue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_AddAbilitieCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_AddAbilitieCue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_AddAbilitieCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_AddAbilitieCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGAS_GABaseAttack Function AddAbilitieCue

// Begin Class UGAS_GABaseAttack Function AssignTagsSet
struct Z_Construct_UFunction_UGAS_GABaseAttack_AssignTagsSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_AssignTagsSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "AssignTagsSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_AssignTagsSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_AssignTagsSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_AssignTagsSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_AssignTagsSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAttack::execAssignTagsSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignTagsSet();
	P_NATIVE_END;
}
// End Class UGAS_GABaseAttack Function AssignTagsSet

// Begin Class UGAS_GABaseAttack Function GetAbilityOwner
struct Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner_Statics
{
	struct GAS_GABaseAttack_eventGetAbilityOwner_Parms
	{
		AGASProjectCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventGetAbilityOwner_Parms, ReturnValue), Z_Construct_UClass_AGASProjectCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "GetAbilityOwner", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner_Statics::GAS_GABaseAttack_eventGetAbilityOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner_Statics::GAS_GABaseAttack_eventGetAbilityOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAttack::execGetAbilityOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGASProjectCharacter**)Z_Param__Result=P_THIS->GetAbilityOwner();
	P_NATIVE_END;
}
// End Class UGAS_GABaseAttack Function GetAbilityOwner

// Begin Class UGAS_GABaseAttack Function GetAttackAnimMontage
struct Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage_Statics
{
	struct GAS_GABaseAttack_eventGetAttackAnimMontage_Parms
	{
		const UAnimMontage* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventGetAttackAnimMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "GetAttackAnimMontage", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage_Statics::GAS_GABaseAttack_eventGetAttackAnimMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage_Statics::GAS_GABaseAttack_eventGetAttackAnimMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAttack::execGetAttackAnimMontage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UAnimMontage**)Z_Param__Result=P_THIS->GetAttackAnimMontage();
	P_NATIVE_END;
}
// End Class UGAS_GABaseAttack Function GetAttackAnimMontage

// Begin Class UGAS_GABaseAttack Function GetDamage
struct Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage_Statics
{
	struct GAS_GABaseAttack_eventGetDamage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventGetDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "GetDamage", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage_Statics::GAS_GABaseAttack_eventGetDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage_Statics::GAS_GABaseAttack_eventGetDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAttack::execGetDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDamage();
	P_NATIVE_END;
}
// End Class UGAS_GABaseAttack Function GetDamage

// Begin Class UGAS_GABaseAttack Function GetDashAnimMontage
struct Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage_Statics
{
	struct GAS_GABaseAttack_eventGetDashAnimMontage_Parms
	{
		const UAnimMontage* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventGetDashAnimMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "GetDashAnimMontage", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage_Statics::GAS_GABaseAttack_eventGetDashAnimMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage_Statics::GAS_GABaseAttack_eventGetDashAnimMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAttack::execGetDashAnimMontage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UAnimMontage**)Z_Param__Result=P_THIS->GetDashAnimMontage();
	P_NATIVE_END;
}
// End Class UGAS_GABaseAttack Function GetDashAnimMontage

// Begin Class UGAS_GABaseAttack Function GetDealDamageLevel
struct Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel_Statics
{
	struct GAS_GABaseAttack_eventGetDealDamageLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventGetDealDamageLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "GetDealDamageLevel", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel_Statics::GAS_GABaseAttack_eventGetDealDamageLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel_Statics::GAS_GABaseAttack_eventGetDealDamageLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAttack::execGetDealDamageLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDealDamageLevel();
	P_NATIVE_END;
}
// End Class UGAS_GABaseAttack Function GetDealDamageLevel

// Begin Class UGAS_GABaseAttack Function GetForceStrength
struct Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength_Statics
{
	struct GAS_GABaseAttack_eventGetForceStrength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventGetForceStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "GetForceStrength", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength_Statics::GAS_GABaseAttack_eventGetForceStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength_Statics::GAS_GABaseAttack_eventGetForceStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAttack::execGetForceStrength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetForceStrength();
	P_NATIVE_END;
}
// End Class UGAS_GABaseAttack Function GetForceStrength

// Begin Class UGAS_GABaseAttack Function OnCancelled
struct Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics
{
	struct GAS_GABaseAttack_eventOnCancelled_Parms
	{
		FGameplayTag EventTag;
		FGameplayEventData EventData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventOnCancelled_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventOnCancelled_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 2811136703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics::NewProp_EventData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "OnCancelled", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics::GAS_GABaseAttack_eventOnCancelled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics::GAS_GABaseAttack_eventOnCancelled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAttack::execOnCancelled)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCancelled(Z_Param_EventTag,Z_Param_EventData);
	P_NATIVE_END;
}
// End Class UGAS_GABaseAttack Function OnCancelled

// Begin Class UGAS_GABaseAttack Function OnCompleted
struct Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics
{
	struct GAS_GABaseAttack_eventOnCompleted_Parms
	{
		FGameplayTag EventTag;
		FGameplayEventData EventData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventOnCompleted_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventOnCompleted_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 2811136703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics::NewProp_EventData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "OnCompleted", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics::GAS_GABaseAttack_eventOnCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics::GAS_GABaseAttack_eventOnCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAttack::execOnCompleted)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_GET_STRUCT(FGameplayEventData,Z_Param_EventData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompleted(Z_Param_EventTag,Z_Param_EventData);
	P_NATIVE_END;
}
// End Class UGAS_GABaseAttack Function OnCompleted

// Begin Class UGAS_GABaseAttack Function OnDamageEventReceived
struct Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived_Statics
{
	struct GAS_GABaseAttack_eventOnDamageEventReceived_Parms
	{
		FGameplayEventData Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventOnDamageEventReceived_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 2811136703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "OnDamageEventReceived", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived_Statics::GAS_GABaseAttack_eventOnDamageEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived_Statics::GAS_GABaseAttack_eventOnDamageEventReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAttack::execOnDamageEventReceived)
{
	P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDamageEventReceived(Z_Param_Payload);
	P_NATIVE_END;
}
// End Class UGAS_GABaseAttack Function OnDamageEventReceived

// Begin Class UGAS_GABaseAttack Function OnMontageNotifyBegin
struct Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics
{
	struct GAS_GABaseAttack_eventOnMontageNotifyBegin_Parms
	{
		FName NotifyName;
		FBranchingPointNotifyPayload BranchingPointPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Animation\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventOnMontageNotifyBegin_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics::NewProp_BranchingPointPayload = { "BranchingPointPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventOnMontageNotifyBegin_Parms, BranchingPointPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchingPointPayload_MetaData), NewProp_BranchingPointPayload_MetaData) }; // 746097459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics::NewProp_NotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics::NewProp_BranchingPointPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "OnMontageNotifyBegin", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics::GAS_GABaseAttack_eventOnMontageNotifyBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics::GAS_GABaseAttack_eventOnMontageNotifyBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAttack::execOnMontageNotifyBegin)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointPayload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageNotifyBegin(Z_Param_NotifyName,Z_Param_Out_BranchingPointPayload);
	P_NATIVE_END;
}
// End Class UGAS_GABaseAttack Function OnMontageNotifyBegin

// Begin Class UGAS_GABaseAttack Function OnMontageNotifyEnded
struct Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics
{
	struct GAS_GABaseAttack_eventOnMontageNotifyEnded_Parms
	{
		FName NotifyName;
		FBranchingPointNotifyPayload BranchingPointNotifyPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventOnMontageNotifyEnded_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics::NewProp_BranchingPointNotifyPayload = { "BranchingPointNotifyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAttack_eventOnMontageNotifyEnded_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchingPointNotifyPayload_MetaData), NewProp_BranchingPointNotifyPayload_MetaData) }; // 746097459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics::NewProp_NotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics::NewProp_BranchingPointNotifyPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "OnMontageNotifyEnded", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics::GAS_GABaseAttack_eventOnMontageNotifyEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics::GAS_GABaseAttack_eventOnMontageNotifyEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAttack::execOnMontageNotifyEnded)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageNotifyEnded(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload);
	P_NATIVE_END;
}
// End Class UGAS_GABaseAttack Function OnMontageNotifyEnded

// Begin Class UGAS_GABaseAttack Function PushGoal
static FName NAME_UGAS_GABaseAttack_PushGoal = FName(TEXT("PushGoal"));
void UGAS_GABaseAttack::PushGoal()
{
	ProcessEvent(FindFunctionChecked(NAME_UGAS_GABaseAttack_PushGoal),NULL);
}
struct Z_Construct_UFunction_UGAS_GABaseAttack_PushGoal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_PushGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "PushGoal", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_PushGoal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_PushGoal_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_PushGoal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_PushGoal_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGAS_GABaseAttack Function PushGoal

// Begin Class UGAS_GABaseAttack Function StartMovement
struct Z_Construct_UFunction_UGAS_GABaseAttack_StartMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_StartMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "StartMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_StartMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_StartMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_StartMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_StartMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAttack::execStartMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMovement();
	P_NATIVE_END;
}
// End Class UGAS_GABaseAttack Function StartMovement

// Begin Class UGAS_GABaseAttack Function StopMovement
struct Z_Construct_UFunction_UGAS_GABaseAttack_StopMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAttack_StopMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAttack, nullptr, "StopMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAttack_StopMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAttack_StopMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGAS_GABaseAttack_StopMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAttack_StopMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAttack::execStopMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMovement();
	P_NATIVE_END;
}
// End Class UGAS_GABaseAttack Function StopMovement

// Begin Class UGAS_GABaseAttack
void UGAS_GABaseAttack::StaticRegisterNativesUGAS_GABaseAttack()
{
	UClass* Class = UGAS_GABaseAttack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssignTagsSet", &UGAS_GABaseAttack::execAssignTagsSet },
		{ "GetAbilityOwner", &UGAS_GABaseAttack::execGetAbilityOwner },
		{ "GetAttackAnimMontage", &UGAS_GABaseAttack::execGetAttackAnimMontage },
		{ "GetDamage", &UGAS_GABaseAttack::execGetDamage },
		{ "GetDashAnimMontage", &UGAS_GABaseAttack::execGetDashAnimMontage },
		{ "GetDealDamageLevel", &UGAS_GABaseAttack::execGetDealDamageLevel },
		{ "GetForceStrength", &UGAS_GABaseAttack::execGetForceStrength },
		{ "OnCancelled", &UGAS_GABaseAttack::execOnCancelled },
		{ "OnCompleted", &UGAS_GABaseAttack::execOnCompleted },
		{ "OnDamageEventReceived", &UGAS_GABaseAttack::execOnDamageEventReceived },
		{ "OnMontageNotifyBegin", &UGAS_GABaseAttack::execOnMontageNotifyBegin },
		{ "OnMontageNotifyEnded", &UGAS_GABaseAttack::execOnMontageNotifyEnded },
		{ "StartMovement", &UGAS_GABaseAttack::execStartMovement },
		{ "StopMovement", &UGAS_GABaseAttack::execStopMovement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_GABaseAttack);
UClass* Z_Construct_UClass_UGAS_GABaseAttack_NoRegister()
{
	return UGAS_GABaseAttack::StaticClass();
}
struct Z_Construct_UClass_UGAS_GABaseAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GAS/GAS_GABaseAttack.h" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventDamageTag_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalculateDamageEffectTag_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DealDamageGameplayEffectClass_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceStrength_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PushStrength_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DealDamageLevel_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnimMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashAnimMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopMovementNotifyName_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartMovementNotifyName_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventDamageTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CalculateDamageEffectTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DealDamageGameplayEffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PushStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DealDamageLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAnimMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DashAnimMontage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StopMovementNotifyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartMovementNotifyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_AddAbilitieCue, "AddAbilitieCue" }, // 1021309455
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_AssignTagsSet, "AssignTagsSet" }, // 755985399
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_GetAbilityOwner, "GetAbilityOwner" }, // 1067622850
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_GetAttackAnimMontage, "GetAttackAnimMontage" }, // 3758228453
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_GetDamage, "GetDamage" }, // 2403268436
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_GetDashAnimMontage, "GetDashAnimMontage" }, // 2275423010
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_GetDealDamageLevel, "GetDealDamageLevel" }, // 800089397
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_GetForceStrength, "GetForceStrength" }, // 378660016
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_OnCancelled, "OnCancelled" }, // 546327687
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_OnCompleted, "OnCompleted" }, // 1666843028
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_OnDamageEventReceived, "OnDamageEventReceived" }, // 2353171671
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyBegin, "OnMontageNotifyBegin" }, // 3086041087
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_OnMontageNotifyEnded, "OnMontageNotifyEnded" }, // 663723557
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_PushGoal, "PushGoal" }, // 2556438324
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_StartMovement, "StartMovement" }, // 730093946
		{ &Z_Construct_UFunction_UGAS_GABaseAttack_StopMovement, "StopMovement" }, // 4098019948
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_GABaseAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_EventDamageTag = { "EventDamageTag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAttack, EventDamageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventDamageTag_MetaData), NewProp_EventDamageTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_CalculateDamageEffectTag = { "CalculateDamageEffectTag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAttack, CalculateDamageEffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalculateDamageEffectTag_MetaData), NewProp_CalculateDamageEffectTag_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_DealDamageGameplayEffectClass = { "DealDamageGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAttack, DealDamageGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DealDamageGameplayEffectClass_MetaData), NewProp_DealDamageGameplayEffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_ForceStrength = { "ForceStrength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAttack, ForceStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceStrength_MetaData), NewProp_ForceStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_PushStrength = { "PushStrength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAttack, PushStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PushStrength_MetaData), NewProp_PushStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAttack, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_DealDamageLevel = { "DealDamageLevel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAttack, DealDamageLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DealDamageLevel_MetaData), NewProp_DealDamageLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_AttackAnimMontage = { "AttackAnimMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAttack, AttackAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnimMontage_MetaData), NewProp_AttackAnimMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_DashAnimMontage = { "DashAnimMontage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAttack, DashAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashAnimMontage_MetaData), NewProp_DashAnimMontage_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_StopMovementNotifyName = { "StopMovementNotifyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAttack, StopMovementNotifyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopMovementNotifyName_MetaData), NewProp_StopMovementNotifyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_StartMovementNotifyName = { "StartMovementNotifyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAttack, StartMovementNotifyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartMovementNotifyName_MetaData), NewProp_StartMovementNotifyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAS_GABaseAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_EventDamageTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_CalculateDamageEffectTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_DealDamageGameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_ForceStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_PushStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_DealDamageLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_AttackAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_DashAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_StopMovementNotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAttack_Statics::NewProp_StartMovementNotifyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GABaseAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGAS_GABaseAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGAS_GABaseAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GABaseAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_GABaseAttack_Statics::ClassParams = {
	&UGAS_GABaseAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGAS_GABaseAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GABaseAttack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GABaseAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_GABaseAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_GABaseAttack()
{
	if (!Z_Registration_Info_UClass_UGAS_GABaseAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_GABaseAttack.OuterSingleton, Z_Construct_UClass_UGAS_GABaseAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_GABaseAttack.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<UGAS_GABaseAttack>()
{
	return UGAS_GABaseAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_GABaseAttack);
UGAS_GABaseAttack::~UGAS_GABaseAttack() {}
// End Class UGAS_GABaseAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_GABaseAttack, UGAS_GABaseAttack::StaticClass, TEXT("UGAS_GABaseAttack"), &Z_Registration_Info_UClass_UGAS_GABaseAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_GABaseAttack), 2332300181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h_1077056798(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
