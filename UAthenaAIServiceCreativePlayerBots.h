// Class /Script/FortniteAI.AthenaAIServiceCreativePlayerBots
// Size: 0xe80
class UAthenaAIServiceCreativePlayerBots : public UAthenaAIServicePlayerBots
{
	struct FMulticastInlineDelegate OnAllMinigameBotsSpawned; // 0xe08 (0x10)
	struct TWeakObjectPtr<class AFortMinigame> CachedMinigame; // 0xe18 (0x8)
	unsigned char unreflected_e20[0x8]; // 0xe20 (0x8) 
	struct TMap<class AActor*, class APlayerController*> HiringHistory; // 0xe28 (0x50)
	unsigned char padding_e78[0x8]; // 0xe78 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.AthenaAIServiceCreativePlayerBots.OnMinigameStateChanged (Underlying native function: OnMinigameStateChanged 0xa2329b0)
	void OnMinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& MinigameState); // (0x00000002 | Native | Public)

	// Function /Script/FortniteAI.AthenaAIServiceCreativePlayerBots.IsMinigameBotSpawningRequired (Underlying native function: IsMinigameBotSpawningRequired 0x8814434)
	bool IsMinigameBotSpawningRequired(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AthenaAIServiceCreativePlayerBots.GetLastHiringPlayer (Underlying native function: GetLastHiringPlayer 0xa2315ac)
	class APlayerController* GetLastHiringPlayer(class AActor*& HiredOwner); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AthenaAIServiceCreativePlayerBots.ClearHiringHistory (Underlying native function: ClearHiringHistory 0xa231274)
	void ClearHiringHistory(class AActor*& HiredOwner); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAIServiceCreativePlayerBots.AddHiringHistory (Underlying native function: AddHiringHistory 0xa2310fc)
	void AddHiringHistory(class AActor*& HiredOwner, class APlayerController*& HiringPlayer); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

