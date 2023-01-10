// Class /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade
// Size: 0x360
class UAthenaCustomizationPickerSortAndFilterBlade : public UCommonUserWidget
{
	class UWidget* WidgetSorts; // 0x290 (0x8)
	class UWidget* WidgetFilters; // 0x298 (0x8)
	class UFortDynamicEntryBox* DynamicEntryBoxSortButtons; // 0x2a0 (0x8)
	class UFortDynamicEntryBox* DynamicEntryBoxFilterButtons; // 0x2a8 (0x8)
	class UCommonButtonGroupBase* ButtonGroupSorts; // 0x2b0 (0x8)
	class UCommonButtonGroupBase* ButtonGroupFilters; // 0x2b8 (0x8)
	unsigned char padding_2c0[0xa0]; // 0x2c0 (0xa0)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade.IsBladeOpen (Underlying native function: IsBladeOpen 0xa2e9e38)
	bool IsBladeOpen(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade.HandleCloseAnimationFinished (Underlying native function: HandleCloseAnimationFinished 0xa2e89b8)
	void HandleCloseAnimationFinished(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade.GetSortButtonAtIndex (Underlying native function: GetSortButtonAtIndex 0xa2e8814)
	class UCommonButtonBase* GetSortButtonAtIndex(int& DesiredIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade.GetNumSorts (Underlying native function: GetNumSorts 0xa2e8738)
	int GetNumSorts(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade.GetNumFilters (Underlying native function: GetNumFilters 0xa2e8718)
	int GetNumFilters(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade.GetFilterButtonAtIndex (Underlying native function: GetFilterButtonAtIndex 0xa2e847c)
	class UCommonButtonBase* GetFilterButtonAtIndex(int& DesiredIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade.GetAllSortAndFilterButtons (Underlying native function: GetAllSortAndFilterButtons 0xa2e8064)
	struct TArray<class UUserWidget*> GetAllSortAndFilterButtons(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade.CloseBlade (Underlying native function: CloseBlade 0xa2e7e20)
	void CloseBlade(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade.BP_SetSortOrFilterButtonDisplayName (Has no native function)
	void BPSetSortOrFilterButtonDisplayName(class UCommonButtonBase*& SortOrFilterButton, struct FText& DisplayName); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade.BP_OnSortOrFilterButtonCreated (Has no native function)
	void BPOnSortOrFilterButtonCreated(class UCommonButtonBase*& NewButton); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade.BP_OnBladeOpen (Has no native function)
	void BPOnBladeOpen(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade.BP_OnBladeClose (Has no native function)
	void BPOnBladeClose(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade.BP_OnArchiveFilteringSet (Has no native function)
	void BPOnArchiveFilteringSet(bool& bEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationPickerSortAndFilterBlade.BP_HighlightSortOrFilterButton (Has no native function)
	void BPHighlightSortOrFilterButton(class UCommonButtonBase*& SortOrFilterButton, bool& bHighlight); // (Event | Protected | BlueprintEvent)
};

