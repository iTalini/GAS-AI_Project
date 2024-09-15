// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/GAS_AICharacter_Wizard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
#ifdef GASPROJECT_GAS_AICharacter_Wizard_generated_h
#error "GAS_AICharacter_Wizard.generated.h already included, missing '#pragma once' in GAS_AICharacter_Wizard.h"
#endif
#define GASPROJECT_GAS_AICharacter_Wizard_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_Wizard_h_13_DELEGATE \
GASPROJECT_API void FOnTeleportEnd_DelegateWrapper(const FMulticastScriptDelegate& OnTeleportEnd);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_Wizard_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTimelineFinishedCallback); \
	DECLARE_FUNCTION(execTimelineCallback); \
	DECLARE_FUNCTION(execCallOnTeleportEndDelegate); \
	DECLARE_FUNCTION(execMakeWizardVisible); \
	DECLARE_FUNCTION(execMakeWizardInvisible); \
	DECLARE_FUNCTION(execSetTeleportationPoint); \
	DECLARE_FUNCTION(execGetTeleportationPoint); \
	DECLARE_FUNCTION(execGetDynMaterial);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_Wizard_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGAS_AICharacter_Wizard(); \
	friend struct Z_Construct_UClass_AGAS_AICharacter_Wizard_Statics; \
public: \
	DECLARE_CLASS(AGAS_AICharacter_Wizard, AGAS_AICharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(AGAS_AICharacter_Wizard)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_Wizard_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGAS_AICharacter_Wizard(AGAS_AICharacter_Wizard&&); \
	AGAS_AICharacter_Wizard(const AGAS_AICharacter_Wizard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGAS_AICharacter_Wizard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGAS_AICharacter_Wizard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGAS_AICharacter_Wizard) \
	NO_API virtual ~AGAS_AICharacter_Wizard();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_Wizard_h_18_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_Wizard_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_Wizard_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_Wizard_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_Wizard_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class AGAS_AICharacter_Wizard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GAS_AICharacter_Wizard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
