// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWER_BasicTower_generated_h
#error "BasicTower.generated.h already included, missing '#pragma once' in BasicTower.h"
#endif
#define TOWER_BasicTower_generated_h

#define Tower_Source_Tower_BasicTower_h_17_RPC_WRAPPERS
#define Tower_Source_Tower_BasicTower_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Tower_Source_Tower_BasicTower_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicTower(); \
	friend struct Z_Construct_UClass_ABasicTower_Statics; \
public: \
	DECLARE_CLASS(ABasicTower, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tower"), NO_API) \
	DECLARE_SERIALIZER(ABasicTower)


#define Tower_Source_Tower_BasicTower_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABasicTower(); \
	friend struct Z_Construct_UClass_ABasicTower_Statics; \
public: \
	DECLARE_CLASS(ABasicTower, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tower"), NO_API) \
	DECLARE_SERIALIZER(ABasicTower)


#define Tower_Source_Tower_BasicTower_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicTower(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicTower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicTower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicTower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicTower(ABasicTower&&); \
	NO_API ABasicTower(const ABasicTower&); \
public:


#define Tower_Source_Tower_BasicTower_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicTower(ABasicTower&&); \
	NO_API ABasicTower(const ABasicTower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicTower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicTower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicTower)


#define Tower_Source_Tower_BasicTower_h_17_PRIVATE_PROPERTY_OFFSET
#define Tower_Source_Tower_BasicTower_h_14_PROLOG
#define Tower_Source_Tower_BasicTower_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tower_Source_Tower_BasicTower_h_17_PRIVATE_PROPERTY_OFFSET \
	Tower_Source_Tower_BasicTower_h_17_RPC_WRAPPERS \
	Tower_Source_Tower_BasicTower_h_17_INCLASS \
	Tower_Source_Tower_BasicTower_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tower_Source_Tower_BasicTower_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tower_Source_Tower_BasicTower_h_17_PRIVATE_PROPERTY_OFFSET \
	Tower_Source_Tower_BasicTower_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Tower_Source_Tower_BasicTower_h_17_INCLASS_NO_PURE_DECLS \
	Tower_Source_Tower_BasicTower_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tower_Source_Tower_BasicTower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
