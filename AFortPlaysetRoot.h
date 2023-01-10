// Class /Script/FortniteGame.FortPlaysetRoot
// Size: 0x2c8
class AFortPlaysetRoot : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct FGuid SavedActorGuid; // 0x290 (0x10)
	unsigned char unreflected_2a0[0x18]; // 0x2a0 (0x18) 
	struct TArray<struct TWeakObjectPtr<class AActor>> AttachedActors; // 0x2b8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPlaysetRoot.RemoveActorWhenDied (Underlying native function: RemoveActorWhenDied 0x8575668)
	void RemoveActorWhenDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)
};

