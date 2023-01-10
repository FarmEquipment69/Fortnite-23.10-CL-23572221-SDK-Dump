// Class /Script/FortniteUI.FortMatchmakingKnobsModal
// Size: 0x6a8
class UFortMatchmakingKnobsModal : public UFortActivatablePanel
{
	float MobileOptionListEntrySpacing; // 0x518 (0x4)
	unsigned char unreflected_51c[0x4]; // 0x51c (0x4) 
	struct TArray<struct FString> ScrolledOffWhitelistedPlayers; // 0x520 (0x10)
	struct TArray<class APlayerState*> LoadedPlayerArray; // 0x530 (0x10)
	struct TArray<class UFortUserPermissions*> PermissionsUserList; // 0x540 (0x10)
	unsigned char unreflected_550[0x20]; // 0x550 (0x20) 
	class UPlaylistUserOptions* OptionsAsset; // 0x570 (0x8)
	struct TArray<class UObject*> OptionDataProviders; // 0x578 (0x10)
	unsigned char unreflected_588[0x8]; // 0x588 (0x8) 
	struct FPlaylistFrontEndData FrontEndData; // 0x590 (0x50)
	struct TMap<struct FString, struct FString> LoadedOptionValues; // 0x5e0 (0x50)
	class UFortPlaylistAthena* CurrentPlaylist; // 0x630 (0x8)
	unsigned char unreflected_638[0x40]; // 0x638 (0x40) 
	class UCommonListView* OptionsList; // 0x678 (0x8)
	class UCommonButtonLegacy* AcceptButton; // 0x680 (0x8)
	class UCommonTextBlock* TextBlockHeaderText; // 0x688 (0x8)
	class UCommonTextBlock* TextBlockTitleText; // 0x690 (0x8)
	class UCommonTextBlock* TextBlockDescriptionText; // 0x698 (0x8)
	class UImage* ImageDisplayImage; // 0x6a0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.SetListDataSource (Underlying native function: SetListDataSource 0xa5b2a48)
	void SetListDataSource(struct TEnumAsByte<UFortMatchmakingKnobsDataSource>& ListType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.SetInScrimmage (Underlying native function: SetInScrimmage 0xa5b28a4)
	void SetInScrimmage(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.SetInGameMode (Underlying native function: SetInGameMode 0xa5b2824)
	void SetInGameMode(bool& bIsInGame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.RemoveFromModalLayer (Underlying native function: RemoveFromModalLayer 0x662c1a4)
	void RemoveFromModalLayer(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.OnSetInGameMode (Has no native function)
	void OnSetInGameMode(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.OnSelectionUpdated (Has no native function)
	void OnSelectionUpdated(class UFortMatchmakingKnobsSpinnerButton*& CurrentSelection); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.OnHoveredItemChanged (Underlying native function: OnHoveredItemChanged 0xa5b0ce0)
	void OnHoveredItemChanged(class UObject*& Item, bool& bIsHovered); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.OnCurrentItemSelectionChanged (Underlying native function: OnCurrentItemSelectionChanged 0xa5b0b68)
	void OnCurrentItemSelectionChanged(class UObject*& Item); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.OnAcceptAnimationComplete (Underlying native function: OnAcceptAnimationComplete 0xa5b085c)
	void OnAcceptAnimationComplete(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.InitializeData (Underlying native function: InitializeData 0x662e078)
	void InitializeData(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.InitForUserOptionValues (Underlying native function: InitForUserOptionValues 0xa5b04f4)
	void InitForUserOptionValues(struct TScriptInterface<class IUserOptionValuesInterface>& UserOptionValues); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.InitForToyOptionsActor (Underlying native function: InitForToyOptionsActor 0xa5b0470)
	void InitForToyOptionsActor(class AActor*& InActor); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.InitForOptionsComponent (Underlying native function: InitForOptionsComponent 0x71e7f30)
	void InitForOptionsComponent(class UFortActorOptionsComponent*& OptionsComponent); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.HasMatchingTags (Underlying native function: HasMatchingTags 0xa5b0140)
	bool HasMatchingTags(class UObject*& Option, struct FGameplayTagContainer& CategoryTags, struct FGameplayTagContainer& ContextTags); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.HandleRestoreClicked (Underlying native function: HandleRestoreClicked 0x8b12550)
	void HandleRestoreClicked(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.HandleNoOptionsLoaded (Has no native function)
	void HandleNoOptionsLoaded(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.HandleCancelClicked (Underlying native function: HandleCancelClicked 0x6dd0d50)
	void HandleCancelClicked(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.GetSpinnerModificationStatus (Underlying native function: GetSpinnerModificationStatus 0xa5af49c)
	enum EFortModifiedStatus GetSpinnerModificationStatus(class UFortMatchmakingKnobsSpinnerButton*& SpinnerButton); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.GetScrolledOffWhitelistedPlayers (Underlying native function: GetScrolledOffWhitelistedPlayers 0xa5af448)
	struct TArray<struct FString> GetScrolledOffWhitelistedPlayers(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.GetModificationStatus (Underlying native function: GetModificationStatus 0xa5af0b4)
	enum EFortModifiedStatus GetModificationStatus(class UObject*& Option); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.DoesContainString (Underlying native function: DoesContainString 0xa5aeaec)
	bool DoesContainString(class UObject*& Option, struct FString& String); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.BP_GetUserOptionValuesInterface (Underlying native function: BP_GetUserOptionValuesInterface 0xa5ae9f4)
	struct TScriptInterface<class IUserOptionValuesInterface> BPGetUserOptionValuesInterface(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.BP_GetOptionsComponent (Underlying native function: BP_GetOptionsComponent 0xa5ae988)
	class UFortActorOptionsComponent* BPGetOptionsComponent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.BP_GetLabelOverrideInterface (Underlying native function: BP_GetLabelOverrideInterface 0xa5ae8e4)
	struct TScriptInterface<class IFortActorLabelOverrideInterface> BPGetLabelOverrideInterface(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortMatchmakingKnobsModal.ApplyChanges (Underlying native function: ApplyChanges 0xa5ae860)
	void ApplyChanges(bool& bApplySettingsFromCachedData); // (Native | Protected | BlueprintCallable)
};

