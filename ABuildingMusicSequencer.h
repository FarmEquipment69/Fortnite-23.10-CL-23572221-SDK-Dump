// Class /Script/FortniteGame.BuildingMusicSequencer
// Size: 0x1168
class ABuildingMusicSequencer : public ABuildingTrapFloor
{
	class AController* TriggerInstigator; // 0x1098 (0x8)
	class AController* CachedTriggerInstigator; // 0x10a0 (0x8)
	unsigned char padding_10a8[0xc0]; // 0x10a8 (0xc0)

	/* Functions */

	// Function /Script/FortniteGame.BuildingMusicSequencer.ResetHitActors (Underlying native function: ResetHitActors 0x83881d8)
	void ResetHitActors(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingMusicSequencer.HitActorsAsync (Underlying native function: HitActorsAsync 0x8385ae0)
	void HitActorsAsync(struct FTransform& Transform, struct FBoxSphereBounds& Bounds); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)
};

