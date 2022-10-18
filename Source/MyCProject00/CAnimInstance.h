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
	// - BluePrintReadOnly : �������Ʈ �б�����
	// �������Ʈ�� �ش� Ŭ������ ��ӹ޾Ƽ� ����
	// �ϱ� ������ protected���� ��.
	// - EditAnywhere : ���Ͱ� �ƴ� Ŭ�������� �����Ϳ� 
	// ������ ������ �� �ݵ�� �̰����� ���������
	// �����Ͱ� ��Ÿ����.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		float Speed;

private:
	// ������ ���۵� �� �ִϸ��̼��� �÷��̵ɶ� ȣ��Ǵ�
	// �Լ�
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation
	(float DeltaSeconds) override;

private:
	class ACharacter* OwnerCharacter;
	
};
