// Fill out your copyright notice in the Description page of Project Settings.


#include "C01_Property.h"

// Sets default values
AC01_Property::AC01_Property()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	C = 30;

}

// Called when the game starts or when spawned
void AC01_Property::BeginPlay()
{
	Super::BeginPlay();
	
	/*FString str;
	str.Append("A : ");
	str.Append(FString::FromInt(A));
	str.Append(", B : ");
	str.Append(FString::FromInt(B));
	str.Append(", C : ");
	str.Append(FString::FromInt(C));

	GLog->Log(str);*/
}

// Called every frame
void AC01_Property::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

