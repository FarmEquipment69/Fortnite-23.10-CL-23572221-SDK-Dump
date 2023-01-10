// Class /Script/FortniteGame.FortCheatManager
// Size: 0x158
class UFortCheatManager : public UCheatManager
{
	unsigned char unreflected_88[0x10]; // 0x88 (0x10) 
	unsigned char bDebugInteractTrace; // 0x98 (0x1)
	unsigned char bDebugPickupSpline; // 0x98 (0x1)
	unsigned char bEnableScoreboard; // 0x98 (0x1)
	unsigned char bDebugBounceCurve; // 0x98 (0x1)
	unsigned char bDebugBeautyMode; // 0x98 (0x1)
	unsigned char bDisplayWindDebugging; // 0x98 (0x1)
	unsigned char bDebugStructuralSupportSystem; // 0x98 (0x1)
	unsigned char bInfiniteStamina; // 0x98 (0x1)
	unsigned char bShowGameDifficultyHUD; // 0x99 (0x1)
	unsigned char bShowIntensityHUD; // 0x99 (0x1)
	unsigned char bShowMaxAIHUD; // 0x99 (0x1)
	unsigned char bShowItemIDsOnCards; // 0x99 (0x1)
	unsigned char bEnableContextMenus; // 0x99 (0x1)
	unsigned char bUnlimitedHealth; // 0x99 (0x1)
	unsigned char bCanExitWorld; // 0x99 (0x1)
	unsigned char bUnlimitedAIHealth; // 0x99 (0x1)
	unsigned char bFreezeAILOD; // 0x9a (0x1)
	unsigned char bForceAILOD; // 0x9a (0x1)
	unsigned char unreflected_9b[0x1]; // 0x9b (0x1) 
	int AbilitySystemCycleCounter; // 0x9c (0x4)
	enum EFortAILODLevel ForcedAILODValue; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct TWeakObjectPtr<class UBuildingTextureData> TransparentTextureData; // 0xa8 (0x28)
	unsigned char padding_d0[0x88]; // 0xd0 (0x88)

	/* Functions */

	// Function /Script/FortniteGame.FortCheatManager.WriteSharedPersistenceValue (Underlying native function: WriteSharedPersistenceValue 0x273fd14)
	void WriteSharedPersistenceValue(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.WriteLootReport (Underlying native function: WriteLootReport 0x273fd14)
	void WriteLootReport(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.WriteLevelSaveComponentsToDisk (Underlying native function: WriteLevelSaveComponentsToDisk 0x273fd14)
	void WriteLevelSaveComponentsToDisk(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.WargameDebug (Underlying native function: WargameDebug 0x6df775c)
	void WargameDebug(bool& Value); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.WannaGun (Underlying native function: WannaGun 0x273fd14)
	void WannaGun(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.VkPalette_RemoveLinkCode (Underlying native function: VkPalette_RemoveLinkCode 0x8b0ffc8)
	void VkPaletteRemoveLinkCode(struct FOnlineLinkId& LinkId); // (Final | Exec | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager.VkPalette_Clear (Underlying native function: VkPalette_Clear 0x273fd14)
	void VkPaletteClear(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.VkPalette_AddLinkCode (Underlying native function: VkPalette_AddLinkCode 0x8b0ffc8)
	void VkPaletteAddLinkCode(struct FOnlineLinkId& LinkId); // (Final | Exec | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager.ViewStuck (Underlying native function: ViewStuck 0x273fd14)
	void ViewStuck(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.UploadLogs (Underlying native function: UploadLogs 0x8b136bc)
	void UploadLogs(struct FString& LogPrefix, int& TailSizeKb); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.UnlockPerk (Underlying native function: UnlockPerk 0x6e8edb4)
	void UnlockPerk(int& Count); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.UnlockDebugCamera (Underlying native function: UnlockDebugCamera 0x273fd14)
	void UnlockDebugCamera(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.UnforceAILODs (Underlying native function: UnforceAILODs 0x273fd14)
	void UnforceAILODs(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TutorialRemoveHighlight (Underlying native function: TutorialRemoveHighlight 0x6f57cd8)
	void TutorialRemoveHighlight(struct FName& Highlight); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TutorialRemoveHidden (Underlying native function: TutorialRemoveHidden 0x6f57cd8)
	void TutorialRemoveHidden(struct FName& Hidden); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TutorialListHighlights (Underlying native function: TutorialListHighlights 0x273fd14)
	void TutorialListHighlights(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TutorialListHidden (Underlying native function: TutorialListHidden 0x273fd14)
	void TutorialListHidden(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TutorialListAll (Underlying native function: TutorialListAll 0x273fd14)
	void TutorialListAll(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TutorialAddHighlight (Underlying native function: TutorialAddHighlight 0x6f57cd8)
	void TutorialAddHighlight(struct FName& Highlight); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TutorialAddHidden (Underlying native function: TutorialAddHidden 0x6f57cd8)
	void TutorialAddHidden(struct FName& Hidden); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TurnOnAllReplaySpotLightsDebugDraw (Underlying native function: TurnOnAllReplaySpotLightsDebugDraw 0x273fd14)
	void TurnOnAllReplaySpotLightsDebugDraw(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TurnOffAllReplaySpotLightsDebugDraw (Underlying native function: TurnOffAllReplaySpotLightsDebugDraw 0x273fd14)
	void TurnOffAllReplaySpotLightsDebugDraw(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TriggerOutOfStaminaFeedback (Underlying native function: TriggerOutOfStaminaFeedback 0x273fd14)
	void TriggerOutOfStaminaFeedback(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TriggerEndOfMatch (Underlying native function: TriggerEndOfMatch 0x273fd14)
	void TriggerEndOfMatch(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TriggerDelayReturnToLobby (Underlying native function: TriggerDelayReturnToLobby 0x735ad48)
	void TriggerDelayReturnToLobby(int& MinTime, int& MaxTime); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleWindDebugVolumeDisplay (Underlying native function: ToggleWindDebugVolumeDisplay 0x273fd14)
	void ToggleWindDebugVolumeDisplay(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleWindDebugDisplay (Underlying native function: ToggleWindDebugDisplay 0x6df7bc0)
	void ToggleWindDebugDisplay(float& NewRefreshRate); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleWindDebugDeltaBoundsDisplay (Underlying native function: ToggleWindDebugDeltaBoundsDisplay 0x273fd14)
	void ToggleWindDebugDeltaBoundsDisplay(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleWalkOnWalls (Underlying native function: ToggleWalkOnWalls 0x273fd14)
	void ToggleWalkOnWalls(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleVoiceDebug (Underlying native function: ToggleVoiceDebug 0x273fd14)
	void ToggleVoiceDebug(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleUtilitiesGraph (Underlying native function: ToggleUtilitiesGraph 0x8b167c0)
	void ToggleUtilitiesGraph(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleUseNewItemCards (Underlying native function: ToggleUseNewItemCards 0x273fd14)
	void ToggleUseNewItemCards(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleUnlimitedHealth (Underlying native function: ToggleUnlimitedHealth 0x273fd14)
	void ToggleUnlimitedHealth(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleUnlimitedAIHealth (Underlying native function: ToggleUnlimitedAIHealth 0x273fd14)
	void ToggleUnlimitedAIHealth(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleTreeVisibility (Underlying native function: ToggleTreeVisibility 0x273fd14)
	void ToggleTreeVisibility(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleSpawnPointsHUD (Underlying native function: ToggleSpawnPointsHUD 0x273fd14)
	void ToggleSpawnPointsHUD(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleSpawningEnabled (Underlying native function: ToggleSpawningEnabled 0x273fd14)
	void ToggleSpawningEnabled(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleSmartBuild (Underlying native function: ToggleSmartBuild 0x273fd14)
	void ToggleSmartBuild(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.ToggleSkipNight (Underlying native function: ToggleSkipNight 0x273fd14)
	void ToggleSkipNight(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.ToggleSimulatedSquadSpeaking (Underlying native function: ToggleSimulatedSquadSpeaking 0x8b16794)
	void ToggleSimulatedSquadSpeaking(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleShotLogging (Underlying native function: ToggleShotLogging 0x273fd14)
	void ToggleShotLogging(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleRBAN (Underlying native function: ToggleRBAN 0x273fd14)
	void ToggleRBAN(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleQuickEdit (Underlying native function: ToggleQuickEdit 0x273fd14)
	void ToggleQuickEdit(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.TogglePlayerNames (Underlying native function: TogglePlayerNames 0x8b1677c)
	void TogglePlayerNames(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TogglePIDValuesGraph (Underlying native function: TogglePIDValuesGraph 0x8b16764)
	void TogglePIDValuesGraph(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TogglePIDContributionsGraph (Underlying native function: TogglePIDContributionsGraph 0x8b1674c)
	void TogglePIDContributionsGraph(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TogglePickupSpline (Underlying native function: TogglePickupSpline 0x273fd14)
	void TogglePickupSpline(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TogglePhoebeIgnorePlayers (Underlying native function: TogglePhoebeIgnorePlayers 0x273fd14)
	void TogglePhoebeIgnorePlayers(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleNoCoolDown (Underlying native function: ToggleNoCoolDown 0x273fd14)
	void ToggleNoCoolDown(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleMustUseJetpackToggle (Underlying native function: ToggleMustUseJetpackToggle 0x273fd14)
	void ToggleMustUseJetpackToggle(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleMaxAIHUD (Underlying native function: ToggleMaxAIHUD 0x273fd14)
	void ToggleMaxAIHUD(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleLogCharacterCustomization (Underlying native function: ToggleLogCharacterCustomization 0x273fd14)
	void ToggleLogCharacterCustomization(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleItemIdsOnCards (Underlying native function: ToggleItemIdsOnCards 0x273fd14)
	void ToggleItemIdsOnCards(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleIsLobbyTimerPaused (Underlying native function: ToggleIsLobbyTimerPaused 0x273fd14)
	void ToggleIsLobbyTimerPaused(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleInWorldScoreNumbers (Underlying native function: ToggleInWorldScoreNumbers 0x273fd14)
	void ToggleInWorldScoreNumbers(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleInteractTrace (Underlying native function: ToggleInteractTrace 0x273fd14)
	void ToggleInteractTrace(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleIntensityHUD (Underlying native function: ToggleIntensityHUD 0x273fd14)
	void ToggleIntensityHUD(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleIntensityGraph (Underlying native function: ToggleIntensityGraph 0x8b16734)
	void ToggleIntensityGraph(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleInfiniteStamina (Underlying native function: ToggleInfiniteStamina 0x273fd14)
	void ToggleInfiniteStamina(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleInfiniteDurability (Underlying native function: ToggleInfiniteDurability 0x273fd14)
	void ToggleInfiniteDurability(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleInfiniteConsumables (Underlying native function: ToggleInfiniteConsumables 0x273fd14)
	void ToggleInfiniteConsumables(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleInfiniteAmmo (Underlying native function: ToggleInfiniteAmmo 0x273fd14)
	void ToggleInfiniteAmmo(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleImprovedDBNO (Underlying native function: ToggleImprovedDBNO 0x273fd14)
	void ToggleImprovedDBNO(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.ToggleIgnoreAll (Underlying native function: ToggleIgnoreAll 0x273fd14)
	void ToggleIgnoreAll(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleHeroVisibility (Underlying native function: ToggleHeroVisibility 0x273fd14)
	void ToggleHeroVisibility(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleGamepadPlaytest (Underlying native function: ToggleGamepadPlaytest 0x273fd14)
	void ToggleGamepadPlaytest(); // (Final | Exec | Native | Public | Const)

	// Function /Script/FortniteGame.FortCheatManager.ToggleGameDifficultyHUD (Underlying native function: ToggleGameDifficultyHUD 0x273fd14)
	void ToggleGameDifficultyHUD(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleFreezeAILOD (Underlying native function: ToggleFreezeAILOD 0x273fd14)
	void ToggleFreezeAILOD(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleExplorationLogging (Underlying native function: ToggleExplorationLogging 0x273fd14)
	void ToggleExplorationLogging(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleExplorationBadgeView (Underlying native function: ToggleExplorationBadgeView 0x273fd14)
	void ToggleExplorationBadgeView(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleEncounterModifierTags (Underlying native function: ToggleEncounterModifierTags 0x273fd14)
	void ToggleEncounterModifierTags(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleEncounterEQSDebug (Underlying native function: ToggleEncounterEQSDebug 0x273fd14)
	void ToggleEncounterEQSDebug(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleDrawTurnTransitionDebug (Underlying native function: ToggleDrawTurnTransitionDebug 0x273fd14)
	void ToggleDrawTurnTransitionDebug(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleDrawTargetSelectionDebugByClass (Underlying native function: ToggleDrawTargetSelectionDebugByClass 0x6df70d4)
	void ToggleDrawTargetSelectionDebugByClass(class UClass*& TargetSelectionDebugSourceClass); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleDrawTargetSelectionDebug (Underlying native function: ToggleDrawTargetSelectionDebug 0x273fd14)
	void ToggleDrawTargetSelectionDebug(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleDrawRunVariationDebug (Underlying native function: ToggleDrawRunVariationDebug 0x273fd14)
	void ToggleDrawRunVariationDebug(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleDebugHUDObjectiveHeight (Underlying native function: ToggleDebugHUDObjectiveHeight 0x273fd14)
	void ToggleDebugHUDObjectiveHeight(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleContextMenus (Underlying native function: ToggleContextMenus 0x273fd14)
	void ToggleContextMenus(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleBuildingHighlights (Underlying native function: ToggleBuildingHighlights 0x273fd14)
	void ToggleBuildingHighlights(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleBuildingActorsTransparency (Underlying native function: ToggleBuildingActorsTransparency 0x273fd14)
	void ToggleBuildingActorsTransparency(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleAutoRestartMinigame (Underlying native function: ToggleAutoRestartMinigame 0x8b1671c)
	void ToggleAutoRestartMinigame(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleAISpawning (Underlying native function: ToggleAISpawning 0x273fd14)
	void ToggleAISpawning(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleAISpawnCap (Underlying native function: ToggleAISpawnCap 0x273fd14)
	void ToggleAISpawnCap(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleAIDirectorLogging (Underlying native function: ToggleAIDirectorLogging 0x273fd14)
	void ToggleAIDirectorLogging(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleAIDespawning (Underlying native function: ToggleAIDespawning 0x273fd14)
	void ToggleAIDespawning(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ToggleAIAnim (Underlying native function: ToggleAIAnim 0x273fd14)
	void ToggleAIAnim(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestTournamentOver (Underlying native function: TestTournamentOver 0x273fd14)
	void TestTournamentOver(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestSuddenPortChange (Underlying native function: TestSuddenPortChange 0x8b1267c)
	void TestSuddenPortChange(uint32_t& NumConnections); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestSafeZoneLocations (Underlying native function: TestSafeZoneLocations 0x735ad48)
	void TestSafeZoneLocations(int& NumPasses, int& PhaseToDraw); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestRegenId (Underlying native function: TestRegenId 0x273fd14)
	void TestRegenId(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestPlayerCollector (Underlying native function: TestPlayerCollector 0x8b16598)
	void TestPlayerCollector(int& NumPackets, struct FString& Payload); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestPartyMemberRange (Underlying native function: TestPartyMemberRange 0x735ad48)
	void TestPartyMemberRange(int& StartIndex, int& EndIndex); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestPartyMember (Underlying native function: TestPartyMember 0x8b120c4)
	void TestPartyMember(struct FString& ContextName, struct FString& OptionalFriend); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestLeaveGame (Underlying native function: TestLeaveGame 0x273fd14)
	void TestLeaveGame(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestJoin (Underlying native function: TestJoin 0x273fd14)
	void TestJoin(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestFindTeleport (Underlying native function: TestFindTeleport 0x71c76d0)
	void TestFindTeleport(float& X, float& Y, float& Z); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestEncryptAPI (Underlying native function: TestEncryptAPI 0x8b120c4)
	void TestEncryptAPI(struct FString& InUserId, struct FString& InSessionId); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestDisconnect (Underlying native function: TestDisconnect 0x273fd14)
	void TestDisconnect(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestCloseClientConfirmationMessage (Underlying native function: TestCloseClientConfirmationMessage 0x273fd14)
	void TestCloseClientConfirmationMessage(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestCheckFavorite (Underlying native function: TestCheckFavorite 0x273fd14)
	void TestCheckFavorite(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.TestCheckBansAtMatchStart (Underlying native function: TestCheckBansAtMatchStart 0x273fd14)
	void TestCheckBansAtMatchStart(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestChangePartySize (Underlying native function: TestChangePartySize 0x6e8edb4)
	void TestChangePartySize(int& NewSize); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestChangePartyPrivacy (Underlying native function: TestChangePartyPrivacy 0x8b164b8)
	void TestChangePartyPrivacy(bool& bPrivate, bool& bLeaderFriendsOnly, bool& bLeaderInvitesOnly); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestCancelLobby (Underlying native function: TestCancelLobby 0x273fd14)
	void TestCancelLobby(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestCalendarEvents (Underlying native function: TestCalendarEvents 0x6e8f5f8)
	void TestCalendarEvents(struct FString& EventsString); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestBanhammer (Underlying native function: TestBanhammer 0x8b15e20)
	void TestBanhammer(struct FString& InUserId, struct FString& BanCode, struct FString& BanReason, int& DesiredAction, int& BanhammerActivation, int& BanhammerTiming, int& BanhammerMessageType, struct FString& BanhammerCustomMessage, struct FString& BanhammerDetails); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TestAllDevPartyMembers (Underlying native function: TestAllDevPartyMembers 0x273fd14)
	void TestAllDevPartyMembers(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TeleportToSafeZoneNext (Underlying native function: TeleportToSafeZoneNext 0x273fd14)
	void TeleportToSafeZoneNext(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TeleportToSafeZone (Underlying native function: TeleportToSafeZone 0x273fd14)
	void TeleportToSafeZone(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TeleportToMe (Underlying native function: TeleportToMe 0x273fd14)
	void TeleportToMe(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TeleportToMapMarkerGround (Underlying native function: TeleportToMapMarkerGround 0x273fd14)
	void TeleportToMapMarkerGround(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TeleportToMapMarkerAir (Underlying native function: TeleportToMapMarkerAir 0x273fd14)
	void TeleportToMapMarkerAir(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TeleportToMapMarker (Underlying native function: TeleportToMapMarker 0x273fd14)
	void TeleportToMapMarker(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TeleportToLocation (Underlying native function: TeleportToLocation 0x71c76d0)
	void TeleportToLocation(float& X, float& Y, float& Z); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TeleportToActor (Underlying native function: TeleportToActor 0x6ee971c)
	void TeleportToActor(struct FString& ClassOrInstanceName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TeleportAllPlayerControlledCharactersToSelf (Underlying native function: TeleportAllPlayerControlledCharactersToSelf 0x273fd14)
	void TeleportAllPlayerControlledCharactersToSelf(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TakeoverScriptedPawn (Underlying native function: TakeoverScriptedPawn 0x6ffbaa4)
	void TakeoverScriptedPawn(); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TakeoverAIPawn (Underlying native function: TakeoverAIPawn 0x7fbbf50)
	void TakeoverAIPawn(); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.TakeGameplayAutomationScreenshot (Underlying native function: TakeGameplayAutomationScreenshot 0x8b15b58)
	void TakeGameplayAutomationScreenshot(struct FString& ScreenshotName, struct FString& MapName, float& MaxGlobalError, float& MaxLocalError); // (Final | Exec | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager.SwitchTeam (Underlying native function: SwitchTeam 0x273fd14)
	void SwitchTeam(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SummonLoadIfNeeded (Underlying native function: SummonLoadIfNeeded 0x8b15978)
	void SummonLoadIfNeeded(struct FString& ClassName, float& ZOffset, float& YRotation); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.StopHighlights (Underlying native function: StopHighlights 0x273fd14)
	void StopHighlights(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.StopDummyDebugEncounter (Underlying native function: StopDummyDebugEncounter 0x273fd14)
	void StopDummyDebugEncounter(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Stats_ClearPlayerStatsCache (Underlying native function: Stats_ClearPlayerStatsCache 0x273fd14)
	void StatsClearPlayerStatsCache(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Stats_ClearGlobalLeaderboardCache (Underlying native function: Stats_ClearGlobalLeaderboardCache 0x273fd14)
	void StatsClearGlobalLeaderboardCache(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Stats_ClearCohortLeaderboardCache (Underlying native function: Stats_ClearCohortLeaderboardCache 0x273fd14)
	void StatsClearCohortLeaderboardCache(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.StartWeatherEvent (Underlying native function: StartWeatherEvent 0x8b158b0)
	void StartWeatherEvent(int& WeatherEventIndex, float& Duration); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.StartMinigame (Underlying native function: StartMinigame 0x273fd14)
	void StartMinigame(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.StartLiveStreamingWindow (Underlying native function: StartLiveStreamingWindow 0x6df7bc0)
	void StartLiveStreamingWindow(float& Seconds); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.StartLavaMovement (Underlying native function: StartLavaMovement 0x273fd14)
	void StartLavaMovement(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.StartFillFloorMovement (Underlying native function: StartFillFloorMovement 0x273fd14)
	void StartFillFloorMovement(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpendBars (Underlying native function: SpendBars 0x6e8edb4)
	void SpendBars(int& Amount); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnVehicle (Underlying native function: SpawnVehicle 0x8b1560c)
	class AActor* SpawnVehicle(struct FString& VehicleName, int& ForcedMaterialVariantIndex, float& GroundHeightOffset); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnSimplePawn (Underlying native function: SpawnSimplePawn 0x68e9dc4)
	class AFortPlayerPawn* SpawnSimplePawn(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnScriptedPawnsInFormation (Underlying native function: SpawnScriptedPawnsInFormation 0x8b153a8)
	void SpawnScriptedPawnsInFormation(struct FString& ProfileName, int& RowWidth, int& ColumnDepth, float& Spacing, float& Health, float& Shields); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnScriptedPawnAtLocation (Underlying native function: SpawnScriptedPawnAtLocation 0x8b150b8)
	class AFortPlayerPawn* SpawnScriptedPawnAtLocation(struct FString& ProfileName, float& X, float& Y, float& Z, float& Pitch, float& Yaw, float& Roll); // (BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.SpawnScriptedPawn (Underlying native function: SpawnScriptedPawn 0x8b14f50)
	class AFortPlayerPawn* SpawnScriptedPawn(struct FString& ProfileName); // (BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.SpawnReplaySpotLightEx (Underlying native function: SpawnReplaySpotLightEx 0x8b14c1c)
	void SpawnReplaySpotLightEx(float& X, float& Y, float& Z, float& Yaw, float& Pitch, int& R, int& G, int& B, float& InnerAngle, float& OuterAngle, float& Intensity, float& Radius, float& Temp); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnReplaySpotLight (Underlying native function: SpawnReplaySpotLight 0x273fd14)
	void SpawnReplaySpotLight(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnPickup (Underlying native function: SpawnPickup 0x8b14a30)
	void SpawnPickup(struct FString& ItemName, int& NumItems, float& SpawnDistance, float& SpawnRotation); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnPhysicsPropScaled (Underlying native function: SpawnPhysicsPropScaled 0x8b14790)
	void SpawnPhysicsPropScaled(struct FString& PropName, float& ScaleX, float& ScaleY, float& ScaleZ, bool& bSpawnAwake, bool& bCanBeDamaged, bool& bRotate90Degrees); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager.SpawnPhysicsProp (Underlying native function: SpawnPhysicsProp 0x8b14564)
	void SpawnPhysicsProp(struct FString& PropName, int& Count, bool& bSpawnAwake, bool& bCanBeDamaged, bool& bRotate90Degrees); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager.SpawnPawn (Underlying native function: SpawnPawn 0x8b143fc)
	class AFortPawn* SpawnPawn(struct FString& PawnType); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnGroupOfScriptedPawnOnGrid (Underlying native function: SpawnGroupOfScriptedPawnOnGrid 0x8b13ff8)
	void SpawnGroupOfScriptedPawnOnGrid(int& Rows, int& Columns, float& RowPadding, float& ColumnPadding, struct FString& ProfileName, float& X, float& Y, float& Z, float& Pitch, float& Yaw, float& Roll); // (BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.SpawnFriendlyPlayer (Underlying native function: SpawnFriendlyPlayer 0x8b13f4c)
	class AFortPlayerPawn* SpawnFriendlyPlayer(float& MaxHealth, float& MaxShield); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnFoodFightObjective (Underlying native function: SpawnFoodFightObjective 0x273fd14)
	void SpawnFoodFightObjective(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnEnemyPlayer (Underlying native function: SpawnEnemyPlayer 0x8b13f4c)
	class AFortPlayerPawn* SpawnEnemyPlayer(float& MaxHealth, float& MaxShield); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnContainer (Underlying native function: SpawnContainer 0x6ee971c)
	void SpawnContainer(struct FString& ContainerClassName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnBattleLabDevice (Underlying native function: SpawnBattleLabDevice 0x6e8f5f8)
	void SpawnBattleLabDevice(struct FString& InName); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnAthenaSupplyDrop (Underlying native function: SpawnAthenaSupplyDrop 0x8b13dc8)
	void SpawnAthenaSupplyDrop(struct FString& SupplyDropInfoName, bool& bShouldCenterGroundCheckAtFoundLocation); // (Final | Exec | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager.SpawnAndDriveVehicle (Underlying native function: SpawnAndDriveVehicle 0x8b136bc)
	void SpawnAndDriveVehicle(struct FString& VehicleName, int& ForcedMaterialVariantIndex); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnAIGroupWithUpgrade (Underlying native function: SpawnAIGroupWithUpgrade 0x6e8f060)
	void SpawnAIGroupWithUpgrade(struct FString& SpawnGroupName, struct FString& UpgradeName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnAIGroupFromExternalSpawner (Underlying native function: SpawnAIGroupFromExternalSpawner 0x6e8f5f8)
	void SpawnAIGroupFromExternalSpawner(struct FString& SpawnGroupName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnAIGroup (Underlying native function: SpawnAIGroup 0x6e8f5f8)
	void SpawnAIGroup(struct FString& SpawnGroupName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnAIFromSpawnerDataInFormation (Underlying native function: SpawnAIFromSpawnerDataInFormation 0x8b13bd8)
	void SpawnAIFromSpawnerDataInFormation(struct FString& AISpawnerDataName, int& RowWidth, int& ColumnDepth, float& Spacing); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnAIFromSpawnerDataAtLocation (Underlying native function: SpawnAIFromSpawnerDataAtLocation 0x8b1393c)
	void SpawnAIFromSpawnerDataAtLocation(struct FString& AISpawnerDataName, float& X, float& Y, float& Z, float& Pitch, float& Yaw, float& Roll); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SpawnAIFromSpawnerData (Underlying native function: SpawnAIFromSpawnerData 0x6ee971c)
	void SpawnAIFromSpawnerData(struct FString& AISpawnerDataName); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SkipSafeZones (Underlying native function: SkipSafeZones 0x273fd14)
	void SkipSafeZones(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SkipAircraft (Underlying native function: SkipAircraft 0x273fd14)
	void SkipAircraft(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SimulateLootDrops (Underlying native function: SimulateLootDrops 0x273fd14)
	void SimulateLootDrops(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SimulateLoot (Underlying native function: SimulateLoot 0x8b1385c)
	void SimulateLoot(struct FName& TierGroup, int& LootTier, int& LootLevel); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ShowLootPlacement (Underlying native function: ShowLootPlacement 0x82ab180)
	void ShowLootPlacement(struct FGameplayTag& InTag); // (Final | Exec | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager.ShowHUDElement (Underlying native function: ShowHUDElement 0x8b11a0c)
	void ShowHUDElement(struct FGameplayTag& HUDElementTag); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ShowHighlightSummary (Underlying native function: ShowHighlightSummary 0x273fd14)
	void ShowHighlightSummary(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ShowGameplayCaptureUI (Underlying native function: ShowGameplayCaptureUI 0x273fd14)
	void ShowGameplayCaptureUI(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ShowFakeError (Underlying native function: ShowFakeError 0x6e8f060)
	void ShowFakeError(struct FString& DisplayString, struct FString& ErrorCode); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ShowEventsDebugInfo (Underlying native function: ShowEventsDebugInfo 0x6df775c)
	void ShowEventsDebugInfo(bool& bShowDebugInfo); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ShowAllMinimapIcons (Underlying native function: ShowAllMinimapIcons 0x273fd14)
	void ShowAllMinimapIcons(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ShowActiveGameplayModifiers (Underlying native function: ShowActiveGameplayModifiers 0x273fd14)
	void ShowActiveGameplayModifiers(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ShouldUseNewHeroLoadoutUI (Underlying native function: ShouldUseNewHeroLoadoutUI 0x83d7cb8)
	static bool ShouldUseNewHeroLoadoutUI(class APlayerController*& PC); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCheatManager.SetWorldDaysElapsed (Underlying native function: SetWorldDaysElapsed 0x6df7bc0)
	void SetWorldDaysElapsed(float& Days); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetWeaponModToCurrentWeaponAtSlot (Underlying native function: SetWeaponModToCurrentWeaponAtSlot 0x8b136bc)
	void SetWeaponModToCurrentWeaponAtSlot(struct FString& WeaponModName, int& Index); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetWallTimer (Underlying native function: SetWallTimer 0x6df7bc0)
	void SetWallTimer(float& Seconds); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetViewportResolution (Underlying native function: SetViewportResolution 0x735ad48)
	void SetViewportResolution(int& ResX, int& ResY); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.SetVehicleTricksEnabled (Underlying native function: SetVehicleTricksEnabled 0x6df775c)
	void SetVehicleTricksEnabled(bool& bNewValue); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetVehicleFuel (Underlying native function: SetVehicleFuel 0x6df7bc0)
	void SetVehicleFuel(float& FuelAmount); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetVehicleConfigVariable (Underlying native function: SetVehicleConfigVariable 0x8b133f8)
	void SetVehicleConfigVariable(struct FString& VehicleName, struct FString& ConfigName, float& ConfigValue); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetUnlimitedHealth (Underlying native function: SetUnlimitedHealth 0x6df775c)
	void SetUnlimitedHealth(bool& bInValue); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetTimeOfDaySpeed (Underlying native function: SetTimeOfDaySpeed 0x6df7bc0)
	void SetTimeOfDaySpeed(float& NewTimeOfDaySpeedFactor); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.SetTimeOfDayInHours (Underlying native function: SetTimeOfDayInHours 0x6df7bc0)
	void SetTimeOfDayInHours(float& TimeOfDayInHours); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.SetTimeOfDayAbsoluteSpeed (Underlying native function: SetTimeOfDayAbsoluteSpeed 0x6df7bc0)
	void SetTimeOfDayAbsoluteSpeed(float& NewTimeOfDaySpeed); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.SetTimeOfDay (Underlying native function: SetTimeOfDay 0x6e8f5f8)
	void SetTimeOfDay(struct FString& NewTimeOfDay); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.SetTeamOnScriptedPawn (Underlying native function: SetTeamOnScriptedPawn 0x8b13374)
	void SetTeamOnScriptedPawn(int& NewTeamIndex); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetTeam (Underlying native function: SetTeam 0x6e8edb4)
	void SetTeam(int& TeamIndex); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetSignalInStormPercent (Underlying native function: SetSignalInStormPercent 0x6df7bc0)
	void SetSignalInStormPercent(float& Percent); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetShieldPercent (Underlying native function: SetShieldPercent 0x6df7bc0)
	void SetShieldPercent(float& Percent); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetScriptedPawnVariantChannel (Underlying native function: SetScriptedPawnVariantChannel 0x8b130e4)
	void SetScriptedPawnVariantChannel(struct FString& ChannelTag, struct FString& ActiveTag); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetScriptedPawnTargeting (Underlying native function: SetScriptedPawnTargeting 0x662f970)
	void SetScriptedPawnTargeting(bool& bIsTargeting); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetScriptedPawnRotation (Underlying native function: SetScriptedPawnRotation 0x8b1305c)
	void SetScriptedPawnRotation(float& Yaw); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetScriptedPawnLocation (Underlying native function: SetScriptedPawnLocation 0x8b12f5c)
	void SetScriptedPawnLocation(float& X, float& Y, float& Z); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetRiftCosmeticState (Underlying native function: SetRiftCosmeticState 0x6f05250)
	void SetRiftCosmeticState(enum ERiftCosmeticState& NewValue); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetRespawnTimerOverride (Underlying native function: SetRespawnTimerOverride 0x6df7bc0)
	void SetRespawnTimerOverride(float& TimeUntilRespawn); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.SetReplStat (Underlying native function: SetReplStat 0x81d6fd0)
	void SetReplStat(struct TEnumAsByte<EFortReplicatedStat>& Stat, int& Amount); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetReplaySpotLightTemperature (Underlying native function: SetReplaySpotLightTemperature 0x6df7bc0)
	void SetReplaySpotLightTemperature(float& Temp); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetReplaySpotLightRadius (Underlying native function: SetReplaySpotLightRadius 0x6df7bc0)
	void SetReplaySpotLightRadius(float& Radius); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetReplaySpotLightIntensity (Underlying native function: SetReplaySpotLightIntensity 0x6df7bc0)
	void SetReplaySpotLightIntensity(float& Intensity); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetReplaySpotLightColor (Underlying native function: SetReplaySpotLightColor 0x8b105d0)
	void SetReplaySpotLightColor(int& R, int& G, int& B); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetReplaySpotLightAngles (Underlying native function: SetReplaySpotLightAngles 0x73612ac)
	void SetReplaySpotLightAngles(float& InnerAngle, float& OuterAngle); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetRandomAircraftFlightPath (Underlying native function: SetRandomAircraftFlightPath 0x273fd14)
	void SetRandomAircraftFlightPath(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetPersistenceSharedProject (Underlying native function: SetPersistenceSharedProject 0x6ee971c)
	void SetPersistenceSharedProject(struct FString& ProjectID); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetPartyLocation (Underlying native function: SetPartyLocation 0x6f05250)
	void SetPartyLocation(enum EFortPartyMemberLocation& NewLocation); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetNavIndestructibility (Underlying native function: SetNavIndestructibility 0x8b12df8)
	void SetNavIndestructibility(bool& bMakeIndestructible); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetMinigameClassSlot (Underlying native function: SetMinigameClassSlot 0x6e8edb4)
	void SetMinigameClassSlot(int& ClassSlotIndex); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetMaxClouds (Underlying native function: SetMaxClouds 0x6e8edb4)
	void SetMaxClouds(int& MaxClouds); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetLFG (Underlying native function: SetLFG 0x6df775c)
	void SetLFG(bool& bLFG); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetJumpStaminaCost (Underlying native function: SetJumpStaminaCost 0x6f57cd8)
	void SetJumpStaminaCost(struct FName& ModeName); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetInteractionDistances (Underlying native function: SetInteractionDistances 0x73612ac)
	void SetInteractionDistances(float& InteractionDistance, float& InteractionHighlightDistance); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetInteractExtent (Underlying native function: SetInteractExtent 0x6df7bc0)
	void SetInteractExtent(float& Extent); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetInputPresetName (Underlying native function: SetInputPresetName 0x6ee971c)
	void SetInputPresetName(struct FString& PresetName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetInfiniteConsumables (Underlying native function: SetInfiniteConsumables 0x6df775c)
	void SetInfiniteConsumables(bool& bInValue); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetInfiniteAmmo (Underlying native function: SetInfiniteAmmo 0x6df775c)
	void SetInfiniteAmmo(bool& bInValue); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetImprovedDBNO (Underlying native function: SetImprovedDBNO 0x6df775c)
	void SetImprovedDBNO(bool& bEnable); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.SetHideSpatialCustomizationText (Underlying native function: SetHideSpatialCustomizationText 0x8b12d78)
	void SetHideSpatialCustomizationText(bool& bShouldHide); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.SetHideSpatialCustomizationIcons (Underlying native function: SetHideSpatialCustomizationIcons 0x8b12cf8)
	void SetHideSpatialCustomizationIcons(bool& bShouldHide); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.SetHideNonEnemyIndicators (Underlying native function: SetHideNonEnemyIndicators 0x6df775c)
	void SetHideNonEnemyIndicators(bool& bEnabled); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetHideEnemyIndicators (Underlying native function: SetHideEnemyIndicators 0x6df775c)
	void SetHideEnemyIndicators(bool& bEnabled); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetHealthPercent (Underlying native function: SetHealthPercent 0x6df7bc0)
	void SetHealthPercent(float& Percent); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetHeadHealthPercent (Underlying native function: SetHeadHealthPercent 0x6df7bc0)
	void SetHeadHealthPercent(float& HealthPercent); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetGlobalWind (Underlying native function: SetGlobalWind 0x73612ac)
	void SetGlobalWind(float& Magnitude, float& HeadingDegrees); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetGameStat (Underlying native function: SetGameStat 0x8066d8c)
	void SetGameStat(struct FString& StatName, int& Amount); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetGameDifficultyOverride (Underlying native function: SetGameDifficultyOverride 0x6df7bc0)
	void SetGameDifficultyOverride(float& GameDifficultyOverrideValue); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetFrameSyncMode (Underlying native function: SetFrameSyncMode 0x6e8edb4)
	void SetFrameSyncMode(int& Mode); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetEventsStyleOverride (Underlying native function: SetEventsStyleOverride 0x6e8f5f8)
	void SetEventsStyleOverride(struct FString& StyleId); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetEventCalendarTime (Underlying native function: SetEventCalendarTime 0x6ee971c)
	void SetEventCalendarTime(struct FString& TimeString); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetEncounterTopUtilityPercentages (Underlying native function: SetEncounterTopUtilityPercentages 0x66e4ab4)
	void SetEncounterTopUtilityPercentages(struct FString& UtilitiesAndPercentages); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetEncounterSpawnPointsCurve (Underlying native function: SetEncounterSpawnPointsCurve 0x6e8f5f8)
	void SetEncounterSpawnPointsCurve(struct FString& CurveName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetEncounterSpawnPointsCap (Underlying native function: SetEncounterSpawnPointsCap 0x6e8edb4)
	void SetEncounterSpawnPointsCap(int& SpawnPointsCap); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetEncounterSimulatedNumberOfPlayers (Underlying native function: SetEncounterSimulatedNumberOfPlayers 0x6e8edb4)
	void SetEncounterSimulatedNumberOfPlayers(int& NumPlayers); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetEncounterGraphsHistoryLength (Underlying native function: SetEncounterGraphsHistoryLength 0x8b12c74)
	void SetEncounterGraphsHistoryLength(int& Seconds); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetEncounterDirections (Underlying native function: SetEncounterDirections 0x8b12bd0)
	void SetEncounterDirections(struct TArray<struct TEnumAsByte<EFortEncounterDirection>>& Directions); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetEnableRenderCustomDepthOnAllPlayerPawns (Underlying native function: SetEnableRenderCustomDepthOnAllPlayerPawns 0x6df775c)
	void SetEnableRenderCustomDepthOnAllPlayerPawns(bool& bEnable); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetDifficultyIncreaseRewardTier (Underlying native function: SetDifficultyIncreaseRewardTier 0x6e8edb4)
	void SetDifficultyIncreaseRewardTier(int& RewardTier); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetDayPhase (Underlying native function: SetDayPhase 0x6e8f5f8)
	void SetDayPhase(struct FString& DayPhaseString); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.SetCurrentEncounterToDebug (Underlying native function: SetCurrentEncounterToDebug 0x6e8edb4)
	void SetCurrentEncounterToDebug(int& EncounterIndex); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetCullValues (Underlying native function: SetCullValues 0x8b12ab0)
	void SetCullValues(float& MinCullObjectSize, float& MinCullDistance, float& MaxCullObjectSize, float& MaxCullDistance); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetCrossplayPreference (Underlying native function: SetCrossplayPreference 0x6e8edb4)
	void SetCrossplayPreference(int& NewPreference); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetConsole60FPSMode (Underlying native function: SetConsole60FPSMode 0x8b12a34)
	void SetConsole60FPSMode(bool& bEnabled); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetCloudAltitude (Underlying native function: SetCloudAltitude 0x6df7bc0)
	void SetCloudAltitude(float& CloudAltitude); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetCapturePercentage (Underlying native function: SetCapturePercentage 0x6df7bc0)
	void SetCapturePercentage(float& NewCapturePercentage); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetCanMeleeOneHitBuildings (Underlying native function: SetCanMeleeOneHitBuildings 0x6df775c)
	void SetCanMeleeOneHitBuildings(bool& bEnabled); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetCanBeDamagedOnTraceActor (Underlying native function: SetCanBeDamagedOnTraceActor 0x8b129b0)
	void SetCanBeDamagedOnTraceActor(bool& bCanBeDamaged); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetCameraPrototype (Underlying native function: SetCameraPrototype 0x6f57cd8)
	void SetCameraPrototype(struct FName& ProtoName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetCameraFOVMultiplier (Underlying native function: SetCameraFOVMultiplier 0x6df7bc0)
	void SetCameraFOVMultiplier(float& Multiplier); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetCameraDistanceMultiplier (Underlying native function: SetCameraDistanceMultiplier 0x71c76d0)
	void SetCameraDistanceMultiplier(float& XMultiplier, float& YMultiplier, float& ZMultiplier); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetBuildFree (Underlying native function: SetBuildFree 0x6df775c)
	void SetBuildFree(bool& bNewValue); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetBackpackOnScriptedPawn (Underlying native function: SetBackpackOnScriptedPawn 0x8b12848)
	void SetBackpackOnScriptedPawn(struct FString& NewBackpack); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetAthenaHeroOnScriptedPawn (Underlying native function: SetAthenaHeroOnScriptedPawn 0x8b126e0)
	void SetAthenaHeroOnScriptedPawn(struct FString& NewHeroName); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetAthenaHero (Underlying native function: SetAthenaHero 0x6e8f5f8)
	void SetAthenaHero(struct FString& NewHeroName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetAircraftFlightPath (Underlying native function: SetAircraftFlightPath 0x73612ac)
	void SetAircraftFlightPath(float& StartDegrees, float& OffsetFactor); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetAimMode (Underlying native function: SetAimMode 0x8b1267c)
	void SetAimMode(uint32_t& Mode); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SetActionMappingEnabled (Underlying native function: SetActionMappingEnabled 0x8263a50)
	void SetActionMappingEnabled(struct FName& Action, bool& bEnabled); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ServerStopProfiling (Underlying native function: ServerStopProfiling 0x273fd14)
	void ServerStopProfiling(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ServerStartProfiling (Underlying native function: ServerStartProfiling 0x273fd14)
	void ServerStartProfiling(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SendTwitchToastNotification (Underlying native function: SendTwitchToastNotification 0x6e8f060)
	void SendTwitchToastNotification(struct FString& Title, struct FString& Description); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SendTargetedRemoteBotCommand (Underlying native function: SendTargetedRemoteBotCommand 0x8b120c4)
	void SendTargetedRemoteBotCommand(struct FString& TargetName, struct FString& CommandToSend); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SendRemoteBotCommand (Underlying native function: SendRemoteBotCommand 0x6ee971c)
	void SendRemoteBotCommand(struct FString& CommandToSend); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SelectSpotLightByNumber (Underlying native function: SelectSpotLightByNumber 0x8b1267c)
	void SelectSpotLightByNumber(uint32_t& Number); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SelectPrevSpotLight (Underlying native function: SelectPrevSpotLight 0x273fd14)
	void SelectPrevSpotLight(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SelectNextSpotLight (Underlying native function: SelectNextSpotLight 0x273fd14)
	void SelectNextSpotLight(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ScriptedPawnToggleFiringWithInfiniteAmmo (Underlying native function: ScriptedPawnToggleFiringWithInfiniteAmmo 0x280e53c)
	void ScriptedPawnToggleFiringWithInfiniteAmmo(); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ScriptedPawnToggleCrouch (Underlying native function: ScriptedPawnToggleCrouch 0x182d3cc)
	void ScriptedPawnToggleCrouch(); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ScriptedPawnStopIntervalFiring (Underlying native function: ScriptedPawnStopIntervalFiring 0x662da48)
	void ScriptedPawnStopIntervalFiring(); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ScriptedPawnIntervalFiring (Underlying native function: ScriptedPawnIntervalFiring 0x8b12580)
	void ScriptedPawnIntervalFiring(float& TimeBetweenShots, int& BurstAmount, float& TimeBetweenBursts); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SaveReplaySpotLights (Underlying native function: SaveReplaySpotLights 0x6ee971c)
	void SaveReplaySpotLights(struct FString& SaveName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.SafeTeleport (Underlying native function: SafeTeleport 0x8b123b8)
	void SafeTeleport(float& X, float& Y, float& Z, float& Pitch, float& Yaw, float& Roll); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RunPerfMemCheatScript (Underlying native function: RunPerfMemCheatScript 0x6df775c)
	void RunPerfMemCheatScript(bool& bStartStatFiles); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RunPawnScriptLocally (Underlying native function: RunPawnScriptLocally 0x6ee971c)
	void RunPawnScriptLocally(struct FString& ProfileName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ReviveFromDBNO (Underlying native function: ReviveFromDBNO 0x8b12568)
	void ReviveFromDBNO(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RestartMinigame (Underlying native function: RestartMinigame 0x8b12550)
	void RestartMinigame(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RespawnPlayspacePlayer (Underlying native function: RespawnPlayspacePlayer 0x273fd14)
	void RespawnPlayspacePlayer(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RespawnPlayerServer (Underlying native function: RespawnPlayerServer 0x273fd14)
	void RespawnPlayerServer(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RespawnPlayer (Underlying native function: RespawnPlayer 0x273fd14)
	void RespawnPlayer(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ResetWall (Underlying native function: ResetWall 0x273fd14)
	void ResetWall(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ResetMaxAITracking (Underlying native function: ResetMaxAITracking 0x273fd14)
	void ResetMaxAITracking(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ResetItemShopSeenOffers (Underlying native function: ResetItemShopSeenOffers 0x273fd14)
	void ResetItemShopSeenOffers(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ResetForcedAthenaCosmeticItems (Underlying native function: ResetForcedAthenaCosmeticItems 0x273fd14)
	void ResetForcedAthenaCosmeticItems(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ResetEncounterWave (Underlying native function: ResetEncounterWave 0x273fd14)
	void ResetEncounterWave(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ReRandomizeTiles (Underlying native function: ReRandomizeTiles 0x273fd14)
	void ReRandomizeTiles(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RequestNextCarouselOffer (Underlying native function: RequestNextCarouselOffer 0x273fd14)
	void RequestNextCarouselOffer(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RequestFullNavigationUpdate (Underlying native function: RequestFullNavigationUpdate 0x273fd14)
	void RequestFullNavigationUpdate(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RepositionAllPlayersAndStorm (Underlying native function: RepositionAllPlayersAndStorm 0x8b123b8)
	void RepositionAllPlayersAndStorm(float& X, float& Y, float& Z, float& Pitch, float& Yaw, float& Roll); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ReplayLastPerfTest (Underlying native function: ReplayLastPerfTest 0x6e8f5f8)
	void ReplayLastPerfTest(struct FString& Params); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RepeatKillAuto (Underlying native function: RepeatKillAuto 0x8b12334)
	void RepeatKillAuto(float& DelayBetweenKillAll); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RemoveWeaponModFromCurrentWeaponAtSlot (Underlying native function: RemoveWeaponModFromCurrentWeaponAtSlot 0x6e8edb4)
	void RemoveWeaponModFromCurrentWeaponAtSlot(int& Index); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RemoveWeaponModFromCurrentWeapon (Underlying native function: RemoveWeaponModFromCurrentWeapon 0x6e8f5f8)
	void RemoveWeaponModFromCurrentWeapon(struct FString& WeaponModName); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RemoveGrantedGameplayTag (Underlying native function: RemoveGrantedGameplayTag 0x6f57cd8)
	void RemoveGrantedGameplayTag(struct FName& tag); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RemoveGlobalCurrency (Underlying native function: RemoveGlobalCurrency 0x6e8edb4)
	void RemoveGlobalCurrency(int& Amount); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RemoveGameplayModifier (Underlying native function: RemoveGameplayModifier 0x6e8f5f8)
	void RemoveGameplayModifier(struct FString& ModifierName); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RemoveFavoriteIsland (Underlying native function: RemoveFavoriteIsland 0x8b0ffc8)
	void RemoveFavoriteIsland(struct FOnlineLinkId& IslandLinkId); // (Final | Exec | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager.RemoveDebugSpawnAIGroupTag (Underlying native function: RemoveDebugSpawnAIGroupTag 0x6f57cd8)
	void RemoveDebugSpawnAIGroupTag(struct FName& tag); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RemoveDebugEncounterTag (Underlying native function: RemoveDebugEncounterTag 0x6f57cd8)
	void RemoveDebugEncounterTag(struct FName& tag); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RemoveBars (Underlying native function: RemoveBars 0x6e8edb4)
	void RemoveBars(int& Amount); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ReloadUMG (Underlying native function: ReloadUMG 0x273fd14)
	void ReloadUMG(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ReloadUI (Underlying native function: ReloadUI 0x273fd14)
	void ReloadUI(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ReloadLevelStream (Underlying native function: ReloadLevelStream 0x273fd14)
	void ReloadLevelStream(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ReleaseScriptedPawn (Underlying native function: ReleaseScriptedPawn 0x6d235d0)
	void ReleaseScriptedPawn(); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ReleasePortal (Underlying native function: ReleasePortal 0x273fd14)
	void ReleasePortal(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ReleaseAIPawn (Underlying native function: ReleaseAIPawn 0x8b1231c)
	void ReleaseAIPawn(); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ReInitHUD (Underlying native function: ReInitHUD 0x273fd14)
	void ReInitHUD(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RefreshTournamentManager (Underlying native function: RefreshTournamentManager 0x273fd14)
	void RefreshTournamentManager(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RefreshTheaters (Underlying native function: RefreshTheaters 0x273fd14)
	void RefreshTheaters(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RefreshCMS (Underlying native function: RefreshCMS 0x273fd14)
	void RefreshCMS(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RefreshAllCalendars (Underlying native function: RefreshAllCalendars 0x273fd14)
	void RefreshAllCalendars(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.RedoHuskSpecialEventModifiers (Underlying native function: RedoHuskSpecialEventModifiers 0x6df7bc0)
	void RedoHuskSpecialEventModifiers(float& TargetRate); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ReAimReplaySpotLight (Underlying native function: ReAimReplaySpotLight 0x273fd14)
	void ReAimReplaySpotLight(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ReadSharedPersistenceValue (Underlying native function: ReadSharedPersistenceValue 0x273fd14)
	void ReadSharedPersistenceValue(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ReadLevelSaveComponentsFromDisk (Underlying native function: ReadLevelSaveComponentsFromDisk 0x273fd14)
	void ReadLevelSaveComponentsFromDisk(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.QueryHighlightCount (Underlying native function: QueryHighlightCount 0x273fd14)
	void QueryHighlightCount(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.PushLockedLoadingState (Underlying native function: PushLockedLoadingState 0x6e8edb4)
	void PushLockedLoadingState(int& LoadingState); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.ProjectEdit_UpdateContent (Underlying native function: ProjectEdit_UpdateContent 0x6ee971c)
	void ProjectEditUpdateContent(struct FString& ProjectID); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.PrintWeaponModsOnCurrentWeapon (Underlying native function: PrintWeaponModsOnCurrentWeapon 0x273fd14)
	void PrintWeaponModsOnCurrentWeapon(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.PrintValidWeaponMods (Underlying native function: PrintValidWeaponMods 0x273fd14)
	void PrintValidWeaponMods(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.PrintTileWorld (Underlying native function: PrintTileWorld 0x273fd14)
	void PrintTileWorld(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.PrintShotReport (Underlying native function: PrintShotReport 0x273fd14)
	void PrintShotReport(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.PrintScriptedActionManagerState (Underlying native function: PrintScriptedActionManagerState 0x273fd14)
	void PrintScriptedActionManagerState(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.PrintCurveTableRow (Underlying native function: PrintCurveTableRow 0x8b120c4)
	void PrintCurveTableRow(struct FString& CurveTable, struct FString& RowName); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.PrintCurveTable (Underlying native function: PrintCurveTable 0x6ee971c)
	void PrintCurveTable(struct FString& CurveTable); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.PreviewSkinWeightProfile (Underlying native function: PreviewSkinWeightProfile 0x6e8edb4)
	void PreviewSkinWeightProfile(int& State); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.PopLockedLoadingState (Underlying native function: PopLockedLoadingState 0x273fd14)
	void PopLockedLoadingState(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.PlayAthenaEmoteOnScriptedPawn (Underlying native function: PlayAthenaEmoteOnScriptedPawn 0x66e4ab4)
	void PlayAthenaEmoteOnScriptedPawn(struct FString& EmoteName); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.PilotReplaySpotLight (Underlying native function: PilotReplaySpotLight 0x273fd14)
	void PilotReplaySpotLight(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.PerfMemStatMonitor (Underlying native function: PerfMemStatMonitor 0x6e8f5f8)
	void PerfMemStatMonitor(struct FString& ToggleState); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.PauseWarmup (Underlying native function: PauseWarmup 0x273fd14)
	void PauseWarmup(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Pain (Underlying native function: Pain 0x6df7bc0)
	void Pain(float& Amount); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.OpenAllContainersAndWriteLootEconomy (Underlying native function: OpenAllContainersAndWriteLootEconomy 0x273fd14)
	void OpenAllContainersAndWriteLootEconomy(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ModItemDurability (Underlying native function: ModItemDurability 0x6df7bc0)
	void ModItemDurability(float& InValue); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.MMS (Underlying native function: MMS 0x8b11eb4)
	void MMS(struct FString& Command); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.McpTestVerifyProfileToken (Underlying native function: McpTestVerifyProfileToken 0x273fd14)
	void McpTestVerifyProfileToken(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpTestGetClientFeatureKeys (Underlying native function: McpTestGetClientFeatureKeys 0x273fd14)
	void McpTestGetClientFeatureKeys(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpTestFriendCodes_OnQueryUnredeemedFriendCodes (Underlying native function: McpTestFriendCodes_OnQueryUnredeemedFriendCodes 0x8b12010)
	void McpTestFriendCodesOnQueryUnredeemedFriendCodes(bool& bSuccess, struct TArray<struct FFriendCode>& FriendCodes); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager.McpTestFriendCodes (Underlying native function: McpTestFriendCodes 0x6ee971c)
	void McpTestFriendCodes(struct FString& TokenId); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpRefreshProfile (Underlying native function: McpRefreshProfile 0x273fd14)
	void McpRefreshProfile(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.McpRefreshCatalog (Underlying native function: McpRefreshCatalog 0x273fd14)
	void McpRefreshCatalog(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpRedeemPurchasesWithParams (Underlying native function: McpRedeemPurchasesWithParams 0x735a8fc)
	void McpRedeemPurchasesWithParams(struct FString& RefreshTypeStr, bool& bForceRefreshOfflineAuth); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpRedeemPurchases (Underlying native function: McpRedeemPurchases 0x273fd14)
	void McpRedeemPurchases(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpPrintPartyInviteToken (Underlying native function: McpPrintPartyInviteToken 0x6df775c)
	void McpPrintPartyInviteToken(bool& OnlyPrintIfJoinable); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpPrintFriendInviteToken (Underlying native function: McpPrintFriendInviteToken 0x8b10048)
	void McpPrintFriendInviteToken(struct FString& FriendName, bool& OnlyPrintIfJoinable); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpLogout (Underlying native function: McpLogout 0x273fd14)
	void McpLogout(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpJoinFromPartyInviteToken (Underlying native function: McpJoinFromPartyInviteToken 0x8b10048)
	void McpJoinFromPartyInviteToken(struct FString& Token, bool& bIsFromInvite); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpIssueCodeToken (Underlying native function: McpIssueCodeToken 0x6ee971c)
	void McpIssueCodeToken(struct FString& TokenId); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpHostGetPlayers (Underlying native function: McpHostGetPlayers 0x273fd14)
	void McpHostGetPlayers(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpGrantItemsFromClipboard (Underlying native function: McpGrantItemsFromClipboard 0x273fd14)
	void McpGrantItemsFromClipboard(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.McpGrantItem (Underlying native function: McpGrantItem 0x88c3144)
	void McpGrantItem(struct FString& TemplateId, int& Count); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.McpGetVersion (Underlying native function: McpGetVersion 0x273fd14)
	void McpGetVersion(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpGetUnredeemedCodes (Underlying native function: McpGetUnredeemedCodes 0x273fd14)
	void McpGetUnredeemedCodes(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpGetPrivacySettings (Underlying native function: McpGetPrivacySettings 0x273fd14)
	void McpGetPrivacySettings(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpGetCurrencyAmount (Underlying native function: McpGetCurrencyAmount 0x273fd14)
	void McpGetCurrencyAmount(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpForceHttpFailRate (Underlying native function: McpForceHttpFailRate 0x6df7bc0)
	void McpForceHttpFailRate(float& Factor); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpEarnScore (Underlying native function: McpEarnScore 0x6e8edb4)
	void McpEarnScore(int& ScoreAmount); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.McpCheatCampaign (Underlying native function: McpCheatCampaign 0x273fd14)
	void McpCheatCampaign(); // (Final | Exec | Native | Public | Const)

	// Function /Script/FortniteGame.FortCheatManager.McpCheatAthena (Underlying native function: McpCheatAthena 0x273fd14)
	void McpCheatAthena(); // (Final | Exec | Native | Public | Const)

	// Function /Script/FortniteGame.FortCheatManager.McpCheat (Underlying native function: McpCheat 0x273fd14)
	void McpCheat(); // (Final | Exec | Native | Public | Const)

	// Function /Script/FortniteGame.FortCheatManager.McpApplyStash (Underlying native function: McpApplyStash 0x6ee971c)
	void McpApplyStash(struct FString& StashName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.MassSuicide (Underlying native function: MassSuicide 0x273fd14)
	void MassSuicide(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.MarkPlayerBots (Underlying native function: MarkPlayerBots 0x81d6f28)
	void MarkPlayerBots(bool& bMark, float& Radius); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.MakeGods (Underlying native function: MakeGods 0x6df70d4)
	void MakeGods(class UClass*& aClass); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.MakeBuildingActorsGod (Underlying native function: MakeBuildingActorsGod 0x273fd14)
	void MakeBuildingActorsGod(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.MakeAIsGod (Underlying native function: MakeAIsGod 0x273fd14)
	void MakeAIsGod(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.LogSelectedActorCost (Underlying native function: LogSelectedActorCost 0x273fd14)
	void LogSelectedActorCost(); // (Final | Exec | Native | Private)

	// Function /Script/FortniteGame.FortCheatManager.LogItemQuantityForTemplate (Underlying native function: LogItemQuantityForTemplate 0x8b11d60)
	void LogItemQuantityForTemplate(struct FString& TemplateId); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.LogAssetClassCost (Underlying native function: LogAssetClassCost 0x6e8f5f8)
	void LogAssetClassCost(struct FString& AssetPath); // (Final | Exec | Native | Private)

	// Function /Script/FortniteGame.FortCheatManager.LogAllReplaySpotLights (Underlying native function: LogAllReplaySpotLights 0x273fd14)
	void LogAllReplaySpotLights(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.LogAllMinigameComponents (Underlying native function: LogAllMinigameComponents 0x273fd14)
	void LogAllMinigameComponents(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.LockDebugCamera (Underlying native function: LockDebugCamera 0x273fd14)
	void LockDebugCamera(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.LoadReplaySpotLights (Underlying native function: LoadReplaySpotLights 0x735a8fc)
	void LoadReplaySpotLights(struct FString& SaveName, bool& bReplaceAllLights); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.LoadCreativePlotFromLink (Underlying native function: LoadCreativePlotFromLink 0x8b0ffc8)
	void LoadCreativePlotFromLink(struct FOnlineLinkId& LinkId); // (Final | Exec | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager.LoadAndActivateGameFeaturePluginViaFeatureName (Underlying native function: LoadAndActivateGameFeaturePluginViaFeatureName 0x6ee971c)
	void LoadAndActivateGameFeaturePluginViaFeatureName(struct FString& GameFeatureName); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.LoadAndActivateGameFeaturePlugin (Underlying native function: LoadAndActivateGameFeaturePlugin 0x6ee971c)
	void LoadAndActivateGameFeaturePlugin(struct FString& GameFeaturePluginURL); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.LiveStreamingSelectedViewers (Underlying native function: LiveStreamingSelectedViewers 0x8b11cc8)
	void LiveStreamingSelectedViewers(struct TArray<struct FString>& Names); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ListWeapons (Underlying native function: ListWeapons 0x273fd14)
	void ListWeapons(); // (Final | Exec | Native | Protected | Const)

	// Function /Script/FortniteGame.FortCheatManager.ListTraps (Underlying native function: ListTraps 0x273fd14)
	void ListTraps(); // (Final | Exec | Native | Protected | Const)

	// Function /Script/FortniteGame.FortCheatManager.ListSupplyDrops (Underlying native function: ListSupplyDrops 0x273fd14)
	void ListSupplyDrops(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ListSpawnGroups (Underlying native function: ListSpawnGroups 0x273fd14)
	void ListSpawnGroups(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ListPlayerIDs (Underlying native function: ListPlayerIDs 0x273fd14)
	void ListPlayerIDs(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ListMultiItems (Underlying native function: ListMultiItems 0x273fd14)
	void ListMultiItems(); // (Final | Exec | Native | Protected | Const)

	// Function /Script/FortniteGame.FortCheatManager.ListGadgets (Underlying native function: ListGadgets 0x273fd14)
	void ListGadgets(); // (Final | Exec | Native | Protected | Const)

	// Function /Script/FortniteGame.FortCheatManager.ListEmotes (Underlying native function: ListEmotes 0x273fd14)
	void ListEmotes(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ListConsumables (Underlying native function: ListConsumables 0x273fd14)
	void ListConsumables(); // (Final | Exec | Native | Protected | Const)

	// Function /Script/FortniteGame.FortCheatManager.ListCheats (Underlying native function: ListCheats 0x273fd14)
	void ListCheats(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ListBuildingProps (Underlying native function: ListBuildingProps 0x6e90d24)
	void ListBuildingProps(struct FString& PropName); // (Final | Exec | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager.ListAthenaGadgets (Underlying native function: ListAthenaGadgets 0x273fd14)
	void ListAthenaGadgets(); // (Final | Exec | Native | Protected | Const)

	// Function /Script/FortniteGame.FortCheatManager.ListAthenaEmotes (Underlying native function: ListAthenaEmotes 0x273fd14)
	void ListAthenaEmotes(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ListAmmo (Underlying native function: ListAmmo 0x273fd14)
	void ListAmmo(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ListAllFavoriteIslands (Underlying native function: ListAllFavoriteIslands 0x273fd14)
	void ListAllFavoriteIslands(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ListAIUtilities (Underlying native function: ListAIUtilities 0x273fd14)
	void ListAIUtilities(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ListActiveEncounters (Underlying native function: ListActiveEncounters 0x273fd14)
	void ListActiveEncounters(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.KillSkyCap (Underlying native function: KillSkyCap 0x273fd14)
	void KillSkyCap(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.KillPawns (Underlying native function: KillPawns 0x8b11c44)
	void KillPawns(class UClass*& aClass); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.KillBots (Underlying native function: KillBots 0x8b11b60)
	void KillBots(bool& bKillPlayers, bool& bKillNoneParticipants, unsigned char& TeamIndex); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.JoinFriendGameAsSpectator (Underlying native function: JoinFriendGameAsSpectator 0x6ee971c)
	void JoinFriendGameAsSpectator(struct FString& FriendDisplayName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.JoinFriendGame (Underlying native function: JoinFriendGame 0x6ee971c)
	void JoinFriendGame(struct FString& FriendId); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Island_MMS (Underlying native function: Island_MMS 0x8b11aa0)
	void IslandMMS(struct FOnlineLinkId& IslandCode, struct FName& TargetPlaylistName); // (Final | Exec | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager.Island_Destroy (Underlying native function: Island_Destroy 0x6ee971c)
	void IslandDestroy(struct FString& IslandItemId); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Island_Create (Underlying native function: Island_Create 0x6ee971c)
	void IslandCreate(struct FString& NewIslandTemplateId); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.InGameMapSetCaptureLocation (Underlying native function: InGameMapSetCaptureLocation 0x71c76d0)
	void InGameMapSetCaptureLocation(float& X, float& Y, float& Z); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.InGameMapSetActorBoundaries (Underlying native function: InGameMapSetActorBoundaries 0x73612ac)
	void InGameMapSetActorBoundaries(float& ZA, float& ZB); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.HideHUDElement (Underlying native function: HideHUDElement 0x8b11a0c)
	void HideHUDElement(struct FGameplayTag& HUDElementTag); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.HideGameplayCaptureUI (Underlying native function: HideGameplayCaptureUI 0x273fd14)
	void HideGameplayCaptureUI(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GrantGameplayTag (Underlying native function: GrantGameplayTag 0x6f57cd8)
	void GrantGameplayTag(struct FName& tag); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GPadV2_ToggleDebugDraw (Underlying native function: GPadV2_ToggleDebugDraw 0x273fd14)
	void GPadV2ToggleDebugDraw(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GoFast (Underlying native function: GoFast 0x6df7bc0)
	void GoFast(float& NewSpeed); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.GiveWood (Underlying native function: GiveWood 0x6e8edb4)
	void GiveWood(int& Amount); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveWeaponToScriptedPawn (Underlying native function: GiveWeaponToScriptedPawn 0x8b118a4)
	void GiveWeaponToScriptedPawn(struct FString& WeaponName); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveWeaponToPlayerBots (Underlying native function: GiveWeaponToPlayerBots 0x8b1160c)
	void GiveWeaponToPlayerBots(struct FString& WeaponName, int& Count, bool& bResetInventory); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveWeapons (Underlying native function: GiveWeapons 0x6f57cd8)
	void GiveWeapons(struct FName& tag); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveWeapon (Underlying native function: GiveWeapon 0x8b10fe0)
	void GiveWeapon(struct FString& WeaponName, int& RequestedLevel, int& Count); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveTrap (Underlying native function: GiveTrap 0x8b111ac)
	void GiveTrap(struct FString& TrapName, int& RequestedLevel, int& NumTrapsToGive); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveStone (Underlying native function: GiveStone 0x6e8edb4)
	void GiveStone(int& Amount); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveSpecificItem (Underlying native function: GiveSpecificItem 0x8b111ac)
	void GiveSpecificItem(struct FString& ItemPath, int& ItemAmount, int& ItemLevel); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.GiveResources (Underlying native function: GiveResources 0x6e8edb4)
	void GiveResources(int& Amount); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.GivePickaxe (Underlying native function: GivePickaxe 0x6e8f5f8)
	void GivePickaxe(struct FString& PickName); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GivePerkRerolls (Underlying native function: GivePerkRerolls 0x6e8edb4)
	void GivePerkRerolls(int& NumOfRolls); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GivePerk (Underlying native function: GivePerk 0x6e8f5f8)
	void GivePerk(struct FString& PerkName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveMultiItem (Underlying native function: GiveMultiItem 0x8b11444)
	void GiveMultiItem(struct FString& MultiItemName, int& RequestedLevel, int& Count); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveMetal (Underlying native function: GiveMetal 0x6e8edb4)
	void GiveMetal(int& Amount); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveGoodWeapons (Underlying native function: GiveGoodWeapons 0x273fd14)
	void GiveGoodWeapons(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveGold (Underlying native function: GiveGold 0x6e8edb4)
	void GiveGold(int& Amount); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveGlobalCurrency (Underlying native function: GiveGlobalCurrency 0x6e8edb4)
	void GiveGlobalCurrency(int& Amount); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveGadgets (Underlying native function: GiveGadgets 0x8b111ac)
	void GiveGadgets(struct FString& GadgetName, int& Quantity, int& ItemLevel); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveGadget (Underlying native function: GiveGadget 0x8b10e44)
	void GiveGadget(struct FString& GadgetName, int& ItemLevel); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveConsumable (Underlying native function: GiveConsumable 0x8b10fe0)
	void GiveConsumable(struct FString& ConsumableName, int& RequestedLevel, int& Count); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveBotGE (Underlying native function: GiveBotGE 0x6e8f060)
	void GiveBotGE(struct FString& GEtoApply, struct FString& BotCommand); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveBars (Underlying native function: GiveBars 0x6e8edb4)
	void GiveBars(int& Amount); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAthenaWeapons (Underlying native function: GiveAthenaWeapons 0x273fd14)
	void GiveAthenaWeapons(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAthenaTraps (Underlying native function: GiveAthenaTraps 0x273fd14)
	void GiveAthenaTraps(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAthenaLoadout (Underlying native function: GiveAthenaLoadout 0x273fd14)
	void GiveAthenaLoadout(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAthenaGadgets (Underlying native function: GiveAthenaGadgets 0x8b10fe0)
	void GiveAthenaGadgets(struct FString& GadgetName, int& Quantity, int& ItemLevel); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAthenaGadget (Underlying native function: GiveAthenaGadget 0x8b10e44)
	void GiveAthenaGadget(struct FString& GadgetName, int& ItemLevel); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAthenaFullKit (Underlying native function: GiveAthenaFullKit 0x273fd14)
	void GiveAthenaFullKit(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAthenaCosmeticPassWeapons (Underlying native function: GiveAthenaCosmeticPassWeapons 0x273fd14)
	void GiveAthenaCosmeticPassWeapons(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAthenaConsumables (Underlying native function: GiveAthenaConsumables 0x273fd14)
	void GiveAthenaConsumables(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAthenaAmmo (Underlying native function: GiveAthenaAmmo 0x273fd14)
	void GiveAthenaAmmo(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveApolloLoadout (Underlying native function: GiveApolloLoadout 0x273fd14)
	void GiveApolloLoadout(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAmmo (Underlying native function: GiveAmmo 0x6e8f5f8)
	void GiveAmmo(struct FString& AmmoNameAndAmmount); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAllWeapons (Underlying native function: GiveAllWeapons 0x273fd14)
	void GiveAllWeapons(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAllTraps (Underlying native function: GiveAllTraps 0x6e8edb4)
	void GiveAllTraps(int& NumItems); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAllShotguns (Underlying native function: GiveAllShotguns 0x273fd14)
	void GiveAllShotguns(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAllRifles (Underlying native function: GiveAllRifles 0x273fd14)
	void GiveAllRifles(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAllPistols (Underlying native function: GiveAllPistols 0x273fd14)
	void GiveAllPistols(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAllMelee (Underlying native function: GiveAllMelee 0x273fd14)
	void GiveAllMelee(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAllIngredients (Underlying native function: GiveAllIngredients 0x6e8edb4)
	void GiveAllIngredients(int& NumIngredients); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GiveAllConsumables (Underlying native function: GiveAllConsumables 0x6e8edb4)
	void GiveAllConsumables(int& NumItems); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GetWTFRotations (Underlying native function: GetWTFRotations 0x273fd14)
	void GetWTFRotations(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GetReplStat (Underlying native function: GetReplStat 0x8b10540)
	void GetReplStat(struct TEnumAsByte<EFortReplicatedStat>& Stat); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GetPoiVolumeData (Underlying native function: GetPoiVolumeData 0x273fd14)
	void GetPoiVolumeData(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GetPoiInfoForPlayer (Underlying native function: GetPoiInfoForPlayer 0x273fd14)
	void GetPoiInfoForPlayer(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GetGameStat (Underlying native function: GetGameStat 0x6e8f5f8)
	void GetGameStat(struct FString& StatName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GetFishingEconomyForCurrentLure (Underlying native function: GetFishingEconomyForCurrentLure 0x8b10d70)
	void GetFishingEconomyForCurrentLure(int& NumFishToCatch, bool& bWantExplosion); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GetDiscoveryCreatorPage (Underlying native function: GetDiscoveryCreatorPage 0x6ee971c)
	void GetDiscoveryCreatorPage(struct FString& InUserId); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GetAllReplStats (Underlying native function: GetAllReplStats 0x273fd14)
	void GetAllReplStats(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GenerateTravelLogEntries (Underlying native function: GenerateTravelLogEntries 0x6e8edb4)
	void GenerateTravelLogEntries(int& Count); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GeneratePolysInPathingRange (Underlying native function: GeneratePolysInPathingRange 0x73612ac)
	void GeneratePolysInPathingRange(float& MaxDistance, float& MinDistance); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.GenerateMockMatchReport (Underlying native function: GenerateMockMatchReport 0x273fd14)
	void GenerateMockMatchReport(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.FortVolumeResetTest (Underlying native function: FortVolumeResetTest 0x273fd14)
	void FortVolumeResetTest(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.FortVolumeAsyncTest (Underlying native function: FortVolumeAsyncTest 0x273fd14)
	void FortVolumeAsyncTest(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.FortniteForceCharLOD (Underlying native function: FortniteForceCharLOD 0x6e8edb4)
	void FortniteForceCharLOD(int& LOD); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ForceServerShutdown (Underlying native function: ForceServerShutdown 0x8b10cec)
	void ForceServerShutdown(int& ExitCode); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ForceReviveFromDBNO (Underlying native function: ForceReviveFromDBNO 0x8b10cd4)
	void ForceReviveFromDBNO(); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ForcePersonalInputFilter (Underlying native function: ForcePersonalInputFilter 0x6f05250)
	void ForcePersonalInputFilter(enum EFortInputFilterLevel& InputFilter); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ForceMatchInputFilter (Underlying native function: ForceMatchInputFilter 0x6f05250)
	void ForceMatchInputFilter(enum EFortInputFilterLevel& InputFilter); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ForceExternalRichPresenceUpdate (Underlying native function: ForceExternalRichPresenceUpdate 0x273fd14)
	void ForceExternalRichPresenceUpdate(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ForceByPassNavMeshForAISpawning (Underlying native function: ForceByPassNavMeshForAISpawning 0x6df775c)
	void ForceByPassNavMeshForAISpawning(bool& bInValue); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ForceAthenaCosmeticItemInSlot (Underlying native function: ForceAthenaCosmeticItemInSlot 0x8b10b20)
	void ForceAthenaCosmeticItemInSlot(struct FString& TemplateId, enum EAthenaCustomizationCategory& Slot, int& SlotIndex); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ForceAthenaCosmeticItemAllPlayersAndBotsCIDList (Underlying native function: ForceAthenaCosmeticItemAllPlayersAndBotsCIDList 0x273fd14)
	void ForceAthenaCosmeticItemAllPlayersAndBotsCIDList(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ForceAthenaCosmeticItemAllPlayersAndBots (Underlying native function: ForceAthenaCosmeticItemAllPlayersAndBots 0x6ee971c)
	void ForceAthenaCosmeticItemAllPlayersAndBots(struct FString& TemplateId); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ForceAthenaCosmeticItemAllPlayers (Underlying native function: ForceAthenaCosmeticItemAllPlayers 0x6ee971c)
	void ForceAthenaCosmeticItemAllPlayers(struct FString& TemplateId); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ForceAthenaCosmeticItem (Underlying native function: ForceAthenaCosmeticItem 0x6ee971c)
	void ForceAthenaCosmeticItem(struct FString& TemplateId); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ForceAILODs (Underlying native function: ForceAILODs 0x6f05250)
	void ForceAILODs(enum EFortAILODLevel& inForcedAILODValue); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.FinishCurrentStormCircle (Underlying native function: FinishCurrentStormCircle 0x8b10a98)
	void FinishCurrentStormCircle(float& TimeToShrink); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.FfToTimeOfDay (Underlying native function: FfToTimeOfDay 0x73612ac)
	void FfToTimeOfDay(float& FastForwardTime, float& FastForwardSpeed); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.FakeKillHighlight (Underlying native function: FakeKillHighlight 0x273fd14)
	void FakeKillHighlight(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.FakeDownHighlight (Underlying native function: FakeDownHighlight 0x273fd14)
	void FakeDownHighlight(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ExtAuthReset (Underlying native function: ExtAuthReset 0x6df775c)
	void ExtAuthReset(bool& bWipeDeviceAccountInfo); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EventsRefreshPlayer (Underlying native function: EventsRefreshPlayer 0x273fd14)
	void EventsRefreshPlayer(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EnvPain (Underlying native function: EnvPain 0x6df7bc0)
	void EnvPain(float& Amount); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EnduranceDebug (Underlying native function: EnduranceDebug 0x6df775c)
	void EnduranceDebug(bool& Value); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EndLiveStreamingWindow (Underlying native function: EndLiveStreamingWindow 0x273fd14)
	void EndLiveStreamingWindow(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EncounterTopUtilityPercentages (Underlying native function: EncounterTopUtilityPercentages 0x273fd14)
	void EncounterTopUtilityPercentages(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EncounterSpawnProbabilities (Underlying native function: EncounterSpawnProbabilities 0x273fd14)
	void EncounterSpawnProbabilities(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EncounterSetDifficultyLevel (Underlying native function: EncounterSetDifficultyLevel 0x6df7bc0)
	void EncounterSetDifficultyLevel(float& NewDifficulty); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EncounterInitialUtilities (Underlying native function: EncounterInitialUtilities 0x273fd14)
	void EncounterInitialUtilities(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EncounterCurrentUtilities (Underlying native function: EncounterCurrentUtilities 0x273fd14)
	void EncounterCurrentUtilities(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EnableWeatherEvents (Underlying native function: EnableWeatherEvents 0x273fd14)
	void EnableWeatherEvents(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EnableSubtitles (Underlying native function: EnableSubtitles 0x6df775c)
	void EnableSubtitles(bool& bEnable); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EnableServerAIProfilingVerbose (Underlying native function: EnableServerAIProfilingVerbose 0x6df775c)
	void EnableServerAIProfilingVerbose(bool& bEnable); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EnableServerAIProfiling (Underlying native function: EnableServerAIProfiling 0x6df775c)
	void EnableServerAIProfiling(bool& bEnable); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EnableReplaySpotLight (Underlying native function: EnableReplaySpotLight 0x273fd14)
	void EnableReplaySpotLight(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EnableNewCustomizationPanel (Underlying native function: EnableNewCustomizationPanel 0x6df775c)
	void EnableNewCustomizationPanel(bool& bEnable); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EnableFixedTimeStep (Underlying native function: EnableFixedTimeStep 0x6e8edb4)
	void EnableFixedTimeStep(int& AsIfItWasFPS); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.EnableAllReplaySpotLights (Underlying native function: EnableAllReplaySpotLights 0x273fd14)
	void EnableAllReplaySpotLights(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DuplicateReplaySpotLight (Underlying native function: DuplicateReplaySpotLight 0x273fd14)
	void DuplicateReplaySpotLight(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DumpTechAnimSettings (Underlying native function: DumpTechAnimSettings 0x273fd14)
	void DumpTechAnimSettings(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DumpServerAIProfilingReport (Underlying native function: DumpServerAIProfilingReport 0x273fd14)
	void DumpServerAIProfilingReport(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DumpQuickbarItemTags (Underlying native function: DumpQuickbarItemTags 0x273fd14)
	void DumpQuickbarItemTags(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DumpMatchAnalytics (Underlying native function: DumpMatchAnalytics 0x273fd14)
	void DumpMatchAnalytics(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DumpInventory (Underlying native function: DumpInventory 0x273fd14)
	void DumpInventory(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DumpGameStats (Underlying native function: DumpGameStats 0x6e8f5f8)
	void DumpGameStats(struct FString& FilterName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DumpActiveGameplayEffects (Underlying native function: DumpActiveGameplayEffects 0x273fd14)
	void DumpActiveGameplayEffects(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DoDAddIslandDependency (Underlying native function: DoDAddIslandDependency 0x6e8f5f8)
	void DoDAddIslandDependency(struct FString& LinkCode); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.DoAnalyticsAthenaPlayerEndPhaseReportOnServer (Underlying native function: DoAnalyticsAthenaPlayerEndPhaseReportOnServer 0x273fd14)
	void DoAnalyticsAthenaPlayerEndPhaseReportOnServer(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DiscardAILogging (Underlying native function: DiscardAILogging 0x273fd14)
	void DiscardAILogging(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DisableWeatherEvents (Underlying native function: DisableWeatherEvents 0x273fd14)
	void DisableWeatherEvents(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DisableReplaySpotLight (Underlying native function: DisableReplaySpotLight 0x273fd14)
	void DisableReplaySpotLight(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DisableAllReplaySpotLights (Underlying native function: DisableAllReplaySpotLights 0x273fd14)
	void DisableAllReplaySpotLights(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DisableAllParticleComponents (Underlying native function: DisableAllParticleComponents 0x273fd14)
	void DisableAllParticleComponents(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DisableAI (Underlying native function: DisableAI 0x273fd14)
	void DisableAI(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DestroyReplaySpotLight (Underlying native function: DestroyReplaySpotLight 0x273fd14)
	void DestroyReplaySpotLight(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DestroyAllScriptedPawns (Underlying native function: DestroyAllScriptedPawns 0x273fd14)
	void DestroyAllScriptedPawns(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DestroyAllReplaySpotLights (Underlying native function: DestroyAllReplaySpotLights 0x273fd14)
	void DestroyAllReplaySpotLights(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DestroyAllPickups (Underlying native function: DestroyAllPickups 0x273fd14)
	void DestroyAllPickups(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugUseDedicatedServer (Underlying native function: DebugUseDedicatedServer 0x6df775c)
	void DebugUseDedicatedServer(bool& bUse); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugTraceSurfaceType (Underlying native function: DebugTraceSurfaceType 0x6dd0d68)
	void DebugTraceSurfaceType(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugThisAI (Underlying native function: DebugThisAI 0x8b10a80)
	void DebugThisAI(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugTargetTags (Underlying native function: DebugTargetTags 0x8b10a68)
	void DebugTargetTags(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugStructuralSupport (Underlying native function: DebugStructuralSupport 0x7e4a568)
	void DebugStructuralSupport(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugSoundLibrariesTarget (Underlying native function: DebugSoundLibrariesTarget 0x6f7f9ac)
	void DebugSoundLibrariesTarget(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugSoundLibrariesSelf (Underlying native function: DebugSoundLibrariesSelf 0x6f7f994)
	void DebugSoundLibrariesSelf(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugPhysicsObjects (Underlying native function: DebugPhysicsObjects 0x6dd0d50)
	void DebugPhysicsObjects(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugNativeActions (Underlying native function: DebugNativeActions 0x6f7fb14)
	void DebugNativeActions(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugLoadingScreen (Underlying native function: DebugLoadingScreen 0x735a8fc)
	void DebugLoadingScreen(struct FString& MissionGen, bool& bShowBullets); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugKickPlayerDueToInactivity (Underlying native function: DebugKickPlayerDueToInactivity 0x273fd14)
	void DebugKickPlayerDueToInactivity(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugHotSpots (Underlying native function: DebugHotSpots 0x273fd14)
	void DebugHotSpots(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugHideLoadingScreen (Underlying native function: DebugHideLoadingScreen 0x273fd14)
	void DebugHideLoadingScreen(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugForceEnsure (Underlying native function: DebugForceEnsure 0x273fd14)
	void DebugForceEnsure(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugBuildingGroups (Underlying native function: DebugBuildingGroups 0x273fd14)
	void DebugBuildingGroups(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugBuildingDetection (Underlying native function: DebugBuildingDetection 0x273fd14)
	void DebugBuildingDetection(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugAttributeModifiers (Underlying native function: DebugAttributeModifiers 0x6f7fafc)
	void DebugAttributeModifiers(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugAttributeClear (Underlying native function: DebugAttributeClear 0x8b10a50)
	void DebugAttributeClear(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DebugAttribute (Underlying native function: DebugAttribute 0x8b108f0)
	void DebugAttribute(struct FString& Attribute); // (Exec | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager.DebugAbilityTags (Underlying native function: DebugAbilityTags 0x8520ee4)
	void DebugAbilityTags(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.DBNO (Underlying native function: DBNO 0x72619ac)
	void DBNO(); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.CycleTheaterDisplayed (Underlying native function: CycleTheaterDisplayed 0x273fd14)
	void CycleTheaterDisplayed(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.CycleEncounterEQSQueryToDebug (Underlying native function: CycleEncounterEQSQueryToDebug 0x273fd14)
	void CycleEncounterEQSQueryToDebug(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.CycleDebugAbilitySystem (Underlying native function: CycleDebugAbilitySystem 0x273fd14)
	void CycleDebugAbilitySystem(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.CycleCurrentEncounterToDebug (Underlying native function: CycleCurrentEncounterToDebug 0x8b108d8)
	void CycleCurrentEncounterToDebug(); // (Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Crucible_SetWhitelisted (Underlying native function: Crucible_SetWhitelisted 0x6f05250)
	void CrucibleSetWhitelisted(enum EFortCrucibleWhitelistLevel& WhitelistLevel); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.CreateProfileGoCollectionForSublevels (Underlying native function: CreateProfileGoCollectionForSublevels 0x8b106b0)
	void CreateProfileGoCollectionForSublevels(struct FString& SublevelSearchString, int& GridStepsX, int& GridStepsY, int& RotationSteps, int& Quad); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.CreateProfileGoCollectionForCreativeIslands (Underlying native function: CreateProfileGoCollectionForCreativeIslands 0x81fa7d4)
	void CreateProfileGoCollectionForCreativeIslands(int& GridStepsX, int& GridStepsY, int& RotationSteps, int& Quad); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.CraftFree (Underlying native function: CraftFree 0x273fd14)
	void CraftFree(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.CountPlayerBuiltBuildingActors (Underlying native function: CountPlayerBuiltBuildingActors 0x273fd14)
	void CountPlayerBuiltBuildingActors(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ConstructTileWorld (Underlying native function: ConstructTileWorld 0x8b105d0)
	void ConstructTileWorld(int& MaxTiles, int& X, int& Y); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.CommunityVotingRefreshVotingState (Underlying native function: CommunityVotingRefreshVotingState 0x273fd14)
	void CommunityVotingRefreshVotingState(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_ShowNpcCount (Underlying native function: Collection_ShowNpcCount 0x273fd14)
	void CollectionShowNpcCount(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_ShowFishCount (Underlying native function: Collection_ShowFishCount 0x273fd14)
	void CollectionShowFishCount(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_ShowFishCompletion (Underlying native function: Collection_ShowFishCompletion 0x273fd14)
	void CollectionShowFishCompletion(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_QueryFishyFriends (Underlying native function: Collection_QueryFishyFriends 0x273fd14)
	void CollectionQueryFishyFriends(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_QueryCharacterFriends (Underlying native function: Collection_QueryCharacterFriends 0x273fd14)
	void CollectionQueryCharacterFriends(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_NpcBulkUpdateCollections (Underlying native function: Collection_NpcBulkUpdateCollections 0x6ee971c)
	void CollectionNpcBulkUpdateCollections(struct FString& TagMatch); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_MarkOneFishSeen (Underlying native function: Collection_MarkOneFishSeen 0x6ee971c)
	void CollectionMarkOneFishSeen(struct FString& ExactVariantOrSpeciesCategory); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_MarkAllFishSeen (Underlying native function: Collection_MarkAllFishSeen 0x8b105bc)
	void CollectionMarkAllFishSeen(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_FlushPending (Underlying native function: Collection_FlushPending 0x273fd14)
	void CollectionFlushPending(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_FakeMatchEnd (Underlying native function: Collection_FakeMatchEnd 0x273fd14)
	void CollectionFakeMatchEnd(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_CollectNpcIndex (Underlying native function: Collection_CollectNpcIndex 0x6e8edb4)
	void CollectionCollectNpcIndex(int& IndexInCollection); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_CollectNpcAllLocations (Underlying native function: Collection_CollectNpcAllLocations 0x6ee971c)
	void CollectionCollectNpcAllLocations(struct FString& TagMatch); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_CollectNpc (Underlying native function: Collection_CollectNpc 0x6ee971c)
	void CollectionCollectNpc(struct FString& TagMatch); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_CollectNextFishVariant (Underlying native function: Collection_CollectNextFishVariant 0x6df7bc0)
	void CollectionCollectNextFishVariant(float& Length); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_CollectFish (Underlying native function: Collection_CollectFish 0x88c7518)
	void CollectionCollectFish(struct FString& ExactVariantOrSpeciesCategory, float& Length); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_CollectALoadOfFish (Underlying native function: Collection_CollectALoadOfFish 0x273fd14)
	void CollectionCollectALoadOfFish(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_CollectAllNpcVariants (Underlying native function: Collection_CollectAllNpcVariants 0x273fd14)
	void CollectionCollectAllNpcVariants(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.Collection_CollectAllFishVariants (Underlying native function: Collection_CollectAllFishVariants 0x6df7bc0)
	void CollectionCollectAllFishVariants(float& Length); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ClearScriptedPawnVariantChannels (Underlying native function: ClearScriptedPawnVariantChannels 0x8b105a4)
	void ClearScriptedPawnVariantChannels(); // (BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ClearRespawnTimer (Underlying native function: ClearRespawnTimer 0x273fd14)
	void ClearRespawnTimer(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ClearMapFog (Underlying native function: ClearMapFog 0x273fd14)
	void ClearMapFog(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ClearFortVolume (Underlying native function: ClearFortVolume 0x273fd14)
	void ClearFortVolume(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ClearEncounterSpawnPointsCurve (Underlying native function: ClearEncounterSpawnPointsCurve 0x273fd14)
	void ClearEncounterSpawnPointsCurve(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ClearEncounterSpawnPointsCap (Underlying native function: ClearEncounterSpawnPointsCap 0x273fd14)
	void ClearEncounterSpawnPointsCap(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ClearEncounterSimulatedNumberOfPlayers (Underlying native function: ClearEncounterSimulatedNumberOfPlayers 0x273fd14)
	void ClearEncounterSimulatedNumberOfPlayers(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ClearDebugSpawnAIGroupTags (Underlying native function: ClearDebugSpawnAIGroupTags 0x273fd14)
	void ClearDebugSpawnAIGroupTags(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ClearDebugEncounterTags (Underlying native function: ClearDebugEncounterTags 0x273fd14)
	void ClearDebugEncounterTags(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ClearAllForcedAthenaCosmeticItem (Underlying native function: ClearAllForcedAthenaCosmeticItem 0x273fd14)
	void ClearAllForcedAthenaCosmeticItem(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ClaimPortal (Underlying native function: ClaimPortal 0x273fd14)
	void ClaimPortal(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.CheatMountExitVan (Underlying native function: CheatMountExitVan 0x273fd14)
	void CheatMountExitVan(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ChangeTeam (Underlying native function: ChangeTeam 0x8b10540)
	void ChangeTeam(unsigned char& NewTeamNum); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.ChangeBotModule (Underlying native function: ChangeBotModule 0x8b102b8)
	void ChangeBotModule(struct FString& PilotCategory, struct FString& NewModule, bool& bResetNow); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.CaptureTeamToggleInput (Underlying native function: CaptureTeamToggleInput 0x273fd14)
	void CaptureTeamToggleInput(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.CanExitWorld (Underlying native function: CanExitWorld 0x6df775c)
	void CanExitWorld(bool& bValue); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.BuildWith (Underlying native function: BuildWith 0x6e8f5f8)
	void BuildWith(struct FString& ResourceTypeAndOrLevel); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.BuildFree (Underlying native function: BuildFree 0x273fd14)
	void BuildFree(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.BringDownWall (Underlying native function: BringDownWall 0x273fd14)
	void BringDownWall(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.BounceContainer (Underlying native function: BounceContainer 0x273fd14)
	void BounceContainer(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.BotStopDogpile (Underlying native function: BotStopDogpile 0x273fd14)
	void BotStopDogpile(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.BotStartDogpile (Underlying native function: BotStartDogpile 0x273fd14)
	void BotStartDogpile(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.BotSpectate (Underlying native function: BotSpectate 0x6e8f5f8)
	void BotSpectate(struct FString& BotCommand); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.BotFillUp (Underlying native function: BotFillUp 0x6e8edb4)
	void BotFillUp(int& Amount); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.BeautyMode (Underlying native function: BeautyMode 0x273fd14)
	void BeautyMode(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.BattleLabSetInstanceLimiting (Underlying native function: BattleLabSetInstanceLimiting 0x6df775c)
	void BattleLabSetInstanceLimiting(bool& bEnable); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.BattleLabResetSave (Underlying native function: BattleLabResetSave 0x273fd14)
	void BattleLabResetSave(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.BattleLabForceSave (Underlying native function: BattleLabForceSave 0x273fd14)
	void BattleLabForceSave(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortCheatManager.Badass (Underlying native function: Badass 0x273fd14)
	void Badass(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.BackpackSetSize (Underlying native function: BackpackSetSize 0x6e8edb4)
	void BackpackSetSize(int& Size); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AthenaGiveScoreTo (Underlying native function: AthenaGiveScoreTo 0x735ad48)
	void AthenaGiveScoreTo(int& PlayerStateIdx, int& Score); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AthenaForceVictory_Delayed (Underlying native function: AthenaForceVictory_Delayed 0x81d6f28)
	void AthenaForceVictoryDelayed(bool& bVictory, float& DelayTime); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AthenaForceVictory (Underlying native function: AthenaForceVictory 0x6df775c)
	void AthenaForceVictory(bool& bVictory); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AthenaEndlessGame (Underlying native function: AthenaEndlessGame 0x273fd14)
	void AthenaEndlessGame(); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AthenaEmote (Underlying native function: AthenaEmote 0x66e4ab4)
	void AthenaEmote(struct FString& EmoteName); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AreContextMenusEnabled (Underlying native function: AreContextMenusEnabled 0x8b101e8)
	static bool AreContextMenusEnabled(class APlayerController*& PC); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortCheatManager.ApplyGameplayModifier (Underlying native function: ApplyGameplayModifier 0x6e8f5f8)
	void ApplyGameplayModifier(struct FString& ModifierName); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AllowRespawn (Underlying native function: AllowRespawn 0x273fd14)
	void AllowRespawn(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AddWeaponModToCurrentWeapon (Underlying native function: AddWeaponModToCurrentWeapon 0x8b10048)
	void AddWeaponModToCurrentWeapon(struct FString& WeaponModName, bool& bIsDynamic); // (Final | BlueprintAuthorityOnly | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AddUtilityScore (Underlying native function: AddUtilityScore 0x6e8edb4)
	void AddUtilityScore(int& Amount); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AddKillFeedMessage (Underlying native function: AddKillFeedMessage 0x273fd14)
	void AddKillFeedMessage(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AddFavoriteIsland (Underlying native function: AddFavoriteIsland 0x8b0ffc8)
	void AddFavoriteIsland(struct FOnlineLinkId& IslandLinkId); // (Final | Exec | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortCheatManager.AddDebugSpawnAIGroupTag (Underlying native function: AddDebugSpawnAIGroupTag 0x6f57cd8)
	void AddDebugSpawnAIGroupTag(struct FName& tag); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AddDebugEncounterTag (Underlying native function: AddDebugEncounterTag 0x6f57cd8)
	void AddDebugEncounterTag(struct FName& tag); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AddCombatScore (Underlying native function: AddCombatScore 0x6e8edb4)
	void AddCombatScore(int& Amount); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AddBuildingScore (Underlying native function: AddBuildingScore 0x6e8edb4)
	void AddBuildingScore(int& Amount); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AddAllScores (Underlying native function: AddAllScores 0x6e8edb4)
	void AddAllScores(int& Amount); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortCheatManager.AcceptEULA (Underlying native function: AcceptEULA 0x273fd14)
	void AcceptEULA(); // (Final | Exec | Native | Protected)
};

