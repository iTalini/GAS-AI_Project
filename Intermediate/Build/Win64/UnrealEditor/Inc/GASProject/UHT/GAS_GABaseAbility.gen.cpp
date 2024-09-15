// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/GAS/GAS_GABaseAbility.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_GABaseAbility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GASPROJECT_API UClass* Z_Construct_UClass_UGAS_GABaseAbility();
GASPROJECT_API UClass* Z_Construct_UClass_UGAS_GABaseAbility_NoRegister();
GASPROJECT_API UEnum* Z_Construct_UEnum_GASProject_EGAS_AbilityInputID();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Class UGAS_GABaseAbility Function GetAbilityCostClass
struct Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass_Statics
{
	struct GAS_GABaseAbility_eventGetAbilityCostClass_Parms
	{
		TSubclassOf<UGameplayEffect> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAbility_eventGetAbilityCostClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAbility, nullptr, "GetAbilityCostClass", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass_Statics::GAS_GABaseAbility_eventGetAbilityCostClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass_Statics::GAS_GABaseAbility_eventGetAbilityCostClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAbility::execGetAbilityCostClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UGameplayEffect>*)Z_Param__Result=P_THIS->GetAbilityCostClass();
	P_NATIVE_END;
}
// End Class UGAS_GABaseAbility Function GetAbilityCostClass

// Begin Class UGAS_GABaseAbility Function GetCooldownClass
struct Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass_Statics
{
	struct GAS_GABaseAbility_eventGetCooldownClass_Parms
	{
		TSubclassOf<UGameplayEffect> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAbility_eventGetCooldownClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAbility, nullptr, "GetCooldownClass", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass_Statics::GAS_GABaseAbility_eventGetCooldownClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass_Statics::GAS_GABaseAbility_eventGetCooldownClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAbility::execGetCooldownClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UGameplayEffect>*)Z_Param__Result=P_THIS->GetCooldownClass();
	P_NATIVE_END;
}
// End Class UGAS_GABaseAbility Function GetCooldownClass

// Begin Class UGAS_GABaseAbility Function GetCooldownDuration
struct Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration_Statics
{
	struct GAS_GABaseAbility_eventGetCooldownDuration_Parms
	{
		FScalableFloat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAbility_eventGetCooldownDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(0, nullptr) }; // 703790095
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAbility, nullptr, "GetCooldownDuration", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration_Statics::GAS_GABaseAbility_eventGetCooldownDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration_Statics::GAS_GABaseAbility_eventGetCooldownDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAbility::execGetCooldownDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScalableFloat*)Z_Param__Result=P_THIS->GetCooldownDuration();
	P_NATIVE_END;
}
// End Class UGAS_GABaseAbility Function GetCooldownDuration

// Begin Class UGAS_GABaseAbility Function GetCostValue
struct Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue_Statics
{
	struct GAS_GABaseAbility_eventGetCostValue_Parms
	{
		FScalableFloat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GAS_GABaseAbility_eventGetCostValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(0, nullptr) }; // 703790095
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGAS_GABaseAbility, nullptr, "GetCostValue", nullptr, nullptr, Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue_Statics::GAS_GABaseAbility_eventGetCostValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue_Statics::GAS_GABaseAbility_eventGetCostValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGAS_GABaseAbility::execGetCostValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FScalableFloat*)Z_Param__Result=P_THIS->GetCostValue();
	P_NATIVE_END;
}
// End Class UGAS_GABaseAbility Function GetCostValue

// Begin Class UGAS_GABaseAbility
void UGAS_GABaseAbility::StaticRegisterNativesUGAS_GABaseAbility()
{
	UClass* Class = UGAS_GABaseAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAbilityCostClass", &UGAS_GABaseAbility::execGetAbilityCostClass },
		{ "GetCooldownClass", &UGAS_GABaseAbility::execGetCooldownClass },
		{ "GetCooldownDuration", &UGAS_GABaseAbility::execGetCooldownDuration },
		{ "GetCostValue", &UGAS_GABaseAbility::execGetCostValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAS_GABaseAbility);
UClass* Z_Construct_UClass_UGAS_GABaseAbility_NoRegister()
{
	return UGAS_GABaseAbility::StaticClass();
}
struct Z_Construct_UClass_UGAS_GABaseAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GAS/GAS_GABaseAbility.h" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputID_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownEffectTag_MetaData[] = {
		{ "Category", "Cooldown" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempCooldownTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Temp container that we will return the pointer to in GetCooldownTags().\n// This will be a union of our CooldownTags and the Cooldown GE's cooldown tags.\n" },
#endif
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temp container that we will return the pointer to in GetCooldownTags().\nThis will be a union of our CooldownTags and the Cooldown GE's cooldown tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CostValue_MetaData[] = {
		{ "Category", "Ability Cost" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCostEffectTag_MetaData[] = {
		{ "Category", "Ability Cost" },
		{ "ModuleRelativePath", "Public/GAS/GAS_GABaseAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityInputID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityInputID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownEffectTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TempCooldownTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CostValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityCostEffectTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGAS_GABaseAbility_GetAbilityCostClass, "GetAbilityCostClass" }, // 3057964164
		{ &Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownClass, "GetCooldownClass" }, // 2576184009
		{ &Z_Construct_UFunction_UGAS_GABaseAbility_GetCooldownDuration, "GetCooldownDuration" }, // 3537400177
		{ &Z_Construct_UFunction_UGAS_GABaseAbility_GetCostValue, "GetCostValue" }, // 3460095623
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAS_GABaseAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGAS_GABaseAbility_Statics::NewProp_AbilityInputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGAS_GABaseAbility_Statics::NewProp_AbilityInputID = { "AbilityInputID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAbility, AbilityInputID), Z_Construct_UEnum_GASProject_EGAS_AbilityInputID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputID_MetaData), NewProp_AbilityInputID_MetaData) }; // 2774041434
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_GABaseAbility_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAbility, CooldownDuration), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownDuration_MetaData), NewProp_CooldownDuration_MetaData) }; // 703790095
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_GABaseAbility_Statics::NewProp_CooldownEffectTag = { "CooldownEffectTag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAbility, CooldownEffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownEffectTag_MetaData), NewProp_CooldownEffectTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_GABaseAbility_Statics::NewProp_TempCooldownTags = { "TempCooldownTags", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAbility, TempCooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempCooldownTags_MetaData), NewProp_TempCooldownTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_GABaseAbility_Statics::NewProp_CostValue = { "CostValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAbility, CostValue), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CostValue_MetaData), NewProp_CostValue_MetaData) }; // 703790095
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAS_GABaseAbility_Statics::NewProp_AbilityCostEffectTag = { "AbilityCostEffectTag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGAS_GABaseAbility, AbilityCostEffectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCostEffectTag_MetaData), NewProp_AbilityCostEffectTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAS_GABaseAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAbility_Statics::NewProp_AbilityInputID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAbility_Statics::NewProp_AbilityInputID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAbility_Statics::NewProp_CooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAbility_Statics::NewProp_CooldownEffectTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAbility_Statics::NewProp_TempCooldownTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAbility_Statics::NewProp_CostValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAS_GABaseAbility_Statics::NewProp_AbilityCostEffectTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GABaseAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGAS_GABaseAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GABaseAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAS_GABaseAbility_Statics::ClassParams = {
	&UGAS_GABaseAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGAS_GABaseAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GABaseAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGAS_GABaseAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UGAS_GABaseAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGAS_GABaseAbility()
{
	if (!Z_Registration_Info_UClass_UGAS_GABaseAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAS_GABaseAbility.OuterSingleton, Z_Construct_UClass_UGAS_GABaseAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGAS_GABaseAbility.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<UGAS_GABaseAbility>()
{
	return UGAS_GABaseAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGAS_GABaseAbility);
UGAS_GABaseAbility::~UGAS_GABaseAbility() {}
// End Class UGAS_GABaseAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGAS_GABaseAbility, UGAS_GABaseAbility::StaticClass, TEXT("UGAS_GABaseAbility"), &Z_Registration_Info_UClass_UGAS_GABaseAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAS_GABaseAbility), 979250442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAbility_h_1159180897(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
