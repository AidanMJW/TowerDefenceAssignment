// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tower/GameManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManager() {}
// Cross Module References
	TOWER_API UClass* Z_Construct_UClass_AGameManager_NoRegister();
	TOWER_API UClass* Z_Construct_UClass_AGameManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tower();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWER_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TOWER_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
// End Cross Module References
	void AGameManager::StaticRegisterNativesAGameManager()
	{
	}
	UClass* Z_Construct_UClass_AGameManager_NoRegister()
	{
		return AGameManager::StaticClass();
	}
	struct Z_Construct_UClass_AGameManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_theBullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_theBullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amountOfBullets_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_amountOfBullets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletPoolLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bulletPoolLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_enemies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemies_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameManager.h" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::NewProp_theBullet_MetaData[] = {
		{ "Category", "GameManager" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_theBullet = { UE4CodeGen_Private::EPropertyClass::Class, "theBullet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(AGameManager, theBullet), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameManager_Statics::NewProp_theBullet_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::NewProp_theBullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::NewProp_amountOfBullets_MetaData[] = {
		{ "Category", "GameManager" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_amountOfBullets = { UE4CodeGen_Private::EPropertyClass::Int, "amountOfBullets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGameManager, amountOfBullets), METADATA_PARAMS(Z_Construct_UClass_AGameManager_Statics::NewProp_amountOfBullets_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::NewProp_amountOfBullets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::NewProp_bulletPoolLocation_MetaData[] = {
		{ "Category", "GameManager" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_bulletPoolLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "bulletPoolLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGameManager, bulletPoolLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGameManager_Statics::NewProp_bulletPoolLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::NewProp_bulletPoolLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameManager_Statics::NewProp_enemies_MetaData[] = {
		{ "Category", "GameManager" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_enemies = { UE4CodeGen_Private::EPropertyClass::Array, "enemies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AGameManager, enemies), METADATA_PARAMS(Z_Construct_UClass_AGameManager_Statics::NewProp_enemies_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::NewProp_enemies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_enemies_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "enemies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_theBullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_amountOfBullets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_bulletPoolLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_enemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_enemies_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameManager_Statics::ClassParams = {
		&AGameManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AGameManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameManager, 2804888871);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameManager(Z_Construct_UClass_AGameManager, &AGameManager::StaticClass, TEXT("/Script/Tower"), TEXT("AGameManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
