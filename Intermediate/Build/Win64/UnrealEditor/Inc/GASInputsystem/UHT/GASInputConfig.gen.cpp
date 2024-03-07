// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASInputsystem/Public/Input/GASInputConfig.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASInputConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GASINPUTSYSTEM_API UClass* Z_Construct_UClass_UGASInputConfig();
	GASINPUTSYSTEM_API UClass* Z_Construct_UClass_UGASInputConfig_NoRegister();
	GASINPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGASInputAction();
	UPackage* Z_Construct_UPackage__Script_GASInputsystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GASInputAction;
class UScriptStruct* FGASInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GASInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GASInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGASInputAction, (UObject*)Z_Construct_UPackage__Script_GASInputsystem(), TEXT("GASInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_GASInputAction.OuterSingleton;
}
template<> GASINPUTSYSTEM_API UScriptStruct* StaticStruct<FGASInputAction>()
{
	return FGASInputAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGASInputAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_bUseMultipleInputTags_MetaData[];
#endif
		static void NewProp_m_bUseMultipleInputTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bUseMultipleInputTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_inputTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_inputTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_inputTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_inputTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_inputTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGASInputAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/GASInputConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGASInputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGASInputAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_pInputAction_MetaData[] = {
		{ "Category", "GAS Input Action" },
		{ "DisplayName", "Input Action" },
		{ "ModuleRelativePath", "Public/Input/GASInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_pInputAction = { "m_pInputAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGASInputAction, m_pInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_pInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_pInputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_bUseMultipleInputTags_MetaData[] = {
		{ "Category", "GAS Input Action" },
		{ "DisplayName", "Use Multiple Input Tags" },
		{ "ModuleRelativePath", "Public/Input/GASInputConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_bUseMultipleInputTags_SetBit(void* Obj)
	{
		((FGASInputAction*)Obj)->m_bUseMultipleInputTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_bUseMultipleInputTags = { "m_bUseMultipleInputTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGASInputAction), &Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_bUseMultipleInputTags_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_bUseMultipleInputTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_bUseMultipleInputTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_inputTag_MetaData[] = {
		{ "Category", "GAS Input Action" },
		{ "DisplayName", "Input Tag" },
		{ "EditCondition", "!m_bUseMultipleInputTags" },
		{ "ModuleRelativePath", "Public/Input/GASInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_inputTag = { "m_inputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGASInputAction, m_inputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_inputTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_inputTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_inputTags_Inner = { "m_inputTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_inputTags_MetaData[] = {
		{ "Category", "GAS Input Action" },
		{ "DisplayName", "Input Tag" },
		{ "EditCondition", "m_bUseMultipleInputTags" },
		{ "ModuleRelativePath", "Public/Input/GASInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_inputTags = { "m_inputTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGASInputAction, m_inputTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_inputTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_inputTags_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGASInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_pInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_bUseMultipleInputTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_inputTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_inputTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGASInputAction_Statics::NewProp_m_inputTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGASInputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASInputsystem,
		nullptr,
		&NewStructOps,
		"GASInputAction",
		sizeof(FGASInputAction),
		alignof(FGASInputAction),
		Z_Construct_UScriptStruct_FGASInputAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASInputAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGASInputAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASInputAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGASInputAction()
	{
		if (!Z_Registration_Info_UScriptStruct_GASInputAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GASInputAction.InnerSingleton, Z_Construct_UScriptStruct_FGASInputAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GASInputAction.InnerSingleton;
	}
	void UGASInputConfig::StaticRegisterNativesUGASInputConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASInputConfig);
	UClass* Z_Construct_UClass_UGASInputConfig_NoRegister()
	{
		return UGASInputConfig::StaticClass();
	}
	struct Z_Construct_UClass_UGASInputConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_nativeInputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_nativeInputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_nativeInputActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_abilityInputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_abilityInputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_abilityInputActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASInputConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GASInputsystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASInputConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Input/GASInputConfig.h" },
		{ "ModuleRelativePath", "Public/Input/GASInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASInputConfig_Statics::NewProp_m_nativeInputActions_Inner = { "m_nativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGASInputAction, METADATA_PARAMS(nullptr, 0) }; // 4092555089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASInputConfig_Statics::NewProp_m_nativeInputActions_MetaData[] = {
		{ "Category", "GAS Input" },
		{ "DisplayName", "Native Input Actions" },
		{ "ModuleRelativePath", "Public/Input/GASInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGASInputConfig_Statics::NewProp_m_nativeInputActions = { "m_nativeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGASInputConfig, m_nativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGASInputConfig_Statics::NewProp_m_nativeInputActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGASInputConfig_Statics::NewProp_m_nativeInputActions_MetaData)) }; // 4092555089
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASInputConfig_Statics::NewProp_m_abilityInputActions_Inner = { "m_abilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGASInputAction, METADATA_PARAMS(nullptr, 0) }; // 4092555089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASInputConfig_Statics::NewProp_m_abilityInputActions_MetaData[] = {
		{ "Category", "GAS Input" },
		{ "DisplayName", "Ability Input Actions" },
		{ "ModuleRelativePath", "Public/Input/GASInputConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGASInputConfig_Statics::NewProp_m_abilityInputActions = { "m_abilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGASInputConfig, m_abilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGASInputConfig_Statics::NewProp_m_abilityInputActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGASInputConfig_Statics::NewProp_m_abilityInputActions_MetaData)) }; // 4092555089
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGASInputConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASInputConfig_Statics::NewProp_m_nativeInputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASInputConfig_Statics::NewProp_m_nativeInputActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASInputConfig_Statics::NewProp_m_abilityInputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASInputConfig_Statics::NewProp_m_abilityInputActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASInputConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASInputConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASInputConfig_Statics::ClassParams = {
		&UGASInputConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGASInputConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGASInputConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGASInputConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGASInputConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGASInputConfig()
	{
		if (!Z_Registration_Info_UClass_UGASInputConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASInputConfig.OuterSingleton, Z_Construct_UClass_UGASInputConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGASInputConfig.OuterSingleton;
	}
	template<> GASINPUTSYSTEM_API UClass* StaticClass<UGASInputConfig>()
	{
		return UGASInputConfig::StaticClass();
	}
	UGASInputConfig::UGASInputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASInputConfig);
	UGASInputConfig::~UGASInputConfig() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_Input_GASInputConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_Input_GASInputConfig_h_Statics::ScriptStructInfo[] = {
		{ FGASInputAction::StaticStruct, Z_Construct_UScriptStruct_FGASInputAction_Statics::NewStructOps, TEXT("GASInputAction"), &Z_Registration_Info_UScriptStruct_GASInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGASInputAction), 4092555089U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_Input_GASInputConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGASInputConfig, UGASInputConfig::StaticClass, TEXT("UGASInputConfig"), &Z_Registration_Info_UClass_UGASInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASInputConfig), 550899862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_Input_GASInputConfig_h_986577110(TEXT("/Script/GASInputsystem"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_Input_GASInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_Input_GASInputConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_Input_GASInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_Input_GASInputConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
