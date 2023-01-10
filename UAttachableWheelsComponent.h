// Class /Script/AttachableWheelsRuntime.AttachableWheelsComponent
// Size: 0xf0
class UAttachableWheelsComponent : public UActorComponent
{
	struct TSet<class AAttachableWheel*> AttachedWheels; // 0xa0 (0x50)

	/* Functions */

	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelDetached (Has no native function)
	void OnWheelDetached(class AAttachableWheel*& AttachedWheel); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelAttached (Has no native function)
	void OnWheelAttached(class AAttachableWheel*& AttachedWheel); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelDetached_Internal (Underlying native function: HandleWheelDetached_Internal 0x7cd0c60)
	bool HandleWheelDetachedInternal(class AAttachableWheel*& AttachedWheel); // (Final | Native | Protected)

	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelAttached_Internal (Underlying native function: HandleWheelAttached_Internal 0x7cd0bd0)
	bool HandleWheelAttachedInternal(class AAttachableWheel*& AttachedWheel); // (Final | Native | Protected)

	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheels (Underlying native function: GetAttachedWheels 0x7cd0984)
	struct TArray<class AAttachableWheel*> GetAttachedWheels(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheelClosestOnAxis (Underlying native function: GetAttachedWheelClosestOnAxis 0x7cd07e8)
	class AAttachableWheel* GetAttachedWheelClosestOnAxis(struct FVector& Point, float& OutClosetDistanceToAxis, struct FVector& OutClosestPointOnAxis, struct FVector& OutClosestAxis); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.DrawDebug (Underlying native function: DrawDebug 0x273fd14)
	void DrawDebug(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.DetachAllWheels (Underlying native function: DetachAllWheels 0x7cd05f8)
	int DetachAllWheels(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

