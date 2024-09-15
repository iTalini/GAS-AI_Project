// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/GAS_PatrolRoute.h"
#include "Components/SplineComponent.h"

// Sets default values
AGAS_PatrolRoute::AGAS_PatrolRoute()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PatrolRoute = CreateDefaultSubobject<USplineComponent>(TEXT("PatrolRoute"));

	PatrolIndex = 0;

	Direction = 1;
}

// Called when the game starts or when spawned
void AGAS_PatrolRoute::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGAS_PatrolRoute::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector AGAS_PatrolRoute::GetSplinePointAsWorldPosition()
{
	return PatrolRoute->GetLocationAtSplinePoint(PatrolIndex, ESplineCoordinateSpace::World);
}

void AGAS_PatrolRoute::IncrementPatrolRoute()
{
	PatrolIndex += Direction;
	if (PatrolIndex == PatrolRoute->GetNumberOfSplinePoints() - 1)
	{
		Direction = -1;
	}
	else
	{
		if (PatrolIndex == 0)
		{
			Direction = 1;
		}
	}
}

