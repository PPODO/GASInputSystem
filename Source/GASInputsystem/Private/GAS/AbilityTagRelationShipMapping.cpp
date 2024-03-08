#include "GAS/AbilityTagRelationShipMapping.h"

void UGASAbilityTagRelationShipMapping::GetAbilityTagsToBlockAndCancel(const FGameplayTagContainer& abilityTags, FGameplayTagContainer* pOutTagsToBlock, FGameplayTagContainer* pOutTagsToCancel) {
	for (const auto& tags : m_abilityTagRelationships) {
		if (abilityTags.HasTag(tags.m_abilityTag)) {
			if (pOutTagsToBlock)
				pOutTagsToBlock->AppendTags(tags.m_abilityTagsToBlock);

			if (pOutTagsToCancel) {
				pOutTagsToCancel->AppendTags(tags.m_abilityTagsToCancel);
			}
		}
	}
}

void UGASAbilityTagRelationShipMapping::GetRequiredAndBlockedActivationTags(const FGameplayTagContainer& abilityTags, FGameplayTagContainer* pOutActivationRequired, FGameplayTagContainer* pOutActivationBlocked) const {
	for (const auto& tags : m_abilityTagRelationships) {
		if (abilityTags.HasTag(tags.m_abilityTag)) {
			if (pOutActivationRequired)
				pOutActivationRequired->AppendTags(tags.m_activationRequiredTags);
			
			if (pOutActivationBlocked)
				pOutActivationBlocked->AppendTags(tags.m_activationBlockedTags);
		}
	}
}

bool UGASAbilityTagRelationShipMapping::IsAbilityCancelledByTag(const FGameplayTagContainer& abilityTags, const FGameplayTag& actionTag) const {
	for (const auto& tags : m_abilityTagRelationships) {
		if (tags.m_abilityTag == actionTag && tags.m_abilityTagsToCancel.HasAny(abilityTags))
			return true;
	}
	return false;
}