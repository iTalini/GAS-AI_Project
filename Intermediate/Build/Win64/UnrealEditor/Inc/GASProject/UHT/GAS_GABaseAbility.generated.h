// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/GAS_GABaseAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayEffect;
struct FScalableFloat;
#ifdef GASPROJECT_GAS_GABaseAbility_generated_h
#error "GAS_GABaseAbility.generated.h already included, missing '#pragma once' in GAS_GABaseAbility.h"
#endif
#define GASPROJECT_GAS_GABaseAbility_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAbilityCostClass); \
	DECLARE_FUNCTION(execGetCostValue); \
	DECLARE_FUNCTION(execGetCooldownClass); \
	DECLARE_FUNCTION(execGetCooldownDuration);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAS_GABaseAbility(); \
	friend struct Z_Construct_UClass_UGAS_GABaseAbility_Statics; \
public: \
	DECLARE_CLASS(UGAS_GABaseAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(UGAS_GABaseAbility)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGAS_GABaseAbility(UGAS_GABaseAbility&&); \
	UGAS_GABaseAbility(const UGAS_GABaseAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAS_GABaseAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAS_GABaseAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGAS_GABaseAbility) \
	NO_API virtual ~UGAS_GABaseAbility();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAbility_h_12_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class UGAS_GABaseAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_GABaseAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
