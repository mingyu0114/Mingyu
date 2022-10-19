// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCProject00/02_Debug/C01_Log.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC01_Log() {}
// Cross Module References
	MYCPROJECT00_API UClass* Z_Construct_UClass_AC01_Log_NoRegister();
	MYCPROJECT00_API UClass* Z_Construct_UClass_AC01_Log();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyCProject00();
// End Cross Module References
	void AC01_Log::StaticRegisterNativesAC01_Log()
	{
	}
	UClass* Z_Construct_UClass_AC01_Log_NoRegister()
	{
		return AC01_Log::StaticClass();
	}
	struct Z_Construct_UClass_AC01_Log_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC01_Log_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCProject00,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC01_Log_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "02_Debug/C01_Log.h" },
		{ "ModuleRelativePath", "02_Debug/C01_Log.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC01_Log_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC01_Log>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC01_Log_Statics::ClassParams = {
		&AC01_Log::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AC01_Log_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC01_Log_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC01_Log()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC01_Log_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC01_Log, 890989478);
	template<> MYCPROJECT00_API UClass* StaticClass<AC01_Log>()
	{
		return AC01_Log::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC01_Log(Z_Construct_UClass_AC01_Log, &AC01_Log::StaticClass, TEXT("/Script/MyCProject00"), TEXT("AC01_Log"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC01_Log);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
