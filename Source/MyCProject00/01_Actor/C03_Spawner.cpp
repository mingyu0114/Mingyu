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

	// 언리얼은 PC용 게임으로만 제작하는
	// 것이 아닌 멀티 플랫폼을 지원하는
	// 엔진이므로
	// 그냥 int를 쓰게 되면 플랫폼에 따라
	// 32비트의 int가 아닌 16비트의 int로
	// 자동 변환이 되어 버린다.
	for (int32 i = 0; i < 3; i++)
	{
		FTransform transform;
		FVector location = GetActorLocation();

		transform.SetLocation
		(FVector(location.X, location.Y + i * 400, location.Z));
		// 블루 프린트의 SpawnActor from Class와 동일한 함수이다.
		// SpawnActor의 첫번째 변수타입인 UCalss는 TSubClass와 같은 형식이다.
		SpawnActors[i] = 
			GetWorld()->SpawnActor<AC02_SpawnActor>
			(SpawnClass[i], transform);
	}
}



