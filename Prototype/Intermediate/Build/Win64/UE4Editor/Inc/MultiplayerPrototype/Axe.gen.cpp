// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerPrototype/Axe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxe() {}
// Cross Module References
	MULTIPLAYERPROTOTYPE_API UClass* Z_Construct_UClass_AAxe_NoRegister();
	MULTIPLAYERPROTOTYPE_API UClass* Z_Construct_UClass_AAxe();
	MULTIPLAYERPROTOTYPE_API UClass* Z_Construct_UClass_AWeaponBase();
	UPackage* Z_Construct_UPackage__Script_MultiplayerPrototype();
// End Cross Module References
	void AAxe::StaticRegisterNativesAAxe()
	{
	}
	UClass* Z_Construct_UClass_AAxe_NoRegister()
	{
		return AAxe::StaticClass();
	}
	struct Z_Construct_UClass_AAxe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAxe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerPrototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAxe_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Axe.h" },
		{ "ModuleRelativePath", "Axe.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAxe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAxe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAxe_Statics::ClassParams = {
		&AAxe::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAxe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAxe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAxe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAxe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAxe, 2124875984);
	template<> MULTIPLAYERPROTOTYPE_API UClass* StaticClass<AAxe>()
	{
		return AAxe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAxe(Z_Construct_UClass_AAxe, &AAxe::StaticClass, TEXT("/Script/MultiplayerPrototype"), TEXT("AAxe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAxe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
