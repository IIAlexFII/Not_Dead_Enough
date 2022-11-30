// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerPrototype/Pistol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePistol() {}
// Cross Module References
	MULTIPLAYERPROTOTYPE_API UClass* Z_Construct_UClass_APistol_NoRegister();
	MULTIPLAYERPROTOTYPE_API UClass* Z_Construct_UClass_APistol();
	MULTIPLAYERPROTOTYPE_API UClass* Z_Construct_UClass_AWeaponBase();
	UPackage* Z_Construct_UPackage__Script_MultiplayerPrototype();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
	void APistol::StaticRegisterNativesAPistol()
	{
	}
	UClass* Z_Construct_UClass_APistol_NoRegister()
	{
		return APistol::StaticClass();
	}
	struct Z_Construct_UClass_APistol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MagazineAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APistol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerPrototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APistol_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pistol.h" },
		{ "ModuleRelativePath", "Pistol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APistol_Statics::NewProp_ReloadAnimation_MetaData[] = {
		{ "Category", "Pistol" },
		{ "ModuleRelativePath", "Pistol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APistol_Statics::NewProp_ReloadAnimation = { "ReloadAnimation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APistol, ReloadAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APistol_Statics::NewProp_ReloadAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APistol_Statics::NewProp_ReloadAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APistol_Statics::NewProp_MagazineAmmo_MetaData[] = {
		{ "Category", "Pistol" },
		{ "Comment", "//This will be only in the Ranged Weapons\n// Max Ammo Value For UI\n" },
		{ "ModuleRelativePath", "Pistol.h" },
		{ "ToolTip", "This will be only in the Ranged Weapons\n Max Ammo Value For UI" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APistol_Statics::NewProp_MagazineAmmo = { "MagazineAmmo", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APistol, MagazineAmmo), METADATA_PARAMS(Z_Construct_UClass_APistol_Statics::NewProp_MagazineAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APistol_Statics::NewProp_MagazineAmmo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APistol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APistol_Statics::NewProp_ReloadAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APistol_Statics::NewProp_MagazineAmmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APistol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APistol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APistol_Statics::ClassParams = {
		&APistol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APistol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APistol_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APistol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APistol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APistol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APistol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APistol, 2609832416);
	template<> MULTIPLAYERPROTOTYPE_API UClass* StaticClass<APistol>()
	{
		return APistol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APistol(Z_Construct_UClass_APistol, &APistol::StaticClass, TEXT("/Script/MultiplayerPrototype"), TEXT("APistol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APistol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
