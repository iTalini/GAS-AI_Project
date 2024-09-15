// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/GAS_PatrolRoute.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASPROJECT_GAS_PatrolRoute_generated_h
#error "GAS_PatrolRoute.generated.h already included, missing '#pragma once' in GAS_PatrolRoute.h"
#endif
#define GASPROJECT_GAS_PatrolRoute_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_AI_GAS_PatrolRoute_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIncrementPatrolRoute); \
	DECLARE_FUNCTION(execGetSplinePointAsWorldPosition);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_AI_GAS_PatrolRoute_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGAS_PatrolRoute(); \
	friend struct Z_Construct_UClass_AGAS_PatrolRoute_Statics; \
public: \
	DECLARE_CLASS(AGAS_PatrolRoute, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(AGAS_PatrolRoute)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_AI_GAS_PatrolRoute_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGAS_PatrolRoute(AGAS_PatrolRoute&&); \
	AGAS_PatrolRoute(const AGAS_PatrolRoute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGAS_PatrolRoute); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGAS_PatrolRoute); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGAS_PatrolRoute) \
	NO_API virtual ~AGAS_PatrolRoute();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_AI_GAS_PatrolRoute_h_11_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_AI_GAS_PatrolRoute_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_AI_GAS_PatrolRoute_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_AI_GAS_PatrolRoute_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_AI_GAS_PatrolRoute_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class AGAS_PatrolRoute>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_AI_GAS_PatrolRoute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
