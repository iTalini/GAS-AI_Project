// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/GAS_AttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef GASPROJECT_GAS_AttributeSet_generated_h
#error "GAS_AttributeSet.generated.h already included, missing '#pragma once' in GAS_AttributeSet.h"
#endif
#define GASPROJECT_GAS_AttributeSet_generated_h

#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_AttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_AttributeSet_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAS_AttributeSet(); \
	friend struct Z_Construct_UClass_UGAS_AttributeSet_Statics; \
public: \
	DECLARE_CLASS(UGAS_AttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASProject"), NO_API) \
	DECLARE_SERIALIZER(UGAS_AttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		NETFIELD_REP_END=MaxMana	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UGAS_AttributeSet) \
public:


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_AttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGAS_AttributeSet(UGAS_AttributeSet&&); \
	UGAS_AttributeSet(const UGAS_AttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAS_AttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAS_AttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGAS_AttributeSet) \
	NO_API virtual ~UGAS_AttributeSet();


#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_AttributeSet_h_18_PROLOG
#define FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_AttributeSet_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_AttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_AttributeSet_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_AttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASPROJECT_API UClass* StaticClass<class UGAS_AttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GASProject_Source_GASProject_Public_GAS_GAS_AttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
