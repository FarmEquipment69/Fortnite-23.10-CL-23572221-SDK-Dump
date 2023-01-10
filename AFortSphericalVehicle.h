// Class /Script/FortniteGame.FortSphericalVehicle
// Size: 0x1bb0
class AFortSphericalVehicle : public AFortAthenaSKVehicle
{
	struct FSphericalDriveParams BaseSphericalDriveParams; // 0x19c0 (0x48)
	unsigned char padding_1a08[0x1a8]; // 0x1a08 (0x1a8)

	/* Functions */

	// Function /Script/FortniteGame.FortSphericalVehicle.TickSpawnEffects (Underlying native function: TickSpawnEffects 0x8182048)
	void TickSpawnEffects(float& DeltaTime, float& Val, float& ForwardSpeedKmh); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortSphericalVehicle.OnHit (Has no native function)
	void OnHit(struct FVector& Location, struct FVector& Normal, float& Force, class AActor*& HitActor); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)
};

