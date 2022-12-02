// Fill out your copyright notice in the Description page of Project Settings.


#include "Med.h"

// Sets default values
AMed::AMed()
{
	MedKitMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMeshComponent");

	MedKitCost = 20;
	Heals = 20;

}

// Called when the game starts or when spawned
void AMed::BeginPlay()
{
	Super::BeginPlay();
}

