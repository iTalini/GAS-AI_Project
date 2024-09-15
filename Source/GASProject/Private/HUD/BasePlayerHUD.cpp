// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/BasePlayerHUD.h"
#include "UObject/ConstructorHelpers.h"
#include "Widgets/BaseHUDWidget.h"

void ABasePlayerHUD::BeginPlay()
{
	Super::BeginPlay();

	if (GetWorld() && HUDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UBaseHUDWidget>(GetWorld(), HUDWidgetClass);

		if (CurrentWidget)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

void ABasePlayerHUD::DrawHUD()
{
	Super::DrawHUD();
}

UBaseHUDWidget* ABasePlayerHUD::GetCurrentWidget() const
{
	return CurrentWidget;
}
