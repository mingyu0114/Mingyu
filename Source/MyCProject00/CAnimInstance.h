// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class MYCPROJECT00_API UCAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	// - BluePrintReadOnly : 블루프린트 읽기전용
	// 블루프린트는 해당 클래스를 상속받아서 접근
	// 하기 때문에 protected여야 함.
	// - EditAnywhere : 액터가 아닌 클래스에서 에디터에 
	// 변수를 공개할 때 반드시 이것으로 지정해줘야
	// 에디터가 나타난다.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		float Speed;

private:
	// 게임이 시작될 때 애니메이션이 플레이될때 호출되는
	// 함수
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation
	(float DeltaSeconds) override;

private:
	class ACharacter* OwnerCharacter;
	
};
