// Class /Script/FortniteUI.FortHeroSupportPerkWidget
// Size: 0x710
class UFortHeroSupportPerkWidget : public UUserWidget
{
	struct TWeakObjectPtr<class UFortHero> HeroToRepresent; // 0x268 (0x8)
	enum EFortSupportBonusType SupportTypeToRepresent; // 0x270 (0x1)
	enum EFortSupportPerkWidgetState SupportPerkWidgetState; // 0x271 (0x1)
	unsigned char unreflected_272[0x6]; // 0x272 (0x6) 
	class UFortMultiSizeImage* PerkImage; // 0x278 (0x8)
	class UCommonTextBlock* NameText; // 0x280 (0x8)
	class UCommonTextBlock* DescriptionText; // 0x288 (0x8)
	unsigned char padding_290[0x480]; // 0x290 (0x480)

	/* Functions */

	// Function /Script/FortniteUI.FortHeroSupportPerkWidget.SetSupportTypeToRepresent (Underlying native function: SetSupportTypeToRepresent 0xa70b67c)
	void SetSupportTypeToRepresent(enum EFortSupportBonusType& InSupportTypeToRepresent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHeroSupportPerkWidget.SetState (Underlying native function: SetState 0xa70b510)
	void SetState(enum EFortSupportPerkWidgetState& InState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHeroSupportPerkWidget.SetHeroToRepresent (Underlying native function: SetHeroToRepresent 0xa709864)
	void SetHeroToRepresent(class UFortHero*& InHeroToRepresent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHeroSupportPerkWidget.OnSupportTypeUpdated (Has no native function)
	void OnSupportTypeUpdated(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortHeroSupportPerkWidget.OnStateChanged (Has no native function)
	void OnStateChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortHeroSupportPerkWidget.OnHeroUpdated (Has no native function)
	void OnHeroUpdated(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortHeroSupportPerkWidget.IsPerkUnlocked (Underlying native function: IsPerkUnlocked 0x24f75e4)
	bool IsPerkUnlocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHeroSupportPerkWidget.IsPerkInCorrectSlot (Underlying native function: IsPerkInCorrectSlot 0x24f75e4)
	bool IsPerkInCorrectSlot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHeroSupportPerkWidget.IsPerkHighlighted (Underlying native function: IsPerkHighlighted 0x24f75e4)
	bool IsPerkHighlighted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHeroSupportPerkWidget.IsPerkEmpty (Underlying native function: IsPerkEmpty 0x2830cb8)
	bool IsPerkEmpty(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHeroSupportPerkWidget.IsPerkActive (Underlying native function: IsPerkActive 0x24f75e4)
	bool IsPerkActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHeroSupportPerkWidget.IsHeroInSupportSlot (Underlying native function: IsHeroInSupportSlot 0x24f75e4)
	bool IsHeroInSupportSlot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

