// Class /Script/FortniteGame.FortOctopusTowhookAttachableProjectile
// Size: 0xb58
class AFortOctopusTowhookAttachableProjectile : public AFortAttachableProjectileDeprecated
{
	struct FName RopeAttachSocketName; // 0xb48 (0x4)
	struct FName CollisionProfileNameOverride; // 0xb4c (0x4)
	class AFortOctopusVehicle* OwningVehicle; // 0xb50 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortOctopusTowhookAttachableProjectile.GetRopeAttachLocation (Underlying native function: GetRopeAttachLocation 0x8e6bde4)
	struct FVector GetRopeAttachLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortOctopusTowhookAttachableProjectile.DestroyProjectile (Underlying native function: DestroyProjectile 0x6ca340c)
	void DestroyProjectile(); // (Final | Native | Public)
};

