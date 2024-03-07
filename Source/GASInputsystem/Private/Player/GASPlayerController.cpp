#include "Player/GASPlayerController.h"
#include "AbilitySystemInterface.h"
#include "GAS/GASAbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"

AGASPlayerController::AGASPlayerController() {
}

void AGASPlayerController::PreProcessInput(const float DeltaTime, const bool bGamePaused) {
	Super::PreProcessInput(DeltaTime, bGamePaused);
}

void AGASPlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused) {
	if (auto pAbilitySystemComp = Cast<IGASAbilitySystemInterface>(GetAbilitySystemComponent()))
		pAbilitySystemComp->ProcessAbilityInput(Cast<UAbilitySystemComponent>(pAbilitySystemComp), DeltaTime, bGamePaused);
}

UAbilitySystemComponent* AGASPlayerController::GetAbilitySystemComponent() const {
	if (auto pAbilitySystemInterface = Cast<IAbilitySystemInterface>(GetPlayerState<APlayerState>()))
		return pAbilitySystemInterface->GetAbilitySystemComponent();

	return nullptr;
}