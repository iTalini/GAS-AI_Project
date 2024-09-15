// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mode/GASProjectGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHUDState : uint8;
#ifdef GASPROJECT_GASProjectGameMode_generated_h
#error "GASProjectGameMode.generated.h already included, missing '#pragma once' in GASProjectGameMode.h"
#endif
#define GASPROJECT_GASProjectGameMode_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Mode_GASProjectGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHUDState);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Mode_GASProjectGameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGASProjectGameMode(); \
	friend struct Z_Construct_UClass_AGASProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AGASProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASProject"), GASPROJECT_API) \
	DECLARE_SERIALIZER(AGASProjectGameMode)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Mode_GASProjectGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGASProjectGameMode(AGASProjectGameMode&&); \
	AGASProjectGameMode(const AGASProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GASPROJECT_API, AGASProjectGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGASProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGASProjectGameMode) \
	GASPROJECT_API virtual ~AGASProjectGameMode();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Mode_GASProjectGameMode_h_10_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Mode_GASProjectGameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Mode_GASProjectGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Mode_GASProjectGameMode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Mode_GASProjectGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class AGASProjectGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_Mode_GASProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
