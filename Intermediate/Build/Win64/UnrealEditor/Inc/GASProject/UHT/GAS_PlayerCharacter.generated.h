// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/GAS_PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GASPROJECT_GAS_PlayerCharacter_generated_h
#error "GAS_PlayerCharacter.generated.h already included, missing '#pragma once' in GAS_PlayerCharacter.h"
#endif
#define GASPROJECT_GAS_PlayerCharacter_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_PlayerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnViewEnemyOverlapEnd); \
	DECLARE_FUNCTION(execOnViewEnemyBeginOverlap);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_PlayerCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGAS_PlayerCharacter(); \
	friend struct Z_Construct_UClass_AGAS_PlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AGAS_PlayerCharacter, AGASProjectCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(AGAS_PlayerCharacter)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_PlayerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGAS_PlayerCharacter(AGAS_PlayerCharacter&&); \
	AGAS_PlayerCharacter(const AGAS_PlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGAS_PlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGAS_PlayerCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGAS_PlayerCharacter) \
	NO_API virtual ~AGAS_PlayerCharacter();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_PlayerCharacter_h_17_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_PlayerCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_PlayerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_PlayerCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_PlayerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class AGAS_PlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
