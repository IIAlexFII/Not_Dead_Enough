// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerPrototype/Med.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMed() {}
// Cross Module References
	MULTIPLAYERPROTOTYPE_API UClass* Z_Construct_UClass_AMed_NoRegister();
	MULTIPLAYERPROTOTYPE_API UClass* Z_Construct_UClass_AMed();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MultiplayerPrototype();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
	void AMed::StaticRegisterNativesAMed()
	{
	}
	UClass* Z_Construct_UClass_AMed_NoRegister()
	{
		return AMed::StaticClass();
	}
	struct Z_Construct_UClass_AMed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MedKitMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MedKitMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MedKitCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MedKitCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Heals_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Heals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerPrototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMed_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Med.h" },
		{ "ModuleRelativePath", "Med.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMed_Statics::NewProp_MedKitMesh_MetaData[] = {
		{ "Category", "Med" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Med.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMed_Statics::NewProp_MedKitMesh = { "MedKitMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMed, MedKitMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMed_Statics::NewProp_MedKitMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMed_Statics::NewProp_MedKitMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMed_Statics::NewProp_HealAnimation_MetaData[] = {
		{ "Category", "Med" },
		{ "ModuleRelativePath", "Med.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMed_Statics::NewProp_HealAnimation = { "HealAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMed, HealAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMed_Statics::NewProp_HealAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMed_Statics::NewProp_HealAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMed_Statics::NewProp_MedKitCost_MetaData[] = {
		{ "Category", "Med" },
		{ "ModuleRelativePath", "Med.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMed_Statics::NewProp_MedKitCost = { "MedKitCost", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMed, MedKitCost), METADATA_PARAMS(Z_Construct_UClass_AMed_Statics::NewProp_MedKitCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMed_Statics::NewProp_MedKitCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMed_Statics::NewProp_Heals_MetaData[] = {
		{ "Category", "Med" },
		{ "ModuleRelativePath", "Med.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMed_Statics::NewProp_Heals = { "Heals", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMed, Heals), METADATA_PARAMS(Z_Construct_UClass_AMed_Statics::NewProp_Heals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMed_Statics::NewProp_Heals_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMed_Statics::NewProp_MedKitMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMed_Statics::NewProp_HealAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMed_Statics::NewProp_MedKitCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMed_Statics::NewProp_Heals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMed_Statics::ClassParams = {
		&AMed::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMed_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMed_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMed, 1057976357);
	template<> MULTIPLAYERPROTOTYPE_API UClass* StaticClass<AMed>()
	{
		return AMed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMed(Z_Construct_UClass_AMed, &AMed::StaticClass, TEXT("/Script/MultiplayerPrototype"), TEXT("AMed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
