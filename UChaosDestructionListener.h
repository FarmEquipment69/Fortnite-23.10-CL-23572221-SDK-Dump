// Class /Script/GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x550
class UChaosDestructionListener : public USceneComponent
{
	unsigned char bIsCollisionEventListeningEnabled; // 0x2a0 (0x1)
	unsigned char bIsBreakingEventListeningEnabled; // 0x2a0 (0x1)
	unsigned char bIsTrailingEventListeningEnabled; // 0x2a0 (0x1)
	unsigned char bIsRemovalEventListeningEnabled; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x3]; // 0x2a1 (0x3) 
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x2a4 (0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x2bc (0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x2d4 (0x18)
	struct FChaosRemovalEventRequestSettings RemovalEventRequestSettings; // 0x2ec (0x10)
	unsigned char unreflected_2fc[0x4]; // 0x2fc (0x4) 
	struct TSet<class AChaosSolverActor*> ChaosSolverActors; // 0x300 (0x50)
	struct TSet<class AGeometryCollectionActor*> GeometryCollectionActors; // 0x350 (0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x3a0 (0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x3b0 (0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x3c0 (0x10)
	struct FMulticastInlineDelegate OnRemovalEvents; // 0x3d0 (0x10)
	unsigned char padding_3e0[0x170]; // 0x3e0 (0x170)

	/* Functions */

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents (Underlying native function: SortTrailingEvents 0x97f6dc0)
	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum EChaosTrailingSortMethod& SortMethod); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents (Underlying native function: SortRemovalEvents 0x97f6cc0)
	void SortRemovalEvents(struct TArray<struct FChaosRemovalEventData>& RemovalEvents, enum EChaosRemovalSortMethod& SortMethod); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents (Underlying native function: SortCollisionEvents 0x97f6bc0)
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum EChaosCollisionSortMethod& SortMethod); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents (Underlying native function: SortBreakingEvents 0x97f6ac0)
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum EChaosBreakingSortMethod& SortMethod); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings (Underlying native function: SetTrailingEventRequestSettings 0x97f6a14)
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled (Underlying native function: SetTrailingEventEnabled 0x97f6980)
	void SetTrailingEventEnabled(bool& bIsEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings (Underlying native function: SetRemovalEventRequestSettings 0x97f64d4)
	void SetRemovalEventRequestSettings(struct FChaosRemovalEventRequestSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled (Underlying native function: SetRemovalEventEnabled 0x97f6440)
	void SetRemovalEventEnabled(bool& bIsEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings (Underlying native function: SetCollisionEventRequestSettings 0x97f61e4)
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled (Underlying native function: SetCollisionEventEnabled 0x97f6154)
	void SetCollisionEventEnabled(bool& bIsEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings (Underlying native function: SetBreakingEventRequestSettings 0x97f60a8)
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled (Underlying native function: SetBreakingEventEnabled 0x97f6014)
	void SetBreakingEventEnabled(bool& bIsEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor (Underlying native function: RemoveGeometryCollectionActor 0x97f5f08)
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor*& GeometryCollectionActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor (Underlying native function: RemoveChaosSolverActor 0x6df70d4)
	void RemoveChaosSolverActor(class AChaosSolverActor*& ChaosSolverActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.IsEventListening (Underlying native function: IsEventListening 0x97f5d54)
	bool IsEventListening(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor (Underlying native function: AddGeometryCollectionActor 0x97f5094)
	void AddGeometryCollectionActor(class AGeometryCollectionActor*& GeometryCollectionActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor (Underlying native function: AddChaosSolverActor 0x6df70d4)
	void AddChaosSolverActor(class AChaosSolverActor*& ChaosSolverActor); // (Final | Native | Public | BlueprintCallable)
};

