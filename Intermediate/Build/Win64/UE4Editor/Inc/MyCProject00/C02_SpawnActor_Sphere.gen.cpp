// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCProject00/01_Actor/C02_SpawnActor_Sphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC02_SpawnActor_Sphere() {}
// Cross Module References
	MYCPROJECT00_API UClass* Z_Construct_UClass_AC02_SpawnActor_Sphere_NoRegister();
	MYCPROJECT00_API UClass* Z_Construct_UClass_AC02_SpawnActor_Sphere();
	MYCPROJECT00_API UClass* Z_Construct_UClass_AC02_SpawnActor();
	UPackage* Z_Construct_UPackage__Script_MyCProject00();
// End Cross Module References
	void AC02_SpawnActor_Sphere::StaticRegisterNativesAC02_SpawnActor_Sphere()
	{
	}
	UClass* Z_Construct_UClass_AC02_SpawnActor_Sphere_NoRegister()
	{
		return AC02_SpawnActor_Sphere::StaticClass();
	}
	struct Z_Construct_UClass_AC02_SpawnActor_Sphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC02_SpawnActor_Sphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AC02_SpawnActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCProject00,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC02_SpawnActor_Sphere_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "01_Actor/C02_SpawnActor_Sphere.h" },
		{ "ModuleRelativePath", "01_Actor/C02_SpawnActor_Sphere.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC02_SpawnActor_Sphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC02_SpawnActor_Sphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC02_SpawnActor_Sphere_Statics::ClassParams = {
		&AC02_SpawnActor_Sphere::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC02_SpawnActor_Sphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC02_SpawnActor_Sphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC02_SpawnActor_Sphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC02_SpawnActor_Sphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC02_SpawnActor_Sphere, 4174819125);
	template<> MYCPROJECT00_API UClass* StaticClass<AC02_SpawnActor_Sphere>()
	{
		return AC02_SpawnActor_Sphere::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC02_SpawnActor_Sphere(Z_Construct_UClass_AC02_SpawnActor_Sphere, &AC02_SpawnActor_Sphere::StaticClass, TEXT("/Script/MyCProject00"), TEXT("AC02_SpawnActor_Sphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC02_SpawnActor_Sphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
