// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASInputsystem/Public/GAS/GASAbilitySystemInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASAbilitySystemInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GASINPUTSYSTEM_API UClass* Z_Construct_UClass_UGASAbilitySystemInterface();
	GASINPUTSYSTEM_API UClass* Z_Construct_UClass_UGASAbilitySystemInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASInputsystem();
// End Cross Module References
	void UGASAbilitySystemInterface::StaticRegisterNativesUGASAbilitySystemInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASAbilitySystemInterface);
	UClass* Z_Construct_UClass_UGASAbilitySystemInterface_NoRegister()
	{
		return UGASAbilitySystemInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGASAbilitySystemInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASAbilitySystemInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GASInputsystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAbilitySystemInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GASAbilitySystemInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASAbilitySystemInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGASAbilitySystemInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASAbilitySystemInterface_Statics::ClassParams = {
		&UGASAbilitySystemInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGASAbilitySystemInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGASAbilitySystemInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGASAbilitySystemInterface()
	{
		if (!Z_Registration_Info_UClass_UGASAbilitySystemInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASAbilitySystemInterface.OuterSingleton, Z_Construct_UClass_UGASAbilitySystemInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGASAbilitySystemInterface.OuterSingleton;
	}
	template<> GASINPUTSYSTEM_API UClass* StaticClass<UGASAbilitySystemInterface>()
	{
		return UGASAbilitySystemInterface::StaticClass();
	}
	UGASAbilitySystemInterface::UGASAbilitySystemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASAbilitySystemInterface);
	UGASAbilitySystemInterface::~UGASAbilitySystemInterface() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASAbilitySystemInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASAbilitySystemInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGASAbilitySystemInterface, UGASAbilitySystemInterface::StaticClass, TEXT("UGASAbilitySystemInterface"), &Z_Registration_Info_UClass_UGASAbilitySystemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASAbilitySystemInterface), 1478266057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASAbilitySystemInterface_h_3612930556(TEXT("/Script/GASInputsystem"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASAbilitySystemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASAbilitySystemInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
