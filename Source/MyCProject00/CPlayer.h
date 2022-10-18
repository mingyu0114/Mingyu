// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPlayer.generated.h"

// 여기에는 코드가 들어가 되지만 델리게이트 또는 구조체
// 밖에는 잘 넣지 않는다.

UCLASS()
class MYCPROJECT00_API ACPlayer : public ACharacter
{
	GENERATED_BODY()
private:
	UPROPERTY(VisibleDefaultsOnly)
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent* Camera;

public:
	// Sets default values for this character's properties
	ACPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 입력을 받아 우리가 원하는대로 처리할 수 있도록 하는 함수
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	// 블루프린트의 MoveFoward 축
	// 이벤트에도 Axis가 있었기에
	// 매개변수로 float Axis를 똑바로
	// 명시해 주어야 한다.
	void DoMoveFoward(float Axis);
	void DoMoveRight(float Axis);

	void DoHorizontalLook(float Axis);
	void DoVerticalLook(float Axis);

	void DoZoom(float Axis);

	void DoRunning();
	void DoOffRunning();


	float fZoomSpeed = 20;
};