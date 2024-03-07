#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GASInputConfig.generated.h"

USTRUCT(BlueprintType)
struct FGASInputAction {
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, DisplayName = "Input Action", Category = "GAS Input Action")
	class UInputAction* m_pInputAction = nullptr;

	UPROPERTY(EditDefaultsOnly, DisplayName = "Use Multiple Input Tags", Category = "GAS Input Action")
	bool m_bUseMultipleInputTags = false;

	UPROPERTY(EditDefaultsOnly, DisplayName = "Input Tag", meta = (EditCondition = "!m_bUseMultipleInputTags"), Category = "GAS Input Action")
	FGameplayTag m_inputTag;

	UPROPERTY(EditDefaultsOnly, DisplayName = "Input Tag", meta = (EditCondition = "m_bUseMultipleInputTags"), Category = "GAS Input Action")
	TArray<FGameplayTag> m_inputTags;

};


UCLASS()
class GASINPUTSYSTEM_API UGASInputConfig : public UDataAsset {
	GENERATED_BODY()
public:
	const class UInputAction* FindNativeInputActionForTag(const FGameplayTag& inputTag) const;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GAS Input", DisplayName = "Native Input Actions")
	TArray<FGASInputAction> m_nativeInputActions;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GAS Input", DisplayName = "Ability Input Actions")
	TArray<FGASInputAction> m_abilityInputActions;

};