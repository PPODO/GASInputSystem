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
	void AbilityInputTagPressed(class UAbilitySystemComponent* pAbilitySystemComp, const FGameplayTag& inputTag);
	void AbilityInputTagReleased(class UAbilitySystemComponent* pAbilitySystemComp, const FGameplayTag& inputTag);

	void ProcessAbilityInput(class UAbilitySystemComponent* pAbilitySystemComp, float fDeltaTime, bool bGamePaused);
	void ClearAbilityInput();

protected:
	TArray<FGameplayAbilitySpecHandle> m_inputPressedSpecHandles;
	TArray<FGameplayAbilitySpecHandle> m_inputReleasedSpecHandles;
	TArray<FGameplayAbilitySpecHandle> m_inputHeldSpecHandles;

public:
	void AbilitySpecInputPressedA(class UAbilitySystemComponent* pAbilitySystemComp, FGameplayAbilitySpec& spec);
	void AbilitySpecInputReleased(class UAbilitySystemComponent* pAbilitySystemComp, FGameplayAbilitySpec& spec);
};