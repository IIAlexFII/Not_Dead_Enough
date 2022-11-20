// Fill out your copyright notice in the Description page of Project Settings.


#include "DestroyActorOnOverlap.h"
#include "DrawDebugHelpers.h"
#include "Components/SphereComponent.h"
#include "PlayerCharacter.h"
#include "InputCoreTypes.h"

// Sets default values
ADestroyActorOnOverlap::ADestroyActorOnOverlap()
{

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MySphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("My Sphere Component"));
	MySphereComponent->InitSphereRadius(100.f);
	MySphereComponent->SetCollisionProfileName(TEXT("Trigger"));
	RootComponent = MySphereComponent;
	MySphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ADestroyActorOnOverlap::OnOverlapBegin);
	MySphereComponent->OnComponentEndOverlap.AddDynamic(this, &ADestroyActorOnOverlap::OnOverlapEnd);
	


	MyMesh =CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh"));
	MyMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ADestroyActorOnOverlap::BeginPlay()
{
	Super::BeginPlay();
	World = GetWorld();
}

// Called every frame
void ADestroyActorOnOverlap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DrawDebugSphere(GetWorld(), GetActorLocation(),SphereRadius,20,FColor::Purple,false, -1, 0, 1);
}


void ADestroyActorOnOverlap::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	bIsOverlaping = false;
	if (Cast<APlayerCharacter>(OtherActor)) {
		bIsOverlaping = true;
	}

	
}


void ADestroyActorOnOverlap::Interact_Implementation(AActor* whoInteracted)
{
	if(bIsOverlaping == true)
	{
		if (APlayerCharacter* Char = Cast<APlayerCharacter>(whoInteracted))
		{
			if(Char->Points >= DoorPoints)
			{
				Destroy();
				Char->Points -= DoorPoints;
				
			}
		}
	}
}

void ADestroyActorOnOverlap::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                          UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (Cast<APlayerCharacter>(OtherActor))
	{
		bIsOverlaping = false;
	}
}

