// Class /Script/FortniteGame.FortHeldObjectComponent
// Size: 0x390
class UFortHeldObjectComponent : public UActorComponent
{
	struct TWeakObjectPtr<class UFortWeaponItemDefinition> EquippedWeaponItemDefinition; // 0xa0 (0x28)
	struct FHeldObjectThrownData HeldObjectThrownData; // 0xc8 (0x50)
	struct FVector AttachmentOffset; // 0x118 (0x18)
	enum EAttachmentRule PlayerAttachmentScaleRule; // 0x130 (0x1)
	unsigned char bAllowObjectToBeHeldInVehicle; // 0x131 (0x1)
	unsigned char bBlocksVehicleDriverSeat; // 0x131 (0x1)
	unsigned char bApplyAngularImpulseOnThrow; // 0x131 (0x1)
	unsigned char unreflected_132[0x6]; // 0x132 (0x6) 
	struct FVector2D ThrowAngularImpulseRange; // 0x138 (0x10)
	struct TWeakObjectPtr<class UMaterialInterface> PreviewMaterial; // 0x148 (0x28)
	class UClass* PlacementPreviewClass; // 0x170 (0x8)
	class UClass* GuideProjectileClass; // 0x178 (0x8)
	struct FVector GuideAttachLocationOffset; // 0x180 (0x18)
	struct FRotator GuideAttachRotationOffset; // 0x198 (0x18)
	struct FMulticastInlineDelegate OnHeldObjectPickedUp; // 0x1b0 (0x10)
	struct FMulticastInlineDelegate OnHeldObjectPlaced; // 0x1c0 (0x10)
	struct FMulticastInlineDelegate OnHeldObjectDropped; // 0x1d0 (0x10)
	struct FMulticastInlineDelegate OnHeldObjectGuideProjectileStarted; // 0x1e0 (0x10)
	struct FMulticastInlineDelegate OnHeldObjectGuideProjectileStopped; // 0x1f0 (0x10)
	struct FMulticastInlineDelegate OnHeldObjectEnteredWater; // 0x200 (0x10)
	struct FMulticastInlineDelegate OnHeldObjectMovedToVehicle; // 0x210 (0x10)
	struct FMulticastInlineDelegate OnHeldObjectThrown; // 0x220 (0x10)
	struct FMulticastInlineDelegate OnHeldObjectThrownLanded; // 0x230 (0x10)
	struct FMulticastInlineDelegate OnHeldObjectDestroy; // 0x240 (0x10)
	struct FMulticastInlineDelegate OnHeldObjectAttached; // 0x250 (0x10)
	struct FMulticastInlineDelegate OnHeldObjectOwningPawnChanged; // 0x260 (0x10)
	unsigned char bUsePreviewMaterial; // 0x270 (0x1)
	unsigned char bCollisionBlockedByPawns; // 0x270 (0x1)
	unsigned char bDroppedFromWeaponSwap; // 0x270 (0x1)
	enum EHeldObjectState HeldObjectState; // 0x271 (0x1)
	unsigned char unreflected_272[0x6]; // 0x272 (0x6) 
	class AFortPlayerPawn* OwningPawn; // 0x278 (0x8)
	struct FRotator ObjectPickupRotation; // 0x280 (0x18)
	struct TWeakObjectPtr<class AFortPlayerPawn> PreviousOwningPawn; // 0x298 (0x8)
	struct FHeldObjectMovementReplicatedData HeldObjectMovementReplicatedData; // 0x2a0 (0x50)
	struct TWeakObjectPtr<class UFortWorldItem> GrantedWeaponItem; // 0x2f0 (0x8)
	struct TWeakObjectPtr<class AFortWeapon> GrantedWeapon; // 0x2f8 (0x8)
	class UFortProjectileMovementComponent* ProjectileMovementComponent; // 0x300 (0x8)
	class UFortPhysicsObjectComponent* PhysicsObjectComponent; // 0x308 (0x8)
	unsigned char unreflected_310[0x50]; // 0x310 (0x50) 
	class UMeshComponent* ReferenceMeshComponent; // 0x360 (0x8)
	class AFortDecoPreview* PlacementPreviewActor; // 0x368 (0x8)
	struct TWeakObjectPtr<class AFortProjectileBase> GuideProjectile; // 0x370 (0x8)
	unsigned char padding_378[0x18]; // 0x378 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortHeldObjectComponent.TurnOnCollisionSettings (Underlying native function: TurnOnCollisionSettings 0x8479260)
	void TurnOnCollisionSettings(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortHeldObjectComponent.TurnOffCollisionSettings (Underlying native function: TurnOffCollisionSettings 0x847924c)
	void TurnOffCollisionSettings(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortHeldObjectComponent.ThrownObjectStopped (Underlying native function: ThrownObjectStopped 0x84768bc)
	void ThrownObjectStopped(struct FHitResult& ImpactResult); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortHeldObjectComponent.ThrownObjectEnteredWater (Underlying native function: ThrownObjectEnteredWater 0x8478d44)
	void ThrownObjectEnteredWater(class AFortWaterBodyActor*& WaterBody, class UFortWaterInteractionComponent*& WaterInteractionComponent, bool& bIsFirstBody); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortHeldObjectComponent.ThrowHeldObject (Underlying native function: ThrowHeldObject 0x8478ca4)
	void ThrowHeldObject(struct FVector& DetachLocation, struct FRotator& ThrowDirection); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortHeldObjectComponent.SetPreviousOwner (Underlying native function: SetPreviousOwner 0x8478868)
	void SetPreviousOwner(class AFortPlayerPawn*& PlayerPawn); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHeldObjectComponent.SetMeshComponent (Underlying native function: SetMeshComponent 0x847869c)
	void SetMeshComponent(class UMeshComponent*& InMeshComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHeldObjectComponent.RemoveHeldObjectFromVehicle (Underlying native function: RemoveHeldObjectFromVehicle 0x273fd14)
	void RemoveHeldObjectFromVehicle(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortHeldObjectComponent.PlaceHeldObject (Underlying native function: PlaceHeldObject 0x273fd14)
	void PlaceHeldObject(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHeldObjectComponent.PickupHeldObject (Underlying native function: PickupHeldObject 0x6df70d4)
	void PickupHeldObject(class AFortPlayerPawn*& PlayerPawn); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHeldObjectComponent.OnWeaponUnequipped (Underlying native function: OnWeaponUnequipped 0x273fd14)
	void OnWeaponUnequipped(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortHeldObjectComponent.OnThrowComplete (Underlying native function: OnThrowComplete 0x273fd14)
	void OnThrowComplete(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHeldObjectComponent.OnRep_UsePreviewMaterial (Underlying native function: OnRep_UsePreviewMaterial 0x8477c28)
	void OnRepUsePreviewMaterial(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortHeldObjectComponent.OnRep_OwningPawn (Underlying native function: OnRep_OwningPawn 0x8477b70)
	void OnRepOwningPawn(class AFortPlayerPawn*& LastOwningPawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortHeldObjectComponent.OnRep_bCollisionBlockedByPawns (Underlying native function: OnRep_bCollisionBlockedByPawns 0x8477c3c)
	void OnRepbCollisionBlockedByPawns(); // (Final | 0x00000002 | Native | Private)

	// DelegateFunction /Script/FortniteGame.FortHeldObjectComponent.OnHeldObjectThrownLanded__DelegateSignature (Has no native function)
	void OnHeldObjectThrownLandedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortHeldObjectComponent.OnHeldObjectThrown__DelegateSignature (Has no native function)
	void OnHeldObjectThrownDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortHeldObjectComponent.OnHeldObjectPlaced__DelegateSignature (Has no native function)
	void OnHeldObjectPlacedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortHeldObjectComponent.OnHeldObjectPickedUp__DelegateSignature (Has no native function)
	void OnHeldObjectPickedUpDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortHeldObjectComponent.OnHeldObjectOwningPawnChanged__DelegateSignature (Has no native function)
	void OnHeldObjectOwningPawnChangedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortHeldObjectComponent.OnHeldObjectMovedToVehicle__DelegateSignature (Has no native function)
	void OnHeldObjectMovedToVehicleDelegateSignature(class UFortHeldObjectComponent*& HeldObject); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortHeldObjectComponent.OnHeldObjectGuideProjectileStopped__DelegateSignature (Has no native function)
	void OnHeldObjectGuideProjectileStoppedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortHeldObjectComponent.OnHeldObjectGuideProjectileStarted__DelegateSignature (Has no native function)
	void OnHeldObjectGuideProjectileStartedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortHeldObjectComponent.OnHeldObjectEnteredWater__DelegateSignature (Has no native function)
	void OnHeldObjectEnteredWaterDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortHeldObjectComponent.OnHeldObjectDropped__DelegateSignature (Has no native function)
	void OnHeldObjectDroppedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortHeldObjectComponent.OnHeldObjectDestroy__DelegateSignature (Has no native function)
	void OnHeldObjectDestroyDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortHeldObjectComponent.OnHeldObjectAttached__DelegateSignature (Has no native function)
	void OnHeldObjectAttachedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortHeldObjectComponent.IsUnheld (Underlying native function: IsUnheld 0x84772ac)
	bool IsUnheld(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.IsThrown (Underlying native function: IsThrown 0x8477290)
	bool IsThrown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.IsPlaced (Underlying native function: IsPlaced 0x8477274)
	bool IsPlaced(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.IsHeldInVehicle (Underlying native function: IsHeldInVehicle 0x8477210)
	bool IsHeldInVehicle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.IsHeld (Underlying native function: IsHeld 0x84771f4)
	bool IsHeld(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.IsDropped (Underlying native function: IsDropped 0x84771d8)
	bool IsDropped(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.HoldObjectInVehicle (Underlying native function: HoldObjectInVehicle 0x273fd14)
	void HoldObjectInVehicle(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHeldObjectComponent.HandleOwnerDied (Underlying native function: HandleOwnerDied 0x81d6d18)
	void HandleOwnerDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.FortHeldObjectComponent.HandleOwnerDestroyed (Underlying native function: HandleOwnerDestroyed 0x6df70d4)
	void HandleOwnerDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortHeldObjectComponent.HandleGuideProjectileDestroyed (Underlying native function: HandleGuideProjectileDestroyed 0x6df70d4)
	void HandleGuideProjectileDestroyed(class AActor*& DestroyedActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortHeldObjectComponent.GuideProjectileStopped (Underlying native function: GuideProjectileStopped 0x84768bc)
	void GuideProjectileStopped(struct FHitResult& ImpactResult); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortHeldObjectComponent.GetSweptTraceRadius (Underlying native function: GetSweptTraceRadius 0x8476894)
	float GetSweptTraceRadius(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.GetMeshComponent (Underlying native function: GetMeshComponent 0x662cb2c)
	class UMeshComponent* GetMeshComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.GetMaxSpeed (Underlying native function: GetMaxSpeed 0x84766b8)
	float GetMaxSpeed(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.GetItemEntry (Underlying native function: GetItemEntry 0x84765c0)
	struct FFortItemEntry GetItemEntry(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.GetInstigator (Underlying native function: GetInstigator 0x8476544)
	class AFortPlayerPawn* GetInstigator(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.GetGravityZ (Underlying native function: GetGravityZ 0x847651c)
	float GetGravityZ(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.GetGravityScale (Underlying native function: GetGravityScale 0x84764e8)
	float GetGravityScale(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.GetBlocksVehicleDriverSeat (Underlying native function: GetBlocksVehicleDriverSeat 0x8476380)
	bool GetBlocksVehicleDriverSeat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.GetAllowObjectToBeHeldInVehicle (Underlying native function: GetAllowObjectToBeHeldInVehicle 0x8476364)
	bool GetAllowObjectToBeHeldInVehicle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortHeldObjectComponent.DropObjectHeldInVehicle (Underlying native function: DropObjectHeldInVehicle 0x273fd14)
	void DropObjectHeldInVehicle(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHeldObjectComponent.DropHeldObject (Underlying native function: DropHeldObject 0x273fd14)
	void DropHeldObject(); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHeldObjectComponent.CanInteract (Underlying native function: CanInteract 0x84759d8)
	bool CanInteract(class AFortPlayerPawn*& RequestingPawn); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

