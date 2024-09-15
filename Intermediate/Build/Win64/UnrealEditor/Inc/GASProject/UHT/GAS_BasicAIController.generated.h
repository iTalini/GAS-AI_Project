// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/GAS_BasicAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef GASPROJECT_GAS_BasicAIController_generated_h
#error "GAS_BasicAIController.generated.h already included, missing '#pragma once' in GAS_BasicAIController.h"
#endif
#define GASPROJECT_GAS_BasicAIController_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicAIController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPerceptionUpdated);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicAIController_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGAS_BasicAIController(); \
	friend struct Z_Construct_UClass_AGAS_BasicAIController_Statics; \
public: \
	DECLARE_CLASS(AGAS_BasicAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(AGAS_BasicAIController)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicAIController_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGAS_BasicAIController(AGAS_BasicAIController&&); \
	AGAS_BasicAIController(const AGAS_BasicAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGAS_BasicAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGAS_BasicAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGAS_BasicAIController) \
	NO_API virtual ~AGAS_BasicAIController();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicAIController_h_19_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicAIController_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicAIController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicAIController_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicAIController_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class AGAS_BasicAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_Controllers_GAS_BasicAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
