// Class /Script/SaveTheWorldUI.FortItemInspectionScreen
// Size: 0x760
class UFortItemInspectionScreen : public UFortActivatablePanelWithItemPreview
{
	enum EFortItemInspectionMode CurrentInspectMode; // 0x660 (0x1)
	unsigned char unreflected_661[0x3]; // 0x661 (0x3) 
	struct TWeakObjectPtr<class UFortItem> InspectedItem; // 0x664 (0x8)
	bool UpgradeAllowed; // 0x66c (0x1)
	bool EvolveAllowed; // 0x66d (0x1)
	bool FavoriteAllowed; // 0x66e (0x1)
	bool RarityUpgradingAllowed; // 0x66f (0x1)
	bool IsPreviewing; // 0x670 (0x1)
	bool bHasSeenRefundHelpPrompt; // 0x671 (0x1)
	unsigned char unreflected_672[0x6]; // 0x672 (0x6) 
	class UFortItemInspectCycleWidget* CycleWidget; // 0x678 (0x8)
	struct FGameplayTagQuery InspectAnimationTag; // 0x680 (0x48)
	class UClass* AlterationModOptinScreenClass; // 0x6c8 (0x8)
	class UClass* AlterationModScreenClass; // 0x6d0 (0x8)
	struct TWeakObjectPtr<class UDataTable> RefundDescriptionsDataTable; // 0x6d8 (0x28)
	unsigned char padding_700[0x60]; // 0x700 (0x60)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.SetItemToRepresent (Underlying native function: SetItemToRepresent 0x721cce4)
	void SetItemToRepresent(class UFortItem*& Item); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.SetInspectionMode (Underlying native function: SetInspectionMode 0x721cae4)
	void SetInspectionMode(enum EFortItemInspectionMode& NewInspectMode); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.SetAttemptingConversion (Underlying native function: SetAttemptingConversion 0x721c6e0)
	void SetAttemptingConversion(bool& bIsAttemptingConversion); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.OpenItemInspect (Underlying native function: OpenItemInspect 0x721c164)
	void OpenItemInspect(class UFortItem*& ItemToInspect, enum EFortItemInspectionMode& Mode, bool& ShouldAllowUpgrading, bool& ShouldAllowEvolution, bool& ShouldAllowFavorite, bool& IsTemporaryItem, bool& bAllowRarityUpgrading, int& QuantityOverride); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.IsItemSlottedInCollectionBook (Underlying native function: IsItemSlottedInCollectionBook 0x721be7c)
	bool IsItemSlottedInCollectionBook(class UFortItem*& Item); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectDestroyedBP (Has no native function)
	void HandleItemToInspectDestroyedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectDestroyed (Underlying native function: HandleItemToInspectDestroyed 0x721b9a0)
	void HandleItemToInspectDestroyed(); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectChangedBP (Has no native function)
	void HandleItemToInspectChangedBP(bool& bWasFavoritedChanged); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectChanged (Underlying native function: HandleItemToInspectChanged 0x721b894)
	void HandleItemToInspectChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleIsPreviewingChanged (Has no native function)
	void HandleIsPreviewingChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleDifferentItemToInspectSetBP (Has no native function)
	void HandleDifferentItemToInspectSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleDifferentInspectionModeSetBP (Has no native function)
	void HandleDifferentInspectionModeSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetRefundResultItem (Underlying native function: GetRefundResultItem 0x721aae0)
	class UFortAccountItem* GetRefundResultItem(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetRefundDescriptionText (Underlying native function: GetRefundDescriptionText 0x721aa8c)
	struct FText GetRefundDescriptionText(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetItemQuantityOverride (Underlying native function: GetItemQuantityOverride 0x721a6f0)
	int GetItemQuantityOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetCycleWidget (Underlying native function: GetCycleWidget 0x2641fe8)
	class UFortItemInspectCycleWidget* GetCycleWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.DoesItemHaveLegacyAlterations (Underlying native function: DoesItemHaveLegacyAlterations 0x7219e4c)
	bool DoesItemHaveLegacyAlterations(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.DoAlterationModification (Underlying native function: DoAlterationModification 0x7219d94)
	void DoAlterationModification(); // (Final | Native | Public | BlueprintCallable)
};

