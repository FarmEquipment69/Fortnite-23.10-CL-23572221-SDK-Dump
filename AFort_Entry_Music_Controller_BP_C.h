// BlueprintGeneratedClass /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
// Size: 0x2c8
class AFort_Entry_Music_Controller_BP_C : public AFortEntryMusicController
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class USceneComponent* SceneComponent; // 0x290 (0x8)
	double FadeOutTime; // 0x298 (0x8)
	class USoundBase* CurrentMusic; // 0x2a0 (0x8)
	bool IsMusicActivateOverride; // 0x2a8 (0x1)
	unsigned char unreflected_2a9[0x7]; // 0x2a9 (0x7) 
	class UAthenaMusicPackItemDefinition* MusicPackToPlayLater; // 0x2b0 (0x8)
	bool bCanRetriggerNextMusicPack; // 0x2b8 (0x1)
	bool bRegisteredForAnalysis; // 0x2b9 (0x1)
	unsigned char unreflected_2ba[0x6]; // 0x2ba (0x6) 
	double VolumeMultiplier; // 0x2c0 (0x8)

	/* Functions */

	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music (Has no native function)
	void ChangeMusic(class USoundBase*& NewMusic, double& StartTime, double& VolumeMultiplier, struct FGameplayTag& EventTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ListenToMusicPacks (Has no native function)
	void ListenToMusicPacks(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.OnMusicPackChanged (Has no native function)
	void OnMusicPackChanged(class UAthenaMusicPackItemDefinition*& NewMusicPack, float& StartTimeOffset); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Lobby Music Override (Has no native function)
	void LobbyMusicOverride(bool& LobbyMusicActivate, class USoundBase*& NewMusic); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.SetCanRetriggerNextMusicPack (Has no native function)
	void SetCanRetriggerNextMusicPack(bool& bCanRetriggerNextMusicPack); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.PlayEquippedMusicPack (Has no native function)
	void PlayEquippedMusicPack(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.StartMusic (Has no native function)
	void StartMusic(); // (Event | Public | BlueprintEvent)

	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP (Has no native function)
	void ExecuteUbergraphFortEntryMusicControllerBP(int& EntryPoint, class UFortMusicContext*& CallFuncGetContextReturnValue, class UAthenaMusicPackItemDefinition*& K2NodeCustomEventNewMusicPack, float& K2NodeCustomEventStartTimeOffset, class USoundBase*& K2NodeCustomEventNewMusic1, double& K2NodeCustomEventStartTime, double& K2NodeCustomEventVolumeMultiplier, struct FGameplayTag& K2NodeCustomEventEventTag, bool& CallFuncIsValidReturnValue, bool& CallFuncIsGameplayTagValidReturnValue, bool& K2NodeCustomEventLobbyMusicActivate, class USoundBase*& K2NodeCustomEventNewMusic, class UObject*& CallFuncConvSoftObjectReferenceToObjectReturnValue, class USoundBase*& K2NodeDynamicCastAsSoundBase, bool& K2NodeDynamicCastbSuccess, bool& K2NodeCustomEventbCanRetriggerNextMusicPack, class UFortAudioAnalysisSubsystem*& CallFuncGetWorldSubsystemReturnValue, class UMusicEventSubsystem*& CallFuncGetGameInstanceSubsystemReturnValue, class UMusicEventSubsystem*& CallFuncGetGameInstanceSubsystemReturnValue1, struct FGameplayTagContainer& TempstructVariable, class UFortMusicContext*& CallFuncGetContextReturnValue1, struct FGameplayTagContainer& TempstructVariable1, class UAthenaMusicPackItemDefinition*& CallFuncGetEquippedMusicPackReturnValue, bool& TempboolVariable, struct FGameplayTag& TempstructVariable2, struct FGameplayTagContainer& K2NodeSelectDefault, bool& TempboolVariable1, class UFortMusicContext*& CallFuncGetContextReturnValue2, struct FGameplayTag& K2NodeSelectDefault1, bool& CallFuncIsDefaultMusicEquippedReturnValue, class UAudioComponent*& CallFuncAddEventReturnValue, bool& CallFuncIsValidReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UFortMusicContext*& CallFuncGetContextReturnValue3, class UAthenaMusicPackItemDefinition*& CallFuncGetEquippedMusicPackReturnValue1, double& CallFuncChangeMusicStartTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

