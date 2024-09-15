// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/GAS_BasicEnemyAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EGAS_AIState : uint8;
#ifdef GASPROJECT_GAS_BasicEnemyAIController_generated_h
#error "GAS_BasicEnemyAIController.generated.h already included, missing '#pragma once' in GAS_BasicEnemyAIController.h"
#endif
#define GASPROJECT_GAS_BasicEnemyAIController_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicEnemyAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execTryToSetStateAsDead); \
	DECLARE_FUNCTION(execTryToSetStateAsInvestigating); \
	DECLARE_FUNCTION(execTryToSetStateAsAttacking); \
	DECLARE_FUNCTION(execTryToSetStateAsPassive);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicEnemyAIController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGAS_BasicEnemyAIController(); \
	friend struct Z_Construct_UClass_AGAS_BasicEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AGAS_BasicEnemyAIController, AGAS_BasicAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(AGAS_BasicEnemyAIController)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicEnemyAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGAS_BasicEnemyAIController(AGAS_BasicEnemyAIController&&); \
	AGAS_BasicEnemyAIController(const AGAS_BasicEnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGAS_BasicEnemyAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGAS_BasicEnemyAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGAS_BasicEnemyAIController) \
	NO_API virtual ~AGAS_BasicEnemyAIController();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicEnemyAIController_h_15_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicEnemyAIController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicEnemyAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicEnemyAIController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicEnemyAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class AGAS_BasicEnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicEnemyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
