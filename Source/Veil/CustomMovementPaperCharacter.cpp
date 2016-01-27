// Fill out your copyright notice in the Description page of Project Settings.

#include "Veil.h"
#include "CustomMovementPaperCharacter.h"
#include "PaperPlayerMovementComponent.h"

ACustomMovementPaperCharacter::ACustomMovementPaperCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UPaperPlayerMovementComponent>(ACharacter::CharacterMovementComponentName))
{

};


