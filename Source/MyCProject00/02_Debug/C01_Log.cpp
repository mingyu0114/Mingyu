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
	// 두 번째 인자 Inkey는 ID를 뜻한다.
	// 현재 코드에서 30과 40의 ID가 같다.
	// 그렇다면 30이라는 String을 출력하다가
	// 40으로 교체해서 출력해버린다.
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

