// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCProject00/CAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimInstance() {}
// Cross Module References
	MYCPROJECT00_API UClass* Z_Construct_UClass_UCAnimInstance_NoRegister();
	MYCPROJECT00_API UClass* Z_Construct_UClass_UCAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_MyCProject00();
// End Cross Module References
	void UCAnimInstance::StaticRegisterNativesUCAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UCAnimInstance_NoRegister()
	{
		return UCAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCProject00,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "CAnimInstance.h" },
		{ "ModuleRelativePath", "CAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "// - BluePrintReadOnly : ????????\xc6\xae ?\xd0\xb1?????\n// ????????\xc6\xae?? ?\xd8\xb4? \xc5\xac?????? ???\xd3\xb9\xde\xbe\xc6\xbc? ????\n// ?\xcf\xb1? ?????? protected???? ??.\n// - EditAnywhere : ???\xcd\xb0? ?\xc6\xb4? \xc5\xac???????? ?????\xcd\xbf? \n// ?????? ?????? ?? ?\xdd\xb5??? ?\xcc\xb0????? ??????????\n// ?????\xcd\xb0? ??\xc5\xb8????.\n" },
		{ "ModuleRelativePath", "CAnimInstance.h" },
		{ "ToolTip", "- BluePrintReadOnly : ????????\xc6\xae ?\xd0\xb1?????\n????????\xc6\xae?? ?\xd8\xb4? \xc5\xac?????? ???\xd3\xb9\xde\xbe\xc6\xbc? ????\n?\xcf\xb1? ?????? protected???? ??.\n- EditAnywhere : ???\xcd\xb0? ?\xc6\xb4? \xc5\xac???????? ?????\xcd\xbf?\n?????? ?????? ?? ?\xdd\xb5??? ?\xcc\xb0????? ??????????\n?????\xcd\xb0? ??\xc5\xb8????." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimInstance_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCAnimInstance_Statics::ClassParams = {
		&UCAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCAnimInstance, 12315820);
	template<> MYCPROJECT00_API UClass* StaticClass<UCAnimInstance>()
	{
		return UCAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCAnimInstance(Z_Construct_UClass_UCAnimInstance, &UCAnimInstance::StaticClass, TEXT("/Script/MyCProject00"), TEXT("UCAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
