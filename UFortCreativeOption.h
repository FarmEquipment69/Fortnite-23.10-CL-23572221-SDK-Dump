// Class /Script/FortniteGame.FortCreativeOption
// Size: 0x190
class UFortCreativeOption : public UDataAsset
{
	struct FText OptionText; // 0x30 (0x18)
	struct FText OptionToolTip; // 0x48 (0x18)
	struct FName CategoryTag; // 0x60 (0x4)
	unsigned char unreflected_64[0xc]; // 0x64 (0xc) 
	struct FSlateBrush DisplayIcon; // 0x70 (0xc0)
	struct FMulticastInlineDelegate OnCreativeOptionChanged; // 0x130 (0x10)
	struct TArray<struct FCreativeOptionData> Options; // 0x140 (0x10)
	struct FGameplayTag VariableTag; // 0x150 (0x4)
	struct TEnumAsByte<UFortMatchmakingKnobsDataSource> MenuListType; // 0x154 (0x1)
	unsigned char unreflected_155[0x3]; // 0x155 (0x3) 
	int CurrentIndex; // 0x158 (0x4)
	unsigned char unreflected_15c[0x4]; // 0x15c (0x4) 
	struct FScalableFloat DefaultOptionIndex; // 0x160 (0x28)
	unsigned char padding_188[0x8]; // 0x188 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeOption.SetCurrentIndex (Underlying native function: SetCurrentIndex 0x8575ac0)
	void SetCurrentIndex(int& Index); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeOption.IncrementIndexWithWrap (Underlying native function: IncrementIndexWithWrap 0x8574318)
	void IncrementIndexWithWrap(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeOption.GetValueAtIndex (Underlying native function: GetValueAtIndex 0x8573a00)
	int GetValueAtIndex(int& Index); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeOption.GetValueAtCurrentIndex (Underlying native function: GetValueAtCurrentIndex 0x85739c4)
	int GetValueAtCurrentIndex(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeOption.GetCurrentIndex (Underlying native function: GetCurrentIndex 0x8572d48)
	int GetCurrentIndex(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeOption.GetCreativeOptionTextAtIndex (Underlying native function: GetCreativeOptionTextAtIndex 0x8572be4)
	struct FText GetCreativeOptionTextAtIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeOption.GetCreativeOptionTextAtCurrent (Underlying native function: GetCreativeOptionTextAtCurrent 0x8572b5c)
	struct FText GetCreativeOptionTextAtCurrent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeOption.DoesMatchCategory (Underlying native function: DoesMatchCategory 0x8570f24)
	bool DoesMatchCategory(struct FCreativeOptionCategoryData& CreativeOptionCategory); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCreativeOption.DecrementIndexWithWrap (Underlying native function: DecrementIndexWithWrap 0x8570a74)
	void DecrementIndexWithWrap(); // (Final | Native | Public | BlueprintCallable)
};

