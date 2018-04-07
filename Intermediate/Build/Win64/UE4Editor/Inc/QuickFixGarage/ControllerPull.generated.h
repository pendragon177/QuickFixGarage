// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUICKFIXGARAGE_ControllerPull_generated_h
#error "ControllerPull.generated.h already included, missing '#pragma once' in ControllerPull.h"
#endif
#define QUICKFIXGARAGE_ControllerPull_generated_h

#define QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_RPC_WRAPPERS \
	virtual void OnControllerConnectionChange_Implementation(bool Connected, int32 UserID, int32 ControllerID); \
 \
	DECLARE_FUNCTION(execOnControllerConnectionChange) \
	{ \
		P_GET_UBOOL(Z_Param_Connected); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnControllerConnectionChange_Implementation(Z_Param_Connected,Z_Param_UserID,Z_Param_ControllerID); \
		P_NATIVE_END; \
	}


#define QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnControllerConnectionChange_Implementation(bool Connected, int32 UserID, int32 ControllerID); \
 \
	DECLARE_FUNCTION(execOnControllerConnectionChange) \
	{ \
		P_GET_UBOOL(Z_Param_Connected); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ControllerID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnControllerConnectionChange_Implementation(Z_Param_Connected,Z_Param_UserID,Z_Param_ControllerID); \
		P_NATIVE_END; \
	}


#define QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_EVENT_PARMS \
	struct ControllerPull_eventOnControllerConnectionChange_Parms \
	{ \
		bool Connected; \
		int32 UserID; \
		int32 ControllerID; \
	};


#define QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_CALLBACK_WRAPPERS
#define QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAControllerPull(); \
	friend QUICKFIXGARAGE_API class UClass* Z_Construct_UClass_AControllerPull(); \
public: \
	DECLARE_CLASS(AControllerPull, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/QuickFixGarage"), NO_API) \
	DECLARE_SERIALIZER(AControllerPull) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAControllerPull(); \
	friend QUICKFIXGARAGE_API class UClass* Z_Construct_UClass_AControllerPull(); \
public: \
	DECLARE_CLASS(AControllerPull, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/QuickFixGarage"), NO_API) \
	DECLARE_SERIALIZER(AControllerPull) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AControllerPull(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControllerPull) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControllerPull); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControllerPull); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AControllerPull(AControllerPull&&); \
	NO_API AControllerPull(const AControllerPull&); \
public:


#define QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AControllerPull(AControllerPull&&); \
	NO_API AControllerPull(const AControllerPull&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControllerPull); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControllerPull); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AControllerPull)


#define QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_PRIVATE_PROPERTY_OFFSET
#define QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_9_PROLOG \
	QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_EVENT_PARMS


#define QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_PRIVATE_PROPERTY_OFFSET \
	QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_RPC_WRAPPERS \
	QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_CALLBACK_WRAPPERS \
	QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_INCLASS \
	QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_PRIVATE_PROPERTY_OFFSET \
	QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_CALLBACK_WRAPPERS \
	QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_INCLASS_NO_PURE_DECLS \
	QuickFixGarage_Source_QuickFixGarage_ControllerPull_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID QuickFixGarage_Source_QuickFixGarage_ControllerPull_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
