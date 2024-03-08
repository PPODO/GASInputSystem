#include "GASGameInstance.h"
#include "AbilitySystemGlobals.h"

void UGASGameInstance::Init() {
	UAbilitySystemGlobals::Get().InitGlobalData();
}