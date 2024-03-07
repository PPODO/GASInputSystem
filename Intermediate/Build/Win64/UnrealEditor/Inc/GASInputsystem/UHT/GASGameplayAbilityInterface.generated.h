// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/GASGameplayAbilityInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASINPUTSYSTEM_GASGameplayAbilityInterface_generated_h
#error "GASGameplayAbilityInterface.generated.h already included, missing '#pragma once' in GASGameplayAbilityInterface.h"
#endif
#define GASINPUTSYSTEM_GASGameplayAbilityInterface_generated_h

#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_SPARSE_DATA
#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_RPC_WRAPPERS
#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_ACCESSORS
#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GASINPUTSYSTEM_API UGASGameplayAbilityInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGASGameplayAbilityInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GASINPUTSYSTEM_API, UGASGameplayAbilityInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASGameplayAbilityInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GASINPUTSYSTEM_API UGASGameplayAbilityInterface(UGASGameplayAbilityInterface&&); \
	GASINPUTSYSTEM_API UGASGameplayAbilityInterface(const UGASGameplayAbilityInterface&); \
public: \
	GASINPUTSYSTEM_API virtual ~UGASGameplayAbilityInterface();


#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GASINPUTSYSTEM_API UGASGameplayAbilityInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GASINPUTSYSTEM_API UGASGameplayAbilityInterface(UGASGameplayAbilityInterface&&); \
	GASINPUTSYSTEM_API UGASGameplayAbilityInterface(const UGASGameplayAbilityInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GASINPUTSYSTEM_API, UGASGameplayAbilityInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGASGameplayAbilityInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGASGameplayAbilityInterface) \
	GASINPUTSYSTEM_API virtual ~UGASGameplayAbilityInterface();


#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGASGameplayAbilityInterface(); \
	friend struct Z_Construct_UClass_UGASGameplayAbilityInterface_Statics; \
public: \
	DECLARE_CLASS(UGASGameplayAbilityInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GASInputsystem"), GASINPUTSYSTEM_API) \
	DECLARE_SERIALIZER(UGASGameplayAbilityInterface)


#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGASGameplayAbilityInterface() {} \
public: \
	typedef UGASGameplayAbilityInterface UClassType; \
	typedef IGASGameplayAbilityInterface ThisClass; \
	static bool Execute_AbilityActivationCondition(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IGASGameplayAbilityInterface() {} \
public: \
	typedef UGASGameplayAbilityInterface UClassType; \
	typedef IGASGameplayAbilityInterface ThisClass; \
	static bool Execute_AbilityActivationCondition(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_13_PROLOG
#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_SPARSE_DATA \
	FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_RPC_WRAPPERS \
	FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_ACCESSORS \
	FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_SPARSE_DATA \
	FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_ACCESSORS \
	FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASINPUTSYSTEM_API UClass* StaticClass<class UGASGameplayAbilityInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_plugins_GASInputsystem_HostProject_Plugins_GASInputsystem_Source_GASInputsystem_Public_GAS_GASGameplayAbilityInterface_h


#define FOREACH_ENUM_EGASABILITYACTIVATIONPOLICY(op) \
	op(EGASAbilityActivationPolicy::E_OnInputTriggered) \
	op(EGASAbilityActivationPolicy::E_WhileInputActive) 

enum class EGASAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EGASAbilityActivationPolicy> { enum { Value = true }; };
template<> GASINPUTSYSTEM_API UEnum* StaticEnum<EGASAbilityActivationPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
