// Class /Script/FortniteGame.CreativePlayerHealthInfoComponent
// Size: 0x120
class UCreativePlayerHealthInfoComponent : public UFortPlayerHealthInfoComponent
{
	struct FMulticastInlineDelegate OnBossPlayerChanged; // 0x100 (0x10)
	class AFortMinigame* ControllingMinigame; // 0x110 (0x8)
	class AFortPlayerStateAthena* BossPlayerState; // 0x118 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.CreativePlayerHealthInfoComponent.OnRep_BossPlayerState (Underlying native function: OnRep_BossPlayerState 0x84fa7dc)
	void OnRepBossPlayerState(); // (Final | Native | Private)

	// Function /Script/FortniteGame.CreativePlayerHealthInfoComponent.OnMinigameStarted (Underlying native function: OnMinigameStarted 0x84fa674)
	void OnMinigameStarted(); // (Final | Native | Private)

	// Function /Script/FortniteGame.CreativePlayerHealthInfoComponent.OnMinigamePlayerLeftMinigame (Underlying native function: OnMinigamePlayerLeftMinigame 0x84fa56c)
	void OnMinigamePlayerLeftMinigame(struct FUniqueNetIdRepl& UniqueNetId, bool& bIsLocalPlayer); // (Final | Native | Private)

	// Function /Script/FortniteGame.CreativePlayerHealthInfoComponent.OnMinigamePlayerJoinedMinigame (Underlying native function: OnMinigamePlayerJoinedMinigame 0x84fa464)
	void OnMinigamePlayerJoinedMinigame(struct FUniqueNetIdRepl& UniqueNetId, bool& bIsLocalPlayer); // (Final | Native | Private)

	// Function /Script/FortniteGame.CreativePlayerHealthInfoComponent.OnMinigamePlayerDeadStateChanged (Underlying native function: OnMinigamePlayerDeadStateChanged 0x84fa39c)
	void OnMinigamePlayerDeadStateChanged(class AFortPlayerStateAthena*& PlayerState, bool& bIsDead); // (Final | Native | Private)

	// Function /Script/FortniteGame.CreativePlayerHealthInfoComponent.OnMinigamePlayerClassApplied (Underlying native function: OnMinigamePlayerClassApplied 0x84fa21c)
	void OnMinigamePlayerClassApplied(class AFortPlayerState*& PlayerState, unsigned char& ClassSlotIndex); // (Final | Native | Private)

	// Function /Script/FortniteGame.CreativePlayerHealthInfoComponent.OnMinigamePlayerChangedTeam (Underlying native function: OnMinigamePlayerChangedTeam 0x84fa0e8)
	void OnMinigamePlayerChangedTeam(class AFortPlayerState*& PlayerState, unsigned char& TeamId, unsigned char& OldTeamId, bool& bTeamChangedWithoutRespawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.CreativePlayerHealthInfoComponent.OnMinigameEnded (Underlying native function: OnMinigameEnded 0x84fa014)
	void OnMinigameEnded(); // (Final | Native | Private)
};

