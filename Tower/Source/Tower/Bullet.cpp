// Fill out your copyright notice in the Description page of Project Settings.

#include "Bullet.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	body = CreateDefaultSubobject<UStaticMeshComponent>("body");
	body->SetupAttachment(RootComponent);

	isActive = false;
	poolLocation = GetActorLocation();

}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	activeSpeed = speed;	
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(isActive == true)
	move();

	distanceCheck();
}

void ABullet::move()
{
	FVector pos = GetActorLocation();
	SetActorRelativeLocation((direction * speed) + pos);	
}

void ABullet::distanceCheck()
{
	if (FVector::Dist(GetActorLocation(), fireOrigin) > fireDistance)
		resetToPool();
}

void ABullet::resetToPool()
{
	isActive = false;
	speed = 0;
	SetActorLocation(poolLocation);
}

void ABullet::fire(FVector _direction, FVector _origin)
{
	direction = _direction;
	fireOrigin = _origin;
	speed = activeSpeed;
	isActive = true;
}

