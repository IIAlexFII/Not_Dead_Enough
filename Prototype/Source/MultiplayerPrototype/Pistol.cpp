// Fill out your copyright notice in the Description page of Project Settings.


#include "Pistol.h"

APistol::APistol()
{
	WeaponName = "Pistol";
	MagazineAmmo = 15;
	CurrentTotalAmmo = MagazineAmmo;
	Damage = 40;
	WeaponCost = 40;
}