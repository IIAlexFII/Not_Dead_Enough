// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MULTIPLAYERPROTOTYPE_MultiplayerPrototypeProjectile_generated_h
#error "MultiplayerPrototypeProjectile.generated.h already included, missing '#pragma once' in MultiplayerPrototypeProjectile.h"
#endif
#define MULTIPLAYERPROTOTYPE_MultiplayerPrototypeProjectile_generated_h

#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_SPARSE_DATA
#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerPrototypeProjectile(); \
	friend struct Z_Construct_UClass_AMultiplayerPrototypeProjectile_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerPrototypeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerPrototypeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMultiplayerPrototypeProjectile(); \
	friend struct Z_Construct_UClass_AMultiplayerPrototypeProjectile_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerPrototypeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerPrototypeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiplayerPrototypeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerPrototypeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerPrototypeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerPrototypeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerPrototypeProjectile(AMultiplayerPrototypeProjectile&&); \
	NO_API AMultiplayerPrototypeProjectile(const AMultiplayerPrototypeProjectile&); \
public:


#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerPrototypeProjectile(AMultiplayerPrototypeProjectile&&); \
	NO_API AMultiplayerPrototypeProjectile(const AMultiplayerPrototypeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerPrototypeProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerPrototypeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerPrototypeProjectile)


#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMultiplayerPrototypeProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMultiplayerPrototypeProjectile, ProjectileMovement); }


#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_12_PROLOG
#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_RPC_WRAPPERS \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_INCLASS \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERPROTOTYPE_API UClass* StaticClass<class AMultiplayerPrototypeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
