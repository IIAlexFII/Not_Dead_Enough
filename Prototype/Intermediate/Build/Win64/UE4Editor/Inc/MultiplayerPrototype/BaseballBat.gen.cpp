// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerPrototype/BaseballBat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseballBat() {}
// Cross Module References
	MULTIPLAYERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseballBat_NoRegister();
	MULTIPLAYERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseballBat();
	MULTIPLAYERPROTOTYPE_API UClass* Z_Construct_UClass_AWeaponBase();
	UPackage* Z_Construct_UPackage__Script_MultiplayerPrototype();
// End Cross Module References
	void ABaseballBat::StaticRegisterNativesABaseballBat()
	{
	}
	UClass* Z_Construct_UClass_ABaseballBat_NoRegister()
	{
		return ABaseballBat::StaticClass();
	}
	struct Z_Construct_UClass_ABaseballBat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseballBat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerPrototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseballBat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseballBat.h" },
		{ "ModuleRelativePath", "BaseballBat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseballBat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseballBat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseballBat_Statics::ClassParams = {
		&ABaseballBat::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABaseballBat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseballBat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseballBat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseballBat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseballBat, 1847155056);
	template<> MULTIPLAYERPROTOTYPE_API UClass* StaticClass<ABaseballBat>()
	{
		return ABaseballBat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseballBat(Z_Construct_UClass_ABaseballBat, &ABaseballBat::StaticClass, TEXT("/Script/MultiplayerPrototype"), TEXT("ABaseballBat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseballBat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
