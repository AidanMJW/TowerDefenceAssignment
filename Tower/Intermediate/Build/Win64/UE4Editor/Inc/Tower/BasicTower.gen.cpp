// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tower/BasicTower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicTower() {}
// Cross Module References
	TOWER_API UClass* Z_Construct_UClass_ABasicTower_NoRegister();
	TOWER_API UClass* Z_Construct_UClass_ABasicTower();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tower();
	TOWER_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWER_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TOWER_API UClass* Z_Construct_UClass_AGameManager_NoRegister();
// End Cross Module References
	void ABasicTower::StaticRegisterNativesABasicTower()
	{
	}
	UClass* Z_Construct_UClass_ABasicTower_NoRegister()
	{
		return ABasicTower::StaticClass();
	}
	struct Z_Construct_UClass_ABasicTower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theBullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_theBullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_body_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_enemyLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicTower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BasicTower.h" },
		{ "ModuleRelativePath", "BasicTower.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_Statics::NewProp_enemy_MetaData[] = {
		{ "Category", "BasicTower" },
		{ "ModuleRelativePath", "BasicTower.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicTower_Statics::NewProp_enemy = { UE4CodeGen_Private::EPropertyClass::Object, "enemy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABasicTower, enemy), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_Statics::NewProp_enemy_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasicTower_Statics::NewProp_enemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_Statics::NewProp_theBullet_MetaData[] = {
		{ "Category", "BasicTower" },
		{ "ModuleRelativePath", "BasicTower.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABasicTower_Statics::NewProp_theBullet = { UE4CodeGen_Private::EPropertyClass::Class, "theBullet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(ABasicTower, theBullet), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_Statics::NewProp_theBullet_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasicTower_Statics::NewProp_theBullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_Statics::NewProp_body_MetaData[] = {
		{ "Category", "BasicTower" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasicTower.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicTower_Statics::NewProp_body = { UE4CodeGen_Private::EPropertyClass::Object, "body", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ABasicTower, body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_Statics::NewProp_body_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasicTower_Statics::NewProp_body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_Statics::NewProp_enemyLocation_MetaData[] = {
		{ "Category", "BasicTower" },
		{ "ModuleRelativePath", "BasicTower.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasicTower_Statics::NewProp_enemyLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "enemyLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABasicTower, enemyLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_Statics::NewProp_enemyLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasicTower_Statics::NewProp_enemyLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_Statics::NewProp_range_MetaData[] = {
		{ "Category", "BasicTower" },
		{ "ModuleRelativePath", "BasicTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicTower_Statics::NewProp_range = { UE4CodeGen_Private::EPropertyClass::Float, "range", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABasicTower, range), METADATA_PARAMS(Z_Construct_UClass_ABasicTower_Statics::NewProp_range_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasicTower_Statics::NewProp_range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_Statics::NewProp_fireRate_MetaData[] = {
		{ "Category", "BasicTower" },
		{ "ModuleRelativePath", "BasicTower.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicTower_Statics::NewProp_fireRate = { UE4CodeGen_Private::EPropertyClass::Float, "fireRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABasicTower, fireRate), METADATA_PARAMS(Z_Construct_UClass_ABasicTower_Statics::NewProp_fireRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasicTower_Statics::NewProp_fireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_Statics::NewProp_gameManager_MetaData[] = {
		{ "Category", "BasicTower" },
		{ "ModuleRelativePath", "BasicTower.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicTower_Statics::NewProp_gameManager = { UE4CodeGen_Private::EPropertyClass::Object, "gameManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ABasicTower, gameManager), Z_Construct_UClass_AGameManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_Statics::NewProp_gameManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABasicTower_Statics::NewProp_gameManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicTower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_Statics::NewProp_enemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_Statics::NewProp_theBullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_Statics::NewProp_body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_Statics::NewProp_enemyLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_Statics::NewProp_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_Statics::NewProp_fireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_Statics::NewProp_gameManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicTower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicTower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicTower_Statics::ClassParams = {
		&ABasicTower::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ABasicTower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABasicTower_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABasicTower_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABasicTower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicTower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicTower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicTower, 334819061);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicTower(Z_Construct_UClass_ABasicTower, &ABasicTower::StaticClass, TEXT("/Script/Tower"), TEXT("ABasicTower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicTower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
