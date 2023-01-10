// Class /Script/FortniteGame.DeleteObjects
// Size: 0x130
class UDeleteObjects : public UObjectInteractionBehavior
{
	struct TArray<class AActor*> DeleteActors; // 0x120 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.DeleteObjects.PlayDeleteAnimation (Underlying native function: PlayDeleteAnimation 0x8e0f768)
	void PlayDeleteAnimation(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.DeleteObjects.GetDeleteActorsMeshComponents (Underlying native function: GetDeleteActorsMeshComponents 0x8e0c9bc)
	void GetDeleteActorsMeshComponents(struct TArray<class UMeshComponent*>& Components); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

