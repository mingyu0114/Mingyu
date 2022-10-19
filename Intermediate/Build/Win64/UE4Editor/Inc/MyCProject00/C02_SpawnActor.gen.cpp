// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCProject00/01_Actor/C02_SpawnActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC02_SpawnActor() {}
// Cross Module References
	MYCPROJECT00_API UClass* Z_Construct_UClass_AC02_SpawnActor_NoRegister();
	MYCPROJECT00_API UClass* Z_Construct_UClass_AC02_SpawnActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyCProject00();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AC02_SpawnActor::execChangeColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeColor();
		P_NATIVE_END;
	}
	void AC02_SpawnActor::StaticRegisterNativesAC02_SpawnActor()
	{
		UClass* Class = AC02_SpawnActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeColor", &AC02_SpawnActor::execChangeColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC02_SpawnActor_ChangeColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC02_SpawnActor_ChangeColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "01_Actor/C02_SpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AC02_SpawnActor_ChangeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC02_SpawnActor, nullptr, "ChangeColor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AC02_SpawnActor_ChangeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AC02_SpawnActor_ChangeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AC02_SpawnActor_ChangeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AC02_SpawnActor_ChangeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AC02_SpawnActor_NoRegister()
	{
		return AC02_SpawnActor::StaticClass();
	}
	struct Z_Construct_UClass_AC02_SpawnActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC02_SpawnActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyCProject00,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AC02_SpawnActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC02_SpawnActor_ChangeColor, "ChangeColor" }, // 528867947
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC02_SpawnActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "01_Actor/C02_SpawnActor.h" },
		{ "ModuleRelativePath", "01_Actor/C02_SpawnActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC02_SpawnActor_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "C02_SpawnActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "01_Actor/C02_SpawnActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC02_SpawnActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC02_SpawnActor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC02_SpawnActor_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC02_SpawnActor_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC02_SpawnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC02_SpawnActor_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC02_SpawnActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC02_SpawnActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC02_SpawnActor_Statics::ClassParams = {
		&AC02_SpawnActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC02_SpawnActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC02_SpawnActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC02_SpawnActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC02_SpawnActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC02_SpawnActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC02_SpawnActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC02_SpawnActor, 565611519);
	template<> MYCPROJECT00_API UClass* StaticClass<AC02_SpawnActor>()
	{
		return AC02_SpawnActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC02_SpawnActor(Z_Construct_UClass_AC02_SpawnActor, &AC02_SpawnActor::StaticClass, TEXT("/Script/MyCProject00"), TEXT("AC02_SpawnActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC02_SpawnActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
