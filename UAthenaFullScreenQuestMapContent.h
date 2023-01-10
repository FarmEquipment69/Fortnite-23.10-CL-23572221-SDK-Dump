// Class /Script/FortniteUI.AthenaFullScreenQuestMapContent
// Size: 0x610
class UAthenaFullScreenQuestMapContent : public UAthenaFullScreenMapBase
{
	unsigned char unreflected_528[0x10]; // 0x528 (0x10) 
	class UAthenaFullScreenMapControlsWidget* ControlsPanel; // 0x538 (0x8)
	class UAthenaQuestListContent* QuestPanel; // 0x540 (0x8)
	class UImage* ImageCustomMapBackground; // 0x548 (0x8)
	class UScaleBox* ScaleBoxCustomMapContent; // 0x550 (0x8)
	unsigned char unreflected_558[0x50]; // 0x558 (0x50) 
	class UUserWidget* CustomMapWidgetInstance; // 0x5a8 (0x8)
	class UFortQuestItemDefinition* CachedPinnedQuestDefinition; // 0x5b0 (0x8)
	unsigned char unreflected_5b8[0x10]; // 0x5b8 (0x10) 
	bool bDisableDisplayMapInCreative; // 0x5c8 (0x1)
	unsigned char padding_5c9[0x47]; // 0x5c9 (0x47)

	/* Functions */

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapContent.OnQuestListLostFocus (Has no native function)
	void OnQuestListLostFocus(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapContent.OnQuestListGainedFocus (Has no native function)
	void OnQuestListGainedFocus(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapContent.OnListViewScrolled (Underlying native function: OnListViewScrolled 0xa423ac8)
	void OnListViewScrolled(float& OffsetInItems, float& DistanceRemaining); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapContent.OnChallengeCategoryChanged (Has no native function)
	void OnChallengeCategoryChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapContent.HandleViewPlaylistButtonClicked (Underlying native function: HandleViewPlaylistButtonClicked 0xa42350c)
	void HandleViewPlaylistButtonClicked(struct FString& IslandMnemonic, struct FName& PlaylistName); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapContent.HandleSortTypeTextChanged (Underlying native function: HandleSortTypeTextChanged 0xa42311c)
	void HandleSortTypeTextChanged(struct FText& TypeText); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapContent.HandleRemoveSelectedQuestButtonClicked (Underlying native function: HandleRemoveSelectedQuestButtonClicked 0xa423048)
	void HandleRemoveSelectedQuestButtonClicked(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapContent.HandlePinSelectedQuestButtonClicked (Underlying native function: HandlePinSelectedQuestButtonClicked 0xa422f0c)
	void HandlePinSelectedQuestButtonClicked(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapContent.HandlePinSelectedCategoryButtonClicked (Underlying native function: HandlePinSelectedCategoryButtonClicked 0xa422ef8)
	void HandlePinSelectedCategoryButtonClicked(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapContent.HandlePinnedQuestsChanged (Underlying native function: HandlePinnedQuestsChanged 0xa422f20)
	void HandlePinnedQuestsChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapContent.HandleInspectItemsButtonClicked (Underlying native function: HandleInspectItemsButtonClicked 0xa422ee4)
	void HandleInspectItemsButtonClicked(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaFullScreenQuestMapContent.HandleControlsSortButtonClicked (Underlying native function: HandleControlsSortButtonClicked 0xa422c30)
	void HandleControlsSortButtonClicked(); // (Final | Native | Private)
};

