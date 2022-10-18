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
	// Ŭ������ Ÿ���� ������ �ٷ�ڴ�.
	// ���÷��� : �ڷ����� Ÿ���� ������ �ٷ� �� �ֵ���
	// ���ִ� ���
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
