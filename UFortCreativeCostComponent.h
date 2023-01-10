// Class /Script/FortniteGame.FortCreativeCostComponent
// Size: 0xb8
class UFortCreativeCostComponent : public UActorComponent
{
	bool bShowCostInInteractionIndicator; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct TArray<int> ItemCosts; // 0xa8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeCostComponent.TakeWorldResourcesFromPlayer (Underlying native function: TakeWorldResourcesFromPlayer 0x85526a4)
	bool TakeWorldResourcesFromPlayer(class AFortPawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeCostComponent.SetItemResourceCost (Underlying native function: SetItemResourceCost 0x8551ff4)
	void SetItemResourceCost(struct TEnumAsByte<EFortResourceType>& ResourceType, int& Cost); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeCostComponent.PassesCostCheck (Underlying native function: PassesCostCheck 0x85511ec)
	bool PassesCostCheck(class AFortPawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeCostComponent.GetItemCosts (Underlying native function: GetItemCosts 0x854d2ac)
	struct TArray<int> GetItemCosts(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeCostComponent.ClearCosts (Underlying native function: ClearCosts 0x854b4b8)
	void ClearCosts(); // (Final | Native | Public | BlueprintCallable)
};

