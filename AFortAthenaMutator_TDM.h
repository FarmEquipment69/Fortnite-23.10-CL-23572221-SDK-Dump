// Class /Script/FortniteGame.FortAthenaMutator_TDM
// Size: 0x748
class AFortAthenaMutator_TDM : public AFortAthenaMutator_GameModeBase
{
	struct FMulticastInlineDelegate OnPlayerStandingsChanged; // 0x450 (0x10)
	unsigned char unreflected_460[0x8]; // 0x460 (0x8) 
	struct FScalableFloat NumKillsForVictory; // 0x468 (0x28)
	struct FScalableFloat EnableGoalScoreScaling; // 0x490 (0x28)
	struct FScalableFloat MinGoalScore; // 0x4b8 (0x28)
	struct FScalableFloat GoalScoreBucketSize; // 0x4e0 (0x28)
	struct FScalableFloat GoalScoreGridSnapValue; // 0x508 (0x28)
	struct FScalableFloat GoalScoreMinToWin; // 0x530 (0x28)
	struct FScalableFloat AllowSpectatingAfterDeath; // 0x558 (0x28)
	bool bIsTwoTeamTDM; // 0x580 (0x1)
	unsigned char unreflected_581[0x3]; // 0x581 (0x3) 
	bool bShouldGrantInventoryToNewPlayers; // 0x584 (0x1)
	unsigned char unreflected_585[0x3]; // 0x585 (0x3) 
	struct FScalableFloat bShouldCalculateRespawnLocation; // 0x588 (0x28)
	struct FFortRespawnLogicData RespawnLogicData; // 0x5b0 (0x140)
	struct FAthenaGameMessageData GameMsgIntro; // 0x6f0 (0x50)
	unsigned char padding_740[0x8]; // 0x740 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_TDM.OnPlayerStateRemoved (Underlying native function: OnPlayerStateRemoved 0x826346c)
	void OnPlayerStateRemoved(class APlayerState*& RemovedPlayerState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_TDM.OnPlayerStateAdded (Underlying native function: OnPlayerStateAdded 0x82633a0)
	void OnPlayerStateAdded(class APlayerState*& AddedPlayerState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_TDM.OnPlayerKillScoreChanged (Underlying native function: OnPlayerKillScoreChanged 0x82632d8)
	void OnPlayerKillScoreChanged(class AFortPlayerStateAthena*& PlayerState, int& NewKillScore); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_TDM.OnMutatorGenericIntegerUpdated (Underlying native function: OnMutatorGenericIntegerUpdated 0x826320c)
	void OnMutatorGenericIntegerUpdated(int& GenericIntegerIndex, int& NewIntegerValue); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_TDM.GetPlayerStandings (Underlying native function: GetPlayerStandings 0x8262774)
	struct TArray<struct FTDMPlayerStandingInfo> GetPlayerStandings(); // (Final | Native | Protected | BlueprintCallable | Const)
};

