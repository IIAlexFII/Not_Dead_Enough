// Fill out your copyright notice in the Description page of Project Settings.


#include "FastEnemy.h"
#include "Components/BoxComponent.h"
#include "PlayerCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

// Sets default values
AFastEnemy::AFastEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DamageCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Damage Collision"));
	DamageCollision->SetupAttachment(RootComponent);
	
	AIPerComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI Perception Component"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));

	SightConfig->SightRadius = 12000.0f;
	SightConfig->LoseSightRadius = 12001.0f;
	SightConfig->PeripheralVisionAngleDegrees = 360.0f;
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	SightConfig->SetMaxAge(0.1f);

	AIPerComp->ConfigureSense(*SightConfig);
	AIPerComp->SetDominantSense(SightConfig->GetSenseImplementation());
	AIPerComp->OnPerceptionUpdated.AddDynamic(this,&AFastEnemy::OnSensed);

	CurrentVelocity = FVector::ZeroVector;
	MovementSpeed = 500.0f;
	DistanceSquared = BIG_NUMBER;

}

// Called when the game starts or when spawned
void AFastEnemy::BeginPlay()
{
	Super::BeginPlay();
	DamageCollision->OnComponentBeginOverlap.AddDynamic(this,&AFastEnemy::OnHit);
	BaseLocation = this->GetActorLocation();
}

// Called every frame
void AFastEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(!CurrentVelocity.IsZero())
	{
		NewLocation = GetActorLocation() + CurrentVelocity * DeltaTime;
		if(BackToBaseLocation)
		{
			if((NewLocation - BaseLocation).SizeSquared2D() < DistanceSquared)
			{				
				DistanceSquared = (NewLocation - BaseLocation).SizeSquared2D();
			}
			else
			{
				CurrentVelocity =FVector::ZeroVector;
				DistanceSquared = BIG_NUMBER;
				BackToBaseLocation = false;
				SetNewRotation(GetActorForwardVector(),GetActorLocation());
			}
		}
		SetActorLocation(NewLocation);
	}
}

// Called to bind functionality to input
void AFastEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AFastEnemy::OnHit(UPrimitiveComponent* HitComp, AActor* otherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit)
{
	APlayerCharacter* Char = Cast<APlayerCharacter>(otherActor);
	if(Char)
	{
		Char->DealDamage(DamageValue);
	}
}

void AFastEnemy::OnSensed(const TArray<AActor*> & UpdatedActors)
{
	for(int i = 0; i < UpdatedActors.Num(); i++)
	{
		FActorPerceptionBlueprintInfo Info;
		AIPerComp->GetActorsPerception(UpdatedActors[i], Info);

		if(Info.LastSensedStimuli[0].WasSuccessfullySensed())
		{
			FVector dir = UpdatedActors[i]->GetActorLocation()- GetActorLocation();
			dir.Z = 0.0f;
			CurrentVelocity = dir.GetSafeNormal() * MovementSpeed;
			SetNewRotation(UpdatedActors[i]->GetActorLocation(),GetActorLocation());
		}
		else
		{
			FVector dir = BaseLocation - GetActorLocation();
			dir.Z = 0.0f;

			if(dir.SizeSquared2D() > 1.0f)
			{
				CurrentVelocity = dir.GetSafeNormal() * MovementSpeed;
				BackToBaseLocation = true;
				SetNewRotation(BaseLocation, GetActorLocation());
			}
		}
	}
}

void AFastEnemy::SetNewRotation(FVector TargetPosition, FVector CurrentPosition)
{
	FVector NewDirection = TargetPosition - CurrentPosition;
	NewDirection.Z = 0.0f;
	EnemyRotation = NewDirection.Rotation();

	SetActorRotation(EnemyRotation);
}

void AFastEnemy::DealDamage(float DamageAmount)
{
	UWorld* World = GetWorld();
	Health -= DamageAmount;
	if(Health <= 0.0f)
	{
		APlayerCharacter* Char = Cast<APlayerCharacter>(World->GetFirstPlayerController()->GetCharacter());
		Char->Points += 15;
		Destroy();
	}
}