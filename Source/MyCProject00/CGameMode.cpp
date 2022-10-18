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
	
	// DefaultPawnClass : 기본 플레이어 클래스를
	// 입력받을 변수
	// TSubClassOf<APawn> : APawn으로 부터 상속받은
	// 하위 클래스의 타입을 입력


	// Class 경로 뒤에는 무조건 _C를 붙여주어야 한다.
	CHelpers::GetClass<APawn>
		(&DefaultPawnClass,
			"Blueprint'/Game/BP_CPlayer.BP_CPlayer_C'");
}