// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERPROTOTYPE_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define MULTIPLAYERPROTOTYPE_InteractInterface_generated_h

#define Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_SPARSE_DATA
#define Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_RPC_WRAPPERS
#define Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MULTIPLAYERPROTOTYPE_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MULTIPLAYERPROTOTYPE_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MULTIPLAYERPROTOTYPE_API UInteractInterface(UInteractInterface&&); \
	MULTIPLAYERPROTOTYPE_API UInteractInterface(const UInteractInterface&); \
public:


#define Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MULTIPLAYERPROTOTYPE_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MULTIPLAYERPROTOTYPE_API UInteractInterface(UInteractInterface&&); \
	MULTIPLAYERPROTOTYPE_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MULTIPLAYERPROTOTYPE_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface)


#define Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MultiplayerPrototype"), MULTIPLAYERPROTOTYPE_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Prototype_Source_MultiplayerPrototype_InteractInterface_h_10_PROLOG
#define Prototype_Source_MultiplayerPrototype_InteractInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_RPC_WRAPPERS \
	Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Source_MultiplayerPrototype_InteractInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_SPARSE_DATA \
	Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype_Source_MultiplayerPrototype_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERPROTOTYPE_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype_Source_MultiplayerPrototype_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
