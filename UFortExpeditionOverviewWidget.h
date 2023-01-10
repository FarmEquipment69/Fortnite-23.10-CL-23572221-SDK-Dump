// Class /Script/SaveTheWorldUI.FortExpeditionOverviewWidget
// Size: 0x2b8
class UFortExpeditionOverviewWidget : public UCommonUserWidget
{
	class UClass* TabButtonType; // 0x290 (0x8)
	struct TArray<struct FExpeditionTabInfo> TabListRegistrationInfo; // 0x298 (0x10)
	class UFortTabListWidgetBase* ExpeditionTabList; // 0x2a8 (0x8)
	class UFortExpeditionListViewWidget* ExpeditionListView; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.UpdateExpeditionTabs (Underlying native function: UpdateExpeditionTabs 0x721d5dc)
	void UpdateExpeditionTabs(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.OnExpeditionTabSelected (Underlying native function: OnExpeditionTabSelected 0x721c0d4)
	void OnExpeditionTabSelected(struct FName& TabNameID); // (Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.OnExpeditionOverviewRefresh (Underlying native function: OnExpeditionOverviewRefresh 0x71e664c)
	void OnExpeditionOverviewRefresh(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.HandleExpeditionTabSelected (Underlying native function: HandleExpeditionTabSelected 0x721b794)
	void HandleExpeditionTabSelected(struct FName& TabNameID); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.HandleExpeditionTabButtonCreated (Underlying native function: HandleExpeditionTabButtonCreated 0x721b6f0)
	void HandleExpeditionTabButtonCreated(struct FName& TabNameID, class UCommonButtonBase*& TabButton); // (Final | Native | Private)
};

