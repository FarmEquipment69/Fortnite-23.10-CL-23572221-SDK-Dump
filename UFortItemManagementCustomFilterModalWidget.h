// Class /Script/FortniteUI.FortItemManagementCustomFilterModalWidget
// Size: 0x580
class UFortItemManagementCustomFilterModalWidget : public UFortActivatablePanel
{
	struct TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen; // 0x518 (0x8)
	struct TArray<enum EFortInventoryCustomFilter> AvailableFilters; // 0x520 (0x10)
	struct TSet<enum EFortInventoryCustomFilter> LocalCustomFilterSet; // 0x530 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.FortItemManagementCustomFilterModalWidget.ToggleFilter (Underlying native function: ToggleFilter 0xa69a08c)
	void ToggleFilter(enum EFortInventoryCustomFilter& Filter); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementCustomFilterModalWidget.OnEndCommitCustomFilter (Has no native function)
	void OnEndCommitCustomFilter(bool& bWasSuccessful); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementCustomFilterModalWidget.OnCustomFilterSetUpdated (Has no native function)
	void OnCustomFilterSetUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementCustomFilterModalWidget.OnBeginCommitCustomFilter (Has no native function)
	void OnBeginCommitCustomFilter(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementCustomFilterModalWidget.IsCustomFilterEnabled (Underlying native function: IsCustomFilterEnabled 0x71cd684)
	bool IsCustomFilterEnabled(enum EFortInventoryCustomFilter& Filter); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementCustomFilterModalWidget.EnableAllFilters (Underlying native function: EnableAllFilters 0xa6982a0)
	void EnableAllFilters(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementCustomFilterModalWidget.DisableAllFilters (Underlying native function: DisableAllFilters 0xa698270)
	void DisableAllFilters(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementCustomFilterModalWidget.CommitCustomFilters (Underlying native function: CommitCustomFilters 0xa698248)
	void CommitCustomFilters(); // (Final | Native | Protected | BlueprintCallable)
};

