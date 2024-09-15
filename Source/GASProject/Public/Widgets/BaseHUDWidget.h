// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Core/GAS_Data.h"
#include "BaseHUDWidget.generated.h"


class UBasicProgressBar;
class UTextBlock;

/**
 * 
 */
UCLASS()
class GASPROJECT_API UBaseHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void OnBarChanged(EBarType ChangedBarType, float CurrentData, float MaxData);

	UFUNCTION(BlueprintCallable)
	void OnAmountOfMoneyChanged(float NewAmount, float MaxAmount);

	UFUNCTION(BlueprintCallable)
	void ChangeHelpText(FString NewHelpText);

	UFUNCTION(BlueprintCallable)
	void ShowHelpText();

	UFUNCTION(BlueprintCallable)
	void HideHelpText();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget), Category = "Bars Widget")
	TObjectPtr <UBasicProgressBar> HealthWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget), Category = "Bars Widget")
	TObjectPtr <UBasicProgressBar> ManaWidget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (BindWidget), Category = "Bars Widget")
	TObjectPtr <UTextBlock> HelpText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (BindWidget), Category = "Bars Widget")
	TObjectPtr <UTextBlock> CurrentGoldAmoutText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (BindWidget), Category = "Bars Widget")
	TObjectPtr <UTextBlock> MaxGoldAmoutText;
};
