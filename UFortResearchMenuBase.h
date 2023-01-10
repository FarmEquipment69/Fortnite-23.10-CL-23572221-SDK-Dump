// Class /Script/SaveTheWorldUI.FortResearchMenuBase
// Size: 0x520
class UFortResearchMenuBase : public UFortActivatablePanel
{
	class UFortItemDefinition* ResearchRespecToken; // 0x518 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.UseResearchRespecToken (Underlying native function: UseResearchRespecToken 0x7248820)
	void UseResearchRespecToken(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.RequestPurchaseResearchLevel (Underlying native function: RequestPurchaseResearchLevel 0x724630c)
	void RequestPurchaseResearchLevel(struct FString& StatId); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.OnUseResearchRespecTokenComplete (Has no native function)
	void OnUseResearchRespecTokenComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.OnPurchaseResearchLevelStarted (Has no native function)
	void OnPurchaseResearchLevelStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.OnPurchaseResearchLevelCompleted (Has no native function)
	void OnPurchaseResearchLevelCompleted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.GetResearchRespecTokenCount (Underlying native function: GetResearchRespecTokenCount 0x7244530)
	int GetResearchRespecTokenCount(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.GetClaimableResearchPointEstimate (Underlying native function: GetClaimableResearchPointEstimate 0x724345c)
	int GetClaimableResearchPointEstimate(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.AreResearchRespecTokensAvailable (Underlying native function: AreResearchRespecTokensAvailable 0x7242e5c)
	bool AreResearchRespecTokensAvailable(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

