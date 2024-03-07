#include "GAS/GASAbilitySet.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystemComponent.h"

void FGASAbilitySet_GrantedHandles::AddAbilitySpecHandle(const FGameplayAbilitySpecHandle& handle) {
	if (handle.IsValid())
		m_abilitySpecHandles.Add(handle);
}

void UGASAbilitySet::GiveToAbilitySystem(UAbilitySystemComponent* pAbilitySystemComp, FGASAbilitySet_GrantedHandles* pOutGrantedHandles, UObject* pSourceObject) {
	check(pAbilitySystemComp);

	if (!pAbilitySystemComp->IsOwnerActorAuthoritative()) return;

	for (int32 iAbilityIndex = 0; iAbilityIndex < m_grantedGameplayAbilities.Num(); iAbilityIndex++) {
		const FGASAbilitySet_GameplayAbility& abilityToGrant = m_grantedGameplayAbilities[iAbilityIndex];

		if (!IsValid(abilityToGrant.m_pAbility)) {
			UE_LOG(LogTemp, Error, TEXT("GrantedGameplayAbilities[%d] on ability set [%s] is not valid."), iAbilityIndex, *GetNameSafe(this));
			continue;
		}

		FGameplayAbilitySpec abilitySpec(abilityToGrant.m_pAbility->GetDefaultObject<UGameplayAbility>(), abilityToGrant.m_iAbilityLevel);
		abilitySpec.SourceObject = pSourceObject;
		abilitySpec.DynamicAbilityTags.AddTag(abilityToGrant.m_inputTag);
		
		const FGameplayAbilitySpecHandle AbilitySpecHandle = pAbilitySystemComp->GiveAbility(abilitySpec);

		if (pOutGrantedHandles)
			pOutGrantedHandles->AddAbilitySpecHandle(AbilitySpecHandle);
	}
}