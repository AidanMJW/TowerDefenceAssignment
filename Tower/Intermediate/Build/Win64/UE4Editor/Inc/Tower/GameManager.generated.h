// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWER_GameManager_generated_h
#error "GameManager.generated.h already included, missing '#pragma once' in GameManager.h"
#endif
#define TOWER_GameManager_generated_h

#define Tower_Source_Tower_GameManager_h_14_RPC_WRAPPERS
#define Tower_Source_Tower_GameManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Tower_Source_Tower_GameManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameManager(); \
	friend struct Z_Construct_UClass_AGameManager_Statics; \
public: \
	DECLARE_CLASS(AGameManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tower"), NO_API) \
	DECLARE_SERIALIZER(AGameManager)


#define Tower_Source_Tower_GameManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGameManager(); \
	friend struct Z_Construct_UClass_AGameManager_Statics; \
public: \
	DECLARE_CLASS(AGameManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tower"), NO_API) \
	DECLARE_SERIALIZER(AGameManager)


#define Tower_Source_Tower_GameManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameManager(AGameManager&&); \
	NO_API AGameManager(const AGameManager&); \
public:


#define Tower_Source_Tower_GameManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameManager(AGameManager&&); \
	NO_API AGameManager(const AGameManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameManager)


#define Tower_Source_Tower_GameManager_h_14_PRIVATE_PROPERTY_OFFSET
#define Tower_Source_Tower_GameManager_h_11_PROLOG
#define Tower_Source_Tower_GameManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tower_Source_Tower_GameManager_h_14_PRIVATE_PROPERTY_OFFSET \
	Tower_Source_Tower_GameManager_h_14_RPC_WRAPPERS \
	Tower_Source_Tower_GameManager_h_14_INCLASS \
	Tower_Source_Tower_GameManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tower_Source_Tower_GameManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tower_Source_Tower_GameManager_h_14_PRIVATE_PROPERTY_OFFSET \
	Tower_Source_Tower_GameManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Tower_Source_Tower_GameManager_h_14_INCLASS_NO_PURE_DECLS \
	Tower_Source_Tower_GameManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tower_Source_Tower_GameManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
