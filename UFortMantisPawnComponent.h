// Class /Script/MantisRuntime.FortMantisPawnComponent
// Size: 0x250
class UFortMantisPawnComponent : public UPawnComponent
{
	unsigned char unreflected_a0[0x80]; // 0xa0 (0x80) 
	struct TMap<class UAnimMontage*, struct FFortMantisMontageData> MontageDataMap; // 0x120 (0x50)
	class UFortMantisData* MantisData; // 0x170 (0x8)
	class AFortWeapon* Weapon; // 0x178 (0x8)
	unsigned char padding_180[0xd0]; // 0x180 (0xd0)

	/* Functions */

	// Function /Script/MantisRuntime.FortMantisPawnComponent.SetLockOnState (Underlying native function: SetLockOnState 0x6de42dc)
	void SetLockOnState(bool& bEnabled, class AActor*& TargetActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MantisRuntime.FortMantisPawnComponent.OnPostPhysicsRotation (Underlying native function: OnPostPhysicsRotation 0x6de4214)
	void OnPostPhysicsRotation(class UCharacterMovementComponent*& CharMoveComp, float& DeltaSeconds); // (Final | Native | Protected)

	// Function /Script/MantisRuntime.FortMantisPawnComponent.OnOwnerWeaponHolstered (Underlying native function: OnOwnerWeaponHolstered 0x6de4200)
	void OnOwnerWeaponHolstered(); // (Final | Native | Protected)

	// Function /Script/MantisRuntime.FortMantisPawnComponent.OnCharacterMovementPreUpdate (Underlying native function: OnCharacterMovementPreUpdate 0x6de40d0)
	void OnCharacterMovementPreUpdate(class UCharacterMovementComponent*& CharMoveComp, float& DeltaSeconds); // (Final | Native | Protected)

	// Function /Script/MantisRuntime.FortMantisPawnComponent.IsPerformingLockOn (Underlying native function: IsPerformingLockOn 0x6de40b4)
	bool IsPerformingLockOn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MantisRuntime.FortMantisPawnComponent.HasLockOnTarget (Underlying native function: HasLockOnTarget 0x6de4038)
	bool HasLockOnTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MantisRuntime.FortMantisPawnComponent.GetLockOnTarget (Underlying native function: GetLockOnTarget 0x6de4014)
	class AActor* GetLockOnTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

