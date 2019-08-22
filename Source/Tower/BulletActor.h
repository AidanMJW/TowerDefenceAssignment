// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "BulletActor.generated.h"

UCLASS()
class TOWER_API ABulletActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABulletActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// body Mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* body;

	// Speed of the bullet
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Speed = 500;

	// Directional Vector
	FVector Direction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		USphereComponent* collisionComponent;

	void move();
	void distanceCheck();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void fire(FVector _direction, FVector _origin);
	void resetToPool();

	bool isActive;

	FVector poolLocation;
	FVector fireOrigin;

	UPROPERTY(EditAnywhere)
		float fireDistance;

	float damage;

	UPROPERTY(EditAnywhere)
		float activeSpeed;

	UPROPERTY(EditAnywhere)
		FVector direction;

};
