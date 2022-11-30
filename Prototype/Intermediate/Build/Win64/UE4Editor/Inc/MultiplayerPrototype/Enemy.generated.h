// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MULTIPLAYERPROTOTYPE_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define MULTIPLAYERPROTOTYPE_Enemy_generated_h

#define Prototype_Source_MultiplayerPrototype_Enemy_h_12_SPARSE_DATA
#define Prototype_Source_MultiplayerPrototype_Enemy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSensed); \
	DECLARE_FUNCTION(execOnHit);


#define Prototype_Source_MultiplayerPrototype_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSensed); \
	DECLARE_FUNCTION(execOnHit);


#define Prototype_Source_MultiplayerPrototype_Enemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define Prototype_Source_MultiplayerPrototype_Enemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define Prototype_Source_MultiplayerPrototype_Enemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define Prototype_Source_MultiplayerPrototype_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define Prototype_Source_MultiplayerPrototype_Enemy_h_12_PRIVATE_PROPERTY_OFFSET
#define Prototype_Source_MultiplayerPrototype_Enemy_h_9_PROLOG
#define Prototype_Source_MultiplayerPrototype_Enemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_Enemy_h_12_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_Enemy_h_12_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_Enemy_h_12_RPC_WRAPPERS \
	Prototype_Source_MultiplayerPrototype_Enemy_h_12_INCLASS \
	Prototype_Source_MultiplayerPrototype_Enemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Source_MultiplayerPrototype_Enemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_Enemy_h_12_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_Enemy_h_12_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_Enemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_Enemy_h_12_INCLASS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERPROTOTYPE_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype_Source_MultiplayerPrototype_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
