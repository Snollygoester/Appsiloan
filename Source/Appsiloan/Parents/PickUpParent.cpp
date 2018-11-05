// Fill out your copyright notice in the Description page of Project Settings.

#include "PickUpParent.h"
#include "Components/BoxComponent.h"

// Sets default values
APickUpParent::APickUpParent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APickUpParent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickUpParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickUpParent::PickUpDoYourThing()
{
}

void APickUpParent::MyOverlapFunction(AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
}

