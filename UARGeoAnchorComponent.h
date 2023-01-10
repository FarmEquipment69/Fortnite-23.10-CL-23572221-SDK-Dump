// Class /Script/AugmentedReality.ARGeoAnchorComponent
// Size: 0x3c0
class UARGeoAnchorComponent : public UARComponent
{
	struct FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x320 (0xa0)

	/* Functions */

	// Function /Script/AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode (Underlying native function: SetGeoAnchorComponentDebugMode 0x95e3990)
	static void SetGeoAnchorComponentDebugMode(enum EGeoAnchorComponentDebugMode& NewDebugMode); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload (Underlying native function: ServerUpdatePayload 0x95e2720)
	void ServerUpdatePayload(struct FARGeoAnchorUpdatePayload& NewPayload); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate (Has no native function)
	void ReceiveUpdate(struct FARGeoAnchorUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveAdd (Has no native function)
	void ReceiveAdd(struct FARGeoAnchorUpdatePayload& Payload); // (Event | Public | HasOutParms | BlueprintEvent)
};

