// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWER_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define TOWER_Bullet_generated_h

#define Tower_Source_Tower_Bullet_h_14_RPC_WRAPPERS
#define Tower_Source_Tower_Bullet_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Tower_Source_Tower_Bullet_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tower"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define Tower_Source_Tower_Bullet_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tower"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define Tower_Source_Tower_Bullet_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public:


#define Tower_Source_Tower_Bullet_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet)


#define Tower_Source_Tower_Bullet_h_14_PRIVATE_PROPERTY_OFFSET
#define Tower_Source_Tower_Bullet_h_11_PROLOG
#define Tower_Source_Tower_Bullet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tower_Source_Tower_Bullet_h_14_PRIVATE_PROPERTY_OFFSET \
	Tower_Source_Tower_Bullet_h_14_RPC_WRAPPERS \
	Tower_Source_Tower_Bullet_h_14_INCLASS \
	Tower_Source_Tower_Bullet_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tower_Source_Tower_Bullet_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tower_Source_Tower_Bullet_h_14_PRIVATE_PROPERTY_OFFSET \
	Tower_Source_Tower_Bullet_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Tower_Source_Tower_Bullet_h_14_INCLASS_NO_PURE_DECLS \
	Tower_Source_Tower_Bullet_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tower_Source_Tower_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
