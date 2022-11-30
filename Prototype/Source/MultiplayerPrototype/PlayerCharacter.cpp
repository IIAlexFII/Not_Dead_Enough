// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "DestroyActorOnOverlap.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Projectile.h"
#include "Animation/AnimInstance.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "InteractInterface.h"
#include "WeaponBase.h"
#include "Net/UnrealNetwork.h"

#include "ZombieGamemode.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(40.0f, 95.0f);
	TurnRate = 45.0f;
	LookUpRate = 45.0f;

	WalkingSpeed = 600.0f;
	RunningSpeed = 900.0f;

	FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	FirstPersonCamera->SetupAttachment((GetCapsuleComponent()));
	FirstPersonCamera->AddRelativeLocation(FVector(-39.65f,1.75f,64.0f));
	FirstPersonCamera->bUsePawnControlRotation = true;

	HandsMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Character Mesh"));
	HandsMesh->SetOnlyOwnerSee(true);
	HandsMesh->SetupAttachment(FirstPersonCamera);
	HandsMesh->bCastDynamicShadow = false;
	HandsMesh->CastShadow  = false;
	HandsMesh->AddRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	HandsMesh->AddRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));
	
	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun"));
	GunMesh->SetOnlyOwnerSee(true);
	GunMesh->bCastDynamicShadow = false;
	GunMesh->CastShadow = false;

	MuzzleLocation = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Muzzle Location"));
	MuzzleLocation->SetupAttachment(GunMesh);
	MuzzleLocation->SetRelativeLocation(FVector(0.2f,48.4f,-10.6f));

	GunOffset = FVector(100.0f,0.0f,10.0f);

	WeaponIndex = 0;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	GunMesh->SetHiddenInGame(true);
	GunMesh->AttachToComponent(HandsMesh,FAttachmentTransformRules::SnapToTargetNotIncludingScale,TEXT("GripPoint"));

	World = GetWorld();

	AnimInstance = HandsMesh->GetAnimInstance();

	if(HasAuthority())
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		// Spawn weapon
		CurrentWeapon = GetWorld()->SpawnActor<AWeaponBase>(FirstWeaponClass, SpawnParams);
		if(CurrentWeapon)
		{
			PreviousWeapon = CurrentWeapon;
			WeaponArray.Add(CurrentWeapon);
			OnRep_AttachWeapon();
			CurrentWeapon->WeaponIsInHand(true);
		}
		if(AWeaponBase* Weapon = GetWorld()->SpawnActor<AWeaponBase>(SecondWeaponClass, SpawnParams))
		{
			Weapon->AttachToComponent(HandsMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("s_WeaponSocket"));
			WeaponArray.Add(Weapon);
		}
	}
} 

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	
	PlayerInputComponent->BindAction("Running", IE_Pressed, this, &APlayerCharacter::Running);
	PlayerInputComponent->BindAction("Running", IE_Released, this, &APlayerCharacter::StopRunning);
	
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &APlayerCharacter::Reloading);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APlayerCharacter::OnFire);
	
	PlayerInputComponent->BindAction("Unlock", IE_Pressed, this, &APlayerCharacter::Interact_Implementation);

	PlayerInputComponent->BindAction("SwitchWeapons", IE_Pressed,this, &APlayerCharacter::SwitchWeapons);
	
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APlayerCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerCharacter::LookAtRate);
}

void APlayerCharacter::OnFire()
{
	if(World != NULL)
	{
		if(Bullets != 0)
		{
			SpawnRotation = GetControlRotation();

			SpawnLocation = ((MuzzleLocation != nullptr) ?
				MuzzleLocation->GetComponentLocation() :
				GetActorLocation()) + SpawnRotation.RotateVector((GunOffset));

			Bullets -= 1;

			FActorSpawnParameters ActorSpawnParams;
			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

			World->SpawnActor<AProjectile>(Projectile, SpawnLocation, SpawnRotation, ActorSpawnParams);
			/*
			if(MuzzleLocation != nullptr)
			{
				SpawnLocation = MuzzleLocation->GetComponentLocation();
			}
			else
			{
				SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector((GunOffset));
			}
			*/
		}
	}

	if(FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		
	}

	if(FireAnimation != NULL && AnimInstance != NULL)
	{
		AnimInstance->Montage_Play(FireAnimation, 1.0f);
	}
}

void APlayerCharacter::Running()
{
	GetCharacterMovement()->MaxWalkSpeed = RunningSpeed;
}

void APlayerCharacter::StopRunning()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkingSpeed;
}

 void APlayerCharacter::Calling()
 {
	// ADestroyActorOnOverlap* door = Cast<ADestroyActorOnOverlap>(World->GetFirstPlayerController()->GetCharacter());
	// Interact_Implementation(door);
//	ADestroyActorOnOverlap* door = Cast<ADestroyActorOnOverlap>(AActor);
//	Interact_Implementation(door);
}

void APlayerCharacter::KeyPressed()
{

	IsPressed = true;
}

void APlayerCharacter::MoveForward(float Value)
{
	if( Value !=0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void APlayerCharacter::MoveRight(float Value)
{
	if( Value !=0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void APlayerCharacter::Reloading()
{
	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &APlayerCharacter::ReloadingBullets, 2, false);
}

void APlayerCharacter::ReloadingBullets()
{
	Bullets = MaxBullets;
}

void APlayerCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate*TurnRate* GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::LookAtRate(float Rate)
{
	AddControllerPitchInput(Rate*LookUpRate* GetWorld()->GetDeltaSeconds());
}



// void APlayerCharacter::Interact_Implementation()
// {
// 	FHitResult result;
// 	cachedPawnInterface = Cast<IInteractInterface>(result.GetActor());
// 	
// 	if(cachedPawnInterface)
// 	{
// 		cachedPawnInterface->Interact(result.GetActor());
// 	}
// 	UE_LOG(LogTemp, Warning, TEXT("being pressed"));
// 	
// }

void APlayerCharacter::Interact_Implementation()
{
	FVector Start = GetActorLocation();
		FVector End = Start + FirstPersonCamera->GetForwardVector() * 500;
		FCollisionQueryParams queryP;
		queryP.AddIgnoredActor(this);
		queryP.bTraceComplex = true;
		queryP.bDebugQuery = true;
		FCollisionResponseParams responseP;
		FHitResult result;
		GetWorld()->LineTraceSingleByChannel(result, Start, End, ECollisionChannel::ECC_Visibility, queryP, responseP);
		if (result.bBlockingHit == true) {
			
			DrawDebugLine(GetWorld(), Start, result.ImpactPoint, FColor::Green, false, 1);
		
			if (result.GetActor()) {
				IInteractInterface* interactable = Cast<IInteractInterface>(result.GetActor());
				if (interactable != nullptr)
				{
					interactable->Interact(this);
				}
			}
		}
	
}

//void PerformInteraction()
//{
	//RayCast(forwa)

	//AActor* Hit.GetActor()

	/*if (Actor != null) {
	 *	IInteractInterface* interactable = Cast<IInteractInterface>(Actor)
	 *	if (interactable != nullptr) {
	 *	interactable->Interact(this);
	 *	}
	 *}
	 *
	 **/




void APlayerCharacter::DealDamage(float DamageAmount)
{
	Health -= DamageAmount;
	if(Health <= 0.0f)
	{
		Destroy();
	}
}

void APlayerCharacter::SwitchWeapons()
{
	if(CurrentWeapon)
	{
		if(WeaponArray.Num() > WeaponIndex + 1)
		{
			++WeaponIndex;
			if(AWeaponBase* NextWeapon = WeaponArray[WeaponIndex])
			{
				CurrentWeapon->WeaponIsInHand(false);
				CurrentWeapon = NextWeapon;
				CurrentWeapon->WeaponIsInHand(true);
			}
		}
		else
		{
			WeaponIndex = 0;
			if(AWeaponBase* NextWeapon = WeaponArray[WeaponIndex])
			{
				CurrentWeapon->WeaponIsInHand(false);
				CurrentWeapon = NextWeapon;
				CurrentWeapon->WeaponIsInHand(true);
			}
		}
		ServerSwitchWeapon(CurrentWeapon);
	}
}

void APlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APlayerCharacter, CurrentWeapon);
	//DOREPLIFETIME(APlayerCharacter, PreviousWeapon);
	DOREPLIFETIME(APlayerCharacter, WeaponArray);
	//DOREPLIFETIME(APlayerCharacter, CurrentWeapon, bIsAiming, COND_SkipOwner);
}

void APlayerCharacter::OnRep_AttachWeapon()
{
	if(PreviousWeapon)
	{
		PreviousWeapon->WeaponIsInHand(false);
	}
	if(CurrentWeapon)
	{
		CurrentWeapon->WeaponIsInHand(true);
		PreviousWeapon = CurrentWeapon;
		
		// First Person
		if(IsLocallyControlled())
		{
			CurrentWeapon->AttachToComponent(HandsMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("s_WeaponSocket"));
		}
		// Third Person
		else
		{
			//CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("s_weaponSocket"));
		}
	}
}

bool APlayerCharacter::ServerSwitchWeapon_Validate(AWeaponBase* NewWeapon)
{
	return true;
}

void APlayerCharacter::ServerSwitchWeapon_Implementation(AWeaponBase* NewWeapon)
{
	CurrentWeapon = NewWeapon;
	OnRep_AttachWeapon();
}

// void APlayerCharacter::Interact()
// {
// 	FVector Start = GetActorLocation();
// 	FVector End = Start + FirstPersonCamera->GetForwardVector() * 200;
// 	FCollisionQueryParams queryP;
// 	queryP.AddIgnoredActor(this);
// 	queryP.bTraceComplex = true;
// 	queryP.bDebugQuery = true;
// 	FCollisionResponseParams responseP;
// 	responseP;
// 	FHitResult result;
// 	GetWorld()->LineTraceSingleByChannel(result, Start, End, ECollisionChannel::ECC_Visibility, queryP, responseP);
//
// 	
// 	
// 	if (result.bBlockingHit == true) {
// 		
// 		DrawDebugLine(GetWorld(), Start, result.ImpactPoint, FColor::Green, false, 1);
// 	
// 		if (result.GetActor()->Implements<UInteractInterface>()) {
// 			IInteractInterface::Execute_Interact(result.GetActor(), this);
// 		}
// 	}
// 	else {
// 		DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 1);
// 	}
//
// }

// IInteractInterface* cachedPawnInterface = Cast<IInteractInterface>(whoInteracted);
// if(cachedPawnInterface)
// {
// 	cachedPawnInterface->Interact(whoInteracted); // this needs t obe an actor not an interface
// }
//


//IInteractInterface* interactable = Cast<IInteractInterface>(whoInteracted);

	
//
// if(interactable)
// {
// 	interactable->Interact(whoInteracted);
// }
// UE_LOG(LogTemp, Warning, TEXT("being pressed"));