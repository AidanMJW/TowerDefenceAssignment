// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "TowerMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class TOWER_API UTowerMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()
		
	virtual void TickComponent
	(
		float DeltaTime, 
		enum ELevelTick TickType, 
		FActorComponentTickFunction *ThisTickFunction
	) override;
	
};