// Class /Script/FortniteGame.FortWeaponRangedDualSwing
// Size: 0x1618
class AFortWeaponRangedDualSwing : public AFortWeaponRangedDual
{
	bool bAlwaysUseDefaultReticleColor; // 0x1588 (0x1)
	unsigned char unreflected_1589[0x7]; // 0x1589 (0x7) 
	class AActor* RopeAttachPointActor; // 0x1590 (0x8)
	class UStaticMeshComponent* RopeAnchor; // 0x1598 (0x8)
	class UStaticMeshComponent* Rope; // 0x15a0 (0x8)
	struct FName SwingSocketName; // 0x15a8 (0x4)
	float RopeMeshLengthMultiplier; // 0x15ac (0x4)
	float RopeUpdateFrequency; // 0x15b0 (0x4)
	float RopeFadeTime; // 0x15b4 (0x4)
	unsigned char unreflected_15b8[0x18]; // 0x15b8 (0x18) 
	struct FScalableFloat HitCheckFrequency; // 0x15d0 (0x28)
	float MaximumHeightToStartSkidding; // 0x15f8 (0x4)
	struct FGameplayTag SkiddingTag; // 0x15fc (0x4)
	float MaximumSwingHitWallAngle; // 0x1600 (0x4)
	float MinimumSwingHitGroundAngle; // 0x1604 (0x4)
	unsigned char padding_1608[0x10]; // 0x1608 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.UpdateRope (Underlying native function: UpdateRope 0x8e5ce34)
	void UpdateRope(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnRopeUpdated (Has no native function)
	void OnRopeUpdated(struct FVector& RopeDirection, float& RopeLength); // (BlueprintCosmetic | Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnRopeStartFadeOut (Has no native function)
	void OnRopeStartFadeOut(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnRopeFadeOutComplete (Has no native function)
	void OnRopeFadeOutComplete(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnRopeAttached (Has no native function)
	void OnRopeAttached(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnRep_RopeAttachPointActor (Underlying native function: OnRep_RopeAttachPointActor 0x8e5bd7c)
	void OnRepRopeAttachPointActor(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnPlayerTouchedGroundAfterSwingEnded (Has no native function)
	void OnPlayerTouchedGroundAfterSwingEnded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnPlayerStartSkidding (Has no native function)
	void OnPlayerStartSkidding(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnPlayerHitWhileSwinging (Has no native function)
	void OnPlayerHitWhileSwinging(struct FHitResult& Hit); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnPlayerHitWallWhileSwinging (Has no native function)
	void OnPlayerHitWallWhileSwinging(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnPlayerHit (Underlying native function: OnPlayerHit 0x8e5b690)
	void OnPlayerHit(class AActor*& HitPlayer, class AActor*& HitActor, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Final | Native | Private | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.GetRopeAttachSocketLocation (Underlying native function: GetRopeAttachSocketLocation 0x8e5af54)
	struct FVector GetRopeAttachSocketLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.DetachRope (Underlying native function: DetachRope 0x8e5a8fc)
	void DetachRope(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.AttachRope (Underlying native function: AttachRope 0x8e5a014)
	void AttachRope(class AActor*& AttachPointActor); // (Final | Native | Public | BlueprintCallable)
};

