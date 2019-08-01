// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWER_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define TOWER_Enemy_generated_h

#define Tower_Source_Tower_Enemy_h_13_RPC_WRAPPERS
#define Tower_Source_Tower_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Tower_Source_Tower_Enemy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tower"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define Tower_Source_Tower_Enemy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tower"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define Tower_Source_Tower_Enemy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define Tower_Source_Tower_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define Tower_Source_Tower_Enemy_h_13_PRIVATE_PROPERTY_OFFSET
#define Tower_Source_Tower_Enemy_h_10_PROLOG
#define Tower_Source_Tower_Enemy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tower_Source_Tower_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	Tower_Source_Tower_Enemy_h_13_RPC_WRAPPERS \
	Tower_Source_Tower_Enemy_h_13_INCLASS \
	Tower_Source_Tower_Enemy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tower_Source_Tower_Enemy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tower_Source_Tower_Enemy_h_13_PRIVATE_PROPERTY_OFFSET \
	Tower_Source_Tower_Enemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Tower_Source_Tower_Enemy_h_13_INCLASS_NO_PURE_DECLS \
	Tower_Source_Tower_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tower_Source_Tower_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
