// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASInputsystem/Public/GAS/GASGameplayAbilityInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASGameplayAbilityInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GASINPUTSYSTEM_API UClass* Z_Construct_UClass_UGASGameplayAbilityInterface();
	GASINPUTSYSTEM_API UClass* Z_Construct_UClass_UGASGameplayAbilityInterface_NoRegister();
	GASINPUTSYSTEM_API UEnum* Z_Construct_UEnum_GASInputsystem_EGASAbilityActivationPolicy();
	UPackage* Z_Construct_UPackage__Script_GASInputsystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGASAbilityActivationPolicy;
	static UEnum* EGASAbilityActivationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGASAbilityActivationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGASAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASInputsystem_EGASAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_GASInputsystem(), TEXT("EGASAbilityActivationPolicy"));
		}
		return Z_Registration_Info_UEnum_EGASAbilityActivationPolicy.OuterSingleton;
	}
	template<> GASINPUTSYSTEM_API UEnum* StaticEnum<EGASAbilityActivationPolicy>()
	{
		return EGASAbilityActivationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_GASInputsystem_EGASAbilityActivationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GASInputsystem_EGASAbilityActivationPolicy_Statics::Enumerators[] = {
		{ "EGASAbilityActivationPolicy::E_OnInputTriggered", (int64)EGASAbilityActivationPolicy::E_OnInputTriggered },
		{ "EGASAbilityActivationPolicy::E_WhileInputActive", (int64)EGASAbilityActivationPolicy::E_WhileInputActive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GASInputsystem_EGASAbilityActivationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_OnInputTriggered.Name", "EGASAbilityActivationPolicy::E_OnInputTriggered" },
		{ "E_WhileInputActive.Name", "EGASAbilityActivationPolicy::E_WhileInputActive" },
		{ "ModuleRelativePath", "Public/GAS/GASGameplayAbilityInterface.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASInputsystem_EGASAbilityActivationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GASInputsystem,
		nullptr,
		"EGASAbilityActivationPolicy",
		"EGASAbilityActivationPolicy",
		Z_Construct_UEnum_GASInputsystem_EGASAbilityActivationPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GASInputsystem_EGASAbilityActivationPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GASInputsystem_EGASAbilityActivationPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GASInputsystem_EGASAbilityActivationPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GASInputsystem_EGASAbilityActivationPolicy()
	{
		if (!Z_Registration_Info_UEnum_EGASAbilityActivationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGASAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_GASInputsystem_EGASAbilityActivationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGASAbilityActivationPolicy.InnerSingleton;
	}
	struct GASGameplayAbilityInterface_eventAbilityActivationCondition_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GASGameplayAbilityInterface_eventAbilityActivationCondition_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool IGASGameplayAbilityInterface::AbilityActivationCondition()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AbilityActivationCondition instead.");
		GASGameplayAbilityInterface_eventAbilityActivationCondition_Parms Parms;
		return Parms.ReturnValue;
	}
	void UGASGameplayAbilityInterface::StaticRegisterNativesUGASGameplayAbilityInterface()
	{
	}
	struct Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GASGameplayAbilityInterface_eventAbilityActivationCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GASGameplayAbilityInterface_eventAbilityActivationCondition_Parms), &Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GASGameplayAbilityInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASGameplayAbilityInterface, nullptr, "AbilityActivationCondition", nullptr, nullptr, sizeof(GASGameplayAbilityInterface_eventAbilityActivationCondition_Parms), Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASGameplayAbilityInterface);
	UClass* Z_Construct_UClass_UGASGameplayAbilityInterface_NoRegister()
	{
		return UGASGameplayAbilityInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGASGameplayAbilityInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASGameplayAbilityInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GASInputsystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGASGameplayAbilityInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGASGameplayAbilityInterface_AbilityActivationCondition, "AbilityActivationCondition" }, // 1837580643
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASGameplayAbilityInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/GASGameplayAbilityInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASGameplayAbilityInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGASGameplayAbilityInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASGameplayAbilityInterface_Statics::ClassParams = {
		&UGASGameplayAbilityInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGASGameplayAbilityInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGASGameplayAbilityInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGASGameplayAbilityInterface()
	{
		if (!Z_Registration_Info_UClass_UGASGameplayAbilityInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASGameplayAbilityInterface.OuterSingleton, Z_Construct_UClass_UGASGameplayAbilityInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGASGameplayAbilityInterface.OuterSingleton;
	}
	template<> GASINPUTSYSTEM_API UClass* StaticClass<UGASGameplayAbilityInterface>()
	{
		return UGASGameplayAbilityInterface::StaticClass();
	}
	UGASGameplayAbilityInterface::UGASGameplayAbilityInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASGameplayAbilityInterface);
	UGASGameplayAbilityInterface::~UGASGameplayAbilityInterface() {}
	static FName NAME_UGASGameplayAbilityInterface_AbilityActivationCondition = FName(TEXT("AbilityActivationCondition"));
	bool IGASGameplayAbilityInterface::Execute_AbilityActivationCondition(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGASGameplayAbilityInterface::StaticClass()));
		GASGameplayAbilityInterface_eventAbilityActivationCondition_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGASGameplayAbilityInterface_AbilityActivationCondition);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_Statics::EnumInfo[] = {
		{ EGASAbilityActivationPolicy_StaticEnum, TEXT("EGASAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EGASAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 216825987U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGASGameplayAbilityInterface, UGASGameplayAbilityInterface::StaticClass, TEXT("UGASGameplayAbilityInterface"), &Z_Registration_Info_UClass_UGASGameplayAbilityInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASGameplayAbilityInterface), 1434184565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_3996757392(TEXT("/Script/GASInputsystem"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
