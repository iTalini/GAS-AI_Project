// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/GASProjectCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AGASProjectCharacter;
class UAbilitySystemComponent;
class UPrimitiveComponent;
class UWidgetComponent;
struct FGameplayTagContainer;
struct FHitResult;
#ifdef GASPROJECT_GASProjectCharacter_generated_h
#error "GASProjectCharacter.generated.h already included, missing '#pragma once' in GASProjectCharacter.h"
#endif
#define GASPROJECT_GASProjectCharacter_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_19_DELEGATE \
GASPROJECT_API void FOnIsArmedStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnIsArmedStateChanged, bool NewState);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_20_DELEGATE \
GASPROJECT_API void FOnHealthIsNotFull_DelegateWrapper(const FMulticastScriptDelegate& OnHealthIsNotFull);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_21_DELEGATE \
GASPROJECT_API void FOnManaIsNotFull_DelegateWrapper(const FMulticastScriptDelegate& OnManaIsNotFull);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_22_DELEGATE \
GASPROJECT_API void FOnBlockEnded_DelegateWrapper(const FMulticastScriptDelegate& OnBlockEnded);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetReachToPickUp); \
	DECLARE_FUNCTION(execSetOverlapWithInteractable); \
	DECLARE_FUNCTION(execGetReachToPickUp); \
	DECLARE_FUNCTION(execGetOverlapWithInteractable); \
	DECLARE_FUNCTION(execOnCapsuleComponentOverlapEnd); \
	DECLARE_FUNCTION(execOnCapsuleComponentBeginOverlap); \
	DECLARE_FUNCTION(execCallOnBlockEndedDelegate); \
	DECLARE_FUNCTION(execCallOnIsArmedChangedDelegate); \
	DECLARE_FUNCTION(execChangeIsArmedState); \
	DECLARE_FUNCTION(execSetIsAbilityAttackOn); \
	DECLARE_FUNCTION(execSetMovementSpeed); \
	DECLARE_FUNCTION(execSetMaxRunSpeed); \
	DECLARE_FUNCTION(execSetMaxWalkSpeed); \
	DECLARE_FUNCTION(execSetIsRunning); \
	DECLARE_FUNCTION(execGetIsAbilityAttackOn); \
	DECLARE_FUNCTION(execGetHealthBarComp); \
	DECLARE_FUNCTION(execGetIsArmed); \
	DECLARE_FUNCTION(execGetMaxRunSpeed); \
	DECLARE_FUNCTION(execGetMaxWalkSpeed); \
	DECLARE_FUNCTION(execGetIsRunning); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetAbilitySystemComponent);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_27_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGASProjectCharacter(); \
	friend struct Z_Construct_UClass_AGASProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AGASProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(AGASProjectCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AGASProjectCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HealthBar=NETFIELD_REP_START, \
		bIsArmed, \
		NETFIELD_REP_END=bIsArmed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGASProjectCharacter(AGASProjectCharacter&&); \
	AGASProjectCharacter(const AGASProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGASProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGASProjectCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGASProjectCharacter) \
	NO_API virtual ~AGASProjectCharacter();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_24_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_27_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_27_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class AGASProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_Character_GASProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
