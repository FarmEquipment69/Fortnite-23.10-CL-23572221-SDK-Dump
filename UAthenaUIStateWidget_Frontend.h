// Class /Script/FortniteUI.AthenaUIStateWidget_Frontend
// Size: 0x910
class UAthenaUIStateWidget_Frontend : public UFortUIStateWidgetBase
{
	unsigned char unreflected_3c0[0xe0]; // 0x3c0 (0xe0) 
	struct TArray<struct FString> DefaultFlowStepArray; // 0x4a0 (0x10)
	struct TArray<struct FString> FirstTimeSeasonFlowStepArray; // 0x4b0 (0x10)
	unsigned char unreflected_4c0[0xd8]; // 0x4c0 (0xd8) 
	class UClass* GuidedTutorialFakeLoadingScreenClass; // 0x598 (0x8)
	unsigned char unreflected_5a0[0x8]; // 0x5a0 (0x8) 
	struct FPrimaryAssetId* GuidedTutorialPlaylistId; // 0x5a8 (0x8)
	struct TArray<class UFortGiftBoxItem*> PendingRemovalGiftboxes; // 0x5b0 (0x10)
	unsigned char unreflected_5c0[0x8]; // 0x5c0 (0x8) 
	struct FText BadMatchPopupTitle; // 0x5c8 (0x18)
	struct FText BadMatchPopupDescription; // 0x5e0 (0x18)
	struct FGameplayTag BattlepassScreenTag; // 0x5f8 (0x4)
	unsigned char unreflected_5fc[0x4]; // 0x5fc (0x4) 
	struct TWeakObjectPtr<class UClass> FireModeSelectionReminderModalClass; // 0x600 (0x28)
	struct TWeakObjectPtr<class UClass> FireModePanelClass; // 0x628 (0x28)
	struct TWeakObjectPtr<class UClass> FireModeSelectionScreenClass; // 0x650 (0x28)
	class UClass* MOTDWidgetClass; // 0x678 (0x8)
	class UClass* SettingsUpdatedClass; // 0x680 (0x8)
	class UClass* EnterCabinClass; // 0x688 (0x8)
	struct TWeakObjectPtr<class UClass> VideoPlayerClass; // 0x690 (0x28)
	class UFortStreamMediaSource* VideoStreamSource; // 0x6b8 (0x8)
	struct TWeakObjectPtr<class UClass> MFAModalClass; // 0x6c0 (0x28)
	class UClass* SocialImportPanelClass; // 0x6e8 (0x8)
	class UClass* ConfirmationWindowClass; // 0x6f0 (0x8)
	class UClass* MiniMapManagerClass; // 0x6f8 (0x8)
	class UClass* MapScreenContainerClass; // 0x700 (0x8)
	struct TWeakObjectPtr<class UFortAthenaTabsScreenBase> AthenaTabsScreen; // 0x708 (0x8)
	class UClass* PlayerBannedScreenClass; // 0x710 (0x8)
	class UAthenaMapScreenContainer* MapScreen; // 0x718 (0x8)
	bool bVideoActive; // 0x720 (0x1)
	unsigned char unreflected_721[0x7]; // 0x721 (0x7) 
	class UAthenaTopBar* TopBarWidget; // 0x728 (0x8)
	class UCommonUserWidget* BottomBar; // 0x730 (0x8)
	class UFortActivatableChatWidget* ChatPanelWidget; // 0x738 (0x8)
	class UCommonButtonLegacy* ButtonToggleChat; // 0x740 (0x8)
	class UFortDualBladeMenu* DualBladeMenuWidget; // 0x748 (0x8)
	class UOverlay* OverlayDynamicExtensions; // 0x750 (0x8)
	class UFortGiftBoxItem* NextGiftBox; // 0x758 (0x8)
	struct TArray<struct TWeakObjectPtr<class UFortGiftBoxItem>> RequestedGiftBoxesToDisplay; // 0x760 (0x10)
	unsigned char unreflected_770[0x14]; // 0x770 (0x14) 
	struct FPrimaryAssetId* ApolloIntroPlaylistCurrentPlayerId; // 0x784 (0x8)
	struct FPrimaryAssetId* ApolloIntroPlaylistPastPlayerId; // 0x78c (0x8)
	struct FPrimaryAssetId* ApolloIntroPlaylistNewPlayerId; // 0x794 (0x8)
	struct FPrimaryAssetId* ApolloIntroPlaylist05H95BId; // 0x79c (0x8)
	struct FPrimaryAssetId* ApolloIntroPlaylist20H80BId; // 0x7a4 (0x8)
	struct FPrimaryAssetId* ApolloIntroPlaylist30H70BId; // 0x7ac (0x8)
	struct FPrimaryAssetId* ApolloIntroPlaylist40H60BId; // 0x7b4 (0x8)
	unsigned char unreflected_7bc[0x4]; // 0x7bc (0x4) 
	struct TWeakObjectPtr<class UClass> ApolloIntroFakeLoadingScreenClass; // 0x7c0 (0x28)
	unsigned char padding_7e8[0x128]; // 0x7e8 (0x128)

	/* Functions */

	// Function /Script/FortniteUI.AthenaUIStateWidget_Frontend.StopTrailerTransitionAudioCheck (Has no native function)
	void StopTrailerTransitionAudioCheck(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaUIStateWidget_Frontend.StartTrailerTransitionAudioCheck (Has no native function)
	void StartTrailerTransitionAudioCheck(class UMediaPlayer*& MediaPlayer); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaUIStateWidget_Frontend.SetVideoActive (Underlying native function: SetVideoActive 0xa45ea88)
	void SetVideoActive(bool& bActive); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaUIStateWidget_Frontend.OnSetFrontendVisibilityMode (Has no native function)
	void OnSetFrontendVisibilityMode(enum EFrontendVisibilityMode& InFrontendVisibilityMode); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaUIStateWidget_Frontend.HideDebugFlowText (Has no native function)
	void HideDebugFlowText(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaUIStateWidget_Frontend.HandleToggleFullscreenMap (Underlying native function: HandleToggleFullscreenMap 0xa45c60c)
	void HandleToggleFullscreenMap(bool& bFullscreenMapVisible); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaUIStateWidget_Frontend.DisplayDebugFlowText (Has no native function)
	void DisplayDebugFlowText(struct FText& DebugFlowText); // (Event | Protected | HasOutParms | BlueprintEvent)
};

