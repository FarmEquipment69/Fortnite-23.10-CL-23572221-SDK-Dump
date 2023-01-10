// Class /Script/FortniteGame.FortPlayerSpawnPad
// Size: 0xe00
class AFortPlayerSpawnPad : public ABuildingSMActor
{
	struct TArray<class UStaticMeshComponent*> Chests; // 0xde0 (0x10)
	unsigned char padding_df0[0x10]; // 0xdf0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerSpawnPad.PrestreamChestTextures (Underlying native function: PrestreamChestTextures 0x8c65c88)
	void PrestreamChestTextures(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerSpawnPad.InitializeChestProgression (Underlying native function: InitializeChestProgression 0x8c64368)
	void InitializeChestProgression(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerSpawnPad.GetRewardedChestIndex (Underlying native function: GetRewardedChestIndex 0x8c63e8c)
	int GetRewardedChestIndex(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerSpawnPad.GetPossessedPlayerPawnsByID (Underlying native function: GetPossessedPlayerPawnsByID 0x8c63bf0)
	void GetPossessedPlayerPawnsByID(struct TArray<class AFortPlayerPawn*>& SortedPlayerPawns); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerSpawnPad.ChestProgressionUpdate (Underlying native function: ChestProgressionUpdate 0x8c62b30)
	void ChestProgressionUpdate(struct FVector& PrimaryChestOffset, struct FVector& ChestOffset); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

