// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/GAS_AICharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AGAS_BasicEnemyAIController;
class UAnimMontage;
class UBehaviorTree;
enum class EGAS_EnemyMovementSpeed : uint8;
#ifdef GASPROJECT_GAS_AICharacter_generated_h
#error "GAS_AICharacter.generated.h already included, missing '#pragma once' in GAS_AICharacter.h"
#endif
#define GASPROJECT_GAS_AICharacter_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestroyWeapon); \
	DECLARE_FUNCTION(execSpawnWeapon); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageBlendingOut); \
	DECLARE_FUNCTION(execSetMovementSpeedType); \
	DECLARE_FUNCTION(execCheckHealthBarVisibility); \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execGetWeaponActor); \
	DECLARE_FUNCTION(execGetAIC_Enemy); \
	DECLARE_FUNCTION(execGetBehaviorTree); \
	DECLARE_FUNCTION(execGetDefendRadius); \
	DECLARE_FUNCTION(execGetAttackRadius); \
	DECLARE_FUNCTION(execSetDefendRadius); \
	DECLARE_FUNCTION(execSetAttackRadius);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h_23_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGAS_AICharacter(); \
	friend struct Z_Construct_UClass_AGAS_AICharacter_Statics; \
public: \
	DECLARE_CLASS(AGAS_AICharacter, AGASProjectCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(AGAS_AICharacter)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGAS_AICharacter(AGAS_AICharacter&&); \
	AGAS_AICharacter(const AGAS_AICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGAS_AICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGAS_AICharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGAS_AICharacter) \
	NO_API virtual ~AGAS_AICharacter();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h_20_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h_23_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class AGAS_AICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
