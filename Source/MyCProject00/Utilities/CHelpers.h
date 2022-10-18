#pragma once

// MYCPROJECT00_API : 언리얼 네임스페이스이다.
// 솔루션 내에 많은 프로젝트들이 생기게 되므로
// 어느 프로젝트에 소속된 소스인지 구분해주기 위해
// 사용됨.
class MYCPROJECT00_API CHelpers
{
public:
	template<typename T>
	static void GetAsset
	(T** OutObject, FString InPath)
	{
		// FString형에 *를 붙이면 문자를 
		// 문자열 상수(L"" or TEXT(""))
		// 형으로 바꿀 수 있다.
		ConstructorHelpers::
			FObjectFinder<T> asset(*InPath);

		verifyf(asset.Succeeded(),
			L"asset.Succeeded()");

		*OutObject = asset.Object;
	}

	template<typename T>
	static void GetAssetDynamic
	(T** OutObject, FString InPath)
	{
		T* obj = Cast<T>(StaticLoadObject
		(T::StaticClass(), NULL, *InPath));

		// !! : Null이 아니면 true, 
		// Null이면 false가 나온다.
		verifyf(!!obj, L"!!asset");

		*OutObject = obj;
	}

	// TSubClass<T>는 *를 하나 가지고 있다.
	// TSubClass<T>* 로 하면 2차 포인터와 같다.
	template<typename T>
	static void GetClass(
		TSubclassOf<T>* OutClass,
		FString InPath)
	{
		ConstructorHelpers::
			FClassFinder<T> asset(*InPath);

		verifyf(asset.Succeeded(),
			L"asset.Succeeded");

		*OutClass = asset.Class;
	}




	// 어느 액터에서 쓸 컴포넌트인지 확인 후
	// 붙여준다.
	template<typename T>
	static void CreateComponent
	(AActor* InActor, T** InComponent,
		FName InName,
		USceneComponent* InParent = NULL)
	{
		// 컴포넌트를 액터에서 생성해준다.
		*InComponent =
			InActor->
			CreateDefaultSubobject<T>(InName);

		//parent가 null이 아니라면
		if (!!InParent)
		{
			// 컴포넌트를 parent에 붙여준다.
			(*InComponent)->
				SetupAttachment(InParent);

			return;
		}

		// parent가 null 이면 액터의 RootComponent는
		// 해당 컴포넌트가 된다.
		InActor->SetRootComponent((*InComponent));
	}
};
