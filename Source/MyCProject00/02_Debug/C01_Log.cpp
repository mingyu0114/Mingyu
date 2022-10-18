// Fill out your copyright notice in the Description page of Project Settings.


#include "C01_Log.h"
#include "Global.h"

// Sets default values
AC01_Log::AC01_Log()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC01_Log::BeginPlay()
{
	Super::BeginPlay();

	CLog0::Print(10);
	// �� ��° ���� Inkey�� ID�� ���Ѵ�.
	// ���� �ڵ忡�� 30�� 40�� ID�� ����.
	// �׷��ٸ� 30�̶�� String�� ����ϴٰ�
	// 40���� ��ü�ؼ� ����ع�����.
	CLog0::Print(20, 1);
	CLog0::Print(30, 2);
	CLog0::Print(40, 3);

	CLog0::Log(10);
}

// Called every frame
void AC01_Log::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

