// Class /Script/FortniteGame.FortMinigameSettingsBuilding
// Size: 0x490
class AFortMinigameSettingsBuilding : public AInfo
{
	unsigned char unreflected_288[0x28]; // 0x288 (0x28) 
	class UFortCreativeVolumeLinkComponent* CreativeLinkComponent; // 0x2b0 (0x8)
	struct TArray<struct FText> GameDescriptionData; // 0x2b8 (0x10)
	struct FText GameNameData; // 0x2c8 (0x18)
	bool bShowIslandCodeWatermark; // 0x2e0 (0x1)
	unsigned char unreflected_2e1[0x7]; // 0x2e1 (0x7) 
	struct FMulticastInlineDelegate OnGameDescriptionDataChanged; // 0x2e8 (0x10)
	struct FMulticastInlineDelegate OnGameNameDataChanged; // 0x2f8 (0x10)
	struct FMulticastInlineDelegate OnVolumeMachineSet; // 0x308 (0x10)
	struct FMulticastInlineDelegate OnShowPublishWatermarkChanged; // 0x318 (0x10)
	bool bAllowOutOfBounds; // 0x328 (0x1)
	bool bKeepPlayerBuiltStructuresBetweenRounds; // 0x329 (0x1)
	bool bWasUsingDirectEventBindingWhenSaved; // 0x32a (0x1)
	bool bExposeLinkedVolumePropertiesForEditing; // 0x32b (0x1)
	unsigned char unreflected_32c[0x4]; // 0x32c (0x4) 
	struct FCreativeIslandMatchmakingSettings MatchmakingSettings; // 0x330 (0x50)
	enum EFortCreativeEventSystemType EventSystem; // 0x380 (0x1)
	enum EMMSRulePreset MatchmakingType; // 0x381 (0x1)
	bool bOverrideRespectParties; // 0x382 (0x1)
	enum EMMSPrivacy MatchmakingPrivacy; // 0x383 (0x1)
	bool bPrefersRespectingPartiesFromMMS; // 0x384 (0x1)
	unsigned char unreflected_385[0x3]; // 0x385 (0x3) 
	int MaxPlayers; // 0x388 (0x4)
	enum EMMSPlayersPerTeamPreset TeamSize; // 0x38c (0x1)
	unsigned char unreflected_38d[0x3]; // 0x38d (0x3) 
	struct FCreativeTeamOption* JoinInProgress; // 0x390 (0x8)
	unsigned char unreflected_398[0x2]; // 0x398 (0x2) 
	bool bShowResourceFeedOnEliminations; // 0x39a (0x1)
	unsigned char unreflected_39b[0x5]; // 0x39b (0x5) 
	class AActor* SettingsVolume; // 0x3a0 (0x8)
	struct FGuid SavedActorGuid; // 0x3a8 (0x10)
	unsigned char unreflected_3b8[0x20]; // 0x3b8 (0x20) 
	struct FMinigamePostGameSettings PostGameSettingsOverride; // 0x3d8 (0xb8)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.UpdateMatchmakingSettings (Underlying native function: UpdateMatchmakingSettings 0x88cb948)
	void UpdateMatchmakingSettings(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.StartMinigame_BP (Has no native function)
	void StartMinigameBP(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.SetGameDescription (Underlying native function: SetGameDescription 0x88c91b8)
	void SetGameDescription(struct FText& GameName, struct TArray<struct FText>& GameDescriptionText); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.OverridePostGameSettings (Underlying native function: OverridePostGameSettings 0x88c7f2c)
	void OverridePostGameSettings(struct FMinigamePostGameSettings& NewSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.OnRep_SettingsVolume (Underlying native function: OnRep_SettingsVolume 0x88c7de4)
	void OnRepSettingsVolume(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.OnRep_GameNameData (Underlying native function: OnRep_GameNameData 0x88c7d40)
	void OnRepGameNameData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.OnRep_GameDescriptionData (Underlying native function: OnRep_GameDescriptionData 0x88c7d24)
	void OnRepGameDescriptionData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.OnMinigameStarted (Underlying native function: OnMinigameStarted 0x273fd14)
	void OnMinigameStarted(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.OnMinigameSettingsBuildingShowPublishWatermarkChanged (Underlying native function: OnMinigameSettingsBuildingShowPublishWatermarkChanged 0x88c7bb4)
	void OnMinigameSettingsBuildingShowPublishWatermarkChanged(class AFortMinigameSettingsBuilding*& MinigameSettingsBuilding, bool& bNewShowPublishWatermark); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.OnMinigameEnded (Underlying native function: OnMinigameEnded 0x273fd14)
	void OnMinigameEnded(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.OnLinkedVolumeSet (Underlying native function: OnLinkedVolumeSet 0x88c7af0)
	void OnLinkedVolumeSet(class AFortVolume*& PreviousVolume, class AFortVolume*& NewVolume); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.K2_MigrateLegacyUserOptions (Has no native function)
	void K2MigrateLegacyUserOptions(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.K2_HandleUserOptionsLoaded (Has no native function)
	void K2HandleUserOptionsLoaded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.K2_HandleUserOptionsChanged (Has no native function)
	void K2HandleUserOptionsChanged(struct TArray<struct FName>& ChangedPropertyNames); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.GetTeamSetting (Has no native function)
	int GetTeamSetting(); // (Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.GetPostGameSettings (Underlying native function: GetPostGameSettings 0x88c44ec)
	struct FMinigamePostGameSettings GetPostGameSettings(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.GetMinigame (Underlying native function: GetMinigame 0x88c3c68)
	class AFortMinigame* GetMinigame(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.GetMaxHUDTrackers (Has no native function)
	int GetMaxHUDTrackers(); // (Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.GetGameName (Underlying native function: GetGameName 0x88c3abc)
	struct FText GetGameName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.GetGameDescription (Underlying native function: GetGameDescription 0x88c3a68)
	struct TArray<struct FText> GetGameDescription(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.CheckShowPublishWatermarkChanged (Underlying native function: CheckShowPublishWatermarkChanged 0x88c2648)
	void CheckShowPublishWatermarkChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigameSettingsBuilding.AbandonMinigame_BP (Has no native function)
	void AbandonMinigameBP(); // (Event | Public | BlueprintCallable | BlueprintEvent)
};

