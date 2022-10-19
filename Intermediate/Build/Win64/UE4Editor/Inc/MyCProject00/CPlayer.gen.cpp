// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCProject00/CPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlayer() {}
// Cross Module References
	MYCPROJECT00_API UClass* Z_Construct_UClass_ACPlayer_NoRegister();
	MYCPROJECT00_API UClass* Z_Construct_UClass_ACPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyCProject00();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ACPlayer::StaticRegisterNativesACPlayer()
	{
	}
	UClass* Z_Construct_UClass_ACPlayer_NoRegister()
	{
		return ACPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ACPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCProject00,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ???\xe2\xbf\xa1?? ?\xda\xb5\xe5\xb0\xa1 ???\xee\xb0\xa1 ?????? ????????\xc6\xae ?\xc7\xb4? ????\xc3\xbc\n// ?\xdb\xbf??? ?? ???? ?\xca\xb4\xc2\xb4?.\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPlayer.h" },
		{ "ModuleRelativePath", "CPlayer.h" },
		{ "ToolTip", "???\xe2\xbf\xa1?? ?\xda\xb5\xe5\xb0\xa1 ???\xee\xb0\xa1 ?????? ????????\xc6\xae ?\xc7\xb4? ????\xc3\xbc\n?\xdb\xbf??? ?? ???? ?\xca\xb4\xc2\xb4?." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPlayer_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "CPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlayer_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPlayer, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::NewProp_SpringArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlayer_Statics::NewProp_SpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPlayer_Statics::ClassParams = {
		&ACPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPlayer, 3811199271);
	template<> MYCPROJECT00_API UClass* StaticClass<ACPlayer>()
	{
		return ACPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPlayer(Z_Construct_UClass_ACPlayer, &ACPlayer::StaticClass, TEXT("/Script/MyCProject00"), TEXT("ACPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
