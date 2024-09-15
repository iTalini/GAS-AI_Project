// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/Tasks/AbilityTask_PlayAnimMontageAndWait.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_PlayAnimMontageAndWait;
class UAnimMontage;
class UGameplayAbility;
struct FGameplayEventData;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef GASPROJECT_AbilityTask_PlayAnimMontageAndWait_generated_h
#error "AbilityTask_PlayAnimMontageAndWait.generated.h already included, missing '#pragma once' in AbilityTask_PlayAnimMontageAndWait.h"
#endif
#define GASPROJECT_AbilityTask_PlayAnimMontageAndWait_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_PlayAnimMontageAndWait_h_13_DELEGATE \
GASPROJECT_API void FPlayMontageAndWaitForEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayMontageAndWaitForEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_PlayAnimMontageAndWait_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayMontageAndWaitForEvent);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_PlayAnimMontageAndWait_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_PlayAnimMontageAndWait(); \
	friend struct Z_Construct_UClass_UAbilityTask_PlayAnimMontageAndWait_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_PlayAnimMontageAndWait, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_PlayAnimMontageAndWait)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_PlayAnimMontageAndWait_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_PlayAnimMontageAndWait(UAbilityTask_PlayAnimMontageAndWait&&); \
	UAbilityTask_PlayAnimMontageAndWait(const UAbilityTask_PlayAnimMontageAndWait&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_PlayAnimMontageAndWait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_PlayAnimMontageAndWait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_PlayAnimMontageAndWait) \
	NO_API virtual ~UAbilityTask_PlayAnimMontageAndWait();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_PlayAnimMontageAndWait_h_21_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_PlayAnimMontageAndWait_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_PlayAnimMontageAndWait_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_PlayAnimMontageAndWait_h_24_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_PlayAnimMontageAndWait_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class UAbilityTask_PlayAnimMontageAndWait>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_Tasks_AbilityTask_PlayAnimMontageAndWait_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
