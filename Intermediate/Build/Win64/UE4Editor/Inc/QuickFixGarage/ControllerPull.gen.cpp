// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ControllerPull.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControllerPull() {}
// Cross Module References
	QUICKFIXGARAGE_API UClass* Z_Construct_UClass_AControllerPull_NoRegister();
	QUICKFIXGARAGE_API UClass* Z_Construct_UClass_AControllerPull();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_QuickFixGarage();
	QUICKFIXGARAGE_API UFunction* Z_Construct_UFunction_AControllerPull_OnControllerConnectionChange();
// End Cross Module References
	static FName NAME_AControllerPull_OnControllerConnectionChange = FName(TEXT("OnControllerConnectionChange"));
	void AControllerPull::OnControllerConnectionChange(bool Connected, int32 UserID, int32 ControllerID)
	{
		ControllerPull_eventOnControllerConnectionChange_Parms Parms;
		Parms.Connected=Connected ? true : false;
		Parms.UserID=UserID;
		Parms.ControllerID=ControllerID;
		ProcessEvent(FindFunctionChecked(NAME_AControllerPull_OnControllerConnectionChange),&Parms);
	}
	void AControllerPull::StaticRegisterNativesAControllerPull()
	{
		UClass* Class = AControllerPull::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnControllerConnectionChange", (Native)&AControllerPull::execOnControllerConnectionChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AControllerPull_OnControllerConnectionChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerID = { UE4CodeGen_Private::EPropertyClass::Int, "ControllerID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ControllerPull_eventOnControllerConnectionChange_Parms, ControllerID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserID = { UE4CodeGen_Private::EPropertyClass::Int, "UserID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ControllerPull_eventOnControllerConnectionChange_Parms, UserID), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Connected_SetBit = [](void* Obj){ ((ControllerPull_eventOnControllerConnectionChange_Parms*)Obj)->Connected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Connected = { UE4CodeGen_Private::EPropertyClass::Bool, "Connected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ControllerPull_eventOnControllerConnectionChange_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Connected_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControllerID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Connected,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "ControllerPull.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AControllerPull, "OnControllerConnectionChange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(ControllerPull_eventOnControllerConnectionChange_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AControllerPull_NoRegister()
	{
		return AControllerPull::StaticClass();
	}
	UClass* Z_Construct_UClass_AControllerPull()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_QuickFixGarage,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AControllerPull_OnControllerConnectionChange, "OnControllerConnectionChange" }, // 3912919306
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ControllerPull.h" },
				{ "ModuleRelativePath", "ControllerPull.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AControllerPull>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AControllerPull::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AControllerPull, 1699415110);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControllerPull(Z_Construct_UClass_AControllerPull, &AControllerPull::StaticClass, TEXT("/Script/QuickFixGarage"), TEXT("AControllerPull"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControllerPull);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
