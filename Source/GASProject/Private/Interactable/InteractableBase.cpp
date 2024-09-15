// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable/InteractableBase.h"
#include "Character/GASProjectCharacter.h"

// Sets default values
AInteractableBase::AInteractableBase()
{
	InteractableHelpText = TEXT("Press E to interactwith item.");
}

// Called when the game starts or when spawned
void AInteractableBase::BeginPlay()
{
	Super::BeginPlay();
	
}


void AInteractableBase::Interact_Implementation(AGASProjectCharacter* InteractCharacter)
{
	GLog->Log("Interact Base class:: Interact() YOU SHOULD NOT BEEN SEEN THIS.");
}

