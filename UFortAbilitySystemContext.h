// Class /Script/SaveTheWorldUI.FortAbilitySystemContext
// Size: 0x80
class UFortAbilitySystemContext : public UBlueprintContextBase
{
	unsigned char unreflected_80[0x80]; 

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortAbilitySystemContext.RemoveDelegatesFromWidget (Underlying native function: RemoveDelegatesFromWidget 0x71ea040)
	void RemoveDelegatesFromWidget(class UWidget*& Widget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortAbilitySystemContext.RegisterForAttributeChanged (Underlying native function: RegisterForAttributeChanged 0x71e9c80)
	void RegisterForAttributeChanged(class UWidget*& Widget, class UAbilitySystemComponent*& ASC, struct FGameplayAttribute& Attribute, struct FDelegate& Callback); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortAbilitySystemContext.HasMatchingGameplayTag (Underlying native function: HasMatchingGameplayTag 0x71e786c)
	bool HasMatchingGameplayTag(struct FGameplayTag& TagToCheck); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

