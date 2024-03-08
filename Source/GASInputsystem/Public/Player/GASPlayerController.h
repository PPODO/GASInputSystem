#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GASPlayerController.generated.h"

UCLASS()
class GASINPUTSYSTEM_API AGASPlayerController : public APlayerController {
	GENERATED_BODY()
public:
	AGASPlayerController();

protected:
	virtual void PreProcessInput(const float DeltaTime, const bool bGamePaused) override;
	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;

};