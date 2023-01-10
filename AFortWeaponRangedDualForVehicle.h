// Class /Script/FortniteGame.FortWeaponRangedDualForVehicle
// Size: 0x1678
class AFortWeaponRangedDualForVehicle : public AFortWeaponRangedDual
{
	unsigned char unreflected_1588[0x8]; // 0x1588 (0x8) 
	struct FMountedWeaponInfo MountedWeaponInfo; // 0x1590 (0x40)
	struct FMountedWeaponInfoRepped MountedWeaponInfoRepped; // 0x15d0 (0x48)
	struct FVector LeftWeaponLoc; // 0x1618 (0x18)
	struct FRotator LeftWeaponRot; // 0x1630 (0x18)
	struct FVector RightWeaponLoc; // 0x1648 (0x18)
	struct FRotator RightWeaponRot; // 0x1660 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRangedDualForVehicle.OnRep_MountedWeaponInfoRepped (Underlying native function: OnRep_MountedWeaponInfoRepped 0x8e5bbcc)
	void OnRepMountedWeaponInfoRepped(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeaponRangedDualForVehicle.OnHostVehicleSetup (Has no native function)
	void OnHostVehicleSetup(); // (Event | Public | BlueprintEvent)
};

