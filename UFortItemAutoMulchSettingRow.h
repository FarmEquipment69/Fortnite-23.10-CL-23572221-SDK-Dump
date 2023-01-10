// Class /Script/FortniteUI.FortItemAutoMulchSettingRow
// Size: 0x1440
class UFortItemAutoMulchSettingRow : public UCommonButtonLegacy
{
	unsigned char unreflected_1440[0x1440]; 

	/* Functions */

	// Function /Script/FortniteUI.FortItemAutoMulchSettingRow.SetAutoMulchCategory (Underlying native function: SetAutoMulchCategory 0xa7096b0)
	void SetAutoMulchCategory(enum EFortAutoMulchCategory& NewCategory); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemAutoMulchSettingRow.SelectPreviousAutoMulchMode (Underlying native function: SelectPreviousAutoMulchMode 0xa709664)
	void SelectPreviousAutoMulchMode(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemAutoMulchSettingRow.SelectNextAutoMulchMode (Underlying native function: SelectNextAutoMulchMode 0xa709610)
	void SelectNextAutoMulchMode(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemAutoMulchSettingRow.HandleAutoMulchModeChanged (Has no native function)
	void HandleAutoMulchModeChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemAutoMulchSettingRow.HandleAutoMulchCategoryChanged (Has no native function)
	void HandleAutoMulchCategoryChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemAutoMulchSettingRow.GetAutoMulchModeText (Underlying native function: GetAutoMulchModeText 0xa7083fc)
	struct FText GetAutoMulchModeText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemAutoMulchSettingRow.GetAutoMulchCategoryText (Underlying native function: GetAutoMulchCategoryText 0xa708380)
	struct FText GetAutoMulchCategoryText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

