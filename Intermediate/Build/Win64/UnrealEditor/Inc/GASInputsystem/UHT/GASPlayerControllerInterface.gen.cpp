// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASInputsystem/Public/Player/GASPlayerControllerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASPlayerControllerInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GASINPUTSYSTEM_API UClass* Z_Construct_UClass_UGASPlayerControllerInterface();
	GASINPUTSYSTEM_API UClass* Z_Construct_UClass_UGASPlayerControllerInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASInputsystem();
// End Cross Module References
	void UGASPlayerControllerInterface::StaticRegisterNativesUGASPlayerControllerInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASPlayerControllerInterface);
	UClass* Z_Construct_UClass_UGASPlayerControllerInterface_NoRegister()
	{
		return UGASPlayerControllerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGASPlayerControllerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASPlayerControllerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GASInputsystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASPlayerControllerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GASPlayerControllerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASPlayerControllerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGASPlayerControllerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASPlayerControllerInterface_Statics::ClassParams = {
		&UGASPlayerControllerInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGASPlayerControllerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGASPlayerControllerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGASPlayerControllerInterface()
	{
		if (!Z_Registration_Info_UClass_UGASPlayerControllerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASPlayerControllerInterface.OuterSingleton, Z_Construct_UClass_UGASPlayerControllerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGASPlayerControllerInterface.OuterSingleton;
	}
	template<> GASINPUTSYSTEM_API UClass* StaticClass<UGASPlayerControllerInterface>()
	{
		return UGASPlayerControllerInterface::StaticClass();
	}
	UGASPlayerControllerInterface::UGASPlayerControllerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASPlayerControllerInterface);
	UGASPlayerControllerInterface::~UGASPlayerControllerInterface() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_Player_GASPlayerControllerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_Player_GASPlayerControllerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGASPlayerControllerInterface, UGASPlayerControllerInterface::StaticClass, TEXT("UGASPlayerControllerInterface"), &Z_Registration_Info_UClass_UGASPlayerControllerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASPlayerControllerInterface), 2117269259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_Player_GASPlayerControllerInterface_h_792964765(TEXT("/Script/GASInputsystem"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_Player_GASPlayerControllerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_Player_GASPlayerControllerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
