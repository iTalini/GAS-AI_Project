// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/Character/GASProjectCharacter.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASProjectCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GASPROJECT_API UClass* Z_Construct_UClass_AGASProjectCharacter();
GASPROJECT_API UClass* Z_Construct_UClass_AGASProjectCharacter_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_UBasicProgressBar_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_UGAS_AttributeSet_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_UGAS_GABaseAbility_NoRegister();
GASPROJECT_API UFunction* Z_Construct_UDelegateFunction_GASProject_OnBlockEnded__DelegateSignature();
GASPROJECT_API UFunction* Z_Construct_UDelegateFunction_GASProject_OnHealthIsNotFull__DelegateSignature();
GASPROJECT_API UFunction* Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature();
GASPROJECT_API UFunction* Z_Construct_UDelegateFunction_GASProject_OnManaIsNotFull__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Delegate FOnIsArmedStateChanged
struct Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics
{
	struct _Script_GASProject_eventOnIsArmedStateChanged_Parms
	{
		bool NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics::NewProp_NewState_SetBit(void* Obj)
{
	((_Script_GASProject_eventOnIsArmedStateChanged_Parms*)Obj)->NewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_GASProject_eventOnIsArmedStateChanged_Parms), &Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics::NewProp_NewState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASProject, nullptr, "OnIsArmedStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics::_Script_GASProject_eventOnIsArmedStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics::_Script_GASProject_eventOnIsArmedStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnIsArmedStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnIsArmedStateChanged, bool NewState)
{
	struct _Script_GASProject_eventOnIsArmedStateChanged_Parms
	{
		bool NewState;
	};
	_Script_GASProject_eventOnIsArmedStateChanged_Parms Parms;
	Parms.NewState=NewState ? true : false;
	OnIsArmedStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnIsArmedStateChanged

// Begin Delegate FOnHealthIsNotFull
struct Z_Construct_UDelegateFunction_GASProject_OnHealthIsNotFull__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASProject_OnHealthIsNotFull__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASProject, nullptr, "OnHealthIsNotFull__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASProject_OnHealthIsNotFull__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASProject_OnHealthIsNotFull__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GASProject_OnHealthIsNotFull__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASProject_OnHealthIsNotFull__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthIsNotFull_DelegateWrapper(const FMulticastScriptDelegate& OnHealthIsNotFull)
{
	OnHealthIsNotFull.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnHealthIsNotFull

// Begin Delegate FOnManaIsNotFull
struct Z_Construct_UDelegateFunction_GASProject_OnManaIsNotFull__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASProject_OnManaIsNotFull__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASProject, nullptr, "OnManaIsNotFull__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASProject_OnManaIsNotFull__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASProject_OnManaIsNotFull__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GASProject_OnManaIsNotFull__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASProject_OnManaIsNotFull__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnManaIsNotFull_DelegateWrapper(const FMulticastScriptDelegate& OnManaIsNotFull)
{
	OnManaIsNotFull.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnManaIsNotFull

// Begin Delegate FOnBlockEnded
struct Z_Construct_UDelegateFunction_GASProject_OnBlockEnded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASProject_OnBlockEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASProject, nullptr, "OnBlockEnded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASProject_OnBlockEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASProject_OnBlockEnded__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GASProject_OnBlockEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASProject_OnBlockEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBlockEnded_DelegateWrapper(const FMulticastScriptDelegate& OnBlockEnded)
{
	OnBlockEnded.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnBlockEnded

// Begin Class AGASProjectCharacter Function CallOnBlockEndedDelegate
struct Z_Construct_UFunction_AGASProjectCharacter_CallOnBlockEndedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_CallOnBlockEndedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "CallOnBlockEndedDelegate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_CallOnBlockEndedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_CallOnBlockEndedDelegate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGASProjectCharacter_CallOnBlockEndedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_CallOnBlockEndedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execCallOnBlockEndedDelegate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallOnBlockEndedDelegate();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function CallOnBlockEndedDelegate

// Begin Class AGASProjectCharacter Function CallOnIsArmedChangedDelegate
struct Z_Construct_UFunction_AGASProjectCharacter_CallOnIsArmedChangedDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_CallOnIsArmedChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "CallOnIsArmedChangedDelegate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_CallOnIsArmedChangedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_CallOnIsArmedChangedDelegate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGASProjectCharacter_CallOnIsArmedChangedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_CallOnIsArmedChangedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execCallOnIsArmedChangedDelegate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallOnIsArmedChangedDelegate();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function CallOnIsArmedChangedDelegate

// Begin Class AGASProjectCharacter Function ChangeIsArmedState
struct Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics
{
	struct GASProjectCharacter_eventChangeIsArmedState_Parms
	{
		bool bNewState;
		bool bBeginPlay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bBeginPlay", "false" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewState;
	static void NewProp_bBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBeginPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::NewProp_bNewState_SetBit(void* Obj)
{
	((GASProjectCharacter_eventChangeIsArmedState_Parms*)Obj)->bNewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::NewProp_bNewState = { "bNewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASProjectCharacter_eventChangeIsArmedState_Parms), &Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::NewProp_bNewState_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::NewProp_bBeginPlay_SetBit(void* Obj)
{
	((GASProjectCharacter_eventChangeIsArmedState_Parms*)Obj)->bBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::NewProp_bBeginPlay = { "bBeginPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASProjectCharacter_eventChangeIsArmedState_Parms), &Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::NewProp_bBeginPlay_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::NewProp_bNewState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::NewProp_bBeginPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "ChangeIsArmedState", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::GASProjectCharacter_eventChangeIsArmedState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::GASProjectCharacter_eventChangeIsArmedState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execChangeIsArmedState)
{
	P_GET_UBOOL(Z_Param_bNewState);
	P_GET_UBOOL(Z_Param_bBeginPlay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeIsArmedState(Z_Param_bNewState,Z_Param_bBeginPlay);
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function ChangeIsArmedState

// Begin Class AGASProjectCharacter Function EquipWeapon
static FName NAME_AGASProjectCharacter_EquipWeapon = FName(TEXT("EquipWeapon"));
void AGASProjectCharacter::EquipWeapon()
{
	ProcessEvent(FindFunctionChecked(NAME_AGASProjectCharacter_EquipWeapon),NULL);
}
struct Z_Construct_UFunction_AGASProjectCharacter_EquipWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_EquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "EquipWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_EquipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_EquipWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGASProjectCharacter_EquipWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_EquipWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGASProjectCharacter Function EquipWeapon

// Begin Class AGASProjectCharacter Function GetAbilitySystemComponent
struct Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent_Statics
{
	struct GASProjectCharacter_eventGetAbilitySystemComponent_Parms
	{
		UAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "GetAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent_Statics::GASProjectCharacter_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent_Statics::GASProjectCharacter_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execGetAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function GetAbilitySystemComponent

// Begin Class AGASProjectCharacter Function GetHealth
struct Z_Construct_UFunction_AGASProjectCharacter_GetHealth_Statics
{
	struct GASProjectCharacter_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGASProjectCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetHealth_Statics::GASProjectCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetHealth_Statics::GASProjectCharacter_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function GetHealth

// Begin Class AGASProjectCharacter Function GetHealthBarComp
struct Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp_Statics
{
	struct GASProjectCharacter_eventGetHealthBarComp_Parms
	{
		UWidgetComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventGetHealthBarComp_Parms, ReturnValue), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "GetHealthBarComp", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp_Statics::GASProjectCharacter_eventGetHealthBarComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp_Statics::GASProjectCharacter_eventGetHealthBarComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execGetHealthBarComp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidgetComponent**)Z_Param__Result=P_THIS->GetHealthBarComp();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function GetHealthBarComp

// Begin Class AGASProjectCharacter Function GetIsAbilityAttackOn
struct Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics
{
	struct GASProjectCharacter_eventGetIsAbilityAttackOn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GASProjectCharacter_eventGetIsAbilityAttackOn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASProjectCharacter_eventGetIsAbilityAttackOn_Parms), &Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "GetIsAbilityAttackOn", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics::GASProjectCharacter_eventGetIsAbilityAttackOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics::GASProjectCharacter_eventGetIsAbilityAttackOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execGetIsAbilityAttackOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsAbilityAttackOn();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function GetIsAbilityAttackOn

// Begin Class AGASProjectCharacter Function GetIsArmed
struct Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics
{
	struct GASProjectCharacter_eventGetIsArmed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GASProjectCharacter_eventGetIsArmed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASProjectCharacter_eventGetIsArmed_Parms), &Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "GetIsArmed", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics::GASProjectCharacter_eventGetIsArmed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics::GASProjectCharacter_eventGetIsArmed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execGetIsArmed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsArmed();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function GetIsArmed

// Begin Class AGASProjectCharacter Function GetIsRunning
struct Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics
{
	struct GASProjectCharacter_eventGetIsRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GASProjectCharacter_eventGetIsRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASProjectCharacter_eventGetIsRunning_Parms), &Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "GetIsRunning", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics::GASProjectCharacter_eventGetIsRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics::GASProjectCharacter_eventGetIsRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execGetIsRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsRunning();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function GetIsRunning

// Begin Class AGASProjectCharacter Function GetMana
struct Z_Construct_UFunction_AGASProjectCharacter_GetMana_Statics
{
	struct GASProjectCharacter_eventGetMana_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGASProjectCharacter_GetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventGetMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_GetMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_GetMana_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_GetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "GetMana", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_GetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetMana_Statics::GASProjectCharacter_eventGetMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_GetMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetMana_Statics::GASProjectCharacter_eventGetMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_GetMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_GetMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execGetMana)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMana();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function GetMana

// Begin Class AGASProjectCharacter Function GetMaxHealth
struct Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth_Statics
{
	struct GASProjectCharacter_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth_Statics::GASProjectCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth_Statics::GASProjectCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function GetMaxHealth

// Begin Class AGASProjectCharacter Function GetMaxMana
struct Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana_Statics
{
	struct GASProjectCharacter_eventGetMaxMana_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "GetMaxMana", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana_Statics::GASProjectCharacter_eventGetMaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana_Statics::GASProjectCharacter_eventGetMaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execGetMaxMana)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxMana();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function GetMaxMana

// Begin Class AGASProjectCharacter Function GetMaxRunSpeed
struct Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed_Statics
{
	struct GASProjectCharacter_eventGetMaxRunSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventGetMaxRunSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "GetMaxRunSpeed", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed_Statics::GASProjectCharacter_eventGetMaxRunSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed_Statics::GASProjectCharacter_eventGetMaxRunSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execGetMaxRunSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxRunSpeed();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function GetMaxRunSpeed

// Begin Class AGASProjectCharacter Function GetMaxWalkSpeed
struct Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed_Statics
{
	struct GASProjectCharacter_eventGetMaxWalkSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventGetMaxWalkSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "GetMaxWalkSpeed", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed_Statics::GASProjectCharacter_eventGetMaxWalkSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed_Statics::GASProjectCharacter_eventGetMaxWalkSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execGetMaxWalkSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxWalkSpeed();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function GetMaxWalkSpeed

// Begin Class AGASProjectCharacter Function GetOverlapWithInteractable
struct Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics
{
	struct GASProjectCharacter_eventGetOverlapWithInteractable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GASProjectCharacter_eventGetOverlapWithInteractable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASProjectCharacter_eventGetOverlapWithInteractable_Parms), &Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "GetOverlapWithInteractable", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics::GASProjectCharacter_eventGetOverlapWithInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics::GASProjectCharacter_eventGetOverlapWithInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execGetOverlapWithInteractable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetOverlapWithInteractable();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function GetOverlapWithInteractable

// Begin Class AGASProjectCharacter Function GetReachToPickUp
struct Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp_Statics
{
	struct GASProjectCharacter_eventGetReachToPickUp_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventGetReachToPickUp_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "GetReachToPickUp", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp_Statics::GASProjectCharacter_eventGetReachToPickUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp_Statics::GASProjectCharacter_eventGetReachToPickUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execGetReachToPickUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetReachToPickUp();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function GetReachToPickUp

// Begin Class AGASProjectCharacter Function IsAlive
struct Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics
{
	struct GASProjectCharacter_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GASProjectCharacter_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASProjectCharacter_eventIsAlive_Parms), &Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics::GASProjectCharacter_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics::GASProjectCharacter_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function IsAlive

// Begin Class AGASProjectCharacter Function OnCapsuleComponentBeginOverlap
struct Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics
{
	struct GASProjectCharacter_eventOnCapsuleComponentBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnCapsuleComponentBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnCapsuleComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnCapsuleComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnCapsuleComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((GASProjectCharacter_eventOnCapsuleComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASProjectCharacter_eventOnCapsuleComponentBeginOverlap_Parms), &Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnCapsuleComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "OnCapsuleComponentBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::GASProjectCharacter_eventOnCapsuleComponentBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::GASProjectCharacter_eventOnCapsuleComponentBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execOnCapsuleComponentBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCapsuleComponentBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function OnCapsuleComponentBeginOverlap

// Begin Class AGASProjectCharacter Function OnCapsuleComponentOverlapEnd
struct Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics
{
	struct GASProjectCharacter_eventOnCapsuleComponentOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnCapsuleComponentOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnCapsuleComponentOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnCapsuleComponentOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnCapsuleComponentOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "OnCapsuleComponentOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::GASProjectCharacter_eventOnCapsuleComponentOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::GASProjectCharacter_eventOnCapsuleComponentOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execOnCapsuleComponentOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCapsuleComponentOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function OnCapsuleComponentOverlapEnd

// Begin Class AGASProjectCharacter Function OnDamage
struct GASProjectCharacter_eventOnDamage_Parms
{
	float DamageAmount;
	FHitResult HitInfo;
	FGameplayTagContainer DamageTags;
	AGASProjectCharacter* InstigatorCharacter;
	AActor* DamageCauser;
};
static FName NAME_AGASProjectCharacter_OnDamage = FName(TEXT("OnDamage"));
void AGASProjectCharacter::OnDamage(float DamageAmount, FHitResult const& HitInfo, FGameplayTagContainer const& DamageTags, AGASProjectCharacter* InstigatorCharacter, AActor* DamageCauser)
{
	GASProjectCharacter_eventOnDamage_Parms Parms;
	Parms.DamageAmount=DamageAmount;
	Parms.HitInfo=HitInfo;
	Parms.DamageTags=DamageTags;
	Parms.InstigatorCharacter=InstigatorCharacter;
	Parms.DamageCauser=DamageCauser;
	ProcessEvent(FindFunctionChecked(NAME_AGASProjectCharacter_OnDamage),&Parms);
}
struct Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09@param DamageAmount        -- Amount of damage that was done, not clamped based on current health\n//\x09@param HitInfo             -- The hit info that generated this damage\n//\x09@param DamageTags          -- The gameplay tags of the event that did the damage\n//\x09@param InstigatorCharacter -- The character that initiated this damage\n//\x09@param DamageCauser        -- The actual actor that did the damage, might be a weapon or projectile\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param DamageAmount        -- Amount of damage that was done, not clamped based on current health\n@param HitInfo             -- The hit info that generated this damage\n@param DamageTags          -- The gameplay tags of the event that did the damage\n@param InstigatorCharacter -- The character that initiated this damage\n@param DamageCauser        -- The actual actor that did the damage, might be a weapon or projectile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::NewProp_DamageTags = { "DamageTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnDamage_Parms, DamageTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTags_MetaData), NewProp_DamageTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnDamage_Parms, InstigatorCharacter), Z_Construct_UClass_AGASProjectCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::NewProp_DamageTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::NewProp_InstigatorCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "OnDamage", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::PropPointers), sizeof(GASProjectCharacter_eventOnDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(GASProjectCharacter_eventOnDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_OnDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_OnDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGASProjectCharacter Function OnDamage

// Begin Class AGASProjectCharacter Function OnHealthChanged
struct GASProjectCharacter_eventOnHealthChanged_Parms
{
	float DeltaValues;
	FGameplayTagContainer EventTags;
};
static FName NAME_AGASProjectCharacter_OnHealthChanged = FName(TEXT("OnHealthChanged"));
void AGASProjectCharacter::OnHealthChanged(float DeltaValues, FGameplayTagContainer const& EventTags)
{
	GASProjectCharacter_eventOnHealthChanged_Parms Parms;
	Parms.DeltaValues=DeltaValues;
	Parms.EventTags=EventTags;
	ProcessEvent(FindFunctionChecked(NAME_AGASProjectCharacter_OnHealthChanged),&Parms);
}
struct Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09@param DeltaValues -- Change in health value, positive for heal, negative for cost. If 0 the delta is unkown\n//\x09@param EventTags   -- The gameplay tags of the event that changed mana\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param DeltaValues -- Change in health value, positive for heal, negative for cost. If 0 the delta is unkown\n@param EventTags   -- The gameplay tags of the event that changed mana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged_Statics::NewProp_DeltaValues = { "DeltaValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnHealthChanged_Parms, DeltaValues), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventOnHealthChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged_Statics::NewProp_DeltaValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "OnHealthChanged", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged_Statics::PropPointers), sizeof(GASProjectCharacter_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(GASProjectCharacter_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execOnHealthChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaValues);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_EventTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHealthChanged_Implementation(Z_Param_DeltaValues,Z_Param_Out_EventTags);
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function OnHealthChanged

// Begin Class AGASProjectCharacter Function SetIsAbilityAttackOn
struct Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics
{
	struct GASProjectCharacter_eventSetIsAbilityAttackOn_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((GASProjectCharacter_eventSetIsAbilityAttackOn_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASProjectCharacter_eventSetIsAbilityAttackOn_Parms), &Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "SetIsAbilityAttackOn", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics::GASProjectCharacter_eventSetIsAbilityAttackOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics::GASProjectCharacter_eventSetIsAbilityAttackOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execSetIsAbilityAttackOn)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsAbilityAttackOn(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function SetIsAbilityAttackOn

// Begin Class AGASProjectCharacter Function SetIsRunning
struct Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics
{
	struct GASProjectCharacter_eventSetIsRunning_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((GASProjectCharacter_eventSetIsRunning_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASProjectCharacter_eventSetIsRunning_Parms), &Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "SetIsRunning", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics::GASProjectCharacter_eventSetIsRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics::GASProjectCharacter_eventSetIsRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execSetIsRunning)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsRunning(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function SetIsRunning

// Begin Class AGASProjectCharacter Function SetMaxRunSpeed
struct Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed_Statics
{
	struct GASProjectCharacter_eventSetMaxRunSpeed_Parms
	{
		float NewMaxRunSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxRunSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed_Statics::NewProp_NewMaxRunSpeed = { "NewMaxRunSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventSetMaxRunSpeed_Parms, NewMaxRunSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed_Statics::NewProp_NewMaxRunSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "SetMaxRunSpeed", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed_Statics::GASProjectCharacter_eventSetMaxRunSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed_Statics::GASProjectCharacter_eventSetMaxRunSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execSetMaxRunSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxRunSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxRunSpeed(Z_Param_NewMaxRunSpeed);
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function SetMaxRunSpeed

// Begin Class AGASProjectCharacter Function SetMaxWalkSpeed
struct Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed_Statics
{
	struct GASProjectCharacter_eventSetMaxWalkSpeed_Parms
	{
		float NewMaxWalkSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxWalkSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed = { "NewMaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventSetMaxWalkSpeed_Parms, NewMaxWalkSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "SetMaxWalkSpeed", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed_Statics::GASProjectCharacter_eventSetMaxWalkSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed_Statics::GASProjectCharacter_eventSetMaxWalkSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execSetMaxWalkSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxWalkSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxWalkSpeed(Z_Param_NewMaxWalkSpeed);
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function SetMaxWalkSpeed

// Begin Class AGASProjectCharacter Function SetMovementSpeed
struct Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed_Statics
{
	struct GASProjectCharacter_eventSetMovementSpeed_Parms
	{
		float NewMovementSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMovementSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed_Statics::NewProp_NewMovementSpeed = { "NewMovementSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventSetMovementSpeed_Parms, NewMovementSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed_Statics::NewProp_NewMovementSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "SetMovementSpeed", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed_Statics::GASProjectCharacter_eventSetMovementSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed_Statics::GASProjectCharacter_eventSetMovementSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execSetMovementSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMovementSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovementSpeed(Z_Param_NewMovementSpeed);
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function SetMovementSpeed

// Begin Class AGASProjectCharacter Function SetOverlapWithInteractable
struct Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics
{
	struct GASProjectCharacter_eventSetOverlapWithInteractable_Parms
	{
		bool bIsActorInteractable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsActorInteractable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActorInteractable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics::NewProp_bIsActorInteractable_SetBit(void* Obj)
{
	((GASProjectCharacter_eventSetOverlapWithInteractable_Parms*)Obj)->bIsActorInteractable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics::NewProp_bIsActorInteractable = { "bIsActorInteractable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GASProjectCharacter_eventSetOverlapWithInteractable_Parms), &Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics::NewProp_bIsActorInteractable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics::NewProp_bIsActorInteractable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "SetOverlapWithInteractable", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics::GASProjectCharacter_eventSetOverlapWithInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics::GASProjectCharacter_eventSetOverlapWithInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execSetOverlapWithInteractable)
{
	P_GET_UBOOL(Z_Param_bIsActorInteractable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverlapWithInteractable(Z_Param_bIsActorInteractable);
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function SetOverlapWithInteractable

// Begin Class AGASProjectCharacter Function SetReachToPickUp
struct Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp_Statics
{
	struct GASProjectCharacter_eventSetReachToPickUp_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GASProjectCharacter_eventSetReachToPickUp_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "SetReachToPickUp", nullptr, nullptr, Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp_Statics::GASProjectCharacter_eventSetReachToPickUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp_Statics::GASProjectCharacter_eventSetReachToPickUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGASProjectCharacter::execSetReachToPickUp)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReachToPickUp(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class AGASProjectCharacter Function SetReachToPickUp

// Begin Class AGASProjectCharacter Function TryToStartPassiveHealthRegen
static FName NAME_AGASProjectCharacter_TryToStartPassiveHealthRegen = FName(TEXT("TryToStartPassiveHealthRegen"));
void AGASProjectCharacter::TryToStartPassiveHealthRegen()
{
	ProcessEvent(FindFunctionChecked(NAME_AGASProjectCharacter_TryToStartPassiveHealthRegen),NULL);
}
struct Z_Construct_UFunction_AGASProjectCharacter_TryToStartPassiveHealthRegen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_TryToStartPassiveHealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "TryToStartPassiveHealthRegen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_TryToStartPassiveHealthRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_TryToStartPassiveHealthRegen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGASProjectCharacter_TryToStartPassiveHealthRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_TryToStartPassiveHealthRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGASProjectCharacter Function TryToStartPassiveHealthRegen

// Begin Class AGASProjectCharacter Function TryToStartPassiveManaRegen
static FName NAME_AGASProjectCharacter_TryToStartPassiveManaRegen = FName(TEXT("TryToStartPassiveManaRegen"));
void AGASProjectCharacter::TryToStartPassiveManaRegen()
{
	ProcessEvent(FindFunctionChecked(NAME_AGASProjectCharacter_TryToStartPassiveManaRegen),NULL);
}
struct Z_Construct_UFunction_AGASProjectCharacter_TryToStartPassiveManaRegen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_TryToStartPassiveManaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "TryToStartPassiveManaRegen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_TryToStartPassiveManaRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_TryToStartPassiveManaRegen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGASProjectCharacter_TryToStartPassiveManaRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_TryToStartPassiveManaRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGASProjectCharacter Function TryToStartPassiveManaRegen

// Begin Class AGASProjectCharacter Function UnequipWeapon
static FName NAME_AGASProjectCharacter_UnequipWeapon = FName(TEXT("UnequipWeapon"));
void AGASProjectCharacter::UnequipWeapon()
{
	ProcessEvent(FindFunctionChecked(NAME_AGASProjectCharacter_UnequipWeapon),NULL);
}
struct Z_Construct_UFunction_AGASProjectCharacter_UnequipWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGASProjectCharacter_UnequipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGASProjectCharacter, nullptr, "UnequipWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGASProjectCharacter_UnequipWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGASProjectCharacter_UnequipWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGASProjectCharacter_UnequipWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGASProjectCharacter_UnequipWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGASProjectCharacter Function UnequipWeapon

// Begin Class AGASProjectCharacter
void AGASProjectCharacter::StaticRegisterNativesAGASProjectCharacter()
{
	UClass* Class = AGASProjectCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallOnBlockEndedDelegate", &AGASProjectCharacter::execCallOnBlockEndedDelegate },
		{ "CallOnIsArmedChangedDelegate", &AGASProjectCharacter::execCallOnIsArmedChangedDelegate },
		{ "ChangeIsArmedState", &AGASProjectCharacter::execChangeIsArmedState },
		{ "GetAbilitySystemComponent", &AGASProjectCharacter::execGetAbilitySystemComponent },
		{ "GetHealth", &AGASProjectCharacter::execGetHealth },
		{ "GetHealthBarComp", &AGASProjectCharacter::execGetHealthBarComp },
		{ "GetIsAbilityAttackOn", &AGASProjectCharacter::execGetIsAbilityAttackOn },
		{ "GetIsArmed", &AGASProjectCharacter::execGetIsArmed },
		{ "GetIsRunning", &AGASProjectCharacter::execGetIsRunning },
		{ "GetMana", &AGASProjectCharacter::execGetMana },
		{ "GetMaxHealth", &AGASProjectCharacter::execGetMaxHealth },
		{ "GetMaxMana", &AGASProjectCharacter::execGetMaxMana },
		{ "GetMaxRunSpeed", &AGASProjectCharacter::execGetMaxRunSpeed },
		{ "GetMaxWalkSpeed", &AGASProjectCharacter::execGetMaxWalkSpeed },
		{ "GetOverlapWithInteractable", &AGASProjectCharacter::execGetOverlapWithInteractable },
		{ "GetReachToPickUp", &AGASProjectCharacter::execGetReachToPickUp },
		{ "IsAlive", &AGASProjectCharacter::execIsAlive },
		{ "OnCapsuleComponentBeginOverlap", &AGASProjectCharacter::execOnCapsuleComponentBeginOverlap },
		{ "OnCapsuleComponentOverlapEnd", &AGASProjectCharacter::execOnCapsuleComponentOverlapEnd },
		{ "OnHealthChanged", &AGASProjectCharacter::execOnHealthChanged },
		{ "SetIsAbilityAttackOn", &AGASProjectCharacter::execSetIsAbilityAttackOn },
		{ "SetIsRunning", &AGASProjectCharacter::execSetIsRunning },
		{ "SetMaxRunSpeed", &AGASProjectCharacter::execSetMaxRunSpeed },
		{ "SetMaxWalkSpeed", &AGASProjectCharacter::execSetMaxWalkSpeed },
		{ "SetMovementSpeed", &AGASProjectCharacter::execSetMovementSpeed },
		{ "SetOverlapWithInteractable", &AGASProjectCharacter::execSetOverlapWithInteractable },
		{ "SetReachToPickUp", &AGASProjectCharacter::execSetReachToPickUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGASProjectCharacter);
UClass* Z_Construct_UClass_AGASProjectCharacter_NoRegister()
{
	return AGASProjectCharacter::StaticClass();
}
struct Z_Construct_UClass_AGASProjectCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/GASProjectCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Run Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Run Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attack Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaAttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Area Attack Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Area Attack Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeJumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Charge Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Charge Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegenAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Regen Action Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Regen Action Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProtectAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Protect Action Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Protect Action Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interact Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interact Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleInventoryAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggle Inventory Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle Inventory Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "Category", "GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveGameplayEffects_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilities_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAbilitiesInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRunSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftWeaponCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightWeaponCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaAttackCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarComp_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "Category", "Widgets" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetRotator_MetaData[] = {
		{ "Category", "Test - Remove to cpp file" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsArmed_MetaData[] = {
		{ "Category", "ArmedState" },
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnIsArmedChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthIsNotFull_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnManaIsNotFull_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBlockEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/GASProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RunAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AreaAttackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChargeJumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegenAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProtectAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleInventoryAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PassiveGameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PassiveGameplayEffects;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayAbilities;
	static void NewProp_bIsAbilitiesInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAbilitiesInitialized;
	static void NewProp_bIsRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRunSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftWeaponCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightWeaponCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AreaAttackCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetRotator;
	static void NewProp_bIsArmed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArmed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIsArmedChangedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthIsNotFull;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaIsNotFull;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlockEnded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGASProjectCharacter_CallOnBlockEndedDelegate, "CallOnBlockEndedDelegate" }, // 533921820
		{ &Z_Construct_UFunction_AGASProjectCharacter_CallOnIsArmedChangedDelegate, "CallOnIsArmedChangedDelegate" }, // 1583837188
		{ &Z_Construct_UFunction_AGASProjectCharacter_ChangeIsArmedState, "ChangeIsArmedState" }, // 1098403966
		{ &Z_Construct_UFunction_AGASProjectCharacter_EquipWeapon, "EquipWeapon" }, // 359387752
		{ &Z_Construct_UFunction_AGASProjectCharacter_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 1908050840
		{ &Z_Construct_UFunction_AGASProjectCharacter_GetHealth, "GetHealth" }, // 1210088122
		{ &Z_Construct_UFunction_AGASProjectCharacter_GetHealthBarComp, "GetHealthBarComp" }, // 3649960601
		{ &Z_Construct_UFunction_AGASProjectCharacter_GetIsAbilityAttackOn, "GetIsAbilityAttackOn" }, // 3385380474
		{ &Z_Construct_UFunction_AGASProjectCharacter_GetIsArmed, "GetIsArmed" }, // 2304603879
		{ &Z_Construct_UFunction_AGASProjectCharacter_GetIsRunning, "GetIsRunning" }, // 2078921399
		{ &Z_Construct_UFunction_AGASProjectCharacter_GetMana, "GetMana" }, // 2409186402
		{ &Z_Construct_UFunction_AGASProjectCharacter_GetMaxHealth, "GetMaxHealth" }, // 3873570975
		{ &Z_Construct_UFunction_AGASProjectCharacter_GetMaxMana, "GetMaxMana" }, // 980326276
		{ &Z_Construct_UFunction_AGASProjectCharacter_GetMaxRunSpeed, "GetMaxRunSpeed" }, // 3081081460
		{ &Z_Construct_UFunction_AGASProjectCharacter_GetMaxWalkSpeed, "GetMaxWalkSpeed" }, // 1346492669
		{ &Z_Construct_UFunction_AGASProjectCharacter_GetOverlapWithInteractable, "GetOverlapWithInteractable" }, // 1560703434
		{ &Z_Construct_UFunction_AGASProjectCharacter_GetReachToPickUp, "GetReachToPickUp" }, // 2917499061
		{ &Z_Construct_UFunction_AGASProjectCharacter_IsAlive, "IsAlive" }, // 3151327222
		{ &Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentBeginOverlap, "OnCapsuleComponentBeginOverlap" }, // 2416712062
		{ &Z_Construct_UFunction_AGASProjectCharacter_OnCapsuleComponentOverlapEnd, "OnCapsuleComponentOverlapEnd" }, // 2815797842
		{ &Z_Construct_UFunction_AGASProjectCharacter_OnDamage, "OnDamage" }, // 1297916178
		{ &Z_Construct_UFunction_AGASProjectCharacter_OnHealthChanged, "OnHealthChanged" }, // 675812938
		{ &Z_Construct_UFunction_AGASProjectCharacter_SetIsAbilityAttackOn, "SetIsAbilityAttackOn" }, // 2929681206
		{ &Z_Construct_UFunction_AGASProjectCharacter_SetIsRunning, "SetIsRunning" }, // 4092277094
		{ &Z_Construct_UFunction_AGASProjectCharacter_SetMaxRunSpeed, "SetMaxRunSpeed" }, // 1195538286
		{ &Z_Construct_UFunction_AGASProjectCharacter_SetMaxWalkSpeed, "SetMaxWalkSpeed" }, // 2610750490
		{ &Z_Construct_UFunction_AGASProjectCharacter_SetMovementSpeed, "SetMovementSpeed" }, // 110394222
		{ &Z_Construct_UFunction_AGASProjectCharacter_SetOverlapWithInteractable, "SetOverlapWithInteractable" }, // 3347373011
		{ &Z_Construct_UFunction_AGASProjectCharacter_SetReachToPickUp, "SetReachToPickUp" }, // 3646694748
		{ &Z_Construct_UFunction_AGASProjectCharacter_TryToStartPassiveHealthRegen, "TryToStartPassiveHealthRegen" }, // 270157056
		{ &Z_Construct_UFunction_AGASProjectCharacter_TryToStartPassiveManaRegen, "TryToStartPassiveManaRegen" }, // 1051439802
		{ &Z_Construct_UFunction_AGASProjectCharacter_UnequipWeapon, "UnequipWeapon" }, // 1126165274
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASProjectCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_RunAction = { "RunAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, RunAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunAction_MetaData), NewProp_RunAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAction_MetaData), NewProp_AttackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_AreaAttackAction = { "AreaAttackAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, AreaAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaAttackAction_MetaData), NewProp_AreaAttackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_ChargeJumpAction = { "ChargeJumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, ChargeJumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeJumpAction_MetaData), NewProp_ChargeJumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_RegenAction = { "RegenAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, RegenAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegenAction_MetaData), NewProp_RegenAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_ProtectAction = { "ProtectAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, ProtectAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProtectAction_MetaData), NewProp_ProtectAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_ToggleInventoryAction = { "ToggleInventoryAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, ToggleInventoryAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleInventoryAction_MetaData), NewProp_ToggleInventoryAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, AttributeSet), Z_Construct_UClass_UGAS_AttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_PassiveGameplayEffects_Inner = { "PassiveGameplayEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_PassiveGameplayEffects = { "PassiveGameplayEffects", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, PassiveGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveGameplayEffects_MetaData), NewProp_PassiveGameplayEffects_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_GameplayAbilities_Inner = { "GameplayAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGAS_GABaseAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_GameplayAbilities = { "GameplayAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, GameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayAbilities_MetaData), NewProp_GameplayAbilities_MetaData) };
void Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_bIsAbilitiesInitialized_SetBit(void* Obj)
{
	((AGASProjectCharacter*)Obj)->bIsAbilitiesInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_bIsAbilitiesInitialized = { "bIsAbilitiesInitialized", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AGASProjectCharacter), &Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_bIsAbilitiesInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAbilitiesInitialized_MetaData), NewProp_bIsAbilitiesInitialized_MetaData) };
void Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_bIsRunning_SetBit(void* Obj)
{
	((AGASProjectCharacter*)Obj)->bIsRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_bIsRunning = { "bIsRunning", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGASProjectCharacter), &Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRunning_MetaData), NewProp_bIsRunning_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_MaxWalkSpeed = { "MaxWalkSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, MaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWalkSpeed_MetaData), NewProp_MaxWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_MaxRunSpeed = { "MaxRunSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, MaxRunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRunSpeed_MetaData), NewProp_MaxRunSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_LeftWeaponCollision = { "LeftWeaponCollision", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, LeftWeaponCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftWeaponCollision_MetaData), NewProp_LeftWeaponCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_RightWeaponCollision = { "RightWeaponCollision", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, RightWeaponCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightWeaponCollision_MetaData), NewProp_RightWeaponCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_AreaAttackCollision = { "AreaAttackCollision", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, AreaAttackCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaAttackCollision_MetaData), NewProp_AreaAttackCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_HealthBarComp = { "HealthBarComp", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, HealthBarComp), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarComp_MetaData), NewProp_HealthBarComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x002008000008002d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, HealthBar), Z_Construct_UClass_UBasicProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_WidgetRotator = { "WidgetRotator", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, WidgetRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetRotator_MetaData), NewProp_WidgetRotator_MetaData) };
void Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_bIsArmed_SetBit(void* Obj)
{
	((AGASProjectCharacter*)Obj)->bIsArmed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_bIsArmed = { "bIsArmed", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGASProjectCharacter), &Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_bIsArmed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsArmed_MetaData), NewProp_bIsArmed_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_OnIsArmedChangedDelegate = { "OnIsArmedChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, OnIsArmedChangedDelegate), Z_Construct_UDelegateFunction_GASProject_OnIsArmedStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnIsArmedChangedDelegate_MetaData), NewProp_OnIsArmedChangedDelegate_MetaData) }; // 2961948950
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_OnHealthIsNotFull = { "OnHealthIsNotFull", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, OnHealthIsNotFull), Z_Construct_UDelegateFunction_GASProject_OnHealthIsNotFull__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthIsNotFull_MetaData), NewProp_OnHealthIsNotFull_MetaData) }; // 1596037261
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_OnManaIsNotFull = { "OnManaIsNotFull", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, OnManaIsNotFull), Z_Construct_UDelegateFunction_GASProject_OnManaIsNotFull__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnManaIsNotFull_MetaData), NewProp_OnManaIsNotFull_MetaData) }; // 1562833158
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_OnBlockEnded = { "OnBlockEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASProjectCharacter, OnBlockEnded), Z_Construct_UDelegateFunction_GASProject_OnBlockEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBlockEnded_MetaData), NewProp_OnBlockEnded_MetaData) }; // 4247123232
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGASProjectCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_RunAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_AttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_AreaAttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_ChargeJumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_RegenAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_ProtectAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_ToggleInventoryAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_AttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_PassiveGameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_PassiveGameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_GameplayAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_GameplayAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_bIsAbilitiesInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_bIsRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_MaxWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_MaxRunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_LeftWeaponCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_RightWeaponCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_AreaAttackCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_HealthBarComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_HealthBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_WidgetRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_bIsArmed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_OnIsArmedChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_OnHealthIsNotFull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_OnManaIsNotFull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASProjectCharacter_Statics::NewProp_OnBlockEnded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASProjectCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGASProjectCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASProjectCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGASProjectCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AGASProjectCharacter, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGASProjectCharacter_Statics::ClassParams = {
	&AGASProjectCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGASProjectCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGASProjectCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASProjectCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGASProjectCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGASProjectCharacter()
{
	if (!Z_Registration_Info_UClass_AGASProjectCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGASProjectCharacter.OuterSingleton, Z_Construct_UClass_AGASProjectCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGASProjectCharacter.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<AGASProjectCharacter>()
{
	return AGASProjectCharacter::StaticClass();
}
void AGASProjectCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_HealthBar(TEXT("HealthBar"));
	static const FName Name_bIsArmed(TEXT("bIsArmed"));
	const bool bIsValid = true
		&& Name_HealthBar == ClassReps[(int32)ENetFields_Private::HealthBar].Property->GetFName()
		&& Name_bIsArmed == ClassReps[(int32)ENetFields_Private::bIsArmed].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGASProjectCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGASProjectCharacter);
AGASProjectCharacter::~AGASProjectCharacter() {}
// End Class AGASProjectCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGASProjectCharacter, AGASProjectCharacter::StaticClass, TEXT("AGASProjectCharacter"), &Z_Registration_Info_UClass_AGASProjectCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASProjectCharacter), 1827933577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_3535554367(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
