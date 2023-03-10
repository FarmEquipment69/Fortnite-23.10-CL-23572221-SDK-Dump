// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x128
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
	struct FMulticastInlineDelegate OnActivate; // 0x78 (0x10)
	unsigned char padding_88[0xa0]; // 0x88 (0xa0)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements (Underlying native function: WaitForAbilityActivateWithTagRequirements 0x66b8e74)
	static class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility*& OwningAbility, struct FGameplayTagRequirements& TagRequirements, bool& IncludeTriggeredAbilities, bool& TriggerOnce); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query (Underlying native function: WaitForAbilityActivate_Query 0x66b8ffc)
	static class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateQuery(class UGameplayAbility*& OwningAbility, struct FGameplayTagQuery& Query, bool& IncludeTriggeredAbilities, bool& TriggerOnce); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate (Underlying native function: WaitForAbilityActivate 0x66b8cd0)
	static class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility*& OwningAbility, struct FGameplayTag& WithTag, struct FGameplayTag& WithoutTag, bool& IncludeTriggeredAbilities, bool& TriggerOnce); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate (Underlying native function: OnAbilityActivate 0x66b804c)
	void OnAbilityActivate(class UGameplayAbility*& ActivatedAbility); // (Final | Native | Public)
};

