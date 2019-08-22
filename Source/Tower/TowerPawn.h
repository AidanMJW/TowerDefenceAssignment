// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "TowerMovementComponent.h"
#include "Bullet.h"
#include "Components/InputComponent.h"
#include "Components/BoxComponent.h"
#include "TowerPawn.generated.h"

UCLASS()
class TOWER_API ATowerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATowerPawn();

protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Distance for spring arm
	float SpringArmDistance = 300.0f;

	// Vector to store movement from keyboard
	FVector2D MovementInput;

	UTowerMovementComponent* MovementComponent;

	// archetype bullet blueprint class
	UPROPERTY(Category = "Bullet", EditAnywhere, BlueprintReadOnly)
		TSubclassOf<ABullet> BulletBP;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// Main body static mesh of the tower
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* body;

	// Spring arm component to hold camera
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USpringArmComponent* springArm;

	// camera view
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UCameraComponent* camera;

	// Box component
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UBoxComponent* collisionComponent;

	// Speed of movement
	UPROPERTY(Category = "Speed", EditAnywhere, BlueprintReadWrite)
		float MovementSpeed = 200.0f;

	// Actor control
	void MoveRight(float val);

	virtual UPawnMovementComponent* GetMovementComponent() const override;

	// shoot bullet by spawning
	void SpawnBullets();

	//Input functions
	void Move_XAxis(float AxisValue);
	void Move_YAxis(float AxisValue);
	void StartGrowing();
	void StopGrowing();

	//Input variables
	FVector CurrentVelocity;
	bool bGrowing;

	UFUNCTION()
		void OnComponentBeginOverlap (UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);
};
