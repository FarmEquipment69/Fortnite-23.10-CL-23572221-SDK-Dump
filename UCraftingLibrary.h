// Class /Script/CraftingRuntime.CraftingLibrary
// Size: 0x28
class UCraftingLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/CraftingRuntime.CraftingLibrary.StartCrafting (Underlying native function: StartCrafting 0x6f57b0c)
	static void StartCrafting(class AFortPlayerController*& Instigator, class AActor*& CraftingObject, struct FName& CraftingFormulaName, int& NumberToCraft); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.ReportCraftingSuccess (Underlying native function: ReportCraftingSuccess 0x6f5752c)
	static void ReportCraftingSuccess(class AFortPlayerController*& Instigator, class AActor*& CraftingObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.PickupItemAndStartCrafting (Underlying native function: PickupItemAndStartCrafting 0x6f57330)
	static void PickupItemAndStartCrafting(class AFortPlayerController*& Instigator, class AActor*& CraftingObject, class AFortPickup*& PickUp, struct FName& CraftingFormulaName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.IsValidIngredient (Underlying native function: IsValidIngredient 0x6f56e68)
	static bool IsValidIngredient(class AFortPlayerController*& FortPC, class AActor*& CraftingObject, class UFortItemDefinition*& ItemDef); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GiveItemToCraftingObject (Underlying native function: GiveItemToCraftingObject 0x6f56618)
	static void GiveItemToCraftingObject(class AFortPlayerController*& Instigator, class AActor*& CraftingObject, struct FFortItemEntry& ItemEntryToGrant); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetValidIngredientsInInventory (Underlying native function: GetValidIngredientsInInventory 0x6f56320)
	static void GetValidIngredientsInInventory(class AFortPlayerController*& FortPC, class AActor*& CraftingObject, struct TArray<class UFortWorldItem*>& OutIngredients); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetUIDataForCraftingIngredientTags (Underlying native function: GetUIDataForCraftingIngredientTags 0x6f56170)
	static void GetUIDataForCraftingIngredientTags(class UObject*& WorldContextObject, struct FGameplayTagContainer& IngredientTags, struct TArray<struct TWeakObjectPtr<class UFortItemDefinition>>& OutItemDefs, struct TArray<struct TWeakObjectPtr<class UObject>>& OutIcons); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetKnownCraftingFormulas (Underlying native function: GetKnownCraftingFormulas 0x6f55fd0)
	static void GetKnownCraftingFormulas(class AFortPlayerController*& FortPC, class AActor*& CraftingObject, struct TArray<struct FName>& OutFormulas); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetIngredientsInCraftingObject (Underlying native function: GetIngredientsInCraftingObject 0x6f55ee8)
	static struct TArray<class UFortWorldItem*> GetIngredientsInCraftingObject(class AActor*& CraftingObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingResultsForRowName (Underlying native function: GetCraftingResultsForRowName 0x6f55d74)
	static void GetCraftingResultsForRowName(class UObject*& WorldContextObject, struct FName& CraftingFormulaRow, struct TArray<struct FItemAndCount>& OutResults, int& NumToCraft); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateTimeLeft (Underlying native function: GetCraftingObjectCurrentCraftingStateTimeLeft 0x6f55cc4)
	static float GetCraftingObjectCurrentCraftingStateTimeLeft(class AActor*& CraftingObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateStartTime (Underlying native function: GetCraftingObjectCurrentCraftingStateStartTime 0x6f55c30)
	static float GetCraftingObjectCurrentCraftingStateStartTime(class AActor*& CraftingObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateEndTime (Underlying native function: GetCraftingObjectCurrentCraftingStateEndTime 0x6f55b90)
	static float GetCraftingObjectCurrentCraftingStateEndTime(class AActor*& CraftingObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCraftingState (Underlying native function: GetCraftingObjectCraftingState 0x6f55b00)
	static enum ECraftingObjectState GetCraftingObjectCraftingState(class AActor*& CraftingObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingIngredients_TempItems (Underlying native function: GetCraftingIngredients_TempItems 0x6f55a1c)
	static struct TArray<class UFortWorldItem*> GetCraftingIngredientsTempItems(class AActor*& CraftingObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingFormulaNameBeingCrafted (Underlying native function: GetCraftingFormulaNameBeingCrafted 0x6f5598c)
	static struct FName GetCraftingFormulaNameBeingCrafted(class AActor*& CraftingObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingFormulaIngredientRequirements (Underlying native function: GetCraftingFormulaIngredientRequirements 0x6f5584c)
	static bool GetCraftingFormulaIngredientRequirements(class UObject*& WorldContextObject, struct FName& CraftingFormulaRow, struct TArray<struct FCraftingIngredientRequirement>& OutIngredientRequirements); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftedResults_TempItems (Underlying native function: GetCraftedResults_TempItems 0x6f55768)
	static struct TArray<class UFortWorldItem*> GetCraftedResultsTempItems(class AActor*& CraftingObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetAllValidIngredients (Underlying native function: GetAllValidIngredients 0x6f555e4)
	static void GetAllValidIngredients(class AFortPlayerController*& FortPC, class AActor*& CraftingObject, struct TArray<struct FGameplayTagContainer>& OutIngredients); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetAllCraftingFormulas (Underlying native function: GetAllCraftingFormulas 0x6f55444)
	static void GetAllCraftingFormulas(class AFortPlayerController*& FortPC, class AActor*& CraftingObject, struct TArray<struct FName>& OutFormulas); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.GetAllCraftableFormulas (Underlying native function: GetAllCraftableFormulas 0x6f5532c)
	static void GetAllCraftableFormulas(class AFortPlayerController*& FortPC, class AActor*& CraftingObject, struct TArray<struct FName>& OutFormulas); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.EjectItems (Underlying native function: EjectItems 0x6f55214)
	static void EjectItems(class AFortPlayerController*& Instigator, class AActor*& CraftingObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.ClaimCraftingResults (Underlying native function: ClaimCraftingResults 0x6f54f3c)
	static void ClaimCraftingResults(class AFortPlayerController*& Instigator, class AActor*& CraftingObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.CanCraftFormulaWithAdditionalItems (Underlying native function: CanCraftFormulaWithAdditionalItems 0x6f54c04)
	static bool CanCraftFormulaWithAdditionalItems(class AFortPlayerController*& FortPC, class AActor*& CraftingObject, struct FName& CraftingFormulaRow, struct TArray<struct FItemAndCount>& AdditionalItems, struct TArray<struct FCraftingIngredientQueryState>& OutIngredientStates, int& NumberToCraft); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.CanCraftFormula (Underlying native function: CanCraftFormula 0x6f54a70)
	static bool CanCraftFormula(class AFortPlayerController*& FortPC, class AActor*& CraftingObject, struct FName& CraftingFormulaRow, struct TArray<struct FCraftingIngredientQueryState>& OutIngredientStates, int& NumberToCraft); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CraftingRuntime.CraftingLibrary.CancelCrafting (Underlying native function: CancelCrafting 0x6f54e0c)
	static void CancelCrafting(class AFortPlayerController*& Instigator, class AActor*& CraftingObject); // (Final | Native | Static | Public | BlueprintCallable)
};

