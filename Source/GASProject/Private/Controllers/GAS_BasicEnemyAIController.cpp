// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/GAS_BasicEnemyAIController.h"
#include "Character/GAS_AICharacter.h"
#include "Character/GASProjectCharacter.h"
#include "Core/GAS_Data.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystemComponent.h"

AGAS_BasicEnemyAIController::AGAS_BasicEnemyAIController()
{
	AttackTargetKeyName = FName(TEXT("AttackTarget"));

	AbilitySystemComponentKeyName = FName(TEXT("AbilitySystemComponent"));

	StateKeyName = FName(TEXT("State"));

	PointOfInterestKeyName = FName(TEXT("PointOfInterest"));

	AttackRadiusKeyName = FName(TEXT("AttackRadius"));

	DefendRadiusKeyName = FName(TEXT("DefendRadius"));
}

void AGAS_BasicEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	if (BlackboardComponent)
	{
		AGAS_AICharacter* CharacterOwner = Cast<AGAS_AICharacter>(GetPawn());

		BlackboardComponent->SetValueAsObject(AbilitySystemComponentKeyName, CharacterOwner->GetAbilitySystemComponent());
	}
}

void AGAS_BasicEnemyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AGAS_AICharacter* CharacterOwner = Cast<AGAS_AICharacter>(InPawn);
	if (BlackboardComponent && CharacterOwner)
	{

		BlackboardComponent->SetValueAsFloat(AttackRadiusKeyName, CharacterOwner->GetAttackRadius());
		BlackboardComponent->SetValueAsFloat(DefendRadiusKeyName, CharacterOwner->GetDefendRadius());

		TryToSetStateAsPassive();
	}
}

bool AGAS_BasicEnemyAIController::TryToSetStateAsPassive()
{
	EGAS_AIState CurrentAIState = GetCurrentState();

	if (CurrentAIState == EGAS_AIState::Investigating || CurrentAIState == EGAS_AIState::Attacking)
	{
		BlackboardComponent->SetValueAsEnum(StateKeyName, static_cast<uint8>(EGAS_AIState::Passive));
		return true;
	}

	return false;
}

bool AGAS_BasicEnemyAIController::TryToSetStateAsAttacking(AActor* TargetActor, bool bUseLastKnownAttackTarget)
{
	EGAS_AIState CurrentAIState = GetCurrentState();

	if (TargetActor && !bUseLastKnownAttackTarget)
	{
		AttackTarget = Cast<AGASProjectCharacter>(TargetActor);
	}

	if (AttackTarget && CurrentAIState != EGAS_AIState::Dead)
	{
		BlackboardComponent->SetValueAsObject(AttackTargetKeyName, AttackTarget);
		BlackboardComponent->SetValueAsEnum(StateKeyName, static_cast<uint8>(EGAS_AIState::Attacking));

		return true;
	}

	TryToSetStateAsPassive();
	return false;
}

bool AGAS_BasicEnemyAIController::TryToSetStateAsInvestigating(FVector Location)
{
	EGAS_AIState CurrentAIState = GetCurrentState();

	if (CurrentAIState == EGAS_AIState::Investigating || CurrentAIState == EGAS_AIState::Passive)
	{
		BlackboardComponent->SetValueAsVector(PointOfInterestKeyName, Location);
		BlackboardComponent->SetValueAsEnum(StateKeyName, static_cast<uint8>(EGAS_AIState::Investigating));
		return true;
	}

	TryToSetStateAsPassive();
	return false;
}

bool AGAS_BasicEnemyAIController::TryToSetStateAsDead()
{
	AGAS_AICharacter* CharacterOwner = Cast<AGAS_AICharacter>(GetPawn());
	if (CharacterOwner && CharacterOwner->GetHealth() <= 0.0f)
	{
		BlackboardComponent->SetValueAsEnum(StateKeyName, static_cast<uint8>(EGAS_AIState::Dead));
		return true;
	}

	TryToSetStateAsPassive();
	return false;
}


EGAS_AIState AGAS_BasicEnemyAIController::GetCurrentState()
{	
	switch (BlackboardComponent->GetValueAsEnum(StateKeyName))
	{
	case 0:
		return EGAS_AIState::Passive;
	case 1:
		return EGAS_AIState::Attacking;
	case 2:
		return EGAS_AIState::Frozen;
	case 3:
		return EGAS_AIState::Investigating;
	case 4:
		return EGAS_AIState::Dead;
	default:
		return EGAS_AIState::Passive;
	}
}

void AGAS_BasicEnemyAIController::OnHeardSomething(FVector NoiseLocation)
{
		TryToSetStateAsInvestigating(NoiseLocation);
}

void AGAS_BasicEnemyAIController::OnViewSomething(AActor* Actor)
{
	if (Actor)
	{
		TryToSetStateAsAttacking(Actor);
	}
}
