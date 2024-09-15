// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/BasicProgressBar.h"
#include "Character/GASProjectCharacter.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Net/UnrealNetwork.h"


void UBasicProgressBar::NativeConstruct()
{
	Super::NativeConstruct();
}

void UBasicProgressBar::NativePreConstruct()
{
	Super::NativePreConstruct();
}

void UBasicProgressBar::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!OwnerCharacter.IsValid())
		return;
}

void UBasicProgressBar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UBasicProgressBar, ProgressBarPercent);
	DOREPLIFETIME(UBasicProgressBar, ProgressBar);
	DOREPLIFETIME(UBasicProgressBar, BarColor);
	DOREPLIFETIME(UBasicProgressBar, Text);
}

void UBasicProgressBar::OnRep_ChangedProgressBar()
{
	ProgressBar->SetPercent(ProgressBarPercent);
}

void UBasicProgressBar::OnRep_ChangedText()
{
	Text->SetText(FText::FromString(TextToPrint));
}

bool UBasicProgressBar::SERVER_SetBarColor_Validate(FLinearColor NewBarColor)
{
	return true;
}

void UBasicProgressBar::SERVER_SetBarColor_Implementation(FLinearColor NewBarColor)
{
	BarColor = NewBarColor;
}


bool UBasicProgressBar::SERVER_SetProgressBarPercent_Validate(float NewProgressBarPercent)
{
	return true;
}

void UBasicProgressBar::SERVER_SetProgressBarPercent_Implementation(float NewProgressBarPercent)
{
	ProgressBarPercent = NewProgressBarPercent;
	OnRep_ChangedText();
	OnRep_ChangedProgressBar();
}

void UBasicProgressBar::ProgressBarChanged_Implementation()
{
}

void UBasicProgressBar::SetBarPercent(float NewPercent)
{
	if (!ProgressBar)
	{
		return;
	}

	float HPercent = FMath::Clamp(NewPercent, 0.0f, 1.0f);

	TextToPrint = FString::SanitizeFloat(HPercent * 100.0f);
	SERVER_SetProgressBarPercent(HPercent);
	ProgressBarPercent = HPercent;
	ProgressBar->SetPercent(ProgressBarPercent);
	Text->SetText(FText::FromString(TextToPrint));
	ProgressBarChanged();
}

void UBasicProgressBar::SetBarColor(FLinearColor NewBarColor)
{
	SERVER_SetBarColor(NewBarColor);
	BarColor = NewBarColor;
}

void UBasicProgressBar::SetOwnerCharacter(AGASProjectCharacter* NewOwner)
{
	OwnerCharacter = NewOwner;
}

