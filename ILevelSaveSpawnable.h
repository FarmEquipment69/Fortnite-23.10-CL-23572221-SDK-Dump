// Class /Script/FortniteGame.LevelSaveSpawnable
// Size: 0x28
class ILevelSaveSpawnable : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.LevelSaveSpawnable.PreSaveToQuickbar (Underlying native function: PreSaveToQuickbar 0x662e248)
	void PreSaveToQuickbar(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.LevelSaveSpawnable.PreSaveBaseActorRecord (Underlying native function: PreSaveBaseActorRecord 0x662e12c)
	void PreSaveBaseActorRecord(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.LevelSaveSpawnable.PreFinishSpawning (Underlying native function: PreFinishSpawning 0x7dc8e70)
	void PreFinishSpawning(class AActor*& VolumeSpawnedWithin); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.LevelSaveSpawnable.PostLevelSaveSpawnCleanup (Underlying native function: PostLevelSaveSpawnCleanup 0x268d874)
	void PostLevelSaveSpawnCleanup(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.LevelSaveSpawnable.PostFinishSpawningInEditor (Underlying native function: PostFinishSpawningInEditor 0x6e5e0cc)
	void PostFinishSpawningInEditor(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.LevelSaveSpawnable.PostFinishSpawning (Underlying native function: PostFinishSpawning 0x26aab60)
	void PostFinishSpawning(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.LevelSaveSpawnable.CanBeSavedToPlayset (Underlying native function: CanBeSavedToPlayset 0x7dd0310)
	bool CanBeSavedToPlayset(); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.LevelSaveSpawnable.CanBeSavedToCreativeVolume (Underlying native function: CanBeSavedToCreativeVolume 0x7dd02ec)
	bool CanBeSavedToCreativeVolume(); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.LevelSaveSpawnable.CanBeDeletedFromCreativeVolume (Underlying native function: CanBeDeletedFromCreativeVolume 0x7dd02c8)
	bool CanBeDeletedFromCreativeVolume(); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)
};

