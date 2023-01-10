// Class /Script/FortniteUI.CreativePerformanceHUDBase
// Size: 0x448
class UCreativePerformanceHUDBase : public UFortHUDElementWidget
{
	unsigned char unreflected_448[0x448]; 

	/* Functions */

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.StopTimer (Underlying native function: StopTimer 0xa3771e8)
	void StopTimer(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.StartTimer (Underlying native function: StartTimer 0xa3771ac)
	void StartTimer(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.ShowBudgetGridThermometerCoordinates (Underlying native function: ShowBudgetGridThermometerCoordinates 0xa37716c)
	static bool ShowBudgetGridThermometerCoordinates(); // (Final | Native | Static | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.SetUIMetrics (Has no native function)
	void SetUIMetrics(struct FVolumePerformanceMetrics& VolumePerformanceMetrics); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.SetSimpleUIMetrics (Has no native function)
	void SetSimpleUIMetrics(struct FSimpleMetricInformation& SimplePerformanceMetrics); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.RefreshCostPreviewOfSelectedActor (Has no native function)
	void RefreshCostPreviewOfSelectedActor(int& CostPreviewOfSelection, bool& isThrowingPlayset); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.OnSimpleMetricInformationUpdated (Underlying native function: OnSimpleMetricInformationUpdated 0xa376a64)
	void OnSimpleMetricInformationUpdated(class APlayerState*& ClientState, struct FSimpleMetricInformation& MetricInformation); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.OnPlayerExitedSpatialGameplayActor (Underlying native function: OnPlayerExitedSpatialGameplayActor 0xa37686c)
	void OnPlayerExitedSpatialGameplayActor(struct FEventMessageTag& Channel, struct FPlayerExitSpatialActorContext& PlayerExitSpatialActorContext); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.OnPlayerEnteredSpatialGameplayActor (Underlying native function: OnPlayerEnteredSpatialGameplayActor 0xa37686c)
	void OnPlayerEnteredSpatialGameplayActor(struct FEventMessageTag& Channel, struct FPlayerEnterSpatialActorContext& PlayerEnterSpatialActorContext); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.OnPerformanceMetricsUpdated (Underlying native function: OnPerformanceMetricsUpdated 0xa376798)
	void OnPerformanceMetricsUpdated(struct FVolumePerformanceMetrics& VolumePerformanceMetrics); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.OnCostPreviewOfSelectionChanged (Underlying native function: OnCostPreviewOfSelectionChanged 0xa376608)
	void OnCostPreviewOfSelectionChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.IsHeatmapEnabled (Underlying native function: IsHeatmapEnabled 0xa3760a0)
	bool IsHeatmapEnabled(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.HideUIMetrics (Has no native function)
	void HideUIMetrics(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.HandleSpatialLoadingStateChanged (Underlying native function: HandleSpatialLoadingStateChanged 0xa375d00)
	void HandleSpatialLoadingStateChanged(struct FEventMessageTag& Channel, struct FSpatialGamePlayActorLoadingStateUpdatedContext& StateContext); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.HandleGameStateInitialized (Underlying native function: HandleGameStateInitialized 0xa3751f0)
	void HandleGameStateInitialized(class AFortGameState*& GameState); // (Final | Native | Protected)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.GetCostPreviewOfSelectedActor (Underlying native function: GetCostPreviewOfSelectedActor 0xa374d04)
	int GetCostPreviewOfSelectedActor(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePerformanceHUDBase.BP_OnClientEnterVolume (Has no native function)
	void BPOnClientEnterVolume(class APlayerState*& ClientPlayerState, class AFortVolume*& Volume); // (Event | Protected | BlueprintEvent)
};

