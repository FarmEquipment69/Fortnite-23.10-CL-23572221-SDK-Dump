// Class /Script/FortniteGame.FortAbilitySystemComponentTooltipContext
// Size: 0xb0
class UFortAbilitySystemComponentTooltipContext : public UFortTooltipContext
{
	struct FGameplayAttribute Attribute; // 0x70 (0x38)
	struct FActiveGameplayEffectHandle* ActiveGEHandle; // 0xa8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilitySystemComponentTooltipContext.SpawnAbilitySystemTooltipContextFromOtherContext (Underlying native function: SpawnAbilitySystemTooltipContextFromOtherContext 0x8d75a74)
	static class UFortAbilitySystemComponentTooltipContext* SpawnAbilitySystemTooltipContextFromOtherContext(class UFortTooltipContext*& OtherContext); // (Final | 0x00000002 | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilitySystemComponentTooltipContext.SpawnAbilitySystemTooltipContext (Underlying native function: SpawnAbilitySystemTooltipContext 0x8d75a48)
	static class UFortAbilitySystemComponentTooltipContext* SpawnAbilitySystemTooltipContext(); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)
};

