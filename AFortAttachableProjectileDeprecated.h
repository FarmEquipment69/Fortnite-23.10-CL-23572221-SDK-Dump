// Class /Script/FortniteGame.FortAttachableProjectileDeprecated
// Size: 0xb48
class AFortAttachableProjectileDeprecated : public AFortProjectileBase
{
	struct FAttachedInfo AttachedInfo; // 0xa20 (0x128)

	/* Functions */

	// Function /Script/FortniteGame.FortAttachableProjectileDeprecated.ServerAttachToActor (Underlying native function: ServerAttachToActor 0x8e6c2cc)
	void ServerAttachToActor(struct FHitResult& Hit, class AActor*& AttachToActor, float& StickyOffsetFromPhysicsMesh, float& StickyOffsetFromBoneCenter, float& NarrowPlacementAgainstVelocityThreshold); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAttachableProjectileDeprecated.OnRep_ReplicatedAttachedInfo (Underlying native function: OnRep_ReplicatedAttachedInfo 0x8829e28)
	void OnRepReplicatedAttachedInfo(); // (Native | Public)

	// Function /Script/FortniteGame.FortAttachableProjectileDeprecated.OnFinalizeAttachmentSocketLocandRot (Has no native function)
	void OnFinalizeAttachmentSocketLocandRot(struct FVector& InWorldPos, struct FRotator& InWorldRot, struct FName& InSocketName, bool& bFoundClosestOnPhysicsAsset, struct FVector& OutWorldPos, struct FRotator& OutWorldRot, struct FName& OutSocketName); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAttachableProjectileDeprecated.OnAttachedToEndPlayed (Has no native function)
	void OnAttachedToEndPlayed(class AActor*& DamagedActor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAttachableProjectileDeprecated.OnAttachedToDied (Has no native function)
	void OnAttachedToDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAttachableProjectileDeprecated.GetAttachedToActor (Underlying native function: GetAttachedToActor 0x8e6baf8)
	class AActor* GetAttachedToActor(); // (Final | Native | Public | BlueprintCallable)
};

