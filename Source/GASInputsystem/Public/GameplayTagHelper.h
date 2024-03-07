#pragma once

#include "CoreMinimal.h"
#include "GameplayTagsManager.h"

static FGameplayTag GetGameplayTagFromString(const FName& sTagName) {
	return UGameplayTagsManager::Get().RequestGameplayTag(sTagName);
}