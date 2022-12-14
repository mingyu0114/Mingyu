// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C01_Property.generated.h"

UCLASS()
class MYCPROJECT00_API AC01_Property : public AActor
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere)
		int A = 50;
	UPROPERTY(EditInstanceOnly)
		int B = 20;
	UPROPERTY(EditDefaultsOnly)
		int C;
protected:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		int Test = 20;

public:	
	// Sets default values for this actor's properties
	AC01_Property();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
