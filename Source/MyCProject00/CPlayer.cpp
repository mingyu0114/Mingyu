// Fill out your copyright notice in the Description page of Project Settings.


#include "CPlayer.h"
#include "Global.h"
#include "CAnimInstance.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/GameViewportClient.h"

// Sets default values
ACPlayer::ACPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*SpringArm =
		CreateDefaultSubobject
		<USpringArmComponent>("SpringArm");
	SpringArm->SetupAttachment(GetCapsuleComponent());

	Camera = CreateDefaultSubobject
		<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);*/

	CHelpers::CreateComponent<USpringArmComponent>
		(this, &SpringArm, "SpringArm", GetCapsuleComponent());

	CHelpers::CreateComponent<UCameraComponent>
		(this, &Camera, "Camera", SpringArm);

	bUseControllerRotationYaw = false;
	GetCharacterMovement()->
		bOrientRotationToMovement = true;
	GetCharacterMovement()->
		MaxWalkSpeed = 400.0f;

	USkeletalMesh* mesh;
	CHelpers::GetAsset<USkeletalMesh>
		(&mesh,"SkeletalMesh'/Game/Character/Mesh/SK_Mannequin.SK_Mannequin'");
	GetMesh()->SetSkeletalMesh(mesh);

	// ��ġ�� ȸ���� �⺻������ �־��ֱ� ����
	// �����ڿ� ���� �������ش�.
	GetMesh()->
		SetRelativeLocation(FVector(0, 0, -90));
	// �߰��� Z : Yaw��°��� �����Ѵ�.
	GetMesh()->
		SetRelativeRotation(FRotator(0, -90, 0));

	TSubclassOf<UAnimInstance> 
		animInstance;
	CHelpers::GetClass
		<UAnimInstance>(&animInstance,
			"AnimBlueprint'/Game/ABP_Cplayer.ABP_Cplayer_C'");
	GetMesh()->
		SetAnimInstanceClass
		(animInstance);


	SpringArm->
		SetRelativeLocation(FVector(0, 0, 60));
	SpringArm->TargetArmLength = 200.0f;
	// �� ���̿� ��ü�� ������ �浹 üũ�� �Ұ��̳�?
	SpringArm->bDoCollisionTest = false;
	SpringArm->bUsePawnControlRotation = true;
	GetCharacterMovement()->JumpZVelocity = 500.0f;
	JumpMaxCount = 2;
	
}

// Called when the game starts or when spawned
void ACPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// BindAxis
	// �ప�� �̺�Ʈ�� �Լ��� ����
	// �Լ������͸� ����� ���� �Լ���
	// �ּҷ� �������� �Ѵ�.
	PlayerInputComponent->BindAxis("MoveForward",this, &ACPlayer::DoMoveFoward);
	PlayerInputComponent->BindAxis("MoveRight",this, &ACPlayer::DoMoveRight);

	PlayerInputComponent->BindAxis("Turn", this,&ACPlayer::DoHorizontalLook);
	PlayerInputComponent->BindAxis("LookUp", this,&ACPlayer::DoVerticalLook);

	PlayerInputComponent->BindAxis("Zoom",this, &ACPlayer::DoZoom);

	PlayerInputComponent->BindAction("Running",EInputEvent::IE_Pressed,this, &ACPlayer::DoRunning);
	PlayerInputComponent->BindAction("jumping", EInputEvent::IE_Pressed, this, &ACPlayer::Jump);
	PlayerInputComponent->BindAction("jumping", EInputEvent::IE_Pressed, this, &ACPlayer::Jump);

	
}

void ACPlayer::
DoMoveFoward(float Axis)
{
	FRotator rotator =
		FRotator(0,
			GetControlRotation().Yaw,
			0);

	// C++������ �������Ʈ����ó�� rotator
	// �� forwardVector �Լ��� ã������ ����.
	
	// Quaternion(�����) : ȸ���� ������
	// ȸ�����(FMatrix)�� ���� �����ϸ�
	// �������� �ִ��� ���̱� ���� ȸ������ 
	// ����ϴ� ���
	// �ñ��Ͻø� ã�ƺ��Ƶ� ������ ����
	// �ڼ��� �������� �ʾƵ� �ȴ�.(����:������)
	// �ٸ� FRotator�� ���� forwardVector
	// �� ����ϱ� ���� ����Ѵٰ� ������ָ�
	// �ȴ�.
	FVector direction =
		FQuat(rotator).
		GetForwardVector().GetSafeNormal2D();

	AddMovementInput(direction, Axis);
}

void ACPlayer::DoMoveRight(float Axis)
{
	FRotator rotator =
		FRotator(0, 
			GetControlRotation().Yaw,
			0);

	FVector direction = FQuat(rotator).
		GetRightVector().GetSafeNormal2D();

	AddMovementInput(direction, Axis);
}

void ACPlayer::DoHorizontalLook
(float Axis)
{
	AddControllerYawInput(Axis);
}

void ACPlayer::DoVerticalLook
(float Axis)
{
	AddControllerPitchInput(Axis);
}

void ACPlayer::DoZoom(float Axis)
{
	float Speed = Axis * fZoomSpeed;
	Speed =
		SpringArm->TargetArmLength + 
		Speed;

	SpringArm->TargetArmLength = 
		UKismetMathLibrary::
		FClamp(Speed, 100, 600);

}

void ACPlayer::DoRunning()
{

}

void ACPlayer::DoOffRunning()
{
}

