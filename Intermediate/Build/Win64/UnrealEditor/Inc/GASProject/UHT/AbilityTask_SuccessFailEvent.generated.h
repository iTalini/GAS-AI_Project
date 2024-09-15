// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/Tasks/AbilityTask_SuccessFailEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_SuccessFailEvent;
class UGameplayAbility;
struct FGameplayEventData;
struct FGameplayTag;
#ifdef GASPROJECT_AbilityTask_SuccessFailEvent_generated_h
#error "AbilityTask_SuccessFailEvent.generated.h already included, missing '#pragma once' in AbilityTask_SuccessFailEvent.h"
#endif
#define GASPROJECT_AbilityTask_SuccessFailEvent_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_SuccessFailEvent_h_11_DELEGATE \
GASPROJECT_API void FWaitSuccessFailEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitSuccessFailEventDelegate, FGameplayEventData Payload);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_SuccessFailEvent_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitSuccessFailEvent);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_SuccessFailEvent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_SuccessFailEvent(); \
	friend struct Z_Construct_UClass_UAbilityTask_SuccessFailEvent_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_SuccessFailEvent, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_SuccessFailEvent)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_SuccessFailEvent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_SuccessFailEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_SuccessFailEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_SuccessFailEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_SuccessFailEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_SuccessFailEvent(UAbilityTask_SuccessFailEvent&&); \
	UAbilityTask_SuccessFailEvent(const UAbilityTask_SuccessFailEvent&); \
public: \
	NO_API virtual ~UAbilityTask_SuccessFailEvent();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_SuccessFailEvent_h_16_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_SuccessFailEvent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_SuccessFailEvent_h_19_RPC_WRAPPERS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_SuccessFailEvent_h_19_INCLASS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_SuccessFailEvent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class UAbilityTask_SuccessFailEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_SuccessFailEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
