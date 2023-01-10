// Class /Script/FortniteGame.FortAutoMarkableActorComponent
// Size: 0x128
class UFortAutoMarkableActorComponent : public UActorComponent
{
	bool bUseHoveredMarkerDetail; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FMulticastInlineDelegate OnAutoMarkableActorComponentMarked; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnAutoMarkableActorComponentUnmarked; // 0xb8 (0x10)
	unsigned char padding_c8[0x60]; // 0xc8 (0x60)

	/* Functions */

	// Function /Script/FortniteGame.FortAutoMarkableActorComponent.SetAutoMarkCollisionComponent (Underlying native function: SetAutoMarkCollisionComponent 0x81ac3f4)
	void SetAutoMarkCollisionComponent(class UPrimitiveComponent*& InAutoMarkCollisionComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAutoMarkableActorComponent.OnAutoMarkCollisionComponentEndOverlap (Underlying native function: OnAutoMarkCollisionComponentEndOverlap 0x81aaaf8)
	void OnAutoMarkCollisionComponentEndOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Native | Protected)

	// Function /Script/FortniteGame.FortAutoMarkableActorComponent.OnAutoMarkCollisionComponentBeginOverlap (Underlying native function: OnAutoMarkCollisionComponentBeginOverlap 0x81aa908)
	void OnAutoMarkCollisionComponentBeginOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAutoMarkableActorComponent.OnAutoMarkCollisionChanged (Underlying native function: OnAutoMarkCollisionChanged 0x81aa884)
	void OnAutoMarkCollisionChanged(class UPrimitiveComponent*& ChangedComponent); // (Native | Protected)
};

