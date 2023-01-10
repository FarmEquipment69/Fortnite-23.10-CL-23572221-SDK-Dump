// Class /Script/CableComponent.CableComponent
// Size: 0x620
class UCableComponent : public UMeshComponent
{
	bool bAttachStart; // 0x570 (0x1)
	bool bAttachEnd; // 0x571 (0x1)
	unsigned char unreflected_572[0x6]; // 0x572 (0x6) 
	struct FComponentReference AttachEndTo; // 0x578 (0x28)
	struct FName AttachEndToSocketName; // 0x5a0 (0x4)
	unsigned char unreflected_5a4[0x4]; // 0x5a4 (0x4) 
	struct FVector EndLocation; // 0x5a8 (0x18)
	float CableLength; // 0x5c0 (0x4)
	int NumSegments; // 0x5c4 (0x4)
	float SubstepTime; // 0x5c8 (0x4)
	int SolverIterations; // 0x5cc (0x4)
	bool bEnableStiffness; // 0x5d0 (0x1)
	bool bUseSubstepping; // 0x5d1 (0x1)
	bool bSkipCableUpdateWhenNotVisible; // 0x5d2 (0x1)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x5d3 (0x1)
	bool bEnableCollision; // 0x5d4 (0x1)
	unsigned char unreflected_5d5[0x3]; // 0x5d5 (0x3) 
	float CollisionFriction; // 0x5d8 (0x4)
	unsigned char unreflected_5dc[0x4]; // 0x5dc (0x4) 
	struct FVector CableForce; // 0x5e0 (0x18)
	float CableGravityScale; // 0x5f8 (0x4)
	float CableWidth; // 0x5fc (0x4)
	int NumSides; // 0x600 (0x4)
	float TileMaterial; // 0x604 (0x4)
	unsigned char padding_608[0x18]; // 0x608 (0x18)

	/* Functions */

	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent (Underlying native function: SetAttachEndToComponent 0x77425a4)
	void SetAttachEndToComponent(class USceneComponent*& Component, struct FName& SocketName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CableComponent.CableComponent.SetAttachEndTo (Underlying native function: SetAttachEndTo 0x7742418)
	void SetAttachEndTo(class AActor*& Actor, struct FName& ComponentProperty, struct FName& SocketName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations (Underlying native function: GetCableParticleLocations 0x7742378)
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CableComponent.CableComponent.GetAttachedComponent (Underlying native function: GetAttachedComponent 0x7742318)
	class USceneComponent* GetAttachedComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CableComponent.CableComponent.GetAttachedActor (Underlying native function: GetAttachedActor 0x77422ac)
	class AActor* GetAttachedActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

