// Class /Script/FortniteGame.FortSpawnableItemInterface
// Size: 0x28
class IFortSpawnableItemInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortSpawnableItemInterface.OnAddedToSpawnList (Underlying native function: OnAddedToSpawnList 0x6cf5b1c)
	void OnAddedToSpawnList(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortSpawnableItemInterface.GetSpawnItemEntries (Underlying native function: GetSpawnItemEntries 0x87612d4)
	struct TArray<struct FFortItemEntry> GetSpawnItemEntries(class UFortGameplayTagContainer*& InvalidGameplayTagContainer); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpawnableItemInterface.CanBeSpawned (Underlying native function: CanBeSpawned 0x863f1e4)
	bool CanBeSpawned(class UFortGameplayTagContainer*& InvalidGameplayTagContainer, class ABuildingActor*& InBuildingActor); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpawnableItemInterface.CanBeAddedToSpawnList (Underlying native function: CanBeAddedToSpawnList 0x7db7c24)
	bool CanBeAddedToSpawnList(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

