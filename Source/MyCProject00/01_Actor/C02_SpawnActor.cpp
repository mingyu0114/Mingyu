// Fill out your copyright notice in the Description page of Project Settings.


#include "C02_SpawnActor.h"
#include "Global.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"

// Sets default values
AC02_SpawnActor::AC02_SpawnActor()
{
	Mesh = CreateDefaultSubobject
		<UStaticMeshComponent>("Mesh");
	// Mesh를 RootComponent로 쓰겠다.
	RootComponent = Mesh;

	//StaticMesh'/Game/Meshes/M_Cube.M_Cube'
	/*ConstructorHelpers::FObjectFinder
		<UStaticMesh> mesh
		(L"StaticMesh'/Game/Meshes/M_Cube.M_Cube'");*/

	/*ConstructorHelpers::FObjectFinder
		<UStaticMesh> mesh
		(TEXT("StaticMesh'/Game/Meshes/M_Cube.M_Cube'"));
	if (mesh.Succeeded())
	{
		Mesh->SetStaticMesh(mesh.Object);
	}*/

	UStaticMesh* mesh;
	CHelpers::GetAsset<UStaticMesh>(&mesh,
		"StaticMesh'/Game/Meshes/M_Cube.M_Cube'");
	Mesh->SetStaticMesh(mesh);
}

// Called when the game starts or when spawned
void AC02_SpawnActor::BeginPlay()
{
	Super::BeginPlay();
	
	// 메테리얼은 BeginPlay에서 불러온다.

	// MaterialInstance는 
	// C++에서 UMaterialInstanceConstant로 다룬다.

	// StaticLoadObject : 게임상에서 동적으로 에셋을
	// 로딩하기위해 사용한다. (생성자 사용 불가)

	// UMaterialInstanceConstant::StaticClass() :
	// 자기의 클래스 타입을 리턴해준다. UObject형
	/*UObject* obj =
		StaticLoadObject(
			UMaterialInstanceConstant::StaticClass(),
			NULL, 
			L"MaterialInstanceConstant'/Game/Material/M_Mesh_Inst.M_Mesh_Inst'");
	
	UMaterialInstanceConstant* material =
		Cast<UMaterialInstanceConstant>(obj);*/

	UMaterialInstanceConstant* material;
	CHelpers::GetAssetDynamic
		<UMaterialInstanceConstant>
		(&material, 
			"MaterialInstanceConstant'/Game/Material/M_Mesh_Inst.M_Mesh_Inst'");

	//UMaterialInstanceDynamic::Create를
	//이용해 다이나믹 메테리얼을 생성한다.
	//Material전체는 UMaterialInterface로 부터
	//상속받아 구현되어 있다.
	Material =
		UMaterialInstanceDynamic::
		Create(material,this);
	Mesh->SetMaterial(0, Material);

	// 1초마다 ChangeColor함수를 호출해주면서
	// 반복해 주겠다.
	UKismetSystemLibrary::
		K2_SetTimer(this, "ChangeColor",
			1.0f, true);

}

void AC02_SpawnActor::ChangeColor()
{
	FLinearColor color;

	color.R = UKismetMathLibrary::
		RandomFloatInRange(0, 1);
	color.G = UKismetMathLibrary::
		RandomFloatInRange(0, 1);
	color.B = UKismetMathLibrary::
		RandomFloatInRange(0, 1);
	color.A = 1.0f;

	Material->SetVectorParameterValue
	("Color", color);
}


