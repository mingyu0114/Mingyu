// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPlayer.generated.h"

// ���⿡�� �ڵ尡 �� ������ ��������Ʈ �Ǵ� ����ü
// �ۿ��� �� ���� �ʴ´�.

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

	// �Է��� �޾� �츮�� ���ϴ´�� ó���� �� �ֵ��� �ϴ� �Լ�
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	// �������Ʈ�� MoveFoward ��
	// �̺�Ʈ���� Axis�� �־��⿡
	// �Ű������� float Axis�� �ȹٷ�
	// ����� �־�� �Ѵ�.
	void DoMoveFoward(float Axis);
	void DoMoveRight(float Axis);

	void DoHorizontalLook(float Axis);
	void DoVerticalLook(float Axis);

	void DoZoom(float Axis);

	void DoRunning();
	void DoOffRunning();


	float fZoomSpeed = 20;
};