#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GASGameplayAbilityInterface.generated.h"

UENUM(BlueprintType)
enum class EGASAbilityActivationPolicy : uint8 {
	E_OnInputTriggered,
	E_WhileInputActive
};

UINTERFACE(MinimalAPI)
class UGASGameplayAbilityInterface : public UInterface {
	GENERATED_BODY()
};

class GASINPUTSYSTEM_API IGASGameplayAbilityInterface {
	GENERATED_BODY()
public:
	virtual EGASAbilityActivationPolicy GetActivationPolicy() const = 0;

public:
	UFUNCTION(BlueprintImplementableEvent)
	bool AbilityActivationCondition();

};