// Class /Script/FortniteUI.FortItemAutoMulchActivatablePanel
// Size: 0x570
class UFortItemAutoMulchActivatablePanel : public UFortActivatablePanel
{
	unsigned char unreflected_570[0x570]; 

	/* Functions */

	// Function /Script/FortniteUI.FortItemAutoMulchActivatablePanel.SetItemManagementScreen (Underlying native function: SetItemManagementScreen 0x71cda78)
	void SetItemManagementScreen(class UFortItemManagementScreen*& InItemManagementScreen); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemAutoMulchActivatablePanel.SaveSettings (Underlying native function: SaveSettings 0xa7095fc)
	void SaveSettings(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemAutoMulchActivatablePanel.RestoreAutoMulchSettings (Underlying native function: RestoreAutoMulchSettings 0x71cd8d8)
	void RestoreAutoMulchSettings(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemAutoMulchActivatablePanel.GetMulchCategoriesForInventoryFilter (Underlying native function: GetMulchCategoriesForInventoryFilter 0xa708744)
	struct TArray<enum EFortAutoMulchCategory> GetMulchCategoriesForInventoryFilter(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemAutoMulchActivatablePanel.GetFrontendInventoryFilter (Underlying native function: GetFrontendInventoryFilter 0xa7085c0)
	enum EFortFrontendInventoryFilter GetFrontendInventoryFilter(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemAutoMulchActivatablePanel.EnterMulchModeForAutoMulch (Underlying native function: EnterMulchModeForAutoMulch 0xa70836c)
	void EnterMulchModeForAutoMulch(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemAutoMulchActivatablePanel.CacheAutoMulchSettings (Underlying native function: CacheAutoMulchSettings 0xa708278)
	void CacheAutoMulchSettings(); // (Final | Native | Protected | BlueprintCallable)
};

