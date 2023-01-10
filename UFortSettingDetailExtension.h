// Class /Script/FortniteUI.FortSettingDetailExtension
// Size: 0x270
class UFortSettingDetailExtension : public UUserWidget
{
	class UFortSetting* Setting; // 0x268 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSettingDetailExtension.UseSplitDisabledOptionsVisual (Underlying native function: UseSplitDisabledOptionsVisual 0x2830cb8)
	bool UseSplitDisabledOptionsVisual(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSettingDetailExtension.OnSettingValueChanged (Has no native function)
	void OnSettingValueChanged(class UFortSetting*& InSetting); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSettingDetailExtension.OnSettingAssigned (Has no native function)
	void OnSettingAssigned(class UFortSetting*& InSetting); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSettingDetailExtension.GetOptionsDisabledText (Underlying native function: GetOptionsDisabledText 0xa7c5a00)
	struct FText GetOptionsDisabledText(struct TArray<struct FText>& Reasons); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

