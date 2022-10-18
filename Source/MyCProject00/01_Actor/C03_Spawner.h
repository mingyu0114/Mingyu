// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C03_Spawner.generated.h"

UCLASS()
class MYCPROJECT00_API AC03_Spawner : public AActor
{
	GENERATED_BODY()

private:
	// 클래스의 타입을 변수로 다루겠다.
	// 리플렉션 : 자료형의 타입을 변수로 다룰 수 있도록
	// 해주는 기능
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class AC02_SpawnActor> 
		SampleClass;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class AC02_SpawnActor> 
		SpawnClass[3];
public:	
	// Sets default values for this actor's properties
	AC03_Spawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	class AC02_SpawnActor* SpawnActors[3];

};
