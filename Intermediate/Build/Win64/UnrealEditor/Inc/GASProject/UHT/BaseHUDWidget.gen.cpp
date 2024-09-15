// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASProject/Public/Widgets/BaseHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseHUDWidget() {}

// Begin Cross Module References
GASPROJECT_API UClass* Z_Construct_UClass_UBaseHUDWidget();
GASPROJECT_API UClass* Z_Construct_UClass_UBaseHUDWidget_NoRegister();
GASPROJECT_API UClass* Z_Construct_UClass_UBasicProgressBar_NoRegister();
GASPROJECT_API UEnum* Z_Construct_UEnum_GASProject_EBarType();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_GASProject();
// End Cross Module References

// Begin Class UBaseHUDWidget Function ChangeHelpText
struct Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText_Statics
{
	struct BaseHUDWidget_eventChangeHelpText_Parms
	{
		FString NewHelpText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BaseHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewHelpText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText_Statics::NewProp_NewHelpText = { "NewHelpText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHUDWidget_eventChangeHelpText_Parms, NewHelpText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText_Statics::NewProp_NewHelpText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseHUDWidget, nullptr, "ChangeHelpText", nullptr, nullptr, Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText_Statics::BaseHUDWidget_eventChangeHelpText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText_Statics::BaseHUDWidget_eventChangeHelpText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseHUDWidget::execChangeHelpText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewHelpText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeHelpText(Z_Param_NewHelpText);
	P_NATIVE_END;
}
// End Class UBaseHUDWidget Function ChangeHelpText

// Begin Class UBaseHUDWidget Function HideHelpText
struct Z_Construct_UFunction_UBaseHUDWidget_HideHelpText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BaseHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseHUDWidget_HideHelpText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseHUDWidget, nullptr, "HideHelpText", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseHUDWidget_HideHelpText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseHUDWidget_HideHelpText_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseHUDWidget_HideHelpText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseHUDWidget_HideHelpText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseHUDWidget::execHideHelpText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideHelpText();
	P_NATIVE_END;
}
// End Class UBaseHUDWidget Function HideHelpText

// Begin Class UBaseHUDWidget Function OnAmountOfMoneyChanged
struct Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics
{
	struct BaseHUDWidget_eventOnAmountOfMoneyChanged_Parms
	{
		float NewAmount;
		float MaxAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BaseHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics::NewProp_NewAmount = { "NewAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHUDWidget_eventOnAmountOfMoneyChanged_Parms, NewAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics::NewProp_MaxAmount = { "MaxAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHUDWidget_eventOnAmountOfMoneyChanged_Parms, MaxAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics::NewProp_NewAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics::NewProp_MaxAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseHUDWidget, nullptr, "OnAmountOfMoneyChanged", nullptr, nullptr, Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics::BaseHUDWidget_eventOnAmountOfMoneyChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics::BaseHUDWidget_eventOnAmountOfMoneyChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseHUDWidget::execOnAmountOfMoneyChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewAmount);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAmountOfMoneyChanged(Z_Param_NewAmount,Z_Param_MaxAmount);
	P_NATIVE_END;
}
// End Class UBaseHUDWidget Function OnAmountOfMoneyChanged

// Begin Class UBaseHUDWidget Function OnBarChanged
struct Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics
{
	struct BaseHUDWidget_eventOnBarChanged_Parms
	{
		EBarType ChangedBarType;
		float CurrentData;
		float MaxData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BaseHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChangedBarType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChangedBarType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::NewProp_ChangedBarType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::NewProp_ChangedBarType = { "ChangedBarType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHUDWidget_eventOnBarChanged_Parms, ChangedBarType), Z_Construct_UEnum_GASProject_EBarType, METADATA_PARAMS(0, nullptr) }; // 267712009
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::NewProp_CurrentData = { "CurrentData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHUDWidget_eventOnBarChanged_Parms, CurrentData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::NewProp_MaxData = { "MaxData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHUDWidget_eventOnBarChanged_Parms, MaxData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::NewProp_ChangedBarType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::NewProp_ChangedBarType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::NewProp_CurrentData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::NewProp_MaxData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseHUDWidget, nullptr, "OnBarChanged", nullptr, nullptr, Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::BaseHUDWidget_eventOnBarChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::BaseHUDWidget_eventOnBarChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseHUDWidget::execOnBarChanged)
{
	P_GET_ENUM(EBarType,Z_Param_ChangedBarType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentData);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBarChanged(EBarType(Z_Param_ChangedBarType),Z_Param_CurrentData,Z_Param_MaxData);
	P_NATIVE_END;
}
// End Class UBaseHUDWidget Function OnBarChanged

// Begin Class UBaseHUDWidget Function ShowHelpText
struct Z_Construct_UFunction_UBaseHUDWidget_ShowHelpText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/BaseHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseHUDWidget_ShowHelpText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseHUDWidget, nullptr, "ShowHelpText", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseHUDWidget_ShowHelpText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseHUDWidget_ShowHelpText_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseHUDWidget_ShowHelpText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseHUDWidget_ShowHelpText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseHUDWidget::execShowHelpText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowHelpText();
	P_NATIVE_END;
}
// End Class UBaseHUDWidget Function ShowHelpText

// Begin Class UBaseHUDWidget
void UBaseHUDWidget::StaticRegisterNativesUBaseHUDWidget()
{
	UClass* Class = UBaseHUDWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeHelpText", &UBaseHUDWidget::execChangeHelpText },
		{ "HideHelpText", &UBaseHUDWidget::execHideHelpText },
		{ "OnAmountOfMoneyChanged", &UBaseHUDWidget::execOnAmountOfMoneyChanged },
		{ "OnBarChanged", &UBaseHUDWidget::execOnBarChanged },
		{ "ShowHelpText", &UBaseHUDWidget::execShowHelpText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseHUDWidget);
UClass* Z_Construct_UClass_UBaseHUDWidget_NoRegister()
{
	return UBaseHUDWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/BaseHUDWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/BaseHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Bars Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/BaseHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Bars Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/BaseHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelpText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Bars Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/BaseHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGoldAmoutText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Bars Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/BaseHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGoldAmoutText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Bars Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/BaseHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HelpText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentGoldAmoutText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxGoldAmoutText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseHUDWidget_ChangeHelpText, "ChangeHelpText" }, // 2384363829
		{ &Z_Construct_UFunction_UBaseHUDWidget_HideHelpText, "HideHelpText" }, // 379572653
		{ &Z_Construct_UFunction_UBaseHUDWidget_OnAmountOfMoneyChanged, "OnAmountOfMoneyChanged" }, // 4033912077
		{ &Z_Construct_UFunction_UBaseHUDWidget_OnBarChanged, "OnBarChanged" }, // 4076881865
		{ &Z_Construct_UFunction_UBaseHUDWidget_ShowHelpText, "ShowHelpText" }, // 1827325081
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseHUDWidget_Statics::NewProp_HealthWidget = { "HealthWidget", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseHUDWidget, HealthWidget), Z_Construct_UClass_UBasicProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthWidget_MetaData), NewProp_HealthWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseHUDWidget_Statics::NewProp_ManaWidget = { "ManaWidget", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseHUDWidget, ManaWidget), Z_Construct_UClass_UBasicProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaWidget_MetaData), NewProp_ManaWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseHUDWidget_Statics::NewProp_HelpText = { "HelpText", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseHUDWidget, HelpText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelpText_MetaData), NewProp_HelpText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseHUDWidget_Statics::NewProp_CurrentGoldAmoutText = { "CurrentGoldAmoutText", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseHUDWidget, CurrentGoldAmoutText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGoldAmoutText_MetaData), NewProp_CurrentGoldAmoutText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseHUDWidget_Statics::NewProp_MaxGoldAmoutText = { "MaxGoldAmoutText", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseHUDWidget, MaxGoldAmoutText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGoldAmoutText_MetaData), NewProp_MaxGoldAmoutText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseHUDWidget_Statics::NewProp_HealthWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseHUDWidget_Statics::NewProp_ManaWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseHUDWidget_Statics::NewProp_HelpText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseHUDWidget_Statics::NewProp_CurrentGoldAmoutText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseHUDWidget_Statics::NewProp_MaxGoldAmoutText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseHUDWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GASProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseHUDWidget_Statics::ClassParams = {
	&UBaseHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseHUDWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseHUDWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseHUDWidget()
{
	if (!Z_Registration_Info_UClass_UBaseHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseHUDWidget.OuterSingleton, Z_Construct_UClass_UBaseHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseHUDWidget.OuterSingleton;
}
template<> GASPROJECT_API UClass* StaticClass<UBaseHUDWidget>()
{
	return UBaseHUDWidget::StaticClass();
}
UBaseHUDWidget::UBaseHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseHUDWidget);
UBaseHUDWidget::~UBaseHUDWidget() {}
// End Class UBaseHUDWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BaseHUDWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseHUDWidget, UBaseHUDWidget::StaticClass, TEXT("UBaseHUDWidget"), &Z_Registration_Info_UClass_UBaseHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseHUDWidget), 1843634868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BaseHUDWidget_h_448074017(TEXT("/Script/GASProject"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BaseHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GASProject_Source_GASProject_Public_Widgets_BaseHUDWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
