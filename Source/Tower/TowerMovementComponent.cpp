// Fill out your copyright notice in the Description page of Project Settings.

#include "TowerMovementComponent.h"

void UTowerMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Null checks
	if (!PawnOwner || UpdatedComponent || ShouldSkipUpdate(DeltaTime))
	{
		return;
	}

	FVector MovementThisFrame = ConsumeInputVector() * DeltaTime * 200.0f;

	// Checks
	if (!MovementThisFrame.IsNearlyZero())
	{
		FHitResult Hit;
		SafeMoveUpdatedComponent(MovementThisFrame, UpdatedComponent->GetComponentRotation(), true, Hit);

	}
}