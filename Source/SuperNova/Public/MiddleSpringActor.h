// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MiddleSpringActor.generated.h"

UCLASS()
class SUPERNOVA_API AMiddleSpringActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY()

	
public:	
	// Sets default values for this actor's properties
	AMiddleSpringActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
