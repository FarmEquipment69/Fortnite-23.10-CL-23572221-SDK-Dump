// Class /Script/FortniteGame.FortMinigamePlayerStartComponent
// Size: 0x1d0
class UFortMinigamePlayerStartComponent : public UFortMinigameLogicComponent
{
	unsigned char bIsCheckpoint; // 0x168 (0x1)
	unsigned char unreflected_169[0x7]; // 0x169 (0x7) 
	struct TArray<class AFortPlayerStartCreative*> PlayerStarts; // 0x170 (0x10)
	unsigned char padding_180[0x50]; // 0x180 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigamePlayerStartComponent.StorePlayerCheckpoint (Underlying native function: StorePlayerCheckpoint 0x88cb6ec)
	void StorePlayerCheckpoint(class APlayerState*& Player); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigamePlayerStartComponent.HasAnyCheckpointValue (Underlying native function: HasAnyCheckpointValue 0x88c5ea0)
	bool HasAnyCheckpointValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigamePlayerStartComponent.GetPlayerCheckpointLastUsedTime (Underlying native function: GetPlayerCheckpointLastUsedTime 0x88c43cc)
	bool GetPlayerCheckpointLastUsedTime(class APlayerState*& Player, struct FDateTime*& OutTime); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

