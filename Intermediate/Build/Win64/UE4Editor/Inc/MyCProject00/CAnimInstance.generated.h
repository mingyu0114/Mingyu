// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYCPROJECT00_CAnimInstance_generated_h
#error "CAnimInstance.generated.h already included, missing '#pragma once' in CAnimInstance.h"
#endif
#define MYCPROJECT00_CAnimInstance_generated_h

#define Mingyu_Source_MyCProject00_CAnimInstance_h_15_SPARSE_DATA
#define Mingyu_Source_MyCProject00_CAnimInstance_h_15_RPC_WRAPPERS
#define Mingyu_Source_MyCProject00_CAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Mingyu_Source_MyCProject00_CAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCAnimInstance(); \
	friend struct Z_Construct_UClass_UCAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MyCProject00"), NO_API) \
	DECLARE_SERIALIZER(UCAnimInstance)


#define Mingyu_Source_MyCProject00_CAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCAnimInstance(); \
	friend struct Z_Construct_UClass_UCAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MyCProject00"), NO_API) \
	DECLARE_SERIALIZER(UCAnimInstance)


#define Mingyu_Source_MyCProject00_CAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAnimInstance(UCAnimInstance&&); \
	NO_API UCAnimInstance(const UCAnimInstance&); \
public:


#define Mingyu_Source_MyCProject00_CAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAnimInstance(UCAnimInstance&&); \
	NO_API UCAnimInstance(const UCAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAnimInstance)


#define Mingyu_Source_MyCProject00_CAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UCAnimInstance, Speed); }


#define Mingyu_Source_MyCProject00_CAnimInstance_h_12_PROLOG
#define Mingyu_Source_MyCProject00_CAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mingyu_Source_MyCProject00_CAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Mingyu_Source_MyCProject00_CAnimInstance_h_15_SPARSE_DATA \
	Mingyu_Source_MyCProject00_CAnimInstance_h_15_RPC_WRAPPERS \
	Mingyu_Source_MyCProject00_CAnimInstance_h_15_INCLASS \
	Mingyu_Source_MyCProject00_CAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mingyu_Source_MyCProject00_CAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mingyu_Source_MyCProject00_CAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Mingyu_Source_MyCProject00_CAnimInstance_h_15_SPARSE_DATA \
	Mingyu_Source_MyCProject00_CAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mingyu_Source_MyCProject00_CAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	Mingyu_Source_MyCProject00_CAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYCPROJECT00_API UClass* StaticClass<class UCAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mingyu_Source_MyCProject00_CAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
