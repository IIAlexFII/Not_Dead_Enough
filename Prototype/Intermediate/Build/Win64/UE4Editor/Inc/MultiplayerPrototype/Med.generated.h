// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERPROTOTYPE_Med_generated_h
#error "Med.generated.h already included, missing '#pragma once' in Med.h"
#endif
#define MULTIPLAYERPROTOTYPE_Med_generated_h

#define Prototype_Source_MultiplayerPrototype_Med_h_12_SPARSE_DATA
#define Prototype_Source_MultiplayerPrototype_Med_h_12_RPC_WRAPPERS
#define Prototype_Source_MultiplayerPrototype_Med_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Prototype_Source_MultiplayerPrototype_Med_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMed(); \
	friend struct Z_Construct_UClass_AMed_Statics; \
public: \
	DECLARE_CLASS(AMed, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(AMed)


#define Prototype_Source_MultiplayerPrototype_Med_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMed(); \
	friend struct Z_Construct_UClass_AMed_Statics; \
public: \
	DECLARE_CLASS(AMed, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(AMed)


#define Prototype_Source_MultiplayerPrototype_Med_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMed(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMed) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMed); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMed(AMed&&); \
	NO_API AMed(const AMed&); \
public:


#define Prototype_Source_MultiplayerPrototype_Med_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMed(AMed&&); \
	NO_API AMed(const AMed&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMed); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMed)


#define Prototype_Source_MultiplayerPrototype_Med_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MedKitMesh() { return STRUCT_OFFSET(AMed, MedKitMesh); } \
	FORCEINLINE static uint32 __PPO__HealAnimation() { return STRUCT_OFFSET(AMed, HealAnimation); } \
	FORCEINLINE static uint32 __PPO__MedKitCost() { return STRUCT_OFFSET(AMed, MedKitCost); } \
	FORCEINLINE static uint32 __PPO__Heals() { return STRUCT_OFFSET(AMed, Heals); }


#define Prototype_Source_MultiplayerPrototype_Med_h_9_PROLOG
#define Prototype_Source_MultiplayerPrototype_Med_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_Med_h_12_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_Med_h_12_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_Med_h_12_RPC_WRAPPERS \
	Prototype_Source_MultiplayerPrototype_Med_h_12_INCLASS \
	Prototype_Source_MultiplayerPrototype_Med_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Source_MultiplayerPrototype_Med_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_Med_h_12_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_Med_h_12_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_Med_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_Med_h_12_INCLASS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_Med_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERPROTOTYPE_API UClass* StaticClass<class AMed>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype_Source_MultiplayerPrototype_Med_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
