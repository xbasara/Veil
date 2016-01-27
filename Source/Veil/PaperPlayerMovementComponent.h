// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/CharacterMovementComponent.h"
#include "PaperPlayerMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class VEIL_API UPaperPlayerMovementComponent : public UCharacterMovementComponent
{
	GENERATED_UCLASS_BODY()
	
	
protected:

	//Init
	virtual void InitializeComponent() override;

	//Tick
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
	
};
