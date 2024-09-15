// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/GAS/Tasks/AbilityTask_SuccessFailEvent.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_SuccessFailEvent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GASPROJECT_API UClass* Z_Construct_UClass_UAbilityTask_SuccessFailEvent();
GASPROJECT_API UClass* Z_Construct_UClass_UAbilityTask_SuccessFailEvent_NoRegister();
GASPROJECT_API UFunction* Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Delegate FWaitSuccessFailEventDelegate
struct Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature_Statics
{
	struct _Script_GASProject_eventWaitSuccessFailEventDelegate_Parms
	{
		FGameplayEventData Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_SuccessFailEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GASProject_eventWaitSuccessFailEventDelegate_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 2811136703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GASProject, nullptr, "WaitSuccessFailEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature_Statics::_Script_GASProject_eventWaitSuccessFailEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature_Statics::_Script_GASProject_eventWaitSuccessFailEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitSuccessFailEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitSuccessFailEventDelegate, FGameplayEventData Payload)
{
	struct _Script_GASProject_eventWaitSuccessFailEventDelegate_Parms
	{
		FGameplayEventData Payload;
	};
	_Script_GASProject_eventWaitSuccessFailEventDelegate_Parms Parms;
	Parms.Payload=Payload;
	WaitSuccessFailEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWaitSuccessFailEventDelegate

// Begin Class UAbilityTask_SuccessFailEvent Function WaitSuccessFailEvent
struct Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics
{
	struct AbilityTask_SuccessFailEvent_eventWaitSuccessFailEvent_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayTag SuccessTag;
		FGameplayTag FailedTag;
		AActor* OptionalExternalTarget;
		bool OnlyTriggerOnce;
		bool OnlyMatchExact;
		UAbilityTask_SuccessFailEvent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Wait until the specified gameplay tag event is triggered. Allows success or failure.\n\x09 * By default this will look at the owner of this ability.\n\x09 * OptionalExternalTarget can be set to make this look at another actor's tags for changes\n\x09 * It will keep listening as long as OnlyTriggerOnce = false\n\x09 * If OnlyMatchExact = false it will trigger for nested tags\n\x09 */" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_SuccessFailEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait until the specified gameplay tag event is triggered. Allows success or failure.\nBy default this will look at the owner of this ability.\nOptionalExternalTarget can be set to make this look at another actor's tags for changes\nIt will keep listening as long as OnlyTriggerOnce = false\nIf OnlyMatchExact = false it will trigger for nested tags" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuccessTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailedTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalTarget;
	static void NewProp_OnlyTriggerOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyTriggerOnce;
	static void NewProp_OnlyMatchExact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyMatchExact;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SuccessFailEvent_eventWaitSuccessFailEvent_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_SuccessTag = { "SuccessTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SuccessFailEvent_eventWaitSuccessFailEvent_Parms, SuccessTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_FailedTag = { "FailedTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SuccessFailEvent_eventWaitSuccessFailEvent_Parms, FailedTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_OptionalExternalTarget = { "OptionalExternalTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SuccessFailEvent_eventWaitSuccessFailEvent_Parms, OptionalExternalTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_OnlyTriggerOnce_SetBit(void* Obj)
{
	((AbilityTask_SuccessFailEvent_eventWaitSuccessFailEvent_Parms*)Obj)->OnlyTriggerOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_OnlyTriggerOnce = { "OnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_SuccessFailEvent_eventWaitSuccessFailEvent_Parms), &Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_OnlyTriggerOnce_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_OnlyMatchExact_SetBit(void* Obj)
{
	((AbilityTask_SuccessFailEvent_eventWaitSuccessFailEvent_Parms*)Obj)->OnlyMatchExact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_OnlyMatchExact = { "OnlyMatchExact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_SuccessFailEvent_eventWaitSuccessFailEvent_Parms), &Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_OnlyMatchExact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_SuccessFailEvent_eventWaitSuccessFailEvent_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_SuccessFailEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_SuccessTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_FailedTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_OptionalExternalTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_OnlyTriggerOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_OnlyMatchExact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_SuccessFailEvent, nullptr, "WaitSuccessFailEvent", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::AbilityTask_SuccessFailEvent_eventWaitSuccessFailEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::AbilityTask_SuccessFailEvent_eventWaitSuccessFailEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_SuccessFailEvent::execWaitSuccessFailEvent)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayTag,Z_Param_SuccessTag);
	P_GET_STRUCT(FGameplayTag,Z_Param_FailedTag);
	P_GET_OBJECT(AActor,Z_Param_OptionalExternalTarget);
	P_GET_UBOOL(Z_Param_OnlyTriggerOnce);
	P_GET_UBOOL(Z_Param_OnlyMatchExact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_SuccessFailEvent**)Z_Param__Result=UAbilityTask_SuccessFailEvent::WaitSuccessFailEvent(Z_Param_OwningAbility,Z_Param_SuccessTag,Z_Param_FailedTag,Z_Param_OptionalExternalTarget,Z_Param_OnlyTriggerOnce,Z_Param_OnlyMatchExact);
	P_NATIVE_END;
}
// End Class UAbilityTask_SuccessFailEvent Function WaitSuccessFailEvent

// Begin Class UAbilityTask_SuccessFailEvent
void UAbilityTask_SuccessFailEvent::StaticRegisterNativesUAbilityTask_SuccessFailEvent()
{
	UClass* Class = UAbilityTask_SuccessFailEvent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WaitSuccessFailEvent", &UAbilityTask_SuccessFailEvent::execWaitSuccessFailEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_SuccessFailEvent);
UClass* Z_Construct_UClass_UAbilityTask_SuccessFailEvent_NoRegister()
{
	return UAbilityTask_SuccessFailEvent::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n* Custom Ability Task which uses a Success or Failed tag to decide between two branches.\n*/" },
#endif
		{ "IncludePath", "GAS/Tasks/AbilityTask_SuccessFailEvent.h" },
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_SuccessFailEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Custom Ability Task which uses a Success or Failed tag to decide between two branches." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessEventReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_SuccessFailEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedEventReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_SuccessFailEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalExternalTarget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS/Tasks/AbilityTask_SuccessFailEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SuccessEventReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FailedEventReceived;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_SuccessFailEvent_WaitSuccessFailEvent, "WaitSuccessFailEvent" }, // 3977941339
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_SuccessFailEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::NewProp_SuccessEventReceived = { "SuccessEventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_SuccessFailEvent, SuccessEventReceived), Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessEventReceived_MetaData), NewProp_SuccessEventReceived_MetaData) }; // 2149427577
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::NewProp_FailedEventReceived = { "FailedEventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_SuccessFailEvent, FailedEventReceived), Z_Construct_UDelegateFunction_GASProject_WaitSuccessFailEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedEventReceived_MetaData), NewProp_FailedEventReceived_MetaData) }; // 2149427577
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::NewProp_OptionalExternalTarget = { "OptionalExternalTarget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_SuccessFailEvent, OptionalExternalTarget), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalExternalTarget_MetaData), NewProp_OptionalExternalTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::NewProp_SuccessEventReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::NewProp_FailedEventReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::NewProp_OptionalExternalTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::ClassParams = {
	&UAbilityTask_SuccessFailEvent::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_SuccessFailEvent()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_SuccessFailEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_SuccessFailEvent.OuterSingleton, Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_SuccessFailEvent.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<UAbilityTask_SuccessFailEvent>()
{
	return UAbilityTask_SuccessFailEvent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_SuccessFailEvent);
UAbilityTask_SuccessFailEvent::~UAbilityTask_SuccessFailEvent() {}
// End Class UAbilityTask_SuccessFailEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_SuccessFailEvent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_SuccessFailEvent, UAbilityTask_SuccessFailEvent::StaticClass, TEXT("UAbilityTask_SuccessFailEvent"), &Z_Registration_Info_UClass_UAbilityTask_SuccessFailEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_SuccessFailEvent), 3156969514U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_SuccessFailEvent_h_2443579651(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_SuccessFailEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_SuccessFailEvent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
