// Class /Script/FortniteGame.FortConsumableItemDefinition
// Size: 0x930
class UFortConsumableItemDefinition : public UFortWorldItemDefinition
{
	struct TArray<struct FConsumeEffectData> ConsumeEffects; // 0x8e8 (0x10)
	struct TWeakObjectPtr<class UAnimMontage> UseAnimation; // 0x8f8 (0x28)
	float UseTime; // 0x920 (0x4)
	bool bRequiresMissingHealth; // 0x924 (0x1)
	unsigned char padding_925[0xb]; // 0x925 (0xb)

	/* Functions */

	// Function /Script/FortniteGame.FortConsumableItemDefinition.GetUseAnimation (Underlying native function: GetUseAnimation 0x8814134)
	class UAnimMontage* GetUseAnimation(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortConsumableItemDefinition.GetHealthRestored (Underlying native function: GetHealthRestored 0x8812348)
	float GetHealthRestored(int& ItemLevel); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortConsumableItemDefinition.GetAnimPlayRate (Underlying native function: GetAnimPlayRate 0x8811bc8)
	float GetAnimPlayRate(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortConsumableItemDefinition.ConsumeItem (Underlying native function: ConsumeItem 0x881134c)
	void ConsumeItem(struct FGameplayEventData& EventData); // (Native | Public | HasOutParms | BlueprintCallable)
};

