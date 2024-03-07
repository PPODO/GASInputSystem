#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "GASInputConfig.h"
#include "GASEnhancedInputComponent.generated.h"

UCLASS()
class GASINPUTSYSTEM_API UGASEnhancedInputComponent : public UEnhancedInputComponent {
	GENERATED_BODY()
public:
	UGASEnhancedInputComponent();

public:
	template<typename UserClass, typename FuncType>
	void BindNativeAction(const class UGASInputConfig* pInputConfig, const FGameplayTag& inputTag, ETriggerEvent triggerEvent, UserClass* pObject, FuncType func);

	template<typename UserClass, typename PressedFuncType, typename ReleasedFuncType>
	void BindAbilityActions(const class UGASInputConfig* pInputConfig, UserClass* pObject, PressedFuncType pressedFunc, ReleasedFuncType releaseFunc);

};

template<typename UserClass, typename FuncType>
inline void UGASEnhancedInputComponent::BindNativeAction(const UGASInputConfig* pInputConfig, const FGameplayTag& inputTag, ETriggerEvent triggerEvent, UserClass* pObject, FuncType func) {
	check(pInputConfig);
	if (const UInputAction* pInputAction = pInputConfig->FindNativeInputActionForTag(inputTag))
		BindAction(pInputAction, triggerEvent, pObject, func);
}

template<typename UserClass, typename PressedFuncType, typename ReleasedFuncType>
inline void UGASEnhancedInputComponent::BindAbilityActions(const UGASInputConfig* pInputConfig, UserClass* pObject, PressedFuncType pressedFunc, ReleasedFuncType releaseFunc) {
	check(pInputConfig);

	for (const auto& action : pInputConfig->m_abilityInputActions) {
		if (action.m_pInputAction) {
			if (!action.m_bUseMultipleInputTags && action.m_inputTag.IsValid()) {
				if (pressedFunc)
					BindAction(action.m_pInputAction, ETriggerEvent::Triggered, pObject, pressedFunc, action.m_inputTag);

				if (releaseFunc)
					BindAction(action.m_pInputAction, ETriggerEvent::Completed, pObject, releaseFunc, action.m_inputTag);
			}
			else {
				for (const auto& tag : action.m_inputTags) {
					if (tag.IsValid()) {
						if (pressedFunc)
							BindAction(action.m_pInputAction, ETriggerEvent::Triggered, pObject, pressedFunc, tag);

						if (releaseFunc)
							BindAction(action.m_pInputAction, ETriggerEvent::Completed, pObject, releaseFunc, tag);
					}
				}
			}
		}
	}
}