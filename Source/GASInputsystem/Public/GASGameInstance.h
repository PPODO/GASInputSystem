#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GASGameInstance.generated.h"

UCLASS()
class GASINPUTSYSTEM_API UGASGameInstance : public UGameInstance {
	GENERATED_BODY()
public:
	virtual void Init() override;

};