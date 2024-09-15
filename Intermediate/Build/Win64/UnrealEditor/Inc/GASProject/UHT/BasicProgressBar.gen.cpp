// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/Widgets/BasicProgressBar.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicProgressBar() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
GASPROJECT_API UClass* Z_Construct_UClass_UBasicProgressBar();
GASPROJECT_API UClass* Z_Construct_UClass_UBasicProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Class UBasicProgressBar Function OnRep_ChangedProgressBar
struct Z_Construct_UFunction_UBasicProgressBar_OnRep_ChangedProgressBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BasicProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicProgressBar_OnRep_ChangedProgressBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicProgressBar, nullptr, "OnRep_ChangedProgressBar", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_OnRep_ChangedProgressBar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicProgressBar_OnRep_ChangedProgressBar_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBasicProgressBar_OnRep_ChangedProgressBar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicProgressBar_OnRep_ChangedProgressBar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicProgressBar::execOnRep_ChangedProgressBar)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ChangedProgressBar();
	P_NATIVE_END;
}
// End Class UBasicProgressBar Function OnRep_ChangedProgressBar

// Begin Class UBasicProgressBar Function OnRep_ChangedText
struct Z_Construct_UFunction_UBasicProgressBar_OnRep_ChangedText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BasicProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicProgressBar_OnRep_ChangedText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicProgressBar, nullptr, "OnRep_ChangedText", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_OnRep_ChangedText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicProgressBar_OnRep_ChangedText_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBasicProgressBar_OnRep_ChangedText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicProgressBar_OnRep_ChangedText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicProgressBar::execOnRep_ChangedText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ChangedText();
	P_NATIVE_END;
}
// End Class UBasicProgressBar Function OnRep_ChangedText

// Begin Class UBasicProgressBar Function ProgressBarChanged
static FName NAME_UBasicProgressBar_ProgressBarChanged = FName(TEXT("ProgressBarChanged"));
void UBasicProgressBar::ProgressBarChanged()
{
	ProcessEvent(FindFunctionChecked(NAME_UBasicProgressBar_ProgressBarChanged),NULL);
}
struct Z_Construct_UFunction_UBasicProgressBar_ProgressBarChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BasicProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicProgressBar_ProgressBarChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicProgressBar, nullptr, "ProgressBarChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_ProgressBarChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicProgressBar_ProgressBarChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBasicProgressBar_ProgressBarChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicProgressBar_ProgressBarChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicProgressBar::execProgressBarChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProgressBarChanged_Implementation();
	P_NATIVE_END;
}
// End Class UBasicProgressBar Function ProgressBarChanged

// Begin Class UBasicProgressBar Function SERVER_SetBarColor
struct BasicProgressBar_eventSERVER_SetBarColor_Parms
{
	FLinearColor NewBarColor;
};
static FName NAME_UBasicProgressBar_SERVER_SetBarColor = FName(TEXT("SERVER_SetBarColor"));
void UBasicProgressBar::SERVER_SetBarColor(FLinearColor NewBarColor)
{
	BasicProgressBar_eventSERVER_SetBarColor_Parms Parms;
	Parms.NewBarColor=NewBarColor;
	ProcessEvent(FindFunctionChecked(NAME_UBasicProgressBar_SERVER_SetBarColor),&Parms);
}
struct Z_Construct_UFunction_UBasicProgressBar_SERVER_SetBarColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BasicProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewBarColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasicProgressBar_SERVER_SetBarColor_Statics::NewProp_NewBarColor = { "NewBarColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicProgressBar_eventSERVER_SetBarColor_Parms, NewBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicProgressBar_SERVER_SetBarColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicProgressBar_SERVER_SetBarColor_Statics::NewProp_NewBarColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_SERVER_SetBarColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicProgressBar_SERVER_SetBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicProgressBar, nullptr, "SERVER_SetBarColor", nullptr, nullptr, Z_Construct_UFunction_UBasicProgressBar_SERVER_SetBarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_SERVER_SetBarColor_Statics::PropPointers), sizeof(BasicProgressBar_eventSERVER_SetBarColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_SERVER_SetBarColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicProgressBar_SERVER_SetBarColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(BasicProgressBar_eventSERVER_SetBarColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicProgressBar_SERVER_SetBarColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicProgressBar_SERVER_SetBarColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicProgressBar::execSERVER_SetBarColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewBarColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->SERVER_SetBarColor_Validate(Z_Param_NewBarColor))
	{
		RPC_ValidateFailed(TEXT("SERVER_SetBarColor_Validate"));
		return;
	}
	P_THIS->SERVER_SetBarColor_Implementation(Z_Param_NewBarColor);
	P_NATIVE_END;
}
// End Class UBasicProgressBar Function SERVER_SetBarColor

// Begin Class UBasicProgressBar Function SERVER_SetProgressBarPercent
struct BasicProgressBar_eventSERVER_SetProgressBarPercent_Parms
{
	float NewProgressBarPercent;
};
static FName NAME_UBasicProgressBar_SERVER_SetProgressBarPercent = FName(TEXT("SERVER_SetProgressBarPercent"));
void UBasicProgressBar::SERVER_SetProgressBarPercent(float NewProgressBarPercent)
{
	BasicProgressBar_eventSERVER_SetProgressBarPercent_Parms Parms;
	Parms.NewProgressBarPercent=NewProgressBarPercent;
	ProcessEvent(FindFunctionChecked(NAME_UBasicProgressBar_SERVER_SetProgressBarPercent),&Parms);
}
struct Z_Construct_UFunction_UBasicProgressBar_SERVER_SetProgressBarPercent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BasicProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewProgressBarPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBasicProgressBar_SERVER_SetProgressBarPercent_Statics::NewProp_NewProgressBarPercent = { "NewProgressBarPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicProgressBar_eventSERVER_SetProgressBarPercent_Parms, NewProgressBarPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicProgressBar_SERVER_SetProgressBarPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicProgressBar_SERVER_SetProgressBarPercent_Statics::NewProp_NewProgressBarPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_SERVER_SetProgressBarPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicProgressBar_SERVER_SetProgressBarPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicProgressBar, nullptr, "SERVER_SetProgressBarPercent", nullptr, nullptr, Z_Construct_UFunction_UBasicProgressBar_SERVER_SetProgressBarPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_SERVER_SetProgressBarPercent_Statics::PropPointers), sizeof(BasicProgressBar_eventSERVER_SetProgressBarPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_SERVER_SetProgressBarPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicProgressBar_SERVER_SetProgressBarPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(BasicProgressBar_eventSERVER_SetProgressBarPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicProgressBar_SERVER_SetProgressBarPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicProgressBar_SERVER_SetProgressBarPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicProgressBar::execSERVER_SetProgressBarPercent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewProgressBarPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->SERVER_SetProgressBarPercent_Validate(Z_Param_NewProgressBarPercent))
	{
		RPC_ValidateFailed(TEXT("SERVER_SetProgressBarPercent_Validate"));
		return;
	}
	P_THIS->SERVER_SetProgressBarPercent_Implementation(Z_Param_NewProgressBarPercent);
	P_NATIVE_END;
}
// End Class UBasicProgressBar Function SERVER_SetProgressBarPercent

// Begin Class UBasicProgressBar Function SetBarColor
struct Z_Construct_UFunction_UBasicProgressBar_SetBarColor_Statics
{
	struct BasicProgressBar_eventSetBarColor_Parms
	{
		FLinearColor NewBarColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BasicProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewBarColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBasicProgressBar_SetBarColor_Statics::NewProp_NewBarColor = { "NewBarColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicProgressBar_eventSetBarColor_Parms, NewBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicProgressBar_SetBarColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicProgressBar_SetBarColor_Statics::NewProp_NewBarColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_SetBarColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicProgressBar_SetBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicProgressBar, nullptr, "SetBarColor", nullptr, nullptr, Z_Construct_UFunction_UBasicProgressBar_SetBarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_SetBarColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasicProgressBar_SetBarColor_Statics::BasicProgressBar_eventSetBarColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_SetBarColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicProgressBar_SetBarColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBasicProgressBar_SetBarColor_Statics::BasicProgressBar_eventSetBarColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicProgressBar_SetBarColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicProgressBar_SetBarColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicProgressBar::execSetBarColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewBarColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBarColor(Z_Param_NewBarColor);
	P_NATIVE_END;
}
// End Class UBasicProgressBar Function SetBarColor

// Begin Class UBasicProgressBar Function SetBarPercent
struct Z_Construct_UFunction_UBasicProgressBar_SetBarPercent_Statics
{
	struct BasicProgressBar_eventSetBarPercent_Parms
	{
		float NewPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BasicProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBasicProgressBar_SetBarPercent_Statics::NewProp_NewPercent = { "NewPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BasicProgressBar_eventSetBarPercent_Parms, NewPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicProgressBar_SetBarPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicProgressBar_SetBarPercent_Statics::NewProp_NewPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_SetBarPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicProgressBar_SetBarPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicProgressBar, nullptr, "SetBarPercent", nullptr, nullptr, Z_Construct_UFunction_UBasicProgressBar_SetBarPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_SetBarPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBasicProgressBar_SetBarPercent_Statics::BasicProgressBar_eventSetBarPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicProgressBar_SetBarPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBasicProgressBar_SetBarPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBasicProgressBar_SetBarPercent_Statics::BasicProgressBar_eventSetBarPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBasicProgressBar_SetBarPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBasicProgressBar_SetBarPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBasicProgressBar::execSetBarPercent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBarPercent(Z_Param_NewPercent);
	P_NATIVE_END;
}
// End Class UBasicProgressBar Function SetBarPercent

// Begin Class UBasicProgressBar
void UBasicProgressBar::StaticRegisterNativesUBasicProgressBar()
{
	UClass* Class = UBasicProgressBar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_ChangedProgressBar", &UBasicProgressBar::execOnRep_ChangedProgressBar },
		{ "OnRep_ChangedText", &UBasicProgressBar::execOnRep_ChangedText },
		{ "ProgressBarChanged", &UBasicProgressBar::execProgressBarChanged },
		{ "SERVER_SetBarColor", &UBasicProgressBar::execSERVER_SetBarColor },
		{ "SERVER_SetProgressBarPercent", &UBasicProgressBar::execSERVER_SetProgressBarPercent },
		{ "SetBarColor", &UBasicProgressBar::execSetBarColor },
		{ "SetBarPercent", &UBasicProgressBar::execSetBarPercent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasicProgressBar);
UClass* Z_Construct_UClass_UBasicProgressBar_NoRegister()
{
	return UBasicProgressBar::StaticClass();
}
struct Z_Construct_UClass_UBasicProgressBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/BasicProgressBar.h" },
		{ "ModuleRelativePath", "Public/Widgets/BasicProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBarPercent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/BasicProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BasicProgressBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/BasicProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BasicProgressBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/BasicProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarColor_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BasicProgressBar" },
		{ "ModuleRelativePath", "Public/Widgets/BasicProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyBarColor_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BasicProgressBar" },
		{ "ModuleRelativePath", "Public/Widgets/BasicProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullBarColor_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BasicProgressBar" },
		{ "ModuleRelativePath", "Public/Widgets/BasicProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProgressBarPercent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BarColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmptyBarColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FullBarColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasicProgressBar_OnRep_ChangedProgressBar, "OnRep_ChangedProgressBar" }, // 1217468857
		{ &Z_Construct_UFunction_UBasicProgressBar_OnRep_ChangedText, "OnRep_ChangedText" }, // 1155028082
		{ &Z_Construct_UFunction_UBasicProgressBar_ProgressBarChanged, "ProgressBarChanged" }, // 851546867
		{ &Z_Construct_UFunction_UBasicProgressBar_SERVER_SetBarColor, "SERVER_SetBarColor" }, // 2590512344
		{ &Z_Construct_UFunction_UBasicProgressBar_SERVER_SetProgressBarPercent, "SERVER_SetProgressBarPercent" }, // 23418957
		{ &Z_Construct_UFunction_UBasicProgressBar_SetBarColor, "SetBarColor" }, // 3496176493
		{ &Z_Construct_UFunction_UBasicProgressBar_SetBarPercent, "SetBarPercent" }, // 544637189
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicProgressBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasicProgressBar_Statics::NewProp_ProgressBarPercent = { "ProgressBarPercent", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicProgressBar, ProgressBarPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBarPercent_MetaData), NewProp_ProgressBarPercent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasicProgressBar_Statics::NewProp_ProgressBar = { "ProgressBar", "OnRep_ChangedProgressBar", (EPropertyFlags)0x012408010008002d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicProgressBar, ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_MetaData), NewProp_ProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasicProgressBar_Statics::NewProp_Text = { "Text", "OnRep_ChangedText", (EPropertyFlags)0x012408010008002d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicProgressBar, Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicProgressBar_Statics::NewProp_BarColor = { "BarColor", nullptr, (EPropertyFlags)0x0020080000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicProgressBar, BarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarColor_MetaData), NewProp_BarColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicProgressBar_Statics::NewProp_EmptyBarColor = { "EmptyBarColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicProgressBar, EmptyBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyBarColor_MetaData), NewProp_EmptyBarColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicProgressBar_Statics::NewProp_FullBarColor = { "FullBarColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicProgressBar, FullBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullBarColor_MetaData), NewProp_FullBarColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicProgressBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicProgressBar_Statics::NewProp_ProgressBarPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicProgressBar_Statics::NewProp_ProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicProgressBar_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicProgressBar_Statics::NewProp_BarColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicProgressBar_Statics::NewProp_EmptyBarColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicProgressBar_Statics::NewProp_FullBarColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicProgressBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBasicProgressBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicProgressBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicProgressBar_Statics::ClassParams = {
	&UBasicProgressBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBasicProgressBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBasicProgressBar_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicProgressBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasicProgressBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBasicProgressBar()
{
	if (!Z_Registration_Info_UClass_UBasicProgressBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicProgressBar.OuterSingleton, Z_Construct_UClass_UBasicProgressBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBasicProgressBar.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<UBasicProgressBar>()
{
	return UBasicProgressBar::StaticClass();
}
void UBasicProgressBar::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ProgressBarPercent(TEXT("ProgressBarPercent"));
	static const FName Name_ProgressBar(TEXT("ProgressBar"));
	static const FName Name_Text(TEXT("Text"));
	static const FName Name_BarColor(TEXT("BarColor"));
	const bool bIsValid = true
		&& Name_ProgressBarPercent == ClassReps[(int32)ENetFields_Private::ProgressBarPercent].Property->GetFName()
		&& Name_ProgressBar == ClassReps[(int32)ENetFields_Private::ProgressBar].Property->GetFName()
		&& Name_Text == ClassReps[(int32)ENetFields_Private::Text].Property->GetFName()
		&& Name_BarColor == ClassReps[(int32)ENetFields_Private::BarColor].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBasicProgressBar"));
}
UBasicProgressBar::UBasicProgressBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicProgressBar);
UBasicProgressBar::~UBasicProgressBar() {}
// End Class UBasicProgressBar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBasicProgressBar, UBasicProgressBar::StaticClass, TEXT("UBasicProgressBar"), &Z_Registration_Info_UClass_UBasicProgressBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicProgressBar), 898795461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h_2287934621(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BasicProgressBar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
