// Class /Script/FortniteGame.FortItem
// Size: 0x88
class UFortItem : public UObject
{
	unsigned char unreflected_28[0x18]; // 0x28 (0x18) 
	struct FMulticastInlineDelegate OnItemChanged; // 0x40 (0x10)
	unsigned char unreflected_50[0x18]; // 0x50 (0x18) 
	struct FMulticastInlineDelegate OnItemDestroyed; // 0x68 (0x10)
	unsigned char unreflected_78[0x8]; // 0x78 (0x8) 
	unsigned char bLoadedFromSave; // 0x80 (0x1)
	unsigned char bTemporaryItemOwningController; // 0x80 (0x1)
	unsigned char padding_81[0x7]; // 0x81 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortItem.UsesPhantomReserveAmmo (Underlying native function: UsesPhantomReserveAmmo 0x8815a14)
	bool UsesPhantomReserveAmmo(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.TryGetCategory (Underlying native function: TryGetCategory 0x8815050)
	bool TryGetCategory(enum EFortItemCategoryOrdinal& Ordinal, struct FText& OutCategoryDisplayName, bool& OutHasIcon, struct FFortMultiSizeBrush& OutCategoryIconBrush); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.SetOwningControllerForTemporaryItem (Underlying native function: SetOwningControllerForTemporaryItem 0x8814d0c)
	void SetOwningControllerForTemporaryItem(class AFortPlayerController*& InController); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortItem.IsVisible (Underlying native function: IsVisible 0x8814968)
	bool IsVisible(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsTemporaryItem (Underlying native function: IsTemporaryItem 0x2e1e0ac)
	bool IsTemporaryItem(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsSlotted (Underlying native function: IsSlotted 0x8814918)
	bool IsSlotted(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsSchematicOrCraftedWeapon (Underlying native function: IsSchematicOrCraftedWeapon 0x88148ec)
	bool IsSchematicOrCraftedWeapon(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsSchematic (Underlying native function: IsSchematic 0x88148c4)
	bool IsSchematic(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsInventoryOverflowItem (Underlying native function: IsInventoryOverflowItem 0x66b7594)
	bool IsInventoryOverflowItem(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsInStorageVault (Underlying native function: IsInStorageVault 0x8814880)
	bool IsInStorageVault(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsEquipped (Underlying native function: IsEquipped 0x8814840)
	bool IsEquipped(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsEquipable (Underlying native function: IsEquipable 0x8814774)
	bool IsEquipable(class AFortPlayerController*& EquippingPC, bool& bGamepadSwitchingForHeroAbilities); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsDroppedItem (Underlying native function: IsDroppedItem 0x881474c)
	bool IsDroppedItem(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.IsActivatable (Underlying native function: IsActivatable 0x8814648)
	bool IsActivatable(class AFortPlayerController*& FortPC, struct FGameplayTagContainer& FailureReason); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.HasRarityUpgrade (Underlying native function: HasRarityUpgrade 0x6e53fe8)
	bool HasRarityUpgrade(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.HasEvolutions (Underlying native function: HasEvolutions 0x881445c)
	bool HasEvolutions(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.HasDurability (Underlying native function: HasDurability 0x8814434)
	bool HasDurability(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetWidePreviewImage (Underlying native function: GetWidePreviewImage 0x88142b4)
	struct TWeakObjectPtr<class UTexture2D> GetWidePreviewImage(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetUpgradeRestrictionReasonText (Underlying native function: GetUpgradeRestrictionReasonText 0x8814068)
	static struct FText GetUpgradeRestrictionReasonText(enum EItemUpgradeRestrictionReason& Reason); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortItem.GetUpgradeResourceItemDefinition (Underlying native function: GetUpgradeResourceItemDefinition 0x8814040)
	class UFortPersistentResourceItemDefinition* GetUpgradeResourceItemDefinition(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetUpgradeCostToLevel (Underlying native function: GetUpgradeCostToLevel 0x8813fac)
	int GetUpgradeCostToLevel(int& TargetLevel); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetUpgradeCost (Underlying native function: GetUpgradeCost 0x8813f84)
	int GetUpgradeCost(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetType (Underlying native function: GetType 0x8813eb0)
	enum EFortItemType GetType(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetTrackerGuid (Underlying native function: GetTrackerGuid 0x8813e7c)
	struct FGuid GetTrackerGuid(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetTotalAmmo (Underlying native function: GetTotalAmmo 0x8813e54)
	int GetTotalAmmo(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetTier (Underlying native function: GetTier 0x8813d7c)
	enum EFortItemTier GetTier(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetTertiaryCategory (Underlying native function: GetTertiaryCategory 0x8813be8)
	bool GetTertiaryCategory(struct FText& ItemCategoryText, struct FSlateBrush& ItemCategoryBrush, struct TEnumAsByte<EFortBrushSize>& BrushSize); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetSmallPreviewImage (Underlying native function: GetSmallPreviewImage 0x8813a58)
	struct TWeakObjectPtr<class UTexture2D> GetSmallPreviewImage(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetSecondaryCategory (Underlying native function: GetSecondaryCategory 0x88137c4)
	bool GetSecondaryCategory(struct FText& ItemCategoryText, struct FSlateBrush& ItemCategoryBrush, struct TEnumAsByte<EFortBrushSize>& BrushSize); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetSearchTags (Underlying native function: GetSearchTags 0x8813744)
	struct FText GetSearchTags(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetSchematicResultType (Underlying native function: GetSchematicResultType 0x881371c)
	enum EFortItemType GetSchematicResultType(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetSchematicCraftingResultOrCraftedWeaponBP (Underlying native function: GetSchematicCraftingResultOrCraftedWeaponBP 0x88136f8)
	class UFortWeaponItemDefinition* GetSchematicCraftingResultOrCraftedWeaponBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetSchematicCraftingResultBP (Underlying native function: GetSchematicCraftingResultBP 0x88136d0)
	class UFortItemDefinition* GetSchematicCraftingResultBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetRemainingAmmo (Underlying native function: GetRemainingAmmo 0x8812ba8)
	int GetRemainingAmmo(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetRecycleValue (Underlying native function: GetRecycleValue 0x8813610)
	int GetRecycleValue(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetRating (Underlying native function: GetRating 0x88135e8)
	int GetRating(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetRaritySecondaryColor (Underlying native function: GetRaritySecondaryColor 0x88135b8)
	struct FLinearColor GetRaritySecondaryColor(); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetRarityColor (Underlying native function: GetRarityColor 0x8813524)
	struct FLinearColor GetRarityColor(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetRarity (Underlying native function: GetRarity 0x88134fc)
	enum EFortRarity GetRarity(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetPromotionTier (Underlying native function: GetPromotionTier 0x88133f4)
	int GetPromotionTier(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetPrimaryCategory (Underlying native function: GetPrimaryCategory 0x8813324)
	bool GetPrimaryCategory(struct FText& ItemCategoryText); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetPreviewAssets (Underlying native function: GetPreviewAssets 0x8812e68)
	struct TArray<struct TWeakObjectPtr<class UObject>> GetPreviewAssets(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetPhantomReserveAmmo (Underlying native function: GetPhantomReserveAmmo 0x8812dfc)
	int GetPhantomReserveAmmo(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetOwningController (Underlying native function: GetOwningController 0x8812d5c)
	class AFortPlayerController* GetOwningController(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetNumInStack (Underlying native function: GetNumInStack 0x8812d34)
	int GetNumInStack(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetNumberOfSlotsTaken (Underlying native function: GetNumberOfSlotsTaken 0x66b756c)
	unsigned char GetNumberOfSlotsTaken(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetNormalizedDurability (Underlying native function: GetNormalizedDurability 0x6e53194)
	float GetNormalizedDurability(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetMaxTier (Underlying native function: GetMaxTier 0x8812d10)
	enum EFortItemTier GetMaxTier(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetMaxStackSize (Underlying native function: GetMaxStackSize 0x8812be8)
	int GetMaxStackSize(class UAbilitySystemComponent*& AbilityComp); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetMaxLevel (Underlying native function: GetMaxLevel 0x8812b80)
	int GetMaxLevel(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetLoadedAmmo (Underlying native function: GetLoadedAmmo 0x8812b58)
	int GetLoadedAmmo(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetLevelRelativeCostForRarityUpgrade (Underlying native function: GetLevelRelativeCostForRarityUpgrade 0x8812b30)
	int GetLevelRelativeCostForRarityUpgrade(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetLevel (Underlying native function: GetLevel 0x8812ab0)
	int GetLevel(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetLargePreviewImage (Underlying native function: GetLargePreviewImage 0x8812968)
	struct TWeakObjectPtr<class UTexture2D> GetLargePreviewImage(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetItemVariantHandle (Underlying native function: GetItemVariantHandle 0x881292c)
	struct FItemVariantHandle GetItemVariantHandle(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetItemVariantGuid (Underlying native function: GetItemVariantGuid 0x88128f8)
	struct FGuid GetItemVariantGuid(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetItemTypeName (Underlying native function: GetItemTypeName 0x8812734)
	struct FText GetItemTypeName(bool& bUsePlural); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetItemGuid (Underlying native function: GetItemGuid 0x8812700)
	struct FGuid GetItemGuid(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetItemDefinitionBP (Underlying native function: GetItemDefinitionBP 0x88125a4)
	class UFortItemDefinition* GetItemDefinitionBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetInactivePreviewImage (Underlying native function: GetInactivePreviewImage 0x881245c)
	struct TWeakObjectPtr<class UTexture2D> GetInactivePreviewImage(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetFilterCategory (Underlying native function: GetFilterCategory 0x8812248)
	enum EFortInventoryFilter GetFilterCategory(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetEvolveRestrictionReasonText (Underlying native function: GetEvolveRestrictionReasonText 0x881217c)
	static struct FText GetEvolveRestrictionReasonText(enum EItemEvolutionRestrictionReason& Reason); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortItem.GetDurability (Underlying native function: GetDurability 0x88120e4)
	float GetDurability(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetDisplayNameWithoutPrefix (Underlying native function: GetDisplayNameWithoutPrefix 0x881202c)
	struct FText GetDisplayNameWithoutPrefix(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetDisplayName (Underlying native function: GetDisplayName 0x8811ec8)
	struct FText GetDisplayName(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetDescription (Underlying native function: GetDescription 0x8811d88)
	struct FText GetDescription(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetCraftedDisplayName (Underlying native function: GetCraftedDisplayName 0x8811d08)
	struct FText GetCraftedDisplayName(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetCooldownTimeRemaining (Underlying native function: GetCooldownTimeRemaining 0x8811c2c)
	float GetCooldownTimeRemaining(class AFortPlayerController*& FortPC, float& CooldownDuration); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetAlterationSlots (Underlying native function: GetAlterationSlots 0x8811b50)
	struct TArray<struct FFortAlterationSlotStatus> GetAlterationSlots(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.GetActiveAlterations (Underlying native function: GetActiveAlterations 0x8811a84)
	struct TArray<class UFortAlterationItemDefinition*> GetActiveAlterations(int& PretendLevel); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.DoesMatchSearchString (Underlying native function: DoesMatchSearchString 0x8811654)
	bool DoesMatchSearchString(struct FString& SearchString); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.CanUpgradeItemRarity (Underlying native function: CanUpgradeItemRarity 0x88111dc)
	bool CanUpgradeItemRarity(struct TArray<enum EItemEvolutionRestrictionReason>& OutRestrictionReasons); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.CanEvolve (Underlying native function: CanEvolve 0x881106c)
	bool CanEvolve(struct TArray<enum EItemEvolutionRestrictionReason>& OutRestrictionReasons); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.CanBeUpgraded (Underlying native function: CanBeUpgraded 0x8810efc)
	bool CanBeUpgraded(struct TArray<enum EItemUpgradeRestrictionReason>& OutRestrictionReasons); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.CanBeUnslotted (Underlying native function: CanBeUnslotted 0x8810ed4)
	bool CanBeUnslotted(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.CanBeDropped (Underlying native function: CanBeDropped 0x8810eac)
	bool CanBeDropped(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.CanAffordPromotion (Underlying native function: CanAffordPromotion 0x482ebd0)
	bool CanAffordPromotion(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItem.BroadcastOnItemChanged (Underlying native function: BroadcastOnItemChanged 0x8810c98)
	void BroadcastOnItemChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged, bool& bLogBroadcasts); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortItem.AllowedToBeLockedInInventory (Underlying native function: AllowedToBeLockedInInventory 0x8495658)
	bool AllowedToBeLockedInInventory(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

