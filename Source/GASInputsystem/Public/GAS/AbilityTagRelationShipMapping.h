#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AbilityTagRelationShipMapping.generated.h"

USTRUCT(BlueprintType)
struct FGASAbilityTagRelationship {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "Ability", DisplayName = "Ability Tag")
	FGameplayTag m_abilityTag;

	UPROPERTY(EditAnywhere, Category = "Ability", DisplayName = "Ability Tags To Block")
	FGameplayTagContainer m_abilityTagsToBlock;

	UPROPERTY(EditAnywhere, Category = "Ability", DisplayName = "Ability Tags To Cancel")
	FGameplayTagContainer m_abilityTagsToCancel;

	UPROPERTY(EditAnywhere, Category = "Ability", DisplayName = "Activation Required Tags")
	FGameplayTagContainer m_activationRequiredTags;

	UPROPERTY(EditAnywhere, Category = "Ability", DisplayName = "Activation Blocked Tags")
	FGameplayTagContainer m_activationBlockedTags;

};

UCLASS()
class GASINPUTSYSTEM_API UGASAbilityTagRelationShipMapping : public UDataAsset {
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, Category = "Ability", DisplayName = "Ability Tag Relationship")
	TArray<FGASAbilityTagRelationship> m_abilityTagRelationships;

public:
	void GetAbilityTagsToBlockAndCancel(const FGameplayTagContainer& abilityTags, FGameplayTagContainer* pOutTagsToBlock, FGameplayTagContainer* pOutTagsToCancel);
	void GetRequiredAndBlockedActivationTags(const FGameplayTagContainer& abilityTags, FGameplayTagContainer* pOutActivationRequired, FGameplayTagContainer* pOutActivationBlocked) const;
	bool IsAbilityCancelledByTag(const FGameplayTagContainer& abilityTags, const FGameplayTag& actionTag) const;

};