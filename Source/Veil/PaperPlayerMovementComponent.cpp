// Fill out your copyright notice in the Description page of Project Settings.

#include "Veil.h"
#include "PaperPlayerMovementComponent.h"




UPaperPlayerMovementComponent::UPaperPlayerMovementComponent(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{

}

void UPaperPlayerMovementComponent::InitializeComponent()
{
	Super::InitializeComponent();


}

void UPaperPlayerMovementComponent::TickComponent(
		float DeltaTime,
		enum ELevelTick TickType,
		FActorComponentTickFunction *ThisTickFunction
){
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);



}