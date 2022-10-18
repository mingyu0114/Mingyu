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

	// 위치와 회전을 기본값으로 넣어주기 위해
	// 생성자에 값을 설정해준다.
	GetMesh()->
		SetRelativeLocation(FVector(0, 0, -90));
	// 중간이 Z : Yaw라는것을 주의한다.
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
	// 선 사이에 물체가 들어오면 충돌 체크를 할것이냐?
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
	// 축값의 이벤트와 함수를 연결
	// 함수포인터를 사용할 때는 함수의
	// 주소로 명시해줘야 한다.
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

	// C++에서는 블루프린트에서처럼 rotator
	// 의 forwardVector 함수를 찾을수가 없다.
	
	// Quaternion(사원수) : 회전의 연산이
	// 회전행렬(FMatrix)에 비해 간단하며
	// 값오차를 최대한 줄이기 위해 회전에서 
	// 사용하는 방식
	// 궁금하시면 찾아보아도 되지만 굳이
	// 자세히 이해하지 않아도 된다.(참고:짐벌락)
	// 다만 FRotator에 없는 forwardVector
	// 를 사용하기 위해 사용한다고만 기억해주면
	// 된다.
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

