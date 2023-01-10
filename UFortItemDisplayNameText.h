// Class /Script/FortniteUI.FortItemDisplayNameText
// Size: 0x380
class UFortItemDisplayNameText : public UCommonTextBlock
{
	struct TWeakObjectPtr<class UFortItem> ItemToRepresent; // 0x350 (0x8)
	unsigned char padding_358[0x28]; // 0x358 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.FortItemDisplayNameText.SetItemToRepresent (Underlying native function: SetItemToRepresent 0xa70a7a8)
	void SetItemToRepresent(class UFortItem*& ItemToRepresent); // (Final | Native | Public | BlueprintCallable)
};

