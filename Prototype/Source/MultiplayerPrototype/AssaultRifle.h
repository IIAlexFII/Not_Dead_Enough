// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "AssaultRifle.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERPROTOTYPE_API AAssaultRifle : public AWeaponBase
{
	GENERATED_BODY()

public:
	AAssaultRifle();

protected:
	UPROPERTY(EditAnywhere)
	class UAnimationAsset* ReloadAnimation; //This will be only in the Ranged Weapons
	
	UPROPERTY(EditAnywhere) // Max Ammo Value For UI
	int MagazineAmmo; //Only in the Ranged Weapons
	
	int CurrentTotalAmmo; //Only in the Ranged Weapons
	int CurrentAmmo; //Only in the Ranged Weapons
};
