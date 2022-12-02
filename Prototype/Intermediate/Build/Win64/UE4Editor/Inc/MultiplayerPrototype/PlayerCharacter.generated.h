// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponBase;
#ifdef MULTIPLAYERPROTOTYPE_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define MULTIPLAYERPROTOTYPE_PlayerCharacter_generated_h

#define Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_SPARSE_DATA
#define Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_RPC_WRAPPERS \
	virtual bool ServerSwitchWeapon_Validate(AWeaponBase* ); \
	virtual void ServerSwitchWeapon_Implementation(AWeaponBase* NewWeapon); \
	virtual void Interact_Implementation(); \
 \
	DECLARE_FUNCTION(execServerSwitchWeapon); \
	DECLARE_FUNCTION(execOnRep_AttachWeapon); \
	DECLARE_FUNCTION(execInteract);


#define Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(); \
 \
	DECLARE_FUNCTION(execServerSwitchWeapon); \
	DECLARE_FUNCTION(execOnRep_AttachWeapon); \
	DECLARE_FUNCTION(execInteract);


#define Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_EVENT_PARMS \
	struct PlayerCharacter_eventServerSwitchWeapon_Parms \
	{ \
		AWeaponBase* NewWeapon; \
	};


#define Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_CALLBACK_WRAPPERS
#define Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeapon=NETFIELD_REP_START, \
		WeaponArray, \
		NETFIELD_REP_END=WeaponArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeapon=NETFIELD_REP_START, \
		WeaponArray, \
		NETFIELD_REP_END=WeaponArray	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WalkingSpeed() { return STRUCT_OFFSET(APlayerCharacter, WalkingSpeed); } \
	FORCEINLINE static uint32 __PPO__RunningSpeed() { return STRUCT_OFFSET(APlayerCharacter, RunningSpeed); }


#define Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_11_PROLOG \
	Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_EVENT_PARMS


#define Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_RPC_WRAPPERS \
	Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_CALLBACK_WRAPPERS \
	Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_INCLASS \
	Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_CALLBACK_WRAPPERS \
	Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_PlayerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERPROTOTYPE_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype_Source_MultiplayerPrototype_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
