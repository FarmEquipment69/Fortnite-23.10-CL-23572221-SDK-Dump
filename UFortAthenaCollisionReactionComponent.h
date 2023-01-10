// Class /Script/FortniteGame.FortAthenaCollisionReactionComponent
// Size: 0x368
class UFortAthenaCollisionReactionComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct FMulticastInlineDelegate OnReaction; // 0xa8 (0x10)
	unsigned char unreflected_b8[0xc8]; // 0xb8 (0xc8) 
	struct FCollisionReactionConfiguration CollisionReactionConfiguration; // 0x180 (0x1d8)
	class UFortLandscapeClampingHelper* LandscapeClampingHelper; // 0x358 (0x8)
	unsigned char padding_360[0x8]; // 0x360 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaCollisionReactionComponent.Stop (Underlying native function: Stop 0x7feddb0)
	void Stop(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCollisionReactionComponent.Run (Underlying native function: Run 0x7fed538)
	bool Run(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCollisionReactionComponent.RegisterPrimitiveForOverlapReaction (Underlying native function: RegisterPrimitiveForOverlapReaction 0x7fed2ec)
	void RegisterPrimitiveForOverlapReaction(class UPrimitiveComponent*& PrimitiveComponentToRegister); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCollisionReactionComponent.RegisterPrimitiveForCollisionsReaction (Underlying native function: RegisterPrimitiveForCollisionsReaction 0x7fed0a0)
	void RegisterPrimitiveForCollisionsReaction(class UPrimitiveComponent*& PrimitiveComponentToRegister); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaCollisionReactionComponent.K2_IsBuildingActorValidForReaction (Underlying native function: K2_IsBuildingActorValidForReaction 0x7fec560)
	bool K2IsBuildingActorValidForReaction(class ABuildingActor*& BuildingActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaCollisionReactionComponent.HandleOverlapForCollisionReaction (Underlying native function: HandleOverlapForCollisionReaction 0x7febf34)
	void HandleOverlapForCollisionReaction(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaCollisionReactionComponent.HandleImpactForCollisionReaction (Underlying native function: HandleImpactForCollisionReaction 0x7febda8)
	void HandleImpactForCollisionReaction(class UPrimitiveComponent*& HitComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Final | Native | Protected | HasOutParms | HasDefaults)
};

