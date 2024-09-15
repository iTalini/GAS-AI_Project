// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/BasePlayerHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASPROJECT_BasePlayerHUD_generated_h
#error "BasePlayerHUD.generated.h already included, missing '#pragma once' in BasePlayerHUD.h"
#endif
#define GASPROJECT_BasePlayerHUD_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_HUD_BasePlayerHUD_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayerHUD(); \
	friend struct Z_Construct_UClass_ABasePlayerHUD_Statics; \
public: \
	DECLARE_CLASS(ABasePlayerHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayerHUD)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_HUD_BasePlayerHUD_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABasePlayerHUD(ABasePlayerHUD&&); \
	ABasePlayerHUD(const ABasePlayerHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayerHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayerHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayerHUD) \
	NO_API virtual ~ABasePlayerHUD();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_HUD_BasePlayerHUD_h_15_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_HUD_BasePlayerHUD_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_HUD_BasePlayerHUD_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_HUD_BasePlayerHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class ABasePlayerHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_HUD_BasePlayerHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
