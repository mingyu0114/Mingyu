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
	// Mesh�� RootComponent�� ���ڴ�.
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
	
	// ���׸����� BeginPlay���� �ҷ��´�.

	// MaterialInstance�� 
	// C++���� UMaterialInstanceConstant�� �ٷ��.

	// StaticLoadObject : ���ӻ󿡼� �������� ������
	// �ε��ϱ����� ����Ѵ�. (������ ��� �Ұ�)

	// UMaterialInstanceConstant::StaticClass() :
	// �ڱ��� Ŭ���� Ÿ���� �������ش�. UObject��
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

	//UMaterialInstanceDynamic::Create��
	//�̿��� ���̳��� ���׸����� �����Ѵ�.
	//Material��ü�� UMaterialInterface�� ����
	//��ӹ޾� �����Ǿ� �ִ�.
	Material =
		UMaterialInstanceDynamic::
		Create(material,this);
	Mesh->SetMaterial(0, Material);

	// 1�ʸ��� ChangeColor�Լ��� ȣ�����ָ鼭
	// �ݺ��� �ְڴ�.
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


