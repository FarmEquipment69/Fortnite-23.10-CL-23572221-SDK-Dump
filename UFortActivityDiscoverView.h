// Class /Script/DiscoveryBrowserUI.FortActivityDiscoverView
// Size: 0x6e0
class UFortActivityDiscoverView : public UFortActivityBrowserRowView
{
	struct TArray<enum ECommonPlatformType> PlatformMovieBlacklist; // 0x620 (0x10)
	struct TArray<struct FString> ActivityMovieBlacklist; // 0x630 (0x10)
	bool bPlayDetailsAnimationOnScreenOpen; // 0x640 (0x1)
	unsigned char unreflected_641[0x3]; // 0x641 (0x3) 
	float DetailsDisplayUpdateDelay; // 0x644 (0x4)
	class UClass* MovieWidgetClass; // 0x648 (0x8)
	class UFortActivityDetailsDisplay* DetailsDisplaySelectedActivity; // 0x650 (0x8)
	class UFortActivityDetailsDisplay* DetailsDisplayPromotedActivity; // 0x658 (0x8)
	class UPanelWidget* PanelVideoSlot; // 0x660 (0x8)
	class UPanelWidget* PanelPromotedVideoSlot; // 0x668 (0x8)
	class UFortActivatableMovieWidget* ActivityMovieWidget; // 0x670 (0x8)
	class UFortActivatableMovieWidget* PromotedActivityMovieWidget; // 0x678 (0x8)
	unsigned char unreflected_680[0x48]; // 0x680 (0x48) 
	class UWidgetAnimation* BoundKeyArtOutroAnimation; // 0x6c8 (0x8)
	unsigned char padding_6d0[0x10]; // 0x6d0 (0x10)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnUpdateDetailsDisplay (Has no native function)
	void OnUpdateDetailsDisplay(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPreviewImageChanged (Has no native function)
	void OnPreviewImageChanged(bool& bIsLoading, class UTexture*& Texture); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtOutro (Has no native function)
	void OnPlayKeyArtOutro(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtIntro (Has no native function)
	void OnPlayKeyArtIntro(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePreEndEvent (Has no native function)
	void OnMoviePreEndEvent(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePlayingChanged (Has no native function)
	void OnMoviePlayingChanged(bool& bIsPlaying); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingSeasonalContent (Underlying native function: IsShowingSeasonalContent 0x7068050)
	bool IsShowingSeasonalContent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingPromotedContent (Underlying native function: IsShowingPromotedContent 0x7067f94)
	bool IsShowingPromotedContent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsInOutroState (Underlying native function: IsInOutroState 0x7067f48)
	bool IsInOutroState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsImageLoading (Underlying native function: IsImageLoading 0x7067f18)
	bool IsImageLoading(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaStarted (Underlying native function: HandleMovieWidgetMediaStarted 0x7067c60)
	void HandleMovieWidgetMediaStarted(); // (Final | Native | Private)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaPreEndEvent (Underlying native function: HandleMovieWidgetMediaPreEndEvent 0x7067c18)
	void HandleMovieWidgetMediaPreEndEvent(); // (Final | Native | Private)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetPromotedMovieWidget (Underlying native function: GetPromotedMovieWidget 0x2641fe8)
	class UFortActivatableMovieWidget* GetPromotedMovieWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetMovieWidget (Underlying native function: GetMovieWidget 0x7067b20)
	class UFortActivatableMovieWidget* GetMovieWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetKeyArtOutroAnimation (Underlying native function: GetKeyArtOutroAnimation 0x7067af8)
	class UWidgetAnimation* GetKeyArtOutroAnimation(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetCurrentTexture (Underlying native function: GetCurrentTexture 0x7067998)
	class UTexture* GetCurrentTexture(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.CheckUpdateDetailsDelay (Underlying native function: CheckUpdateDetailsDelay 0x70678b4)
	void CheckUpdateDetailsDelay(); // (Final | Native | Private)
};

