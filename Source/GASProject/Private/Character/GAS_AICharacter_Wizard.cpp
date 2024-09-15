// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/GAS_AICharacter_Wizard.h"
#include "Components/PrimitiveComponent.h"
#include "Components/TimelineComponent.h"
#include "Curves/CurveFloat.h"
#include "Components/WidgetComponent.h"
#include "Widgets/BasicProgressBar.h"

AGAS_AICharacter_Wizard::AGAS_AICharacter_Wizard(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	DynamicMaterialParameterName = "None";
	DefaultValueOfDynamicMaterialParameter = 1.0f;
    TimelineLength = 1.0f;
    TeleportationPoint = FVector();

    VisibilityTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("VisibilityTimeline"));
}

UMaterialInstanceDynamic* AGAS_AICharacter_Wizard::GetDynMaterial()
{
	return DynMaterial;
}

FVector AGAS_AICharacter_Wizard::GetTeleportationPoint()
{
    return TeleportationPoint;
}

void AGAS_AICharacter_Wizard::SetTeleportationPoint(FVector NewPoint)
{
    TeleportationPoint = NewPoint;
}

void AGAS_AICharacter_Wizard::MakeWizardInvisible()
{
    HealthBarComp->SetVisibility(false);
    PlayTimeline();
}

void AGAS_AICharacter_Wizard::MakeWizardVisible()
{
    if (VisibilityTimeline)
    {
        VisibilityTimeline->Stop();
    }
    HealthBarComp->SetVisibility(true);
}

void AGAS_AICharacter_Wizard::CallOnTeleportEndDelegate()
{
    if (OnTeleportEnd.IsBound())
    {
        OnTeleportEnd.Broadcast();
    }
}

void AGAS_AICharacter_Wizard::BeginPlay()
{
	Super::BeginPlay();

	if (FloatCurve)
	{
        InitializeTimeline();
	}
    else
    {
        CreateFloatCurve();
        if (FloatCurve)
        {
            InitializeTimeline();
        }
    }

	DynMaterial = UMaterialInstanceDynamic::Create(GetMesh()->GetMaterial(0), this);
	DynMaterial->SetScalarParameterValue(DynamicMaterialParameterName, DefaultValueOfDynamicMaterialParameter);
	GetMesh()->SetMaterial(0, DynMaterial);
}

void AGAS_AICharacter_Wizard::Tick(float deltaTime)
{
    Super::Tick(deltaTime);

    if (VisibilityTimeline != NULL && VisibilityTimeline->IsActive())
    {
        VisibilityTimeline->TickComponent(deltaTime, ELevelTick::LEVELTICK_TimeOnly, NULL);
    }
}

void AGAS_AICharacter_Wizard::TimelineCallback(float val)
{
    DynMaterial->SetScalarParameterValue(DynamicMaterialParameterName, val);
}

void AGAS_AICharacter_Wizard::TimelineFinishedCallback()
{
    DynMaterial->SetScalarParameterValue(DynamicMaterialParameterName, DefaultValueOfDynamicMaterialParameter);
}

void AGAS_AICharacter_Wizard::InitializeTimeline()
{
    FOnTimelineFloat onTimelineCallback;
    FOnTimelineEventStatic onTimelineFinishedCallback;

    //Add the float curve to the timeline and connect it to your timelines's interpolation function
    onTimelineCallback.BindUFunction(this, FName{ TEXT("TimelineCallback") });
    onTimelineFinishedCallback.BindUFunction(this, FName{ TEXT("TimelineFinishedCallback") });
    VisibilityTimeline->AddInterpFloat(FloatCurve, onTimelineCallback);
    VisibilityTimeline->SetTimelineFinishedFunc(onTimelineFinishedCallback);
}

void AGAS_AICharacter_Wizard::PlayTimeline()
{
    if (VisibilityTimeline != NULL)
    {
        VisibilityTimeline->PlayFromStart();
    }
}

void AGAS_AICharacter_Wizard::CreateFloatCurve()
{
    FloatCurve = NewObject<UCurveFloat>(this);
    FloatCurve->FloatCurve.UpdateOrAddKey(0.f, 0.f);
    FloatCurve->FloatCurve.UpdateOrAddKey(1.f, 1.f);
}
