// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"


// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(40.0f, 95.0f);
	TurnRate = 45.0f;
	LookUpRate = 45.0f;

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
	
	//GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun"));
	//GunMesh->SetOnlyOwnerSee(true);
	//GunMesh->bCastDynmicShadow = false;
	//GunMesh->CastShadow = false;

	//MuzzleLocation =CreateDefaultSubobject<USceneComponent>(TEXT("Muzzle Location"));
	//MuzzleLocation->SetupAttachement(GunMesh);
	//MuzzleLocation->SetRelativeLocation(FVector(0.2f,48.4f,-10.6f));

	//GunOffset = FVector(100.0f,0.0f,10.0f);
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	//GunMesh->AttachToComponent(HandsMesh,FAttachmentTransformRules::SnapToTargetNotIncludingScale,TEXT("GripPoint"));
	
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
	//PlayerInputComponent->BindAction("Fire", IE_Pressed, this, APlayerCharacter::OnFire);
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APlayerCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerCharacter::LookAtRate);

}

/*void APlayerCharacter::OnFire()
{
}*/

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

void APlayerCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate*TurnRate* GetWorld()->GetDeltaSeconds());
	
}

void APlayerCharacter::LookAtRate(float Rate)
{
	AddControllerPitchInput(Rate*LookUpRate* GetWorld()->GetDeltaSeconds());
}
