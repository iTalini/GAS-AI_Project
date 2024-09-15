// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/BasicProgressBar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef GASPROJECT_BasicProgressBar_generated_h
#error "BasicProgressBar.generated.h already included, missing '#pragma once' in BasicProgressBar.h"
#endif
#define GASPROJECT_BasicProgressBar_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SERVER_SetBarColor_Validate(FLinearColor ); \
	virtual void SERVER_SetBarColor_Implementation(FLinearColor NewBarColor); \
	virtual bool SERVER_SetProgressBarPercent_Validate(float ); \
	virtual void SERVER_SetProgressBarPercent_Implementation(float NewProgressBarPercent); \
	virtual void ProgressBarChanged_Implementation(); \
	DECLARE_FUNCTION(execSetBarColor); \
	DECLARE_FUNCTION(execSetBarPercent); \
	DECLARE_FUNCTION(execSERVER_SetBarColor); \
	DECLARE_FUNCTION(execSERVER_SetProgressBarPercent); \
	DECLARE_FUNCTION(execOnRep_ChangedText); \
	DECLARE_FUNCTION(execOnRep_ChangedProgressBar); \
	DECLARE_FUNCTION(execProgressBarChanged);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h_16_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasicProgressBar(); \
	friend struct Z_Construct_UClass_UBasicProgressBar_Statics; \
public: \
	DECLARE_CLASS(UBasicProgressBar, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(UBasicProgressBar) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ProgressBarPercent=NETFIELD_REP_START, \
		ProgressBar, \
		Text, \
		BarColor, \
		NETFIELD_REP_END=BarColor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UBasicProgressBar) \
public:


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasicProgressBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBasicProgressBar(UBasicProgressBar&&); \
	UBasicProgressBar(const UBasicProgressBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasicProgressBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicProgressBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasicProgressBar) \
	NO_API virtual ~UBasicProgressBar();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h_13_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h_16_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class UBasicProgressBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
