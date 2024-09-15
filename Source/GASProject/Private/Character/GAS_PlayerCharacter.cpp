// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/GAS_PlayerCharacter.h"
#include "Blueprint/UserWidget.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "Character/GAS_AICharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "HUD/BasePlayerHUD.h"
#include "Interactable/InteractableBase.h"
#include "Interactable/PickupBase.h"
#include "Kismet/GameplayStatics.h"



AGAS_PlayerCharacter::AGAS_PlayerCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	ViewEnemyHealthBarRadius = CreateDefaultSubobject<USphereComponent>(TEXT("ViewEnemyHealthBarRadius"));
	ViewEnemyHealthBarRadius->SetupAttachment(RootComponent);
	ViewEnemyHealthBarRadius->SetWorldScale3D(FVector(11.0f, 11.0f, 11.0f));
	ViewEnemyHealthBarRadius->OnComponentBeginOverlap.AddDynamic(this, &AGAS_PlayerCharacter::OnViewEnemyBeginOverlap);
	ViewEnemyHealthBarRadius->OnComponentEndOverlap.AddDynamic(this, &AGAS_PlayerCharacter::OnViewEnemyOverlapEnd);

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;

	CurrentAmountOfGold = 0.0f;
	MaxAmountOfGold = 10000.0f;
}

void AGAS_PlayerCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	UpdateHUDBar(EBarType::Health, GetHealth(), GetMaxHealth());
	UpdateHUDBar(EBarType::Mana, GetMana(), GetMaxMana());
	UpdateHUDCurrencyText();
}

void AGAS_PlayerCharacter::OnViewEnemyBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AGAS_AICharacter* EnemyCharacter = Cast<AGAS_AICharacter>(OtherActor);
	if (EnemyCharacter)
	{
		EnemyCharacter->InPlayerRadiusOfVision();
	}
}

void AGAS_PlayerCharacter::OnViewEnemyOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AGAS_AICharacter* EnemyCharacter = Cast<AGAS_AICharacter>(OtherActor);
	if (EnemyCharacter)
	{
		EnemyCharacter->OutPlayerRadiusOfVision();
	}
}

void AGAS_PlayerCharacter::HandleHealthChanged(float DeltaValues, const FGameplayTagContainer& EventTags, FVector PointOfInterest)
{
	Super::HandleHealthChanged(DeltaValues, EventTags, PointOfInterest);

	if (bIsAbilitiesInitialized)
	{
		UpdateHUDBar(EBarType::Health, GetHealth(), GetMaxHealth());
	}
}

void AGAS_PlayerCharacter::HandleManaChanged(float DeltaValues, const FGameplayTagContainer& EventTags)
{
	Super::HandleManaChanged(DeltaValues, EventTags);

	if (bIsAbilitiesInitialized)
	{
		UpdateHUDBar(EBarType::Mana, GetMana(), GetMaxMana());
	}
}

void AGAS_PlayerCharacter::UpdateHUDBar(EBarType BarToChange, float CurrentData, float MaxData)
{
	ABasePlayerHUD* hud = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<ABasePlayerHUD>();
	if (hud)
	{
		if (hud->GetCurrentWidget())
		{
			hud->GetCurrentWidget()->OnBarChanged(BarToChange, CurrentData, MaxData);
		}
	}
}

void AGAS_PlayerCharacter::UpdateHUDCurrencyText()
{
	ABasePlayerHUD* hud = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<ABasePlayerHUD>();
	if (hud)
	{
		if (hud->GetCurrentWidget())
		{
			hud->GetCurrentWidget()->OnAmountOfMoneyChanged(CurrentAmountOfGold, MaxAmountOfGold);
		}
	}
}

void AGAS_PlayerCharacter::ToggleInventory()
{
}

void AGAS_PlayerCharacter::Interact()
{
	if (CurrentInteractable)
	{
		CurrentInteractable->Interact_Implementation(this);
	}
}

void AGAS_PlayerCharacter::CheckForInteractables()
{
	FVector StartTrace = GetFollowCamera()->GetComponentLocation();
	FVector EndTrace = (GetFollowCamera()->GetForwardVector() * ReachToPickUp) + StartTrace;

	/*Declare a hit result to store a raycast hit in*/
	FHitResult HitResult;

	/*Initialize the query params - ignore the actor*/
	FCollisionQueryParams CQP;
	CQP.AddIgnoredActor(this);

	/*Cast the line trace*/
	GetWorld()->LineTraceSingleByChannel(HitResult, StartTrace, EndTrace, ECC_WorldDynamic, CQP);


	/*Show/Hide Help Text*/
	AInteractableBase* InteractableActor = Cast<AInteractableBase>(HitResult.GetActor());

	ABasePlayerHUD* hud = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<ABasePlayerHUD>();
	if (hud)
	{
		if (hud->GetCurrentWidget())
		{
			if (InteractableActor)
			{
				CurrentInteractable = InteractableActor;
				hud->GetCurrentWidget()->ChangeHelpText(CurrentInteractable->InteractableHelpText);
				hud->GetCurrentWidget()->ShowHelpText();
			}
			else
			{
				CurrentInteractable = nullptr;
				hud->GetCurrentWidget()->ChangeHelpText("");
				hud->GetCurrentWidget()->HideHelpText();
			}
		}
	}
}

float AGAS_PlayerCharacter::GetCurrentAmountOfGold()
{
	return CurrentAmountOfGold;
}

float AGAS_PlayerCharacter::GetMaxAmountOfGold()
{
	return MaxAmountOfGold;
}

void AGAS_PlayerCharacter::AddGold(float AmountOfAddingGold)
{
	if (CurrentAmountOfGold + AmountOfAddingGold > MaxAmountOfGold)
	{
		/*Print warning message*/
	}
	
	CurrentAmountOfGold = FMath::Clamp(CurrentAmountOfGold + AmountOfAddingGold, 0.0, MaxAmountOfGold);
}

bool AGAS_PlayerCharacter::TryToSubtractGold(float AmountOfSubtractingGold)
{
	if (CurrentAmountOfGold - AmountOfSubtractingGold > 0.0f)
	{
		CurrentAmountOfGold -= AmountOfSubtractingGold;
		return true;
	}

	return false;
}
