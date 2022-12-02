// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERPROTOTYPE_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define MULTIPLAYERPROTOTYPE_WeaponBase_generated_h

#define Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_SPARSE_DATA
#define Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWeaponID);


#define Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWeaponID);


#define Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(AWeaponBase, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__AttackAnimation() { return STRUCT_OFFSET(AWeaponBase, AttackAnimation); } \
	FORCEINLINE static uint32 __PPO__WeaponName() { return STRUCT_OFFSET(AWeaponBase, WeaponName); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AWeaponBase, Damage); } \
	FORCEINLINE static uint32 __PPO__WeaponCost() { return STRUCT_OFFSET(AWeaponBase, WeaponCost); } \
	FORCEINLINE static uint32 __PPO__WeaponID() { return STRUCT_OFFSET(AWeaponBase, WeaponID); }


#define Prototype_Source_MultiplayerPrototype_WeaponBase_h_19_PROLOG
#define Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_RPC_WRAPPERS \
	Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_INCLASS \
	Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_INCLASS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_WeaponBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERPROTOTYPE_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype_Source_MultiplayerPrototype_WeaponBase_h


#define FOREACH_ENUM_EWEAPONID(op) \
	op(Pistol) \
	op(AssaultRifle) \
	op(Axe) \
	op(BaseballBat) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
