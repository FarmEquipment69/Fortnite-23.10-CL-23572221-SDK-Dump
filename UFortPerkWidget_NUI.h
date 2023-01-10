// Class /Script/FortniteUI.FortPerkWidget_NUI
// Size: 0x360
class UFortPerkWidget_NUI : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct FFortUIPerk Perk; // 0x298 (0x98)
	unsigned char unreflected_330[0x8]; // 0x330 (0x8) 
	class UFortTooltipContext* CachedTooltipContext; // 0x338 (0x8)
	unsigned char unreflected_340[0x12]; // 0x340 (0x12) 
	bool bShouldUseSummaryTooltip; // 0x352 (0x1)
	unsigned char unreflected_353[0x5]; // 0x353 (0x5) 
	class UFortTooltipLoadingWrapper* CachedTooltipLoadingWrapper; // 0x358 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPerkWidget_NUI.SetTooltipContext (Underlying native function: SetTooltipContext 0xa822af0)
	void SetTooltipContext(class UFortTooltipContext*& InTooltipContext); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.RequestTooltipDescription (Underlying native function: RequestTooltipDescription 0xa822774)
	void RequestTooltipDescription(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.RequestCombinedTooltipDescription (Underlying native function: RequestCombinedTooltipDescription 0xa822700)
	void RequestCombinedTooltipDescription(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.OnTooltipDescriptionReady (Has no native function)
	void OnTooltipDescriptionReady(struct TArray<struct FText>& DescriptionList); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.OnPerkUpdated (Has no native function)
	void OnPerkUpdated(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.OnCombinedTooltipDescriptionReady (Has no native function)
	void OnCombinedTooltipDescriptionReady(struct FText& Description); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.IsTierPerk (Underlying native function: IsTierPerk 0x8e41bb0)
	bool IsTierPerk(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.IsPerkUnlocked (Underlying native function: IsPerkUnlocked 0xa821c64)
	bool IsPerkUnlocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.IsPerkHighlighted (Underlying native function: IsPerkHighlighted 0xa821c40)
	bool IsPerkHighlighted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.IsPerkEmpty (Underlying native function: IsPerkEmpty 0xa821bf4)
	bool IsPerkEmpty(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.HasAbility (Underlying native function: HasAbility 0xa821980)
	bool HasAbility(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.HandleAbilityKitTooltipLoaded (Underlying native function: HandleAbilityKitTooltipLoaded 0xa821568)
	void HandleAbilityKitTooltipLoaded(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.GetTooltipTitle (Underlying native function: GetTooltipTitle 0xa821344)
	struct FText GetTooltipTitle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.GetTooltipContext (Underlying native function: GetTooltipContext 0xa821320)
	class UFortTooltipContext* GetTooltipContext(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.GetSupportBonusType (Underlying native function: GetSupportBonusType 0xa821278)
	enum EFortSupportBonusType GetSupportBonusType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.GetRequiredLevel (Underlying native function: GetRequiredLevel 0xa821068)
	int GetRequiredLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.GetPerkTier (Underlying native function: GetPerkTier 0x6e8e638)
	enum EFortItemTier GetPerkTier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPerkWidget_NUI.GetIcon (Underlying native function: GetIcon 0xa820b34)
	bool GetIcon(struct FSlateBrush& Brush); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

