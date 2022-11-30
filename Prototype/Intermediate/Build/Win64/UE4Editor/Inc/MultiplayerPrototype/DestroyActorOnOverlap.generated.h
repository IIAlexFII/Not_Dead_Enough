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
struct FHitResult;
#ifdef MULTIPLAYERPROTOTYPE_DestroyActorOnOverlap_generated_h
#error "DestroyActorOnOverlap.generated.h already included, missing '#pragma once' in DestroyActorOnOverlap.h"
#endif
#define MULTIPLAYERPROTOTYPE_DestroyActorOnOverlap_generated_h

#define Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_SPARSE_DATA
#define Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_RPC_WRAPPERS \
	virtual void Interact_Implementation(AActor* whoInteracted); \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(AActor* whoInteracted); \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_EVENT_PARMS \
	struct DestroyActorOnOverlap_eventInteract_Parms \
	{ \
		AActor* whoInteracted; \
	};


#define Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_CALLBACK_WRAPPERS
#define Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestroyActorOnOverlap(); \
	friend struct Z_Construct_UClass_ADestroyActorOnOverlap_Statics; \
public: \
	DECLARE_CLASS(ADestroyActorOnOverlap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(ADestroyActorOnOverlap) \
	virtual UObject* _getUObject() const override { return const_cast<ADestroyActorOnOverlap*>(this); }


#define Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_INCLASS \
private: \
	static void StaticRegisterNativesADestroyActorOnOverlap(); \
	friend struct Z_Construct_UClass_ADestroyActorOnOverlap_Statics; \
public: \
	DECLARE_CLASS(ADestroyActorOnOverlap, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), NO_API) \
	DECLARE_SERIALIZER(ADestroyActorOnOverlap) \
	virtual UObject* _getUObject() const override { return const_cast<ADestroyActorOnOverlap*>(this); }


#define Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADestroyActorOnOverlap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADestroyActorOnOverlap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestroyActorOnOverlap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestroyActorOnOverlap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADestroyActorOnOverlap(ADestroyActorOnOverlap&&); \
	NO_API ADestroyActorOnOverlap(const ADestroyActorOnOverlap&); \
public:


#define Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADestroyActorOnOverlap(ADestroyActorOnOverlap&&); \
	NO_API ADestroyActorOnOverlap(const ADestroyActorOnOverlap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestroyActorOnOverlap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestroyActorOnOverlap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADestroyActorOnOverlap)


#define Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_PRIVATE_PROPERTY_OFFSET
#define Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_11_PROLOG \
	Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_EVENT_PARMS


#define Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_RPC_WRAPPERS \
	Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_CALLBACK_WRAPPERS \
	Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_INCLASS \
	Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_PRIVATE_PROPERTY_OFFSET \
	Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_CALLBACK_WRAPPERS \
	Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_INCLASS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERPROTOTYPE_API UClass* StaticClass<class ADestroyActorOnOverlap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype_Source_MultiplayerPrototype_DestroyActorOnOverlap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
