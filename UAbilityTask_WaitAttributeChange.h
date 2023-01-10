// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xe8
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
	struct FMulticastInlineDelegate OnChange; // 0x78 (0x10)
	unsigned char unreflected_88[0x58]; // 0x88 (0x58) 
	class UAbilitySystemComponent* ExternalOwner; // 0xe0 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison (Underlying native function: WaitForAttributeChangeWithComparison 0x66b9a7c)
	static class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility*& OwningAbility, struct FGameplayAttribute& InAttribute, struct FGameplayTag& InWithTag, struct FGameplayTag& InWithoutTag, struct TEnumAsByte<EWaitAttributeChangeComparison>& InComparisonType, float& InComparisonValue, bool& TriggerOnce, class AActor*& OptionalExternalOwner); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange (Underlying native function: WaitForAttributeChange 0x66b94c8)
	static class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility*& OwningAbility, struct FGameplayAttribute& Attribute, struct FGameplayTag& WithSrcTag, struct FGameplayTag& WithoutSrcTag, bool& TriggerOnce, class AActor*& OptionalExternalOwner); // (Final | Native | Static | Public | BlueprintCallable)
};

