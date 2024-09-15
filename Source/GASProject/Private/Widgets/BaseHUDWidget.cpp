// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/BaseHUDWidget.h"
#include "Widgets/BasicProgressBar.h"
#include "Components/TextBlock.h"


void UBaseHUDWidget::OnBarChanged(EBarType ChangedBarType, float CurrentData, float MaxData)
{
	switch (ChangedBarType)
	{
		case EBarType::Health:
			if (HealthWidget)
			{
				HealthWidget->SetBarPercent(CurrentData/MaxData);
			}
			break;
		case EBarType::Mana:
			if (ManaWidget)
			{
				ManaWidget->SetBarPercent(CurrentData / MaxData);
			}
			break;
		default: break;
	}
}

void UBaseHUDWidget::OnAmountOfMoneyChanged(float NewAmount, float MaxAmount)
{
	CurrentGoldAmoutText->SetText(FText::FromString(FString::SanitizeFloat(NewAmount)));
	MaxGoldAmoutText->SetText(FText::FromString(FString::SanitizeFloat(MaxAmount)));
}

void UBaseHUDWidget::ChangeHelpText(FString NewHelpText)
{
	HelpText->SetText(FText::FromString(NewHelpText));
}

void UBaseHUDWidget::ShowHelpText()
{
	HelpText->SetVisibility(ESlateVisibility::Visible);
}

void UBaseHUDWidget::HideHelpText()
{
	HelpText->SetVisibility(ESlateVisibility::Collapsed);
}

