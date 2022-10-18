// Fill out your copyright notice in the Description page of Project Settings.


#include "C03_Spawner.h"
#include "C02_SpawnActor.h"
#include "Global.h"

// Sets default values
AC03_Spawner::AC03_Spawner()
{

}

// Called when the game starts or when spawned
void AC03_Spawner::BeginPlay()
{
	Super::BeginPlay();

	// �𸮾��� PC�� �������θ� �����ϴ�
	// ���� �ƴ� ��Ƽ �÷����� �����ϴ�
	// �����̹Ƿ�
	// �׳� int�� ���� �Ǹ� �÷����� ����
	// 32��Ʈ�� int�� �ƴ� 16��Ʈ�� int��
	// �ڵ� ��ȯ�� �Ǿ� ������.
	for (int32 i = 0; i < 3; i++)
	{
		FTransform transform;
		FVector location = GetActorLocation();

		transform.SetLocation
		(FVector(location.X, location.Y + i * 400, location.Z));
		// ��� ����Ʈ�� SpawnActor from Class�� ������ �Լ��̴�.
		// SpawnActor�� ù��° ����Ÿ���� UCalss�� TSubClass�� ���� �����̴�.
		SpawnActors[i] = 
			GetWorld()->SpawnActor<AC02_SpawnActor>
			(SpawnClass[i], transform);
	}
}



