// Class /Script/FortniteAI.AIHotSpotSlot
// Size: 0x120
class UAIHotSpotSlot : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FTransform LocalTransform; // 0x30 (0x60)
	float Height; // 0x90 (0x4)
	float Radius; // 0x94 (0x4)
	float DistanceToFocusActor; // 0x98 (0x4)
	int UserId; // 0x9c (0x4)
	unsigned char bStartEnabled; // 0xa0 (0x1)
	unsigned char bHasCachedAgentData; // 0xa0 (0x1)
	unsigned char bHasOverlappingSlots; // 0xa0 (0x1)
	unsigned char bHasDistanceToFocusActor; // 0xa0 (0x1)
	unsigned char bIsBlockingOthers; // 0xa0 (0x1)
	unsigned char bIsEnabled; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	class AAIController* Owner; // 0xa8 (0x8)
	int SlotIndex; // 0xb0 (0x4)
	enum EAIHotSpotSlot SlotState; // 0xb4 (0x1)
	unsigned char padding_b5[0x6b]; // 0xb5 (0x6b)

	/* Functions */

	// Function /Script/FortniteAI.AIHotSpotSlot.SetSlotState (Underlying native function: SetSlotState 0xa06e944)
	void SetSlotState(enum EAIHotSpotSlot& NewState); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpotSlot.SetSlotOwnerAndState (Underlying native function: SetSlotOwnerAndState 0xa06e87c)
	void SetSlotOwnerAndState(class AAIController*& NewOwner, enum EAIHotSpotSlot& NewState); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpotSlot.SetSlotEnabled (Underlying native function: SetSlotEnabled 0xa06e7f8)
	void SetSlotEnabled(bool& bNewEnabled); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AIHotSpotSlot.OnStateChanged (Has no native function)
	void OnStateChanged(class AAIController*& SlotOwner, enum EAIHotSpotSlot& NewState); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpotSlot.IsEnabled (Underlying native function: IsEnabled 0xa06cdbc)
	bool IsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpotSlot.IsAIAllowed (Underlying native function: IsAIAllowed 0xa06cd0c)
	bool IsAIAllowed(class AAIController*& AI); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteAI.AIHotSpotSlot.HasUserId (Underlying native function: HasUserId 0xa06cc5c)
	bool HasUserId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpotSlot.GetSlotUserId (Underlying native function: GetSlotUserId 0xa06c968)
	int GetSlotUserId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpotSlot.GetSlotState (Underlying native function: GetSlotState 0xa06c81c)
	enum EAIHotSpotSlot GetSlotState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpotSlot.GetSlotRotation (Underlying native function: GetSlotRotation 0xa06c744)
	struct FRotator GetSlotRotation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpotSlot.GetSlotRadius (Underlying native function: GetSlotRadius 0xa06c72c)
	float GetSlotRadius(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpotSlot.GetSlotOwner (Underlying native function: GetSlotOwner 0x735c71c)
	class AAIController* GetSlotOwner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpotSlot.GetSlotLocation (Underlying native function: GetSlotLocation 0xa06c5c8)
	struct FVector GetSlotLocation(); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpotSlot.GetSlotIndex (Underlying native function: GetSlotIndex 0x2d7adb8)
	int GetSlotIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpotSlot.GetSlotHeight (Underlying native function: GetSlotHeight 0x708337c)
	float GetSlotHeight(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpotSlot.GetSlotBounds (Underlying native function: GetSlotBounds 0xa06c33c)
	struct FBox GetSlotBounds(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpotSlot.GetHotSpot (Underlying native function: GetHotSpot 0xa06c00c)
	class AAIHotSpot* GetHotSpot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpotSlot.ClearSlot (Underlying native function: ClearSlot 0x66b6494)
	void ClearSlot(); // (Native | Public | BlueprintCallable)
};

