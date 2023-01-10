// Class /Script/SaveTheWorldUI.FortCollectionBookWidget
// Size: 0x548
class UFortCollectionBookWidget : public UFortActivatablePanel
{
	class UFortCollectionBookProgressWidget* ProgressWidget; // 0x518 (0x8)
	class UCommonWidgetSwitcherLegacy* MainWidgetSwitcher; // 0x520 (0x8)
	class UFortCollectionBookPrimaryPanel* PrimaryPanelWidget; // 0x528 (0x8)
	class UFortCollectionBookSectionPanel* SectionPanelWidget; // 0x530 (0x8)
	int PrimaryPanelIdx; // 0x538 (0x4)
	int SectionPanelIdx; // 0x53c (0x4)
	unsigned char padding_540[0x8]; // 0x540 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.RequestToClose (Underlying native function: RequestToClose 0x71ea134)
	void RequestToClose(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnPreviewXPChangeRequest (Underlying native function: OnPreviewXPChangeRequest 0x71e87dc)
	void OnPreviewXPChangeRequest(int& XPChange); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookSectionCloseRequest (Underlying native function: OnCollectionBookSectionCloseRequest 0x71e81c8)
	void OnCollectionBookSectionCloseRequest(); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookSectionClicked (Underlying native function: OnCollectionBookSectionClicked 0x71e8144)
	void OnCollectionBookSectionClicked(class UFortCollectionBookSection*& ClickedSection); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookPageSelected (Underlying native function: OnCollectionBookPageSelected 0x71e7eac)
	void OnCollectionBookPageSelected(class UFortCollectionBookPage*& SelectedPage); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookPageClicked (Underlying native function: OnCollectionBookPageClicked 0x71e7f30)
	void OnCollectionBookPageClicked(class UFortCollectionBookPage*& ClickedPage); // (Native | Event | Public | BlueprintEvent)
};

