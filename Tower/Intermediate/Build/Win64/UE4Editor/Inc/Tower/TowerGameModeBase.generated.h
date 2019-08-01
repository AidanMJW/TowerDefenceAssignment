// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWER_TowerGameModeBase_generated_h
#error "TowerGameModeBase.generated.h already included, missing '#pragma once' in TowerGameModeBase.h"
#endif
#define TOWER_TowerGameModeBase_generated_h

#define Tower_Source_Tower_TowerGameModeBase_h_15_RPC_WRAPPERS
#define Tower_Source_Tower_TowerGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Tower_Source_Tower_TowerGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATowerGameModeBase(); \
	friend struct Z_Construct_UClass_ATowerGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATowerGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Tower"), NO_API) \
	DECLARE_SERIALIZER(ATowerGameModeBase)


#define Tower_Source_Tower_TowerGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATowerGameModeBase(); \
	friend struct Z_Construct_UClass_ATowerGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATowerGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Tower"), NO_API) \
	DECLARE_SERIALIZER(ATowerGameModeBase)


#define Tower_Source_Tower_TowerGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATowerGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATowerGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATowerGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATowerGameModeBase(ATowerGameModeBase&&); \
	NO_API ATowerGameModeBase(const ATowerGameModeBase&); \
public:


#define Tower_Source_Tower_TowerGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATowerGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATowerGameModeBase(ATowerGameModeBase&&); \
	NO_API ATowerGameModeBase(const ATowerGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATowerGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATowerGameModeBase)


#define Tower_Source_Tower_TowerGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Tower_Source_Tower_TowerGameModeBase_h_12_PROLOG
#define Tower_Source_Tower_TowerGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tower_Source_Tower_TowerGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Tower_Source_Tower_TowerGameModeBase_h_15_RPC_WRAPPERS \
	Tower_Source_Tower_TowerGameModeBase_h_15_INCLASS \
	Tower_Source_Tower_TowerGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tower_Source_Tower_TowerGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tower_Source_Tower_TowerGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Tower_Source_Tower_TowerGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Tower_Source_Tower_TowerGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Tower_Source_Tower_TowerGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tower_Source_Tower_TowerGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
