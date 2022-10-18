// Copyright Epic Games, Inc. All Rights Reserved.


#include "CGameMode.h"
#include "Global.h"

ACGameMode::ACGameMode()
{
	/*ConstructorHelpers::
		FClassFinder<APawn>
		pawn(L"Blueprint'/Game/BP_CPlayer.BP_CPlayer_C'");

	if(pawn.Succeeded())
		pawn.Class*/
	
	// DefaultPawnClass : �⺻ �÷��̾� Ŭ������
	// �Է¹��� ����
	// TSubClassOf<APawn> : APawn���� ���� ��ӹ���
	// ���� Ŭ������ Ÿ���� �Է�


	// Class ��� �ڿ��� ������ _C�� �ٿ��־�� �Ѵ�.
	CHelpers::GetClass<APawn>
		(&DefaultPawnClass,
			"Blueprint'/Game/BP_CPlayer.BP_CPlayer_C'");
}