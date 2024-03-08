#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AbilitySystemComponent.h"
#include "GASAbilitySystemInterface.generated.h"

UINTERFACE(MinimalAPI)
class UGASAbilitySystemInterface : public UInterface {
	GENERATED_BODY()
};

class GASINPUTSYSTEM_API IGASAbilitySystemInterface {
	GENERATED_BODY()
public:
	IGASAbilitySystemInterface();

public:
	void AbilityInputTagPressed(const FGameplayTag& inputTag);
	void AbilityInputTagReleased(const FGameplayTag& inputTag);

	void ProcessAbilityInput(float fDeltaTime, bool bGamePaused);
	void ClearAbilityInput();

protected:
	void AbilitySpecInputPressed(class UAbilitySystemComponent* pAbilitySystemComp, FGameplayAbilitySpec& spec);
	void AbilitySpecInputReleased(class UAbilitySystemComponent* pAbilitySystemComp, FGameplayAbilitySpec& spec);

	void ApplyAbilityBlockAndCancelTagsToSystem(const FGameplayTagContainer& abilityTags, class UGameplayAbility* pRequestingAbility, bool bEnableBlockTags, const FGameplayTagContainer& blockTags, FGameplayTagContainer& outModifiedBlockTags, bool bExecuteCancelTags, const FGameplayTagContainer& cancelTags, FGameplayTagContainer& outModifiedCancelTags);

protected:
	class UGASAbilityTagRelationShipMapping* m_pTagRelationshipMapping;

	TArray<FGameplayAbilitySpecHandle> m_inputPressedSpecHandles;
	TArray<FGameplayAbilitySpecHandle> m_inputReleasedSpecHandles;
	TArray<FGameplayAbilitySpecHandle> m_inputHeldSpecHandles;

public: // setter, getter
	void SetTagRelationshipMapping(class UGASAbilityTagRelationShipMapping* pNewMapping);

};