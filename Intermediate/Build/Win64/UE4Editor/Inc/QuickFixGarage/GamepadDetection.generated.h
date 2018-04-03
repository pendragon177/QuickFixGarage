// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUICKFIXGARAGE_GamepadDetection_generated_h
#error "GamepadDetection.generated.h already included, missing '#pragma once' in GamepadDetection.h"
#endif
#define QUICKFIXGARAGE_GamepadDetection_generated_h

#define QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsGamePadConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGamepadDetection::IsGamePadConnected(); \
		P_NATIVE_END; \
	}


#define QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsGamePadConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGamepadDetection::IsGamePadConnected(); \
		P_NATIVE_END; \
	}


#define QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGamepadDetection(); \
	friend QUICKFIXGARAGE_API class UClass* Z_Construct_UClass_UGamepadDetection(); \
public: \
	DECLARE_CLASS(UGamepadDetection, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/QuickFixGarage"), NO_API) \
	DECLARE_SERIALIZER(UGamepadDetection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGamepadDetection(); \
	friend QUICKFIXGARAGE_API class UClass* Z_Construct_UClass_UGamepadDetection(); \
public: \
	DECLARE_CLASS(UGamepadDetection, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/QuickFixGarage"), NO_API) \
	DECLARE_SERIALIZER(UGamepadDetection) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGamepadDetection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGamepadDetection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGamepadDetection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGamepadDetection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGamepadDetection(UGamepadDetection&&); \
	NO_API UGamepadDetection(const UGamepadDetection&); \
public:


#define QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGamepadDetection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGamepadDetection(UGamepadDetection&&); \
	NO_API UGamepadDetection(const UGamepadDetection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGamepadDetection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGamepadDetection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGamepadDetection)


#define QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_PRIVATE_PROPERTY_OFFSET
#define QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_12_PROLOG
#define QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_PRIVATE_PROPERTY_OFFSET \
	QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_RPC_WRAPPERS \
	QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_INCLASS \
	QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_PRIVATE_PROPERTY_OFFSET \
	QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_INCLASS_NO_PURE_DECLS \
	QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID QuickFixGarage_Source_QuickFixGarage_GamepadDetection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
