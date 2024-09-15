// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/GAS_GABaseAttack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGASProjectCharacter;
class UAnimMontage;
struct FBranchingPointNotifyPayload;
struct FGameplayEventData;
struct FGameplayTag;
#ifdef GASPROJECT_GAS_GABaseAttack_generated_h
#error "GAS_GABaseAttack.generated.h already included, missing '#pragma once' in GAS_GABaseAttack.h"
#endif
#define GASPROJECT_GAS_GABaseAttack_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMontageNotifyEnded); \
	DECLARE_FUNCTION(execOnMontageNotifyBegin); \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execOnCancelled); \
	DECLARE_FUNCTION(execStartMovement); \
	DECLARE_FUNCTION(execStopMovement); \
	DECLARE_FUNCTION(execOnDamageEventReceived); \
	DECLARE_FUNCTION(execAssignTagsSet); \
	DECLARE_FUNCTION(execGetAbilityOwner); \
	DECLARE_FUNCTION(execGetDealDamageLevel); \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execGetForceStrength); \
	DECLARE_FUNCTION(execGetDashAnimMontage); \
	DECLARE_FUNCTION(execGetAttackAnimMontage);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h_18_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAS_GABaseAttack(); \
	friend struct Z_Construct_UClass_UGAS_GABaseAttack_Statics; \
public: \
	DECLARE_CLASS(UGAS_GABaseAttack, UGAS_GABaseAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(UGAS_GABaseAttack)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGAS_GABaseAttack(UGAS_GABaseAttack&&); \
	UGAS_GABaseAttack(const UGAS_GABaseAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAS_GABaseAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAS_GABaseAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGAS_GABaseAttack) \
	NO_API virtual ~UGAS_GABaseAttack();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h_15_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h_18_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class UGAS_GABaseAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
