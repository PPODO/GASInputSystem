#include "GAS/GASAbilitySystemInterface.h"
#include "GAS/GASGameplayAbilityInterface.h"


IGASAbilitySystemInterface::IGASAbilitySystemInterface() {
	m_inputPressedSpecHandles.Reset();
	m_inputReleasedSpecHandles.Reset();
	m_inputHeldSpecHandles.Reset();
}

void IGASAbilitySystemInterface::AbilityInputTagPressed(UAbilitySystemComponent* pAbilitySystemComp, const FGameplayTag& inputTag) {
	if (pAbilitySystemComp && inputTag.IsValid()) {
		for (const auto& abilitySpec : pAbilitySystemComp->GetActivatableAbilities()) {
			if (abilitySpec.Ability && (abilitySpec.DynamicAbilityTags.HasTagExact(inputTag))) {
				m_inputPressedSpecHandles.Add(abilitySpec.Handle);
				m_inputHeldSpecHandles.Add(abilitySpec.Handle);
			}
		}
	}
}

void IGASAbilitySystemInterface::AbilityInputTagReleased(UAbilitySystemComponent* pAbilitySystemComp, const FGameplayTag& inputTag) {
	if (pAbilitySystemComp && inputTag.IsValid()) {
		for (const auto& abilitySpec : pAbilitySystemComp->GetActivatableAbilities()) {
			if (abilitySpec.Ability && (abilitySpec.DynamicAbilityTags.HasTagExact(inputTag))) {
				m_inputReleasedSpecHandles.Add(abilitySpec.Handle);
				m_inputHeldSpecHandles.Remove(abilitySpec.Handle);
			}
		}
	}
}

void IGASAbilitySystemInterface::ProcessAbilityInput(class UAbilitySystemComponent* pAbilitySystemComp, float fDeltaTime, bool bGamePaused) {
	static TArray<FGameplayAbilitySpecHandle> abilitiesToActivate;
	check(pAbilitySystemComp);

	abilitiesToActivate.Reset();

	for (const auto& specHandle : m_inputHeldSpecHandles) {
		if (const auto* pAbilitySpec = pAbilitySystemComp->FindAbilitySpecFromHandle(specHandle)) {
			if (pAbilitySpec->Ability && !pAbilitySpec->IsActive()) {
				const auto* pAbilityHelper = CastChecked<IGASGameplayAbilityInterface>(pAbilitySpec->Ability);

				if (pAbilityHelper->Execute_AbilityActivationCondition(pAbilitySpec->Ability) && pAbilityHelper->GetActivationPolicy() == EGASAbilityActivationPolicy::E_WhileInputActive)
					abilitiesToActivate.AddUnique(pAbilitySpec->Handle);
			}
		}
	}

	for (const auto& specHandle : m_inputPressedSpecHandles) {
		if (auto* pAbilitySpec = pAbilitySystemComp->FindAbilitySpecFromHandle(specHandle)) {
			if (pAbilitySpec->Ability) {
				pAbilitySpec->InputPressed = true;

				if (pAbilitySpec->IsActive())
					AbilitySpecInputPressedA(pAbilitySystemComp, *pAbilitySpec);
				else {
					const auto* pAbilityHelper = CastChecked<IGASGameplayAbilityInterface>(pAbilitySpec->Ability);

					if (pAbilityHelper->Execute_AbilityActivationCondition(pAbilitySpec->Ability) && pAbilityHelper->GetActivationPolicy() == EGASAbilityActivationPolicy::E_OnInputTriggered)
						abilitiesToActivate.AddUnique(pAbilitySpec->Handle);
				}
			}
		}
	}

	for (const auto& abilitySpecHandle : abilitiesToActivate)
		UE_LOG(LogTemp, Error, L"%d", pAbilitySystemComp->TryActivateAbility(abilitySpecHandle));

	for (const auto& specHandle : m_inputReleasedSpecHandles) {
		if (auto* pAbilitySpec = pAbilitySystemComp->FindAbilitySpecFromHandle(specHandle)) {
			if (pAbilitySpec->Ability) {
				pAbilitySpec->InputPressed = false;

				if (pAbilitySpec->IsActive())
					AbilitySpecInputReleased(pAbilitySystemComp, *pAbilitySpec);
			}
		}
	}

	m_inputPressedSpecHandles.Reset();
	m_inputReleasedSpecHandles.Reset();
}

void IGASAbilitySystemInterface::ClearAbilityInput() {
	m_inputPressedSpecHandles.Reset();
	m_inputReleasedSpecHandles.Reset();
	m_inputHeldSpecHandles.Reset();
}

void IGASAbilitySystemInterface::AbilitySpecInputPressedA(UAbilitySystemComponent* pAbilitySystemComp, FGameplayAbilitySpec& spec) {
	check(pAbilitySystemComp);

	pAbilitySystemComp->AbilitySpecInputPressed(spec);
	if (spec.IsActive())
		pAbilitySystemComp->InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputPressed, spec.Handle, spec.ActivationInfo.GetActivationPredictionKey());
}

void IGASAbilitySystemInterface::AbilitySpecInputReleased(UAbilitySystemComponent* pAbilitySystemComp, FGameplayAbilitySpec& spec) {
	check(pAbilitySystemComp);

	pAbilitySystemComp->AbilitySpecInputPressed(spec);
	if (spec.IsActive()) {
		pAbilitySystemComp->InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputReleased, spec.Handle, spec.ActivationInfo.GetActivationPredictionKey());
	}
}
