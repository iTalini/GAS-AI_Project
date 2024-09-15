// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable/InteractableBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGASProjectCharacter;
#ifdef GASPROJECT_InteractableBase_generated_h
#error "InteractableBase.generated.h already included, missing '#pragma once' in InteractableBase.h"
#endif
#define GASPROJECT_InteractableBase_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInteract);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h_16_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableBase(); \
	friend struct Z_Construct_UClass_AInteractableBase_Statics; \
public: \
	DECLARE_CLASS(AInteractableBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(AInteractableBase)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInteractableBase(AInteractableBase&&); \
	AInteractableBase(const AInteractableBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableBase) \
	NO_API virtual ~AInteractableBase();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h_13_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h_16_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class AInteractableBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_InteractableBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
