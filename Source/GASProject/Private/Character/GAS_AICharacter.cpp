// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/GAS_AICharacter.h"
#include "Controllers/GAS_BasicEnemyAIController.h"
#include "Interactable/InteractableBase.h"
#include "Interactable/PickupBase.h"
#include "Widgets/BasicProgressBar.h"
#include "Animation/AnimMontage.h"
#include "BrainComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Perception/AIPerceptionComponent.h"


AGAS_AICharacter::AGAS_AICharacter(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		GetCharacterMovement()->bOrientRotationToMovement = false;
	}

	IdleSpeed		= 0.0f;

	WalkingSpeed	= 150.0f;

	JoggingSpeed	= 300.0f;

	SprintingSpeed	= 500.0f;


	ReachToPickUp	= 150.0f;


	AttackRadius	= 150.0f;

	DefendRadius	= 350.0f;
}

void AGAS_AICharacter::SetAttackRadius(float NewValue)
{
	AttackRadius = NewValue;
}

void AGAS_AICharacter::SetDefendRadius(float NewValue)
{
	DefendRadius = NewValue;
}

float AGAS_AICharacter::GetAttackRadius() const
{
	return AttackRadius;
}

float AGAS_AICharacter::GetDefendRadius() const
{
	return DefendRadius;
}

UBehaviorTree* AGAS_AICharacter::GetBehaviorTree() const
{
	return BehaviorTree.Get();
}

AGAS_BasicEnemyAIController* AGAS_AICharacter::GetAIC_Enemy() const
{
	return AIC_Enemy;
}

AActor* AGAS_AICharacter::GetWeaponActor() const
{
	return WeaponActor;
}

void AGAS_AICharacter::BeginPlay()
{
	Super::BeginPlay();

	AmountOfPlayersWhoSeesCharacter = 0;
	CheckHealthBarVisibility();

	AIC_Enemy = Cast<AGAS_BasicEnemyAIController>(UAIBlueprintHelperLibrary::GetAIController(this));
}

void AGAS_AICharacter::OnHealthChanged_Implementation(float DeltaValues, const FGameplayTagContainer& EventTags)
{
	if (UBasicProgressBar* HealthProgressBar = Cast<UBasicProgressBar>(GetHealthBarComp()->GetWidget()))
	{
		HealthProgressBar->SetBarPercent(GetHealth() / GetMaxHealth());

		CheckHealthBarVisibility();
	}
	if (GetHealth() <= 0.0f)
	{
		OnDeath();
	}
}

void AGAS_AICharacter::OnDeath_Implementation()
{
	GetMesh()->SetSimulatePhysics(true);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);


	if (AIC_Enemy)
	{
		AIC_Enemy->TryToSetStateAsDead();
		AIC_Enemy->GetBrainComponent()->StopLogic("");
	}

	if (DeathAnimation.Get())
	{
		UAnimMontage* AI_Death = DeathAnimation.Get();
		if (AI_Death && AI_Death->IsValidToPlay())
		{
			bool bPlayedSuccessfully = false;
			if (GetMesh())
			{
				if (UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance())
				{
					const float MontageLength = AnimInstance->Montage_Play(AI_Death, 1.0f, EMontagePlayReturnType::MontageLength);
					bPlayedSuccessfully = (MontageLength > 0.f);

					if (bPlayedSuccessfully)
					{
						UAnimInstance* AnimInstancePtr = AnimInstance;

						BlendingOutDelegate.BindUObject(this, &AGAS_AICharacter::OnMontageBlendingOut);
						AnimInstance->Montage_SetBlendingOutDelegate(BlendingOutDelegate, AI_Death);

						MontageEndedDelegate.BindUObject(this, &AGAS_AICharacter::OnMontageEnded);
						AnimInstance->Montage_SetEndDelegate(MontageEndedDelegate, AI_Death);
					}
				}
			}

			if (!bPlayedSuccessfully)
			{
				DestroyWeapon();
				Destroy();
			}
			PlayAnimMontage(AI_Death);
		}
	}
	else
	{
		DestroyWeapon();
		Destroy();
	}
}

void AGAS_AICharacter::CheckHealthBarVisibility()
{
	if (HealthBar)
	{
		float CurrentHealth = GetHealth();

		if (/*AmountOfPlayersWhoSeesCharacter > 0 &&*/ CurrentHealth < GetMaxHealth() && CurrentHealth > 0.0f)
		{
			HealthBar->SetVisibility(ESlateVisibility::Visible);
		}
		else
		{
			HealthBar->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

float AGAS_AICharacter::SetMovementSpeedType(EGAS_EnemyMovementSpeed MovementType)
{
	switch (MovementType)
	{
		case EGAS_EnemyMovementSpeed::Idle:
			SetMovementSpeed(IdleSpeed);
			break;
		case EGAS_EnemyMovementSpeed::Walking:
			SetMovementSpeed(WalkingSpeed);
			break;
		case EGAS_EnemyMovementSpeed::Jogging:
			SetMovementSpeed(JoggingSpeed);
			break;
		case EGAS_EnemyMovementSpeed::Sprinting:
			SetMovementSpeed(SprintingSpeed);
			break;
		default: break;
	}
	return 0.0f;
}

void AGAS_AICharacter::InPlayerRadiusOfVision()
{
	AmountOfPlayersWhoSeesCharacter++;
	CheckHealthBarVisibility();
}

void AGAS_AICharacter::OutPlayerRadiusOfVision()
{
	AmountOfPlayersWhoSeesCharacter--;
	CheckHealthBarVisibility();
}

void AGAS_AICharacter::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted)
{
	DestroyWeapon();
	Destroy();
}

void AGAS_AICharacter::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	DestroyWeapon();
	Destroy();
}

void AGAS_AICharacter::SpawnWeapon()
{
	if (WeaponActorClass)
	{
		if (WeaponSocketName.IsValid())
		{
			USkeletalMeshSocket* WeaponSocket = GetMesh()->GetSkeletalMeshAsset()->FindSocket(WeaponSocketName);
			if (WeaponSocket)
			{
				if (WeaponActor = GetWorld()->SpawnActor(WeaponActorClass))
				{
					WeaponActor->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, WeaponSocketName);
				}
			}
		}
	}
}

void AGAS_AICharacter::DestroyWeapon()
{
	if (WeaponActor)
	{
		WeaponActor->Destroy();
	}
}

void AGAS_AICharacter::Interact()
{

}

void AGAS_AICharacter::CheckForInteractables()
{
	FVector AIPawnLocation = FVector(GetPawnViewLocation().X, GetPawnViewLocation().Y, 0.0f);
	TSet<AActor*> InteractablesActors;
	GetCapsuleComponent()->GetOverlappingActors(InteractablesActors, AInteractableBase::StaticClass());

	if (!InteractablesActors.IsEmpty())
	{
		for (AActor* FoundedInteractActor : InteractablesActors)
		{
			if (FoundedInteractActor && GetPawnViewLocation().Z - FoundedInteractActor->GetActorLocation().Z <= GetCapsuleComponent()->GetScaledCapsuleHalfHeight()
				&& GetPawnViewLocation().Z - FoundedInteractActor->GetActorLocation().Z >= -GetCapsuleComponent()->GetScaledCapsuleHalfHeight())
			{
				FVector PrepareForInteractActorLocation = (GetActorForwardVector() * ReachToPickUp) + AIPawnLocation;
				FVector InteractActorLocation = FVector(PrepareForInteractActorLocation.X, PrepareForInteractActorLocation.Y, 0.0f);

				FVector InteractActorForwardVector = AIPawnLocation - InteractActorLocation;

				if (FVector::DotProduct(AIPawnLocation, InteractActorForwardVector) < 0.0f)
				{
					AInteractableBase* InteractableActor = Cast<AInteractableBase>(FoundedInteractActor);

					if (InteractableActor && FVector::Dist2D(AIPawnLocation, InteractActorForwardVector) <= ReachToPickUp)
					{
						CurrentInteractable = InteractableActor;
						Interact();
						return;
					}
				}

			}
		}
		CurrentInteractable = nullptr;
	}
	
}

