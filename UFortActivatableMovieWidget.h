// Class /Script/FortniteUI.FortActivatableMovieWidget
// Size: 0x698
class UFortActivatableMovieWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	bool bOverwriteSkip; // 0x3b0 (0x1)
	unsigned char unreflected_3b1[0x7]; // 0x3b1 (0x7) 
	struct FMulticastInlineDelegate OnMediaError; // 0x3b8 (0x10)
	bool bMediaPreEndCheckEnabled; // 0x3c8 (0x1)
	unsigned char unreflected_3c9[0x7]; // 0x3c9 (0x7) 
	struct FVideoWidgetConfig VideoConfig; // 0x3d0 (0x98)
	unsigned char unreflected_468[0x18]; // 0x468 (0x18) 
	bool bInWholeFade; // 0x480 (0x1)
	bool bInColorFade; // 0x481 (0x1)
	unsigned char unreflected_482[0x6]; // 0x482 (0x6) 
	struct FDataTableRowHandle PressToSkipAction; // 0x488 (0x10)
	struct FDataTableRowHandle HoldToSkipAction; // 0x498 (0x10)
	class UImage* ImageColor; // 0x4a8 (0x8)
	bool bShowSubtitles; // 0x4b0 (0x1)
	bool bNoAudio; // 0x4b1 (0x1)
	bool bEnableInputControl; // 0x4b2 (0x1)
	unsigned char unreflected_4b3[0x5]; // 0x4b3 (0x5) 
	class UMediaPlayer* VideoPlayer; // 0x4b8 (0x8)
	class USoundClass* SoundClass; // 0x4c0 (0x8)
	class UMediaSoundComponent* SoundComponent; // 0x4c8 (0x8)
	class UFortMediaSubtitlesPlayer* SubtitlePlayer; // 0x4d0 (0x8)
	class ULocalizedOverlays* SubtitleOverlays; // 0x4d8 (0x8)
	unsigned char unreflected_4e0[0x50]; // 0x4e0 (0x50) 
	float LastInteractionTime; // 0x530 (0x4)
	bool bControlsVisible; // 0x534 (0x1)
	unsigned char unreflected_535[0x3]; // 0x535 (0x3) 
	class UImage* ImageVideoTexture; // 0x538 (0x8)
	struct FLinearColor VideoTextureColor; // 0x540 (0x10)
	class USubtitleDisplay* Subtitles; // 0x550 (0x8)
	class UCommonButtonBase* ButtonSkip; // 0x558 (0x8)
	class UImage* ImageThrobber; // 0x560 (0x8)
	class UBorder* SafeZonePadding; // 0x568 (0x8)
	struct FLinearColor SafeZoneColor; // 0x570 (0x10)
	class USoundMix* ActiveSoundMix; // 0x580 (0x8)
	class USoundSubmixBase* DefaultSubmix; // 0x588 (0x8)
	class USoundSubmixBase* LicensedSubmix; // 0x590 (0x8)
	unsigned char unreflected_598[0x8]; // 0x598 (0x8) 
	class UFortMediaPlayerCtrl* MediaController; // 0x5a0 (0x8)
	struct FMulticastInlineDelegate MediaPreEndEvent; // 0x5a8 (0x10)
	struct FMulticastInlineDelegate MediaVolumeChangeEvent; // 0x5b8 (0x10)
	struct FMulticastInlineDelegate MediaStartedEvent; // 0x5c8 (0x10)
	unsigned char unreflected_5d8[0x18]; // 0x5d8 (0x18) 
	struct FMulticastInlineDelegate WidgetEndReachedEvent; // 0x5f0 (0x10)
	unsigned char padding_600[0x98]; // 0x600 (0x98)

	/* Functions */

	// Function /Script/FortniteUI.FortActivatableMovieWidget.WholeFadeComplete (Underlying native function: WholeFadeComplete 0xa7365d8)
	void WholeFadeComplete(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.StreamedVideoOnUrlSuccess (Underlying native function: StreamedVideoOnUrlSuccess 0x286576c)
	void StreamedVideoOnUrlSuccess(struct FString& URL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.StreamedVideoOnUrlFailure (Underlying native function: StreamedVideoOnUrlFailure 0xa735d30)
	void StreamedVideoOnUrlFailure(struct FString& URL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.Stop (Underlying native function: Stop 0xa735a34)
	void Stop(bool& InForceClose); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.StartWholeFade (Has no native function)
	void StartWholeFade(bool& bReverse); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.StartFadeFromColor (Has no native function)
	void StartFadeFromColor(bool& bEnd, enum UFortActivatablePrePostRollStates& Reason, bool& bReverse); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.ShouldAutoPlayVideo (Underlying native function: ShouldAutoPlayVideo 0xa73583c)
	bool ShouldAutoPlayVideo(struct FName& AssetName, bool& bAllowRecord); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.SetMediaPreEndTimeSeconds (Underlying native function: SetMediaPreEndTimeSeconds 0xa73416c)
	void SetMediaPreEndTimeSeconds(float& InSeconds); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.SetFadeTime (Underlying native function: SetFadeTime 0xa733c54)
	void SetFadeTime(double& InFadeTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.SetAudioDisable (Underlying native function: SetAudioDisable 0xa7337fc)
	void SetAudioDisable(bool& bInDisable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.Play (Underlying native function: Play 0xa733448)
	void Play(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.LoadStreamingVideo (Underlying native function: LoadStreamingVideo 0x27b1f78)
	void LoadStreamingVideo(struct FVideoWidgetConfig& Config); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.GetVideoTexture (Underlying native function: GetVideoTexture 0xa731fb4)
	class UImage* GetVideoTexture(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.GetMediaPlayer (Underlying native function: GetMediaPlayer 0xa731cb4)
	class UMediaPlayer* GetMediaPlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.FadeInFromColorComplete (Underlying native function: FadeInFromColorComplete 0xa730fc4)
	void FadeInFromColorComplete(enum UFortActivatablePrePostRollStates& Reason); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.EnableFadeInFromColor (Underlying native function: EnableFadeInFromColor 0xa730e34)
	void EnableFadeInFromColor(bool& bInEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivatableMovieWidget.Close (Underlying native function: Close 0xa730a7c)
	void Close(); // (Final | Native | Public | BlueprintCallable)
};

