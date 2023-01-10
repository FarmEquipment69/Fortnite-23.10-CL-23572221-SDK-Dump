// Class /Script/FortniteGame.FortAttachableProjectileComponent
// Size: 0x238
class UFortAttachableProjectileComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnProjectileDetached; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnFinalizeAttachment; // 0xb0 (0x10)
	class AFortProjectileBase* Projectile; // 0xc0 (0x8)
	class UFortProjectileMovementComponent* ProjectileMovementComponent; // 0xc8 (0x8)
	struct FReplicatedAttachParams AttachParams; // 0xd0 (0x128)
	unsigned char unreflected_1f8[0x8]; // 0x1f8 (0x8) 
	struct FFinalizedAttachmentParams FinalizedAttachmentParams; // 0x200 (0x38)

	/* Functions */

	// Function /Script/FortniteGame.FortAttachableProjectileComponent.OverrideFinalizedAttachmentParams (Underlying native function: OverrideFinalizedAttachmentParams 0x2a8fcec)
	void OverrideFinalizedAttachmentParams(struct FVector& WorldLocation, struct FRotator& WorldRotation, struct FName& SocketName); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAttachableProjectileComponent.OnRep_AttachParams (Underlying native function: OnRep_AttachParams 0x20eb1a0)
	void OnRepAttachParams(); // (Native | Public)

	// DelegateFunction /Script/FortniteGame.FortAttachableProjectileComponent.OnProjectileDetached__DelegateSignature (Has no native function)
	void OnProjectileDetachedDelegateSignature(class AActor*& HostActor, enum EFortProjectileDetachReason& DetachReason); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortAttachableProjectileComponent.OnFinalizeAttachmentDelegate__DelegateSignature (Has no native function)
	void OnFinalizeAttachmentDelegateDelegateSignature(struct FVector& WorldLocation, struct FRotator& WorldRotation, struct FName& SocketName); // (MulticastDelegate | Public | Delegate | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortAttachableProjectileComponent.HandleAttachedToEndedPlay (Underlying native function: HandleAttachedToEndedPlay 0x8e5b2d4)
	void HandleAttachedToEndedPlay(class AActor*& DamagedActor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAttachableProjectileComponent.HandleAttachedToDied (Underlying native function: HandleAttachedToDied 0x8e5b0bc)
	void HandleAttachedToDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& HitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortAttachableProjectileComponent.GetAttachedToActor (Underlying native function: GetAttachedToActor 0x81a997c)
	class AActor* GetAttachedToActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAttachableProjectileComponent.EjectFromAttachedToActor (Underlying native function: EjectFromAttachedToActor 0x8e5a99c)
	void EjectFromAttachedToActor(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAttachableProjectileComponent.AuthorityAttachToActor (Underlying native function: AuthorityAttachToActor 0x8e5a160)
	void AuthorityAttachToActor(struct FHitResult& Hit, class AActor*& AttachToActor, float& StickyOffsetFromPhysicsMesh, float& StickyOffsetFromBoneCenter, float& NarrowPlacementAgainstVelocityThreshold); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

