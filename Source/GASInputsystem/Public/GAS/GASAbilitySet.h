#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"
#include "GASAbilitySet.generated.h"

USTRUCT(BlueprintType)
struct FGASAbilitySet_GameplayAbility {
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "GAS Ability", DisplayName = "Ability")
	TSubclassOf<class UGameplayAbility> m_pAbility = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "GAS Ability", DisplayName = "Ability Level")
	int32 m_iAbilityLevel = 1;

	UPROPERTY(EditDefaultsOnly, Category = "GAS Ability", DisplayName = "Input Tag")
	FGameplayTag m_inputTag;
};

USTRUCT(BlueprintType)
struct FGASAbilitySet_GrantedHandles {
	GENERATED_BODY()
public:
	void AddAbilitySpecHandle(const FGameplayAbilitySpecHandle& handle);

protected:
	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> m_abilitySpecHandles;

};


UCLASS()
class GASINPUTSYSTEM_API UGASAbilitySet : public UDataAsset {
	GENERATED_BODY()
public:
	void GiveToAbilitySystem(class UAbilitySystemComponent* pAbilitySystemComp, FGASAbilitySet_GrantedHandles* pOutGrantedHandles, UObject* pSourceObject = nullptr);

protected:
	UPROPERTY(EditDefaultsOnly, Category = "GAS Input", DisplayName = "Granted Gameplay Abilities")
	TArray<FGASAbilitySet_GameplayAbility> m_grantedGameplayAbilities;

};