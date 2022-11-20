// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponBase.h"

// Sets default values
AWeaponBase::AWeaponBase()
{
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMeshComponent");

	// Default values
	WeaponName = "Default";
	//MagazineAmmo = 30; //on ranged weapons only
	//CurrentTotalAmmo = MagazineAmmo; //on ranged weapons only
	Damage = 10; //change name to Damage
	WeaponCost = 20;
}

// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
}

/*TArray<int> AWeaponBase::GetCurrentAmmo() //don't include this
{
	return {CurrentAmmo, MagazineAmmo};
}*/