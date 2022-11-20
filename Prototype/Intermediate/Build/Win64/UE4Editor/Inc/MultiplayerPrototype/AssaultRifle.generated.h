// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERPROTOTYPE_AssaultRifle_generated_h
#error "AssaultRifle.generated.h already included, missing '#pragma once' in AssaultRifle.h"
#endif
#define MULTIPLAYERPROTOTYPE_AssaultRifle_generated_h

#define Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_SPARSE_DATA
#define Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_RPC_WRAPPERS
#define Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAssaultRifle(); \
	friend struct Z_Construct_UClass_AAssaultRifle_Statics; \
public: \
	DECLARE_CLASS(AAssaultRifle, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(AAssaultRifle)


#define Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAssaultRifle(); \
	friend struct Z_Construct_UClass_AAssaultRifle_Statics; \
public: \
	DECLARE_CLASS(AAssaultRifle, AWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(AAssaultRifle)


#define Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAssaultRifle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAssaultRifle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssaultRifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssaultRifle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAssaultRifle(AAssaultRifle&&); \
	NO_API AAssaultRifle(const AAssaultRifle&); \
public:


#define Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAssaultRifle(AAssaultRifle&&); \
	NO_API AAssaultRifle(const AAssaultRifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssaultRifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssaultRifle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAssaultRifle)


#define Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReloadAnimation() { return STRUCT_OFFSET(AAssaultRifle, ReloadAnimation); } \
	FORCEINLINE static uint32 __PPO__MagazineAmmo() { return STRUCT_OFFSET(AAssaultRifle, MagazineAmmo); }


#define Prototype_Source_MultiplayerPrototype_AssaultRifle_h_12_PROLOG
#define Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_RPC_WRAPPERS \
	Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_INCLASS \
	Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_INCLASS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_AssaultRifle_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERPROTOTYPE_API UClass* StaticClass<class AAssaultRifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype_Source_MultiplayerPrototype_AssaultRifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
