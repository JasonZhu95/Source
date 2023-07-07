// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/Item.h"
#include "Slash/DebugMacros.h"

// Sets default values
AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;

}

void AItem::BeginPlay()
{
	Super::BeginPlay();

}

float AItem::TransformedSin()
{
	return FMath::Sin(RunningTime * TimeConstant)* Amplitude;
}

float AItem::TransformedCosin()
{
	return FMath::Cos(RunningTime * TimeConstant) * Amplitude;
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RunningTime += DeltaTime;

}

