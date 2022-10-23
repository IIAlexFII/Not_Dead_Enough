// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class MULTIPLAYERPROTOTYPE_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

	UPROPERTY(VisibleDefaultsOnly, Category= Mesh)
	class USkeletalMeshComponent* HandsMesh;

	//UPROPERTY(VisibleDefaultsOnly, Category= Mesh)
	//class USkeletalMeshComponent* GunMesh;

	//UPROPERTY(VisibleDefaultsOnly, Category= Mesh)
	//class USkeletalMeshComponent* MuzzleLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class UCameraComponent* FirstPersonCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float LookUpRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float TurnRate;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gameplay)
	//FVector GunOffset;

protected: //functions

	//void OnFire();
	void Running();
	void StopRunning();
	
	void MoveForward(float Value);
	void MoveRight(float Value);

	void TurnAtRate(float Rate);
	void LookAtRate(float Rate);

protected: //variables
	//Normal Speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WalkingSpeed;

	//Speed Multiplier For When The Player Is Running
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RunningSpeed;
};
