// Class /Script/FortniteGame.FortWeaponRangedMountedCannon
// Size: 0x1600
class AFortWeaponRangedMountedCannon : public AFortWeaponRangedForVehicle
{
	int FirePlayerInSeat; // 0x15f8 (0x4)
	bool bUseLegacyLaunchLogic; // 0x15fc (0x1)
	enum MountedCannonLaunchPlayerMode LaunchMode; // 0x15fd (0x1)
	bool bCanFireNormalProjectile; // 0x15fe (0x1)
	unsigned char padding_15ff[0x1]; // 0x15ff (0x1)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRangedMountedCannon.ServerFireActorInCannon (Underlying native function: ServerFireActorInCannon 0x8e5c164)
	void ServerFireActorInCannon(struct FVector& LaunchDir); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortWeaponRangedMountedCannon.OnPreLaunchPawn (Has no native function)
	void OnPreLaunchPawn(class AFortPlayerPawn*& Pawn, struct FVector& LaunchDir); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedMountedCannon.OnLaunchPawn (Has no native function)
	void OnLaunchPawn(class AFortPlayerPawn*& Pawn, struct FVector& LaunchDir); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedMountedCannon.GetVehicleSkeletalMesh (Underlying native function: GetVehicleSkeletalMesh 0x8e5b034)
	class USkeletalMeshComponent* GetVehicleSkeletalMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

