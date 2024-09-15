// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableBase.generated.h"

class UStaticMeshComponent;
class AGASProjectCharacter;


UCLASS()
class GASPROJECT_API AInteractableBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintNativeEvent)
	void Interact(AGASProjectCharacter* InteractCharacter);
	virtual void Interact_Implementation(AGASProjectCharacter* InteractCharacter);

	/*We can assume all interatables will have a static mesh*/
	UPROPERTY(EditAnywhere, Category = "Interactable Properties")
	UStaticMeshComponent* InteractableMesh;

	/*We can assume all interatables will have some help text*/
	UPROPERTY(EditAnywhere, Category = "Interactable Properties")
	FString InteractableHelpText;
};
