// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerPrototype/MultiplayerPrototypeHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerPrototypeHUD() {}
// Cross Module References
	MULTIPLAYERPROTOTYPE_API UClass* Z_Construct_UClass_AMultiplayerPrototypeHUD_NoRegister();
	MULTIPLAYERPROTOTYPE_API UClass* Z_Construct_UClass_AMultiplayerPrototypeHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MultiplayerPrototype();
// End Cross Module References
	void AMultiplayerPrototypeHUD::StaticRegisterNativesAMultiplayerPrototypeHUD()
	{
	}
	UClass* Z_Construct_UClass_AMultiplayerPrototypeHUD_NoRegister()
	{
		return AMultiplayerPrototypeHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMultiplayerPrototypeHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiplayerPrototypeHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerPrototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiplayerPrototypeHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MultiplayerPrototypeHUD.h" },
		{ "ModuleRelativePath", "MultiplayerPrototypeHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiplayerPrototypeHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerPrototypeHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerPrototypeHUD_Statics::ClassParams = {
		&AMultiplayerPrototypeHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMultiplayerPrototypeHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerPrototypeHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiplayerPrototypeHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultiplayerPrototypeHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiplayerPrototypeHUD, 2677172697);
	template<> MULTIPLAYERPROTOTYPE_API UClass* StaticClass<AMultiplayerPrototypeHUD>()
	{
		return AMultiplayerPrototypeHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiplayerPrototypeHUD(Z_Construct_UClass_AMultiplayerPrototypeHUD, &AMultiplayerPrototypeHUD::StaticClass, TEXT("/Script/MultiplayerPrototype"), TEXT("AMultiplayerPrototypeHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerPrototypeHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
