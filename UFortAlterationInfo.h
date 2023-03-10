// Class /Script/FortniteUI.FortAlterationInfo
// Size: 0x58
class UFortAlterationInfo : public UObject
{
	class UFortItem* CorrespondingItem; // 0x28 (0x8)
	int SlotIndex; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	class UFortAlterationItemDefinition* AlterationDef; // 0x38 (0x8)
	int RequiredMinLevel; // 0x40 (0x4)
	bool bIsUpgrade; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	int CurrentItemLevel; // 0x48 (0x4)
	bool bFreeAlterationSlot; // 0x4c (0x1)
	bool bUnlockedByEvolution; // 0x4d (0x1)
	unsigned char unreflected_4e[0x2]; // 0x4e (0x2) 
	int UpgradeLevelDelta; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)

	/* Functions */

	// Function /Script/FortniteUI.FortAlterationInfo.IsFreeAlterationChoice (Underlying native function: IsFreeAlterationChoice 0xa7f1e88)
	bool IsFreeAlterationChoice(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAlterationInfo.IsAlterationUnlocked (Underlying native function: IsAlterationUnlocked 0xa7f1d40)
	bool IsAlterationUnlocked(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAlterationInfo.IsAlterationHighlighted (Underlying native function: IsAlterationHighlighted 0xa7f1d04)
	bool IsAlterationHighlighted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAlterationInfo.GetSlotIndex (Underlying native function: GetSlotIndex 0x7ce6ec0)
	int GetSlotIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAlterationInfo.GetRequiredLevel (Underlying native function: GetRequiredLevel 0x7ca395c)
	int GetRequiredLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAlterationInfo.GetRarity (Underlying native function: GetRarity 0xa7ef428)
	enum EFortRarity GetRarity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAlterationInfo.GetCurrentPipCount (Underlying native function: GetCurrentPipCount 0xa7ecd68)
	float GetCurrentPipCount(float& MaxPips); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAlterationInfo.GetCorrespondingItem (Underlying native function: GetCorrespondingItem 0x95e1038)
	class UFortItem* GetCorrespondingItem(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAlterationInfo.GetAlterationDefintion (Underlying native function: GetAlterationDefintion 0xa7ec604)
	class UFortAlterationItemDefinition* GetAlterationDefintion(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

