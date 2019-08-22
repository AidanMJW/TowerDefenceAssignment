// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Bullet.generated.h"


UCLASS()
class TOWER_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void move();
	void distanceCheck();
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void fire(FVector _direction,FVector _origin);
	void resetToPool();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* body;

	bool isActive;

	FVector poolLocation;
	FVector fireOrigin;

	UPROPERTY(EditAnywhere)
		float fireDistance;

	float damage;

	UPROPERTY(EditAnywhere)
	float speed;

	UPROPERTY(EditAnywhere)
	float activeSpeed;

	UPROPERTY(EditAnywhere)
	FVector direction;

	
};
