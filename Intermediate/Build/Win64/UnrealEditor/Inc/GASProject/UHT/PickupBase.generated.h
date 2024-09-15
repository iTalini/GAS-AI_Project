// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable/PickupBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASPROJECT_PickupBase_generated_h
#error "PickupBase.generated.h already included, missing '#pragma once' in PickupBase.h"
#endif
#define GASPROJECT_PickupBase_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUse);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h_18_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupBase(); \
	friend struct Z_Construct_UClass_APickupBase_Statics; \
public: \
	DECLARE_CLASS(APickupBase, AInteractableBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(APickupBase)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APickupBase(APickupBase&&); \
	APickupBase(const APickupBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupBase) \
	NO_API virtual ~APickupBase();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h_15_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h_18_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class APickupBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_Interactable_PickupBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
