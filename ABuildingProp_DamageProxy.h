// Class /Script/FortniteGame.BuildingProp_DamageProxy
// Size: 0xef8
class ABuildingProp_DamageProxy : public ABuildingProp
{

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_DamageProxy.HandleOwningBuildingActorDied (Underlying native function: HandleOwningBuildingActorDied 0x8385358)
	void HandleOwningBuildingActorDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.BuildingProp_DamageProxy.HandleOwningActorDestroyed (Underlying native function: HandleOwningActorDestroyed 0x83852dc)
	void HandleOwningActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingProp_DamageProxy.HandleOnDamaged (Underlying native function: HandleOnDamaged 0x8385060)
	void HandleOnDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)
};

