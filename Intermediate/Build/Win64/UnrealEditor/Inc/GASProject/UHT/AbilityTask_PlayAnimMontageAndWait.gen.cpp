// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_PlayAnimMontageAndWait() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GASPROJECT_API UClass* Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait();
GASPROJECT_API UClass* Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_NoRegister();
GASPROJECT_API UFunction* Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Delegate FPlayMontageAndWaitForEventDelegate
struct Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics
{
	struct _Script_GASProject_eventPlayMontageAndWaitForEventDelegate_Parms
	{
		FGameplayTag EventTag;
		FGameplayEventData EventData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate type used, EventTag and Payload may be empty if it came from the montage callbacks */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate type used, EventTag and Payload may be empty if it came from the montage callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASProject_eventPlayMontageAndWaitForEventDelegate_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASProject_eventPlayMontageAndWaitForEventDelegate_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 2811136703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASProject, nullptr, "PlayMontageAndWaitForEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::_Script_GASProject_eventPlayMontageAndWaitForEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::_Script_GASProject_eventPlayMontageAndWaitForEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPlayMontageAndWaitForEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayMontageAndWaitForEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData)
{
	struct _Script_GASProject_eventPlayMontageAndWaitForEventDelegate_Parms
	{
		FGameplayTag EventTag;
		FGameplayEventData EventData;
	};
	_Script_GASProject_eventPlayMontageAndWaitForEventDelegate_Parms Parms;
	Parms.EventTag=EventTag;
	Parms.EventData=EventData;
	PlayMontageAndWaitForEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FPlayMontageAndWaitForEventDelegate

// Begin Class UAbilityTask_PlayAnimMontageAndWait Function PlayMontageAndWaitForEvent
struct Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics
{
	struct AbilityTask_PlayAnimMontageAndWait_eventPlayMontageAndWaitForEvent_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		UAnimMontage* MontageToPlay;
		FGameplayTagContainer EventTags;
		float Rate;
		FName StartSection;
		bool bStopWhenAbilityEnds;
		float AnimRootMotionTranslationScale;
		UAbilityTask_PlayAnimMontageAndWait* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Play a montage and wait for it end. If a gameplay event happens that matches EventTags (or EventTags is empty), the EventReceived delegate will fire with a tag and event data.\n\x09 * If StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.\n\x09 * On normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\n\x09 * OnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\x09 *\n\x09 * @param TaskInstanceName Set to override the name of this task, for later querying\n\x09 * @param MontageToPlay The montage to play on the character\n\x09 * @param EventTags Any gameplay events matching this tag will activate the EventReceived callback. If empty, all events will trigger callback\n\x09 * @param Rate Change to play the montage faster or slower\n\x09 * @param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n\x09 * @param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely\n\x09 */" },
#endif
		{ "CPP_Default_AnimRootMotionTranslationScale", "1.000000" },
		{ "CPP_Default_bStopWhenAbilityEnds", "true" },
		{ "CPP_Default_Rate", "1.000000" },
		{ "CPP_Default_StartSection", "None" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play a montage and wait for it end. If a gameplay event happens that matches EventTags (or EventTags is empty), the EventReceived delegate will fire with a tag and event data.\nIf StopWhenAbilityEnds is true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.\nOn normal execution, OnBlendOut is called when the montage is blending out, and OnCompleted when it is completely done playing\nOnInterrupted is called if another montage overwrites this, and OnCancelled is called if the ability or task is cancelled\n\n@param TaskInstanceName Set to override the name of this task, for later querying\n@param MontageToPlay The montage to play on the character\n@param EventTags Any gameplay events matching this tag will activate the EventReceived callback. If empty, all events will trigger callback\n@param Rate Change to play the montage faster or slower\n@param bStopWhenAbilityEnds If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled\n@param AnimRootMotionTranslationScale Change to modify size of root motion or set to 0 to block it entirely" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
	static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayAnimMontageAndWait_eventPlayMontageAndWaitForEvent_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayAnimMontageAndWait_eventPlayMontageAndWaitForEvent_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayAnimMontageAndWait_eventPlayMontageAndWaitForEvent_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayAnimMontageAndWait_eventPlayMontageAndWaitForEvent_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayAnimMontageAndWait_eventPlayMontageAndWaitForEvent_Parms, Rate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayAnimMontageAndWait_eventPlayMontageAndWaitForEvent_Parms, StartSection), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
{
	((AbilityTask_PlayAnimMontageAndWait_eventPlayMontageAndWaitForEvent_Parms*)Obj)->bStopWhenAbilityEnds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_PlayAnimMontageAndWait_eventPlayMontageAndWaitForEvent_Parms), &Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayAnimMontageAndWait_eventPlayMontageAndWaitForEvent_Parms, AnimRootMotionTranslationScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayAnimMontageAndWait_eventPlayMontageAndWaitForEvent_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait, nullptr, "PlayMontageAndWaitForEvent", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::AbilityTask_PlayAnimMontageAndWait_eventPlayMontageAndWaitForEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::AbilityTask_PlayAnimMontageAndWait_eventPlayMontageAndWaitForEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_PlayAnimMontageAndWait::execPlayMontageAndWaitForEvent)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_EventTags);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
	P_GET_UBOOL(Z_Param_bStopWhenAbilityEnds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimRootMotionTranslationScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_PlayAnimMontageAndWait**)Z_Param__Result=UAbilityTask_PlayAnimMontageAndWait::PlayMontageAndWaitForEvent(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_MontageToPlay,Z_Param_EventTags,Z_Param_Rate,Z_Param_StartSection,Z_Param_bStopWhenAbilityEnds,Z_Param_AnimRootMotionTranslationScale);
	P_NATIVE_END;
}
// End Class UAbilityTask_PlayAnimMontageAndWait Function PlayMontageAndWaitForEvent

// Begin Class UAbilityTask_PlayAnimMontageAndWait
void UAbilityTask_PlayAnimMontageAndWait::StaticRegisterNativesUAbilityTask_PlayAnimMontageAndWait()
{
	UClass* Class = UAbilityTask_PlayAnimMontageAndWait::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayMontageAndWaitForEvent", &UAbilityTask_PlayAnimMontageAndWait::execPlayMontageAndWaitForEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_PlayAnimMontageAndWait);
UClass* Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_NoRegister()
{
	return UAbilityTask_PlayAnimMontageAndWait::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This task combines PlayMontageAndWait and WaitForEvent into one task, so you can wait for multiple types of activations such as from a melee combo\n * Much of this code is copied from one of those two ability tasks\n * This is a good task to look at as an example when creating game-specific tasks\n * It is expected that each game will have a set of game-specific tasks to do what they want\n */" },
#endif
		{ "IncludePath", "GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This task combines PlayMontageAndWait and WaitForEvent into one task, so you can wait for multiple types of activations such as from a melee combo\nMuch of this code is copied from one of those two ability tasks\nThis is a good task to look at as an example when creating game-specific tasks\nIt is expected that each game will have a set of game-specific tasks to do what they want" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The montage completely finished playing */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The montage completely finished playing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The montage started blending out */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The montage started blending out" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInterrupted_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The montage was interrupted */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The montage was interrupted" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ability task was explicitly cancelled by another ability */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability task was explicitly cancelled by another ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventReceived_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** One of the triggering gameplay events happened */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One of the triggering gameplay events happened" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Montage that is playing */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage that is playing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of tags to match against gameplay events */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of tags to match against gameplay events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Playback rate */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback rate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSection_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Section to start montage from */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Section to start montage from" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimRootMotionTranslationScale_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Modifies how root motion movement to apply */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifies how root motion movement to apply" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenAbilityEnds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rather montage should be aborted if ability ends */" },
#endif
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rather montage should be aborted if ability ends" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterrupted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventReceived;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
	static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_PlayAnimMontageAndWait_PlayMontageAndWaitForEvent, "PlayMontageAndWaitForEvent" }, // 3452138093
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_PlayAnimMontageAndWait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayAnimMontageAndWait, OnCompleted), Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 2405939547
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_OnBlendOut = { "OnBlendOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayAnimMontageAndWait, OnBlendOut), Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBlendOut_MetaData), NewProp_OnBlendOut_MetaData) }; // 2405939547
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_OnInterrupted = { "OnInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayAnimMontageAndWait, OnInterrupted), Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInterrupted_MetaData), NewProp_OnInterrupted_MetaData) }; // 2405939547
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayAnimMontageAndWait, OnCancelled), Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancelled_MetaData), NewProp_OnCancelled_MetaData) }; // 2405939547
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_EventReceived = { "EventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayAnimMontageAndWait, EventReceived), Z_Construct_UDelegateFunction_GASProject_PlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventReceived_MetaData), NewProp_EventReceived_MetaData) }; // 2405939547
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayAnimMontageAndWait, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageToPlay_MetaData), NewProp_MontageToPlay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayAnimMontageAndWait, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayAnimMontageAndWait, Rate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rate_MetaData), NewProp_Rate_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayAnimMontageAndWait, StartSection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSection_MetaData), NewProp_StartSection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayAnimMontageAndWait, AnimRootMotionTranslationScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimRootMotionTranslationScale_MetaData), NewProp_AnimRootMotionTranslationScale_MetaData) };
void Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
{
	((UAbilityTask_PlayAnimMontageAndWait*)Obj)->bStopWhenAbilityEnds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityTask_PlayAnimMontageAndWait), &Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenAbilityEnds_MetaData), NewProp_bStopWhenAbilityEnds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_OnBlendOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_OnInterrupted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_OnCancelled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_EventReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_EventTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_StartSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_AnimRootMotionTranslationScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::NewProp_bStopWhenAbilityEnds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::ClassParams = {
	&UAbilityTask_PlayAnimMontageAndWait::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_PlayAnimMontageAndWait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_PlayAnimMontageAndWait.OuterSingleton, Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_PlayAnimMontageAndWait.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<UAbilityTask_PlayAnimMontageAndWait>()
{
	return UAbilityTask_PlayAnimMontageAndWait::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_PlayAnimMontageAndWait);
UAbilityTask_PlayAnimMontageAndWait::~UAbilityTask_PlayAnimMontageAndWait() {}
// End Class UAbilityTask_PlayAnimMontageAndWait

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_PlayAnimMontageAndWait_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait, UAbilityTask_PlayAnimMontageAndWait::StaticClass, TEXT("UAbilityTask_PlayAnimMontageAndWait"), &Z_Registration_Info_UClass_UAbilityTask_PlayAnimMontageAndWait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_PlayAnimMontageAndWait), 1783595746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_PlayAnimMontageAndWait_h_4158791524(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_PlayAnimMontageAndWait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_PlayAnimMontageAndWait_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
