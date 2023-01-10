// Class /Script/FortniteAI.AIHotSpot
// Size: 0x438
class AAIHotSpot : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct TArray<class UAIHotSpotSlot*> UserSlots; // 0x290 (0x10)
	class UAIHotSpotSlotGenerator* SlotGenerator; // 0x2a0 (0x8)
	struct TArray<class UAIHotSpotSlot*> Slots; // 0x2a8 (0x10)
	class AActor* FocusActor; // 0x2b8 (0x8)
	class UClass* FilterClass; // 0x2c0 (0x8)
	struct FVector CustomNavmeshSearchExtent; // 0x2c8 (0x18)
	unsigned char bStartEnabled; // 0x2e0 (0x1)
	unsigned char bAllowSlotlessAssignment; // 0x2e0 (0x1)
	unsigned char bAllowClaimingMultipleSlots; // 0x2e0 (0x1)
	unsigned char bTrackOverlappingSlots; // 0x2e0 (0x1)
	unsigned char bProjectSlotsOnNavmesh; // 0x2e0 (0x1)
	unsigned char bCustomNavmeshSearchExtent; // 0x2e0 (0x1)
	unsigned char bIsEnabled; // 0x2e0 (0x1)
	unsigned char unreflected_2e1[0x7]; // 0x2e1 (0x7) 
	struct TArray<class AAIController*> NoSlotAssignees; // 0x2e8 (0x10)
	unsigned char unreflected_2f8[0x128]; // 0x2f8 (0x128) 
	class UPrimitiveComponent* RenderingComponent; // 0x420 (0x8)
	class UBillboardComponent* SpriteComponent; // 0x428 (0x8)
	unsigned char padding_430[0x8]; // 0x430 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.AIHotSpot.SetEnabled (Underlying native function: SetEnabled 0x895ef8c)
	void SetEnabled(bool& bEnabled); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpot.RemoveGroupFromHotspot (Underlying native function: RemoveGroupFromHotspot 0xa06e648)
	int RemoveGroupFromHotspot(struct TArray<class AAIController*>& GroupOfAI); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpot.RemoveFromHotspot (Underlying native function: RemoveFromHotspot 0xa06e57c)
	bool RemoveFromHotspot(class AAIController*& AI, bool& bAssignFromWaitingList); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpot.OnSlotOccupied (Underlying native function: OnSlotOccupied 0xa06e290)
	void OnSlotOccupied(class AAIController*& AI, int& Index, int& UserId); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnSlotFreed (Underlying native function: OnSlotFreed 0xa06e194)
	void OnSlotFreed(class AAIController*& AI, int& Index, int& UserId); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnSlotEnabled (Underlying native function: OnSlotEnabled 0xa06e0d0)
	void OnSlotEnabled(int& Index, int& UserId); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnSlotDisabled (Underlying native function: OnSlotDisabled 0xa06e00c)
	void OnSlotDisabled(int& Index, int& UserId); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnSlotClaimed (Underlying native function: OnSlotClaimed 0xa06df10)
	void OnSlotClaimed(class AAIController*& AI, int& Index, int& UserId); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnSlotBlocked (Underlying native function: OnSlotBlocked 0xa06de14)
	void OnSlotBlocked(class AAIController*& AI, int& Index, int& UserId); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnRemovedSlotlessBehavior (Underlying native function: OnRemovedSlotlessBehavior 0xa06dd48)
	void OnRemovedSlotlessBehavior(class AAIController*& AI, bool& bIsClamingSlot); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnRemovedBehavior (Underlying native function: OnRemovedBehavior 0xa06dbc4)
	void OnRemovedBehavior(class AAIController*& AI, int& Index, int& UserId, enum EAIHotSpotSlot& PrevState, bool& bWasOnWaitingList); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnMoveToSlotFinished (Underlying native function: OnMoveToSlotFinished 0xa06d808)
	void OnMoveToSlotFinished(class AAIController*& AI, int& Index, int& UserId, bool& bResult); // (BlueprintAuthorityOnly | Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnHotSpotEnabled (Underlying native function: OnHotSpotEnabled 0x1598df4)
	void OnHotSpotEnabled(); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnHotSpotDisabled (Underlying native function: OnHotSpotDisabled 0x82aa228)
	void OnHotSpotDisabled(); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnAssignedSlotlessBehavior (Underlying native function: OnAssignedSlotlessBehavior 0xa06d4f8)
	bool OnAssignedSlotlessBehavior(class AAIController*& AI); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnAssignedOccupiedBehavior (Underlying native function: OnAssignedOccupiedBehavior 0xa06d3f8)
	bool OnAssignedOccupiedBehavior(class AAIController*& AI, int& Index, int& UserId); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OnAssignedClaimedBehavior (Underlying native function: OnAssignedClaimedBehavior 0xa06d2b4)
	bool OnAssignedClaimedBehavior(class AAIController*& AI, int& Index, int& UserId, bool& bWasOnWaitingList); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpot.OccupySlotByIndex (Underlying native function: OccupySlotByIndex 0xa06cf30)
	bool OccupySlotByIndex(int& Index); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpot.IsSlotlessAssignmentAllowed (Underlying native function: IsSlotlessAssignmentAllowed 0xa06cdd8)
	bool IsSlotlessAssignmentAllowed(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.IsEnabled (Underlying native function: IsEnabled 0xa06cda0)
	bool IsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.IsAIAllowed (Underlying native function: IsAIAllowed 0xa06cc78)
	bool IsAIAllowed(class AAIController*& AI); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteAI.AIHotSpot.HasEnabledSlots (Underlying native function: HasEnabledSlots 0xa06cc38)
	bool HasEnabledSlots(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.HasAssignedAI (Underlying native function: HasAssignedAI 0xa06cb74)
	bool HasAssignedAI(class AAIController*& AI, enum EAIHotSpotAssignmentFilter& Filter); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotUserIdByIndex (Underlying native function: GetSlotUserIdByIndex 0xa06c980)
	int GetSlotUserIdByIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotStateByOwner (Underlying native function: GetSlotStateByOwner 0xa06c8c8)
	enum EAIHotSpotSlot GetSlotStateByOwner(class AAIController*& AIOwner); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotStateByIndex (Underlying native function: GetSlotStateByIndex 0xa06c834)
	enum EAIHotSpotSlot GetSlotStateByIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotRotationByIndex (Underlying native function: GetSlotRotationByIndex 0xa06c77c)
	struct FRotator GetSlotRotationByIndex(int& Index); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotOwnerByIndex (Underlying native function: GetSlotOwnerByIndex 0xa06c690)
	class AAIController* GetSlotOwnerByIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotLocationByIndex (Underlying native function: GetSlotLocationByIndex 0xa06c5f0)
	struct FVector GetSlotLocationByIndex(int& Index); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotIndexByOwner (Underlying native function: GetSlotIndexByOwner 0xa06c538)
	int GetSlotIndexByOwner(class AAIController*& AIOwner); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotCount (Underlying native function: GetSlotCount 0xa06c4ac)
	int GetSlotCount(enum EAIHotSpotSlotFilter& Filter); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotByOwner (Underlying native function: GetSlotByOwner 0xa06c410)
	class UAIHotSpotSlot* GetSlotByOwner(class AAIController*& AIOwner); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetSlotByIndex (Underlying native function: GetSlotByIndex 0xa06c384)
	class UAIHotSpotSlot* GetSlotByIndex(int& Index); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetAssignedAICount (Underlying native function: GetAssignedAICount 0xa06bf80)
	int GetAssignedAICount(enum EAIHotSpotAssignmentFilter& Filter); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.GetAssignedAI (Underlying native function: GetAssignedAI 0xa06beb4)
	struct TArray<class AAIController*> GetAssignedAI(enum EAIHotSpotAssignmentFilter& Filter); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.FindBestSlotIndices (Underlying native function: FindBestSlotIndices 0xa06bcc4)
	struct TArray<int> FindBestSlotIndices(struct TArray<class AAIController*>& AI); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.FindBestSlotIndex (Underlying native function: FindBestSlotIndex 0xa06bc30)
	int FindBestSlotIndex(class AAIController*& AI); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.CanUseSlotByIndex (Underlying native function: CanUseSlotByIndex 0xa06bb6c)
	bool CanUseSlotByIndex(class AAIController*& AI, int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpot.AssignToSlotByIndex (Underlying native function: AssignToSlotByIndex 0xa06baa4)
	bool AssignToSlotByIndex(class AAIController*& AI, int& Index); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpot.AssignToHotspot (Underlying native function: AssignToHotspot 0x9a4f438)
	bool AssignToHotspot(class AAIController*& AI); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpot.AssignGroupToHotspot (Underlying native function: AssignGroupToHotspot 0xa06b8f4)
	int AssignGroupToHotspot(struct TArray<class AAIController*>& GroupOfAI); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpot.AssignFromWaitingList (Underlying native function: AssignFromWaitingList 0xa06b8e0)
	void AssignFromWaitingList(); // (Final | Native | Public | BlueprintCallable)
};

