// Class /Script/FortniteUI.CreativePerformanceHUDHeatmapControlWidget
// Size: 0x2d8
class UCreativePerformanceHUDHeatmapControlWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2d8[0x2d8]; 

	/* Functions */

	// Function /Script/FortniteUI.CreativePerformanceHUDHeatmapControlWidget.StopTimer (Underlying native function: StopTimer 0xa3771fc)
	void StopTimer(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePerformanceHUDHeatmapControlWidget.StartTimer (Underlying native function: StartTimer 0xa3771c0)
	void StartTimer(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePerformanceHUDHeatmapControlWidget.RefreshHeatmap (Has no native function)
	void RefreshHeatmap(struct FVector& PlayerPosition); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.CreativePerformanceHUDHeatmapControlWidget.OnPlayerMovementUpdated (Underlying native function: OnPlayerMovementUpdated 0xa3769c0)
	void OnPlayerMovementUpdated(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.CreativePerformanceHUDHeatmapControlWidget.GetCurrentVolumeSize (Underlying native function: GetCurrentVolumeSize 0xa374d70)
	struct FVector GetCurrentVolumeSize(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CreativePerformanceHUDHeatmapControlWidget.GetCurrentVolumeBox (Underlying native function: GetCurrentVolumeBox 0xa374d28)
	struct FBox GetCurrentVolumeBox(); // (Final | Native | Protected | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

