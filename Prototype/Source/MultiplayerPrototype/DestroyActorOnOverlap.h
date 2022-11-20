// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractInterface.h"
#include "DestroyActorOnOverlap.generated.h"


UCLASS()
class MULTIPLAYERPROTOTYPE_API ADestroyActorOnOverlap : public AActor ,public IInteractInterface
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ADestroyActorOnOverlap();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere)
    class USphereComponent* MySphereComponent;
    class UWorld* World;
    UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* MyMesh;
 
    
    UPROPERTY(EditAnywhere,BlueprintReadOnly)
    float DoorPoints = 100.0f;
    
    
    float SphereRadius;
  
    UPROPERTY(EditAnywhere,BlueprintReadOnly)
    bool bIsOverlaping = false;
    
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION(BlueprintCallable, Server, Unreliable, Category = "Action")
    void Interact(AActor* whoInteracted);

    UFUNCTION()
    void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

  
};