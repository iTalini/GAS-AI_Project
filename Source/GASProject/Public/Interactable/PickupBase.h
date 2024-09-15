// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable/InteractableBase.h"
#include "PickupBase.generated.h"


class AGASProjectCharacter;

/**
 * 
 */
UCLASS()
class GASPROJECT_API APickupBase : public AInteractableBase
{
	GENERATED_BODY()
	
public:
	APickupBase();

	virtual void BeginPlay() override;

	virtual void Interact_Implementation(AGASProjectCharacter* InteractCharacter) override;

	/*Called when the item is picked up and needs to be cleand up from the level*/
	void OnPickedkUp();

	UFUNCTION(BlueprintNativeEvent)
	void Use();
	virtual void Use_Implementation();

	UPROPERTY(EditAnywhere, Category = "PickupBase Properties")
	UTexture2D* PickupBaseThumbnail;

	UPROPERTY(EditAnywhere, Category = "PickupBase Properties")
	FString ItemName;

	UPROPERTY(EditAnywhere, Category = "PickupBase Properties", meta = (ClampMin = "0", UIMin = "0.0"))
	int32 Value;
};
