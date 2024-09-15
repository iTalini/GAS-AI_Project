// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable/PickupBase.h"
#include "Character/GASProjectCharacter.h"
#include "GameFramework/PlayerState.h"


APickupBase::APickupBase()
{
	//Set up the mesh for the pickup, and set the item name, help text, item value

	InteractableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pickup Mesh"));
	InteractableMesh->SetSimulatePhysics(true);

	ItemName = TEXT("Enter an item name here.");
	InteractableHelpText = TEXT("Press E to pick item up.");
	Value = 0;
}

void APickupBase::BeginPlay()
{
	InteractableHelpText = FString::Printf(TEXT("%s: Press E to pick up."), *ItemName);
}

void APickupBase::Interact_Implementation(AGASProjectCharacter* InteractCharacter)
{
	//Put code here that places the item into the characters inventory

	OnPickedkUp();
}

void APickupBase::OnPickedkUp()
{
	InteractableMesh->SetVisibility(false);
	InteractableMesh->SetSimulatePhysics(false);
	InteractableMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void APickupBase::Use_Implementation()
{
	GLog->Log("Pickup Base class:: Use() YOU SHOULD NOT BEEN SEEN THIS.");
}
