// Class /Script/FortniteAI.FortCreativePatrolPath
// Size: 0x468
class AFortCreativePatrolPath : public AFortAthenaPatrolPath
{
	enum EFortCreativePatrolPathGroup PatrolPathGroup; // 0x450 (0x1)
	unsigned char unreflected_451[0x7]; // 0x451 (0x7) 
	class ABuildingActor* CreativePathRenderer; // 0x458 (0x8)
	unsigned char padding_460[0x8]; // 0x460 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortCreativePatrolPath.SetPatrolHasValidNavMesh (Underlying native function: SetPatrolHasValidNavMesh 0xa19d0d8)
	void SetPatrolHasValidNavMesh(bool& bValidNavMesh); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativePatrolPath.HasPatrolValidNavMesh (Underlying native function: HasPatrolValidNavMesh 0xa19b41c)
	bool HasPatrolValidNavMesh(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

