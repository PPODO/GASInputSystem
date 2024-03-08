#include "Player/GASPlayerController.h"
#include "Player/GASPlayerControllerInterface.h"
#include "AbilitySystemInterface.h"
#include "GAS/GASAbilitySystemInterface.h"

AGASPlayerController::AGASPlayerController() {
}

void AGASPlayerController::PreProcessInput(const float DeltaTime, const bool bGamePaused) {
	Super::PreProcessInput(DeltaTime, bGamePaused);
}

void AGASPlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused) {
	if (auto pPCInterface = Cast<IGASPlayerControllerInterface>(this)) {
		if (auto pAbilitySystemComp = Cast<IGASAbilitySystemInterface>(pPCInterface->GetAbilitySystemComponent()))
			pAbilitySystemComp->ProcessAbilityInput(DeltaTime, bGamePaused);
	}
}