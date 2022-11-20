// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

UCLASS()
class MULTIPLAYERPROTOTYPE_API AWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public: // Functions
	// First Element Is The Current Ammo And The Second Is The Total Ammo
	//TArray<int> GetCurrentAmmo(); //Don't include


	protected: // Variables
	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(EditAnywhere)
	class UAnimationAsset* AttackAnimation;

	//UPROPERTY(EditAnywhere)
	//class UAnimationAsset* ReloadAnimation; //This will be only in the Ranged Weapons

	UPROPERTY(EditAnywhere)
	FName WeaponName;
	
	//UPROPERTY(EditAnywhere) // Max Ammo Value For UI
	//int MagazineAmmo; //Only in the Ranged Weapons

	//int CurrentTotalAmmo; //Only in the Ranged Weapons
	//int CurrentAmmo; //Only in the Ranged Weapons

	UPROPERTY(EditAnywhere)
	int Damage; //Call this Damage

	UPROPERTY(EditAnywhere)
	int WeaponCost;
};
