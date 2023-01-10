// Class /Script/AugmentedReality.ARTraceResultLibrary
// Size: 0x28
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry (Underlying native function: GetTrackedGeometry 0x95e1050)
	static class UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult& TraceResult); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetTraceChannel (Underlying native function: GetTraceChannel 0x95e0f5c)
	static enum EARLineTraceChannels GetTraceChannel(struct FARTraceResult& TraceResult); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalTransform (Underlying native function: GetLocalTransform 0x95e07ec)
	static struct FTransform GetLocalTransform(struct FARTraceResult& TraceResult); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform (Underlying native function: GetLocalToWorldTransform 0x95e065c)
	static struct FTransform GetLocalToWorldTransform(struct FARTraceResult& TraceResult); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform (Underlying native function: GetLocalToTrackingTransform 0x95dfc9c)
	static struct FTransform GetLocalToTrackingTransform(struct FARTraceResult& TraceResult); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera (Underlying native function: GetDistanceFromCamera 0x95df76c)
	static float GetDistanceFromCamera(struct FARTraceResult& TraceResult); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

