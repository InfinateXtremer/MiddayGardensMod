// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WebSocketNetDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSocketNetDriver() {}
// Cross Module References
	HTML5NETWORKING_API UClass* Z_Construct_UClass_UWebSocketNetDriver_NoRegister();
	HTML5NETWORKING_API UClass* Z_Construct_UClass_UWebSocketNetDriver();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
	UPackage* Z_Construct_UPackage__Script_HTML5Networking();
// End Cross Module References
	void UWebSocketNetDriver::StaticRegisterNativesUWebSocketNetDriver()
	{
	}
	UClass* Z_Construct_UClass_UWebSocketNetDriver_NoRegister()
	{
		return UWebSocketNetDriver::StaticClass();
	}
	UClass* Z_Construct_UClass_UWebSocketNetDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNetDriver,
				(UObject* (*)())Z_Construct_UPackage__Script_HTML5Networking,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "WebSocketNetDriver.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/WebSocketNetDriver.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WebSocketPort_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "WebSocketNetDriver" },
				{ "ModuleRelativePath", "Public/WebSocketNetDriver.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_WebSocketPort = { UE4CodeGen_Private::EPropertyClass::Int, "WebSocketPort", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UWebSocketNetDriver, WebSocketPort), METADATA_PARAMS(NewProp_WebSocketPort_MetaData, ARRAY_COUNT(NewProp_WebSocketPort_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WebSocketPort,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWebSocketNetDriver>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWebSocketNetDriver::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0010008Cu,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketNetDriver, 1650014689);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketNetDriver(Z_Construct_UClass_UWebSocketNetDriver, &UWebSocketNetDriver::StaticClass, TEXT("/Script/HTML5Networking"), TEXT("UWebSocketNetDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketNetDriver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
