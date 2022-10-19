// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCProject00/01_Actor/C03_Spawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC03_Spawner() {}
// Cross Module References
	MYCPROJECT00_API UClass* Z_Construct_UClass_AC03_Spawner_NoRegister();
	MYCPROJECT00_API UClass* Z_Construct_UClass_AC03_Spawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyCProject00();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYCPROJECT00_API UClass* Z_Construct_UClass_AC02_SpawnActor_NoRegister();
// End Cross Module References
	void AC03_Spawner::StaticRegisterNativesAC03_Spawner()
	{
	}
	UClass* Z_Construct_UClass_AC03_Spawner_NoRegister()
	{
		return AC03_Spawner::StaticClass();
	}
	struct Z_Construct_UClass_AC03_Spawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SampleClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC03_Spawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCProject00,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_Spawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "01_Actor/C03_Spawner.h" },
		{ "ModuleRelativePath", "01_Actor/C03_Spawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SpawnClass_MetaData[] = {
		{ "Category", "C03_Spawner" },
		{ "ModuleRelativePath", "01_Actor/C03_Spawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SpawnClass = { "SpawnClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(SpawnClass, AC03_Spawner), STRUCT_OFFSET(AC03_Spawner, SpawnClass), Z_Construct_UClass_AC02_SpawnActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SpawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SpawnClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SampleClass_MetaData[] = {
		{ "Category", "C03_Spawner" },
		{ "Comment", "// \xc5\xac?????? \xc5\xb8???? ?????? ?\xd9\xb7??\xda\xb4?.\n// ???\xc3\xb7??? : ?\xda\xb7????? \xc5\xb8???? ?????? ?\xd9\xb7? ?? ?\xd6\xb5???\n// ???\xd6\xb4? ????\n" },
		{ "ModuleRelativePath", "01_Actor/C03_Spawner.h" },
		{ "ToolTip", "\xc5\xac?????? \xc5\xb8???? ?????? ?\xd9\xb7??\xda\xb4?.\n???\xc3\xb7??? : ?\xda\xb7????? \xc5\xb8???? ?????? ?\xd9\xb7? ?? ?\xd6\xb5???\n???\xd6\xb4? ????" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SampleClass = { "SampleClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC03_Spawner, SampleClass), Z_Construct_UClass_AC02_SpawnActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SampleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SampleClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC03_Spawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SpawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC03_Spawner_Statics::NewProp_SampleClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC03_Spawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC03_Spawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC03_Spawner_Statics::ClassParams = {
		&AC03_Spawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC03_Spawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Spawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC03_Spawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC03_Spawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC03_Spawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC03_Spawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC03_Spawner, 4037156551);
	template<> MYCPROJECT00_API UClass* StaticClass<AC03_Spawner>()
	{
		return AC03_Spawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC03_Spawner(Z_Construct_UClass_AC03_Spawner, &AC03_Spawner::StaticClass, TEXT("/Script/MyCProject00"), TEXT("AC03_Spawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC03_Spawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
