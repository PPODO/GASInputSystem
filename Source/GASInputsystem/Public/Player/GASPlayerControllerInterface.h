#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GASPlayerControllerInterface.generated.h"

UINTERFACE(MinimalAPI)
class UGASPlayerControllerInterface : public UInterface {
	GENERATED_BODY()
};

class GASINPUTSYSTEM_API IGASPlayerControllerInterface {
	GENERATED_BODY()
public:
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const = 0;

};