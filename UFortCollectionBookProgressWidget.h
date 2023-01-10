// Class /Script/SaveTheWorldUI.FortCollectionBookProgressWidget
// Size: 0x2f0
class UFortCollectionBookProgressWidget : public UCommonUserWidget
{
	int CachedXPLevel; // 0x290 (0x4)
	float CachedXPCompletionPct; // 0x294 (0x4)
	struct TWeakObjectPtr<class UClass> RewardDetailsModalWidgetClass; // 0x298 (0x28)
	class UFortCollectionBookProgressionRewardsPreviewWidget* ProgressionRewardsPreviewWidget; // 0x2c0 (0x8)
	class UCommonTextBlock* XPTextWidget; // 0x2c8 (0x8)
	class UCommonNumericTextBlock* LevelTextWidget; // 0x2d0 (0x8)
	class UCommonButtonLegacy* DetailsButtonWidget; // 0x2d8 (0x8)
	class UFortCollectionBookPageDetailsWidget* PageDetailsWidget; // 0x2e0 (0x8)
	class UFortCollectionBookProgressionRewardsModalWidget* DetailsModalWidget; // 0x2e8 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnSlottedItemOperationComplete (Underlying native function: OnSlottedItemOperationComplete 0x71e92ec)
	void OnSlottedItemOperationComplete(class UFortAccountItem*& ItemSlotted, struct FName& SlotId); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnInventoryUpdated (Underlying native function: OnInventoryUpdated 0x71e8300)
	void OnInventoryUpdated(); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPreviewXPChange (Underlying native function: OnCollectionBookPreviewXPChange 0x71e80bc)
	void OnCollectionBookPreviewXPChange(float& PreviewCompletionPct); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPageSelected (Underlying native function: OnCollectionBookPageSelected 0x71e8038)
	void OnCollectionBookPageSelected(class UFortCollectionBookPage*& SelectedPage); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelProgressionChanged (Underlying native function: OnCollectionBookLevelProgressionChanged 0x71e7e24)
	void OnCollectionBookLevelProgressionChanged(float& NewCompletionPct); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelChanged (Underlying native function: OnCollectionBookLevelChanged 0x71e7da0)
	void OnCollectionBookLevelChanged(int& NewLevel); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.HandleDetailsModalWidgetDeactivated (Underlying native function: HandleDetailsModalWidgetDeactivated 0x71e6d30)
	void HandleDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy*& DeactivatedPanel); // (Final | Native | Private)
};

