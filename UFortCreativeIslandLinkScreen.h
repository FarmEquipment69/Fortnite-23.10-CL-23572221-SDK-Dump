// Class /Script/FortniteUI.FortCreativeIslandLinkScreen
// Size: 0x690
class UFortCreativeIslandLinkScreen : public UFortActivatablePanel
{
	int NumDebugIslandLinks; // 0x518 (0x4)
	unsigned char unreflected_51c[0x4]; // 0x51c (0x4) 
	struct FMulticastInlineDelegate OnCreativeIslandCodeConfirmed; // 0x520 (0x10)
	struct FMulticastInlineDelegate OnEditableTextIslandLinkModified; // 0x530 (0x10)
	struct FText MatchmakingOffDescription; // 0x540 (0x18)
	struct FText MatchmakingKeepFullDescription; // 0x558 (0x18)
	struct FText MatchmakingRespectPartiesDescription; // 0x570 (0x18)
	class UEditableText* EditableTextIslandLink; // 0x588 (0x8)
	class UListView* ListViewIslandLinks; // 0x590 (0x8)
	class UScrollBox* ScrollBoxDetails; // 0x598 (0x8)
	class UFortCreativeIslandLink* LastLinkQueried; // 0x5a0 (0x8)
	class UFortCreativeIslandLink* UserEnteredIslandLink; // 0x5a8 (0x8)
	class UCommonButtonLegacy* ButtonSelect; // 0x5b0 (0x8)
	class UCommonButtonLegacy* ButtonCloseMobile; // 0x5b8 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x5c0 (0x8)
	class UCommonButtonLegacy* ButtonRefresh; // 0x5c8 (0x8)
	class UCommonButtonLegacy* ButtonRemove; // 0x5d0 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherTabs; // 0x5d8 (0x8)
	struct FCachedIslandsGroup FavoriteIslands; // 0x5e0 (0x28)
	struct FCachedIslandsGroup IslandHistory; // 0x608 (0x28)
	class AFortAthenaCreativePortal* TargetPortal; // 0x630 (0x8)
	struct FDateTime* LastRefreshTime; // 0x638 (0x8)
	struct FOnlineLinkId LastTestedLinkId; // 0x640 (0x18)
	bool bCodeLookupRequestInFlight; // 0x658 (0x1)
	bool bFriendsGetRequestInFlight; // 0x659 (0x1)
	bool bFavoritesOnlyMode; // 0x65a (0x1)
	unsigned char unreflected_65b[0x5]; // 0x65b (0x5) 
	struct FDataTableRowHandle DetailsScrollUpInputRowHandle; // 0x660 (0x10)
	struct FDataTableRowHandle DetailsScrollDownInputRowHandle; // 0x670 (0x10)
	unsigned char padding_680[0x10]; // 0x680 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeIslandLinkScreen.SetTargetPortal (Underlying native function: SetTargetPortal 0xa5012dc)
	void SetTargetPortal(class AFortAthenaCreativePortal*& Portal); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeIslandLinkScreen.SetFavoritesOnlyMode (Underlying native function: SetFavoritesOnlyMode 0xa500ee0)
	void SetFavoritesOnlyMode(bool& bFavoritesOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeIslandLinkScreen.RemoveIslandFromHistory (Underlying native function: RemoveIslandFromHistory 0xa5001c8)
	void RemoveIslandFromHistory(struct FOnlineLinkId& LinkCode); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeIslandLinkScreen.RemoveIslandFromFavorites (Underlying native function: RemoveIslandFromFavorites 0xa4ffe8c)
	void RemoveIslandFromFavorites(class UFortCreativeIslandLink*& LinkEntry); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeIslandLinkScreen.OnCreativeIslandLinkValidated (Has no native function)
	void OnCreativeIslandLinkValidated(enum EFortActivityValidationResult& Error, bool& IsValidModerationState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeIslandLinkScreen.OnCreativeIslandLinksPopulated (Has no native function)
	void OnCreativeIslandLinksPopulated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativeIslandLinkScreen.IsPartyEligible (Underlying native function: IsPartyEligible 0xa4fdbdc)
	bool IsPartyEligible(class UFortCreativeIslandLink*& IslandLink); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeIslandLinkScreen.HandleIslandSelectionChanged (Underlying native function: HandleIslandSelectionChanged 0xa4fd3ac)
	void HandleIslandSelectionChanged(class UObject*& Item); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortCreativeIslandLinkScreen.HandleIslandLinkCommitted (Underlying native function: HandleIslandLinkCommitted 0xa4fd2c0)
	void HandleIslandLinkCommitted(struct FText& InText, struct TEnumAsByte<ETextCommit>& CommitInfo); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortCreativeIslandLinkScreen.HandleIslandLinkChanged (Underlying native function: HandleIslandLinkChanged 0xa4fd204)
	void HandleIslandLinkChanged(struct FText& Text); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortCreativeIslandLinkScreen.GetTextFromLinkId (Underlying native function: GetTextFromLinkId 0xa4fb65c)
	struct FText GetTextFromLinkId(struct FOnlineLinkId& LinkId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeIslandLinkScreen.GetMatchmakingTypeDescription (Underlying native function: GetMatchmakingTypeDescription 0xa4fa12c)
	struct FText GetMatchmakingTypeDescription(class UFortCreativeIslandLink*& IslandLink); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeIslandLinkScreen.GetLinkIdFromInput (Underlying native function: GetLinkIdFromInput 0xa4fa02c)
	struct FOnlineLinkId GetLinkIdFromInput(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeIslandLinkScreen.AddIslandToFavorites (Underlying native function: AddIslandToFavorites 0xa4f7698)
	void AddIslandToFavorites(class UFortCreativeIslandLink*& LinkEntry); // (Final | Native | Public | BlueprintCallable)
};

