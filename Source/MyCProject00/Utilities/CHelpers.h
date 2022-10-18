#pragma once

// MYCPROJECT00_API : �𸮾� ���ӽ����̽��̴�.
// �ַ�� ���� ���� ������Ʈ���� ����� �ǹǷ�
// ��� ������Ʈ�� �Ҽӵ� �ҽ����� �������ֱ� ����
// ����.
class MYCPROJECT00_API CHelpers
{
public:
	template<typename T>
	static void GetAsset
	(T** OutObject, FString InPath)
	{
		// FString���� *�� ���̸� ���ڸ� 
		// ���ڿ� ���(L"" or TEXT(""))
		// ������ �ٲ� �� �ִ�.
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

		// !! : Null�� �ƴϸ� true, 
		// Null�̸� false�� ���´�.
		verifyf(!!obj, L"!!asset");

		*OutObject = obj;
	}

	// TSubClass<T>�� *�� �ϳ� ������ �ִ�.
	// TSubClass<T>* �� �ϸ� 2�� �����Ϳ� ����.
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




	// ��� ���Ϳ��� �� ������Ʈ���� Ȯ�� ��
	// �ٿ��ش�.
	template<typename T>
	static void CreateComponent
	(AActor* InActor, T** InComponent,
		FName InName,
		USceneComponent* InParent = NULL)
	{
		// ������Ʈ�� ���Ϳ��� �������ش�.
		*InComponent =
			InActor->
			CreateDefaultSubobject<T>(InName);

		//parent�� null�� �ƴ϶��
		if (!!InParent)
		{
			// ������Ʈ�� parent�� �ٿ��ش�.
			(*InComponent)->
				SetupAttachment(InParent);

			return;
		}

		// parent�� null �̸� ������ RootComponent��
		// �ش� ������Ʈ�� �ȴ�.
		InActor->SetRootComponent((*InComponent));
	}
};
