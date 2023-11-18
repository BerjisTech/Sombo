// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sombo/Public/LocationManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SOMBO_API UClass* Z_Construct_UClass_ULocationManager();
	SOMBO_API UClass* Z_Construct_UClass_ULocationManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sombo();
// End Cross Module References
	void ULocationManager::StaticRegisterNativesULocationManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocationManager);
	UClass* Z_Construct_UClass_ULocationManager_NoRegister()
	{
		return ULocationManager::StaticClass();
	}
	struct Z_Construct_UClass_ULocationManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocationManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Sombo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LocationManager.h" },
		{ "ModuleRelativePath", "Public/LocationManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocationManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocationManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocationManager_Statics::ClassParams = {
		&ULocationManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULocationManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocationManager()
	{
		if (!Z_Registration_Info_UClass_ULocationManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocationManager.OuterSingleton, Z_Construct_UClass_ULocationManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocationManager.OuterSingleton;
	}
	template<> SOMBO_API UClass* StaticClass<ULocationManager>()
	{
		return ULocationManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocationManager);
	ULocationManager::~ULocationManager() {}
	struct Z_CompiledInDeferFile_FID_Mbogi_Plugins_Sombo_Source_Sombo_Public_LocationManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mbogi_Plugins_Sombo_Source_Sombo_Public_LocationManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULocationManager, ULocationManager::StaticClass, TEXT("ULocationManager"), &Z_Registration_Info_UClass_ULocationManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocationManager), 1586462828U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mbogi_Plugins_Sombo_Source_Sombo_Public_LocationManager_h_1800749426(TEXT("/Script/Sombo"),
		Z_CompiledInDeferFile_FID_Mbogi_Plugins_Sombo_Source_Sombo_Public_LocationManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mbogi_Plugins_Sombo_Source_Sombo_Public_LocationManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
