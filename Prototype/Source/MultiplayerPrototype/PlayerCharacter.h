// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractInterface.h"
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

	UPROPERTY(VisibleDefaultsOnly, Category= Mesh)
	class USkeletalMeshComponent* GunMesh;

	UPROPERTY(VisibleDefaultsOnly, Category= Mesh)
	class USkeletalMeshComponent* MuzzleLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class UCameraComponent* FirstPersonCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float LookUpRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float TurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector GunOffset;

protected: //functions

	void OnFire();
	void Running();
	void StopRunning();
	void Heal();
	void Healing();
	void MoveForward(float Value);
	void MoveRight(float Value);
	void Reloading();
	void ReloadingBullets();
	void TurnAtRate(float Rate);
	void LookAtRate(float Rate);
	//UFUNCTION(Server, Unreliable)
	//void Interact();
	UFUNCTION(Server, Unreliable)
	void Interact();
	void SwitchWeapons();

	UFUNCTION()
	void OnRep_AttachWeapon();

	UFUNCTION(Server, Unreliable, WithValidation)
	void ServerSwitchWeapon(class AWeaponBase* NewWeapon);

	bool ServerSwitchWeapon_Validate(class AWeaponBase* NewWeapon);

	void ServerSwitchWeapon_Implementation(class AWeaponBase* NewWeapon);


public:
	UPROPERTY(EditDefaultsOnly, Category= Projectile)
	TSubclassOf<class AProjectile> Projectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= Gameplay)
	class USoundBase* FireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	class UAnimMontage* FireAnimation;

	class UAnimInstance* AnimInstance;

	class UWorld* World;

	FRotator SpawnRotation;
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	bool IsPressed;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	float Health = 100.0f;

	void DealDamage(float DamageAmount);

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float Points = 0.0f;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int MedkitAmount = 0;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
   	bool ShopOpen = false;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool CanShoot = true;
	
	UPROPERTY(EditAnywhere)
	bool Shooting = false;

	UPROPERTY(EditAnywhere)
	bool ReloadingGun = false;

	UPROPERTY(EditAnywhere)
	bool HealingPlayer = false;
	

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	float Bullets = 30;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float MaxBullets = 50;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float temp;
	
	IInteractInterface* cachedInterface;

	
	//For the Switch Weapon and the Replications
	UPROPERTY(EditAnywhere)
	TSubclassOf<class AWeaponBase> FirstWeaponClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AWeaponBase> SecondWeaponClass;

	UPROPERTY(ReplicatedUsing = OnRep_AttachWeapon)
	class AWeaponBase* CurrentWeapon;

	UPROPERTY(/*Replicated*/)
	class AWeaponBase* PreviousWeapon;
	
	int WeaponIndex;

	UPROPERTY(Replicated)
	TArray<AWeaponBase*> WeaponArray;

protected: //variables
	//Normal Speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WalkingSpeed;

	//Speed Multiplier For When The Player Is Running
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RunningSpeed;
};
