// Class /Script/FortniteGame.FortWeaponRangedForVehicle
// Size: 0x15f8
class AFortWeaponRangedForVehicle : public AFortWeaponRanged
{
	unsigned char unreflected_1530[0x8]; // 0x1530 (0x8) 
	class USkeletalMeshComponent* CachedWeaponMeshCompOnVehicle; // 0x1538 (0x8)
	struct FVector WeaponLoc; // 0x1540 (0x18)
	struct FRotator WeaponRot; // 0x1558 (0x18)
	struct FMountedWeaponInfo MountedWeaponInfo; // 0x1570 (0x40)
	struct FMountedWeaponInfoRepped MountedWeaponInfoRepped; // 0x15b0 (0x48)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRangedForVehicle.OnRep_MountedWeaponInfoRepped (Underlying native function: OnRep_MountedWeaponInfoRepped 0x8e5bc40)
	void OnRepMountedWeaponInfoRepped(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeaponRangedForVehicle.OnHostVehicleSetup (Has no native function)
	void OnHostVehicleSetup(); // (Event | Public | BlueprintEvent)
};

