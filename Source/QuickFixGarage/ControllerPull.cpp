// Fill out your copyright notice in the Description page of Project Settings.

#include "ControllerPull.h"
#include "Engine.h"
#include "CoreDelegates.h"



// Sets default values
AControllerPull::AControllerPull()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AControllerPull::BeginPlay()
{
	Super::BeginPlay();
	
	OnControllerConnectionHandle = FCoreDelegates::OnControllerConnectionChange.AddUFunction(this, FName("OnControllerConnectionCHange"));
}

void AControllerPull::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	FCoreDelegates::OnControllerConnectionChange.Remove(OnControllerConnectionHandle);
}

void AControllerPull::OnControllerConnectionChange_Implementation(bool Connected, int32 UserID, int32 ControllerID)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Connection Change ControllerID: x: %d, Connected: %d"), ControllerID, Connected));
}
//why are you error. I am confusion


// Called every frame
void AControllerPull::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

