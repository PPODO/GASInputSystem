// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASInputsystem/Public/GAS/AbilityTagRelationShipMapping.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTagRelationShipMapping() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GASINPUTSYSTEM_API UClass* Z_Construct_UClass_UGASAbilityTagRelationShipMapping();
	GASINPUTSYSTEM_API UClass* Z_Construct_UClass_UGASAbilityTagRelationShipMapping_NoRegister();
	GASINPUTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGASAbilityTagRelationship();
	UPackage* Z_Construct_UPackage__Script_GASInputsystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GASAbilityTagRelationship;
class UScriptStruct* FGASAbilityTagRelationship::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GASAbilityTagRelationship.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GASAbilityTagRelationship.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGASAbilityTagRelationship, (UObject*)Z_Construct_UPackage__Script_GASInputsystem(), TEXT("GASAbilityTagRelationship"));
	}
	return Z_Registration_Info_UScriptStruct_GASAbilityTagRelationship.OuterSingleton;
}
template<> GASINPUTSYSTEM_API UScriptStruct* StaticStruct<FGASAbilityTagRelationship>()
{
	return FGASAbilityTagRelationship::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_abilityTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_abilityTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_abilityTagsToBlock_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_abilityTagsToBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_abilityTagsToCancel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_abilityTagsToCancel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_activationRequiredTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_activationRequiredTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_activationBlockedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_activationBlockedTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GAS/AbilityTagRelationShipMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGASAbilityTagRelationship>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTag_MetaData[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Ability Tag" },
		{ "ModuleRelativePath", "Public/GAS/AbilityTagRelationShipMapping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTag = { "m_abilityTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGASAbilityTagRelationship, m_abilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTagsToBlock_MetaData[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Ability Tags To Block" },
		{ "ModuleRelativePath", "Public/GAS/AbilityTagRelationShipMapping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTagsToBlock = { "m_abilityTagsToBlock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGASAbilityTagRelationship, m_abilityTagsToBlock), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTagsToBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTagsToBlock_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTagsToCancel_MetaData[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Ability Tags To Cancel" },
		{ "ModuleRelativePath", "Public/GAS/AbilityTagRelationShipMapping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTagsToCancel = { "m_abilityTagsToCancel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGASAbilityTagRelationship, m_abilityTagsToCancel), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTagsToCancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTagsToCancel_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_activationRequiredTags_MetaData[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Activation Required Tags" },
		{ "ModuleRelativePath", "Public/GAS/AbilityTagRelationShipMapping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_activationRequiredTags = { "m_activationRequiredTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGASAbilityTagRelationship, m_activationRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_activationRequiredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_activationRequiredTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_activationBlockedTags_MetaData[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Activation Blocked Tags" },
		{ "ModuleRelativePath", "Public/GAS/AbilityTagRelationShipMapping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_activationBlockedTags = { "m_activationBlockedTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGASAbilityTagRelationship, m_activationBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_activationBlockedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_activationBlockedTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTagsToBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_abilityTagsToCancel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_activationRequiredTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewProp_m_activationBlockedTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASInputsystem,
		nullptr,
		&NewStructOps,
		"GASAbilityTagRelationship",
		sizeof(FGASAbilityTagRelationship),
		alignof(FGASAbilityTagRelationship),
		Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGASAbilityTagRelationship()
	{
		if (!Z_Registration_Info_UScriptStruct_GASAbilityTagRelationship.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GASAbilityTagRelationship.InnerSingleton, Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GASAbilityTagRelationship.InnerSingleton;
	}
	void UGASAbilityTagRelationShipMapping::StaticRegisterNativesUGASAbilityTagRelationShipMapping()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASAbilityTagRelationShipMapping);
	UClass* Z_Construct_UClass_UGASAbilityTagRelationShipMapping_NoRegister()
	{
		return UGASAbilityTagRelationShipMapping::StaticClass();
	}
	struct Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_abilityTagRelationships_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_abilityTagRelationships_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_abilityTagRelationships;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GASInputsystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GAS/AbilityTagRelationShipMapping.h" },
		{ "ModuleRelativePath", "Public/GAS/AbilityTagRelationShipMapping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::NewProp_m_abilityTagRelationships_Inner = { "m_abilityTagRelationships", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGASAbilityTagRelationship, METADATA_PARAMS(nullptr, 0) }; // 572011746
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::NewProp_m_abilityTagRelationships_MetaData[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "Ability Tag Relationship" },
		{ "ModuleRelativePath", "Public/GAS/AbilityTagRelationShipMapping.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::NewProp_m_abilityTagRelationships = { "m_abilityTagRelationships", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGASAbilityTagRelationShipMapping, m_abilityTagRelationships), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::NewProp_m_abilityTagRelationships_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::NewProp_m_abilityTagRelationships_MetaData)) }; // 572011746
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::NewProp_m_abilityTagRelationships_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::NewProp_m_abilityTagRelationships,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASAbilityTagRelationShipMapping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::ClassParams = {
		&UGASAbilityTagRelationShipMapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGASAbilityTagRelationShipMapping()
	{
		if (!Z_Registration_Info_UClass_UGASAbilityTagRelationShipMapping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASAbilityTagRelationShipMapping.OuterSingleton, Z_Construct_UClass_UGASAbilityTagRelationShipMapping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGASAbilityTagRelationShipMapping.OuterSingleton;
	}
	template<> GASINPUTSYSTEM_API UClass* StaticClass<UGASAbilityTagRelationShipMapping>()
	{
		return UGASAbilityTagRelationShipMapping::StaticClass();
	}
	UGASAbilityTagRelationShipMapping::UGASAbilityTagRelationShipMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASAbilityTagRelationShipMapping);
	UGASAbilityTagRelationShipMapping::~UGASAbilityTagRelationShipMapping() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_AbilityTagRelationShipMapping_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_AbilityTagRelationShipMapping_h_Statics::ScriptStructInfo[] = {
		{ FGASAbilityTagRelationship::StaticStruct, Z_Construct_UScriptStruct_FGASAbilityTagRelationship_Statics::NewStructOps, TEXT("GASAbilityTagRelationship"), &Z_Registration_Info_UScriptStruct_GASAbilityTagRelationship, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGASAbilityTagRelationship), 572011746U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_AbilityTagRelationShipMapping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGASAbilityTagRelationShipMapping, UGASAbilityTagRelationShipMapping::StaticClass, TEXT("UGASAbilityTagRelationShipMapping"), &Z_Registration_Info_UClass_UGASAbilityTagRelationShipMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASAbilityTagRelationShipMapping), 4098849583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_AbilityTagRelationShipMapping_h_1879983658(TEXT("/Script/GASInputsystem"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_AbilityTagRelationShipMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_AbilityTagRelationShipMapping_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_AbilityTagRelationShipMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_AbilityTagRelationShipMapping_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
