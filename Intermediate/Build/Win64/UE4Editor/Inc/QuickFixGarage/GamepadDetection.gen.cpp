// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GamepadDetection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamepadDetection() {}
// Cross Module References
	QUICKFIXGARAGE_API UClass* Z_Construct_UClass_UGamepadDetection_NoRegister();
	QUICKFIXGARAGE_API UClass* Z_Construct_UClass_UGamepadDetection();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_QuickFixGarage();
	QUICKFIXGARAGE_API UFunction* Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected();
// End Cross Module References
	void UGamepadDetection::StaticRegisterNativesUGamepadDetection()
	{
		UClass* Class = UGamepadDetection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsGamePadConnected", (Native)&UGamepadDetection::execIsGamePadConnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected()
	{
		struct GamepadDetection_eventIsGamePadConnected_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((GamepadDetection_eventIsGamePadConnected_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(GamepadDetection_eventIsGamePadConnected_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "DisplayName", "GamepadConnected" },
				{ "ModuleRelativePath", "GamepadDetection.h" },
				{ "ToolTip", "Check if gamepad is connected at Runtime." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamepadDetection, "IsGamePadConnected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(GamepadDetection_eventIsGamePadConnected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGamepadDetection_NoRegister()
	{
		return UGamepadDetection::StaticClass();
	}
	UClass* Z_Construct_UClass_UGamepadDetection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_QuickFixGarage,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UGamepadDetection_IsGamePadConnected, "IsGamePadConnected" }, // 3197361340
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GamepadDetection.h" },
				{ "ModuleRelativePath", "GamepadDetection.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGamepadDetection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGamepadDetection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGamepadDetection, 2212749789);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGamepadDetection(Z_Construct_UClass_UGamepadDetection, &UGamepadDetection::StaticClass, TEXT("/Script/QuickFixGarage"), TEXT("UGamepadDetection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGamepadDetection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
