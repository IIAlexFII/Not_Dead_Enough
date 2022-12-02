// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Med.generated.h"

UCLASS()
class MULTIPLAYERPROTOTYPE_API AMed : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMed();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent* MedKitMesh;

	UPROPERTY(EditAnywhere)
	class UAnimationAsset* HealAnimation;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int MedKitCost;

	UPROPERTY(EditAnywhere)
	int Heals;

};
