// Class /Script/FortniteGame.FortPlayerControllerFrontEnd
// Size: 0x2db0
class AFortPlayerControllerFrontEnd : public AFortPlayerController
{
	struct FMulticastInlineDelegate FrontEndMatchmakingStarted; // 0x2c50 (0x10)
	struct FMulticastInlineDelegate FrontEndMatchmakingComplete; // 0x2c60 (0x10)
	unsigned char unreflected_2c70[0x68]; // 0x2c70 (0x68) 
	class UFortControllerComponent_MapDiscoverability* DiscoverabilityComponent; // 0x2cd8 (0x8)
	class UFortControllerComponent_SeasonItem* SeasonItemComponent; // 0x2ce0 (0x8)
	unsigned char unreflected_2ce8[0x38]; // 0x2ce8 (0x38) 
	bool bUnlockAllZones; // 0x2d20 (0x1)
	unsigned char unreflected_2d21[0x67]; // 0x2d21 (0x67) 
	class UAthenaMarkerComponent* MarkerComponent; // 0x2d88 (0x8)
	unsigned char unreflected_2d90[0x10]; // 0x2d90 (0x10) 
	bool bEnableSTWAccoladeRedeem; // 0x2da0 (0x1)
	unsigned char padding_2da1[0xf]; // 0x2da1 (0xf)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerControllerFrontEnd.StopWriteToAudioFile (Underlying native function: StopWriteToAudioFile 0x273fd14)
	void StopWriteToAudioFile(); // (Final | Exec | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerFrontEnd.StopFacialAnimationTest (Underlying native function: StopFacialAnimationTest 0x273fd14)
	void StopFacialAnimationTest(); // (Final | Exec | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerFrontEnd.StartWriteToAudioFile (Underlying native function: StartWriteToAudioFile 0x273fd14)
	void StartWriteToAudioFile(); // (Final | Exec | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerFrontEnd.RunFacialAnimationTest (Underlying native function: RunFacialAnimationTest 0x8b136bc)
	void RunFacialAnimationTest(struct FString& WaveFileName, int& SampleRate); // (Final | Exec | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerFrontEnd.RedeemSTWAccolades (Underlying native function: RedeemSTWAccolades 0x8dba38c)
	void RedeemSTWAccolades(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerFrontEnd.OpenEmotePicker (Underlying native function: OpenEmotePicker 0x8dba364)
	void OpenEmotePicker(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortPlayerControllerFrontEnd.OnMatchMakingDiscoveryRequested__DelegateSignature (Has no native function)
	void OnMatchMakingDiscoveryRequestedDelegateSignature(struct FString& IslandMnemonic, struct FName& PlaylistName); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPlayerControllerFrontEnd.OnFrontEndMatchmakingStarted__DelegateSignature (Has no native function)
	void OnFrontEndMatchmakingStartedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPlayerControllerFrontEnd.OnFrontEndMatchmakingComplete__DelegateSignature (Has no native function)
	void OnFrontEndMatchmakingCompleteDelegateSignature(bool& bSuccess); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortPlayerControllerFrontEnd.IsVoiceChatPlayerMuted (Underlying native function: IsVoiceChatPlayerMuted 0x8dba210)
	bool IsVoiceChatPlayerMuted(struct FUniqueNetIdRepl& UniqueNetId); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerControllerFrontEnd.IsInVoiceChat (Underlying native function: IsInVoiceChat 0x8dba180)
	bool IsInVoiceChat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerControllerFrontEnd.HasPendingPhoenixLevelUpNotifications (Underlying native function: HasPendingPhoenixLevelUpNotifications 0x8dba148)
	bool HasPendingPhoenixLevelUpNotifications(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerFrontEnd.EmotePickerSelect (Underlying native function: EmotePickerSelect 0x8db9d04)
	void EmotePickerSelect(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerFrontEnd.EmotePickerPrevWheel (Underlying native function: EmotePickerPrevWheel 0x8db9cd4)
	void EmotePickerPrevWheel(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerFrontEnd.EmotePickerNextWheel (Underlying native function: EmotePickerNextWheel 0x8db9ca4)
	void EmotePickerNextWheel(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerFrontEnd.CloseEmotePicker (Underlying native function: CloseEmotePicker 0x8db9b4c)
	void CloseEmotePicker(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

