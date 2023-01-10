// Class /Script/FortniteGame.FortMinigameLogicComponent
// Size: 0x168
class UFortMinigameLogicComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct FMulticastInlineDelegate MinigameStateChangedDelegate; // 0xa8 (0x10)
	struct FMulticastInlineDelegate MinigameStartedDelegate; // 0xb8 (0x10)
	struct FMulticastInlineDelegate PostMinigameStartedDelegate; // 0xc8 (0x10)
	struct FMulticastInlineDelegate MinigameEndedDelegate; // 0xd8 (0x10)
	struct FMulticastInlineDelegate OnPlayspaceEditModeChanged; // 0xe8 (0x10)
	struct FMulticastInlineDelegate OnAddedToMinigame; // 0xf8 (0x10)
	struct FMulticastInlineDelegate OnRemovedFromMinigame; // 0x108 (0x10)
	struct FGameplayTagContainer MinigameTags; // 0x118 (0x20)
	struct TArray<class UClass*> DesiredStats; // 0x138 (0x10)
	bool bIsRelevantForMinigameInitialization; // 0x148 (0x1)
	bool bForceAlwaysRelevantInVolume; // 0x149 (0x1)
	bool bAlwaysTryHandleDelayedStateChange; // 0x14a (0x1)
	unsigned char unreflected_14b[0x5]; // 0x14b (0x5) 
	class AFortMinigame* CurrentMinigame; // 0x150 (0x8)
	class AFortMinigame* CachedMinigame; // 0x158 (0x8)
	unsigned char padding_160[0x8]; // 0x160 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigameLogicComponent.TryAttachToMinigame (Underlying native function: TryAttachToMinigame 0x88cb924)
	bool TryAttachToMinigame(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameLogicComponent.RemoveMinigameTag (Underlying native function: RemoveMinigameTag 0x88c8768)
	void RemoveMinigameTag(struct FGameplayTag& tag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigameLogicComponent.HandlePostMinigameStarted (Underlying native function: HandlePostMinigameStarted 0x20eb530)
	void HandlePostMinigameStarted(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigameLogicComponent.HandlePlayspaceEditModeChange (Underlying native function: HandlePlayspaceEditModeChange 0x88c5dfc)
	void HandlePlayspaceEditModeChange(bool& bInEditMode); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigameLogicComponent.HandleMinigameStateChanged (Underlying native function: HandleMinigameStateChanged 0x88c5d34)
	void HandleMinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& NewMinigameState); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigameLogicComponent.HandleMinigameStarted (Underlying native function: HandleMinigameStarted 0x88c5d1c)
	void HandleMinigameStarted(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigameLogicComponent.HandleMinigameSet (Underlying native function: HandleMinigameSet 0x20eb1a0)
	void HandleMinigameSet(); // (0x00000002 | Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigameLogicComponent.HandleMinigameEnded (Underlying native function: HandleMinigameEnded 0x14211f8)
	void HandleMinigameEnded(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigameLogicComponent.AddMinigameTag (Underlying native function: AddMinigameTag 0x88c189c)
	void AddMinigameTag(struct FGameplayTag& tag); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

