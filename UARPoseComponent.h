// Class /Script/AugmentedReality.ARPoseComponent
// Size: 0x390
class UARPoseComponent : public UARComponent
{
	struct FARPoseUpdatePayload ReplicatedPayload; // 0x320 (0x70)

	/* Functions */

	// Function /Script/AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode (Underlying native function: SetPoseComponentDebugMode 0x95e3cf8)
	static void SetPoseComponentDebugMode(enum EPoseComponentDebugMode& NewDebugMode); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARPoseComponent.ServerUpdatePayload (Underlying native function: ServerUpdatePayload 0x95e2b58)
	void ServerUpdatePayload(struct FARPoseUpdatePayload& NewPayload); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveUpdate (Has no native function)
	void ReceiveUpdate(struct FARPoseUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveAdd (Has no native function)
	void ReceiveAdd(struct FARPoseUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)
};

