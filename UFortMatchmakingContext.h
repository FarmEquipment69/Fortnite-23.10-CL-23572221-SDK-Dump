// Class /Script/FortniteGame.FortMatchmakingContext
// Size: 0x1d0
class UFortMatchmakingContext : public UFortBlueprintContext
{
	struct FMulticastInlineDelegate OnMatchmakingStarted; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnMatchmakingComplete; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnMatchmakingStateChange; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnMatchmakingFlowChanged; // 0x60 (0x10)
	struct FMulticastInlineDelegate OnLobbyConnectionAttemptStarted; // 0x70 (0x10)
	struct FMulticastInlineDelegate OnLobbyConnectionAttemptFailed; // 0x80 (0x10)
	struct FMulticastInlineDelegate OnLobbyConnectionAttemptProceedToLobby; // 0x90 (0x10)
	struct FMulticastInlineDelegate OnLobbyWaitingForPlayers; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnLobbyWaitingForPlayersTimeUpdate; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnLobbyStarted; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnLobbyDisconnected; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnLobbyConnectingToGame; // 0xe0 (0x10)
	struct FMulticastInlineDelegate OnLobbyTimeUpdated; // 0xf0 (0x10)
	struct FMulticastInlineDelegate OnLobbyTimeExpired; // 0x100 (0x10)
	struct FMulticastInlineDelegate OnLocalReadyUpStatusChange; // 0x110 (0x10)
	struct FMulticastInlineDelegate OnWorldRecordLoadedChanged; // 0x120 (0x10)
	struct FMulticastInlineDelegate OnRejoinCheckCompleted; // 0x130 (0x10)
	unsigned char unreflected_140[0x4]; // 0x140 (0x4) 
	struct FFortMatchmakingConfig NormalConfig; // 0x144 (0x10)
	struct FFortMatchmakingConfig CriticalConfig; // 0x154 (0x10)
	struct FFortMatchmakingConfig QuickPlayConfig; // 0x164 (0x10)
	struct FFortMatchmakingConfig OnboardingConfig; // 0x174 (0x10)
	struct FFortMatchmakingConfig OutpostConfig; // 0x184 (0x10)
	bool bMatchmakingFlowActive; // 0x194 (0x1)
	unsigned char unreflected_195[0x3]; // 0x195 (0x3) 
	struct FMulticastInlineDelegate OnOutpostDiscoveryFailure; // 0x198 (0x10)
	unsigned char unreflected_1a8[0x8]; // 0x1a8 (0x8) 
	struct FMulticastInlineDelegate OnUtilityPreStateChanged; // 0x1b0 (0x10)
	struct FMulticastInlineDelegate OnUtilityStateChanged; // 0x1c0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortMatchmakingContext.StartWargameSimulationAssist (Underlying native function: StartWargameSimulationAssist 0x89e6954)
	void StartWargameSimulationAssist(float& MinMissionDifficulty, float& MaxMissionDifficulty); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.StartStormShieldExpansionAssist (Underlying native function: StartStormShieldExpansionAssist 0x89e6890)
	void StartStormShieldExpansionAssist(float& MinMissionDifficulty, float& MaxMissionDifficulty); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.StartQuickPlay (Underlying native function: StartQuickPlay 0x89e67c8)
	void StartQuickPlay(float& MinMissionDifficulty, float& MaxMissionDifficulty); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.StartOnboardingMission (Underlying native function: StartOnboardingMission 0x89e67a4)
	bool StartOnboardingMission(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.StartMatchmaking (Underlying native function: StartMatchmaking 0x89e6790)
	void StartMatchmaking(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.StartCriticalMission (Underlying native function: StartCriticalMission 0x89e66c8)
	void StartCriticalMission(float& MinMissionDifficulty, float& MaxMissionDifficulty); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.SetMatchmakingFlowActive (Underlying native function: SetMatchmakingFlowActive 0x89e6638)
	void SetMatchmakingFlowActive(bool& InFlow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.SetCustomMatchmakingKey (Underlying native function: SetCustomMatchmakingKey 0x89e6488)
	void SetCustomMatchmakingKey(struct FString& Key); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.RequestUtilityToToggleMatchmaking (Underlying native function: RequestUtilityToToggleMatchmaking 0x89e6474)
	void RequestUtilityToToggleMatchmaking(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.RequestUtilityToMatchmake (Underlying native function: RequestUtilityToMatchmake 0x89e6460)
	void RequestUtilityToMatchmake(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.RequestUtilityToCancelMatchmaking (Underlying native function: RequestUtilityToCancelMatchmaking 0x89e644c)
	void RequestUtilityToCancelMatchmaking(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.ReadyUp (Underlying native function: ReadyUp 0x273fd14)
	void ReadyUp(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.NeedToCheckRejoinStatus (Underlying native function: NeedToCheckRejoinStatus 0x89e6408)
	bool NeedToCheckRejoinStatus(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.JoinFromLobby (Underlying native function: JoinFromLobby 0x89e63e4)
	bool JoinFromLobby(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.IsWorldRecordLoaded (Underlying native function: IsWorldRecordLoaded 0x89e63c0)
	bool IsWorldRecordLoaded(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.IsWaitingOnUpdateManager (Underlying native function: IsWaitingOnUpdateManager 0x89e63a4)
	bool IsWaitingOnUpdateManager(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.IsOutpostPermitted (Underlying native function: IsOutpostPermitted 0x2830cb8)
	bool IsOutpostPermitted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMatchmakingContext.IsMatchmakingRegionEnabled (Underlying native function: IsMatchmakingRegionEnabled 0x89e6380)
	bool IsMatchmakingRegionEnabled(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMatchmakingContext.IsMatchmakingLocal (Underlying native function: IsMatchmakingLocal 0x89e635c)
	bool IsMatchmakingLocal(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMatchmakingContext.IsMatchmakingFlowActive (Underlying native function: IsMatchmakingFlowActive 0x89e6344)
	bool IsMatchmakingFlowActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMatchmakingContext.IsJoinableGameAvailable (Underlying native function: IsJoinableGameAvailable 0x89e6300)
	bool IsJoinableGameAvailable(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.IsInputBasedMatchmakingEnabled (Underlying native function: IsInputBasedMatchmakingEnabled 0x2723800)
	bool IsInputBasedMatchmakingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMatchmakingContext.IsInLobby (Underlying native function: IsInLobby 0x28b5d20)
	bool IsInLobby(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMatchmakingContext.IsCustomMatchmakingKeyEnabled (Underlying native function: IsCustomMatchmakingKeyEnabled 0x89e62dc)
	bool IsCustomMatchmakingKeyEnabled(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMatchmakingContext.IsConnectedToGame (Underlying native function: IsConnectedToGame 0x89e62c4)
	bool IsConnectedToGame(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMatchmakingContext.HasBroadcasterToken (Underlying native function: HasBroadcasterToken 0x89e627c)
	bool HasBroadcasterToken(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMatchmakingContext.GetMatchmakingFillText (Underlying native function: GetMatchmakingFillText 0x89e619c)
	struct FText GetMatchmakingFillText(bool& bDesiredFill); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMatchmakingContext.GetLobbyWaitForPlayersTimeRemaining (Underlying native function: GetLobbyWaitForPlayersTimeRemaining 0x89e6158)
	float GetLobbyWaitForPlayersTimeRemaining(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.GetLobbyBeaconClient (Underlying native function: GetLobbyBeaconClient 0x89e6110)
	class AFortLobbyBeaconClient* GetLobbyBeaconClient(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMatchmakingContext.GetLegacyNonInputBasedPlayAgainstText (Underlying native function: GetLegacyNonInputBasedPlayAgainstText 0x11abde0)
	struct FText GetLegacyNonInputBasedPlayAgainstText(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.GetInputBasedMatchmakingPool (Underlying native function: GetInputBasedMatchmakingPool 0x89e6024)
	enum ECommonInputType GetInputBasedMatchmakingPool(bool& bIsDefaultPool, bool& bEntirePartyUsingTargetPoolInput); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMatchmakingContext.GetCustomMatchmakingKey (Underlying native function: GetCustomMatchmakingKey 0x89e5ebc)
	struct FString GetCustomMatchmakingKey(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMatchmakingContext.EnterOutpost (Underlying native function: EnterOutpost 0x89e5ea8)
	void EnterOutpost(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.DisplayAntiTaxiError (Underlying native function: DisplayAntiTaxiError 0x89e5e94)
	void DisplayAntiTaxiError(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.DisconnectFromLobby (Underlying native function: DisconnectFromLobby 0x89e5e60)
	void DisconnectFromLobby(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.CheckRejoinStatus (Underlying native function: CheckRejoinStatus 0x89e5e4c)
	void CheckRejoinStatus(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMatchmakingContext.CancelMatchmaking (Underlying native function: CancelMatchmaking 0x89e5e38)
	void CancelMatchmaking(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

