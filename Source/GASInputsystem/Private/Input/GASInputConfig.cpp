#include "Input/GASInputConfig.h"
#include "InputAction.h"

const UInputAction* UGASInputConfig::FindNativeInputActionForTag(const FGameplayTag& inputTag) const {
	for (const auto& action : m_nativeInputActions) {
		if (action.m_pInputAction) {
			if(action.m_bUseMultipleInputTags)
				UE_LOG(LogTemp, Error, TEXT("NativeInputAction must have only one InputTag!"), *inputTag.ToString());

			if (action.m_inputTag == inputTag)
				return action.m_pInputAction;
		}
	}

	UE_LOG(LogTemp, Error, TEXT("Can't find NativeInputAction for InputTag [%s]"), *inputTag.ToString());
	return nullptr;
}