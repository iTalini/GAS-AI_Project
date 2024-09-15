// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/GAS_BasicAIController.h"
#include "Character/GAS_AICharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISense_Hearing.h"
#include "Perception/AISense_Sight.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

AGAS_BasicAIController::AGAS_BasicAIController()
{
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("Behaviour Tree Component"));

	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard Component"));

	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception"));
}

void AGAS_BasicAIController::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(BehaviorTree.Get()))
	{
		RunBehaviorTree(BehaviorTree.Get());
		BehaviorTreeComponent->StartTree(*BehaviorTree.Get());
		AGAS_AICharacter* CharacterOwner = Cast<AGAS_AICharacter>(GetPawn());
	}
	if (PerceptionComponent)
	{
		PerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AGAS_BasicAIController::PerceptionUpdated);
	}
}

void AGAS_BasicAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AGAS_AICharacter* CharacterOwner = Cast<AGAS_AICharacter>(InPawn);
	if (CharacterOwner && CharacterOwner->GetBehaviorTree())
	{
		BehaviorTree = CharacterOwner->GetBehaviorTree();
	}

	if (IsValid(BlackboardComponent.Get()) && IsValid(BehaviorTree.Get()))
	{
		Blackboard->InitializeBlackboard(*BehaviorTree.Get()->BlackboardAsset.Get());
	}
}

void AGAS_BasicAIController::PerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	if (Stimulus.WasSuccessfullySensed())
	{
		if (Stimulus.Type == UAISense::GetSenseID<UAISense_Hearing>())
		{
			OnHeardSomething(Stimulus.StimulusLocation);
		}
		else if (Stimulus.Type == UAISense::GetSenseID<UAISense_Sight>())
		{
			OnViewSomething(Actor);
		}
	}
}

void AGAS_BasicAIController::OnHeardSomething(FVector NoiseLocation)
{
}

void AGAS_BasicAIController::OnViewSomething(AActor* Actor)
{
}

