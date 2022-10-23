// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERPROTOTYPE_MultiplayerPrototypeCharacter_generated_h
#error "MultiplayerPrototypeCharacter.generated.h already included, missing '#pragma once' in MultiplayerPrototypeCharacter.h"
#endif
#define MULTIPLAYERPROTOTYPE_MultiplayerPrototypeCharacter_generated_h

#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_SPARSE_DATA
#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_RPC_WRAPPERS
#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerPrototypeCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerPrototypeCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerPrototypeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerPrototypeCharacter)


#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMultiplayerPrototypeCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerPrototypeCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerPrototypeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerPrototypeCharacter)


#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiplayerPrototypeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerPrototypeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerPrototypeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerPrototypeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerPrototypeCharacter(AMultiplayerPrototypeCharacter&&); \
	NO_API AMultiplayerPrototypeCharacter(const AMultiplayerPrototypeCharacter&); \
public:


#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerPrototypeCharacter(AMultiplayerPrototypeCharacter&&); \
	NO_API AMultiplayerPrototypeCharacter(const AMultiplayerPrototypeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerPrototypeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerPrototypeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerPrototypeCharacter)


#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMultiplayerPrototypeCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMultiplayerPrototypeCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMultiplayerPrototypeCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMultiplayerPrototypeCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMultiplayerPrototypeCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMultiplayerPrototypeCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMultiplayerPrototypeCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMultiplayerPrototypeCharacter, L_MotionController); }


#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_17_PROLOG
#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_RPC_WRAPPERS \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_INCLASS \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_INCLASS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERPROTOTYPE_API UClass* StaticClass<class AMultiplayerPrototypeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype_Source_MultiplayerPrototype_MultiplayerPrototypeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
