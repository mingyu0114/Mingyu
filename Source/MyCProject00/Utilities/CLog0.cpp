// Fill out your copyright notice in the Description page of Project Settings.


#include "CLog0.h"
#include "Engine.h"

DEFINE_LOG_CATEGORY_STATIC(GameProject, Display, All)

void CLog0::Print(int32 InValue, int32 InKey, float Duration, FColor InColor)
{
	GEngine->AddOnScreenDebugMessage
	(InKey, Duration, InColor,
		FString::FromInt(InValue));
}

void CLog0::Print(float InValue, int32 InKey, float Duration, FColor InColor)
{
	GEngine->AddOnScreenDebugMessage
	(InKey, Duration, InColor,
		FString::SanitizeFloat(InValue));
}

void CLog0::Print(const FString InValue, int32 InKey, float Duration, FColor InColor)
{
	GEngine->AddOnScreenDebugMessage
	(InKey, Duration, InColor,
		InValue);
}

void CLog0::Print(const FVector InValue, int32 InKey, float Duration, FColor InColor)
{
	GEngine->AddOnScreenDebugMessage
	(InKey, Duration, InColor,
		InValue.ToString());
}

void CLog0::Print(const FRotator InValue, int32 InKey, float Duration, FColor InColor)
{
	GEngine->AddOnScreenDebugMessage
	(InKey, Duration, InColor,
		InValue.ToString());
}

void CLog0::Log(int32 InValue)
{
	UE_LOG(GameProject, Display, L"%d", InValue);
}

void CLog0::Log(float InValue)
{
	UE_LOG(GameProject, Display, L"%f", InValue);
}

void CLog0::Log(const FString & InValue)
{
	UE_LOG(GameProject, Display, L"%s", *InValue);
}

void CLog0::Log(const FVector & InValue)
{
	UE_LOG(GameProject, Display, L"%s", *InValue.ToString());
}

void CLog0::Log(const FRotator & InValue)
{
	UE_LOG(GameProject, Display, L"%s", *InValue.ToString());
}
