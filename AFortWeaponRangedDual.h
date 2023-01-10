// Class /Script/FortniteGame.FortWeaponRangedDual
// Size: 0x1588
class AFortWeaponRangedDual : public AFortWeaponRanged
{
	class USkeletalMeshComponentBudgeted* LeftHandWeaponMesh; // 0x1530 (0x8)
	class UAnimMontage* LeftHandFireAnimation; // 0x1538 (0x8)
	class UAnimMontage* LeftCockingAnimation; // 0x1540 (0x8)
	class UAnimMontage* LeftHandFireDownsightsAnimation; // 0x1548 (0x8)
	class UAnimMontage* LeftWeaponFireMontage; // 0x1550 (0x8)
	class UAnimMontage* LeftWeaponFireDownsightsMontage; // 0x1558 (0x8)
	class UAnimMontage* LeftWeaponCockingMontage; // 0x1560 (0x8)
	class UAnimMontage* LeftWeaponReloadMontage; // 0x1568 (0x8)
	struct FMulticastInlineDelegate OnHandFired; // 0x1570 (0x10)
	unsigned char padding_1580[0x8]; // 0x1580 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRangedDual.GetNextFireHand (Underlying native function: GetNextFireHand 0x8e5aec4)
	enum EDualWeaponHand GetNextFireHand(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedDual.GetLeftHandWeaponMesh (Underlying native function: GetLeftHandWeaponMesh 0x8e5ae2c)
	class USkeletalMeshComponentBudgeted* GetLeftHandWeaponMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedDual.GetLastFireHand (Underlying native function: GetLastFireHand 0x8e5ae14)
	enum EDualWeaponHand GetLastFireHand(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

