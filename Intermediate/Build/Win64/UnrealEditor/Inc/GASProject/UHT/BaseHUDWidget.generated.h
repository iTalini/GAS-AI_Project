// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/BaseHUDWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBarType : uint8;
#ifdef GASPROJECT_BaseHUDWidget_generated_h
#error "BaseHUDWidget.generated.h already included, missing '#pragma once' in BaseHUDWidget.h"
#endif
#define GASPROJECT_BaseHUDWidget_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BaseHUDWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHideHelpText); \
	DECLARE_FUNCTION(execShowHelpText); \
	DECLARE_FUNCTION(execChangeHelpText); \
	DECLARE_FUNCTION(execOnAmountOfMoneyChanged); \
	DECLARE_FUNCTION(execOnBarChanged);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BaseHUDWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseHUDWidget(); \
	friend struct Z_Construct_UClass_UBaseHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UBaseHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(UBaseHUDWidget)


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BaseHUDWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseHUDWidget(UBaseHUDWidget&&); \
	UBaseHUDWidget(const UBaseHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseHUDWidget) \
	NO_API virtual ~UBaseHUDWidget();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BaseHUDWidget_h_17_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BaseHUDWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BaseHUDWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BaseHUDWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BaseHUDWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class UBaseHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BaseHUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
