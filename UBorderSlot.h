// Class /Script/UMG.BorderSlot
// Size: 0x60
class UBorderSlot : public UPanelSlot
{
	struct Fmargin Padding; // 0x38 (0x10)
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x48 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x49 (0x1)
	unsigned char padding_4a[0x16]; // 0x4a (0x16)

	/* Functions */

	// Function /Script/UMG.BorderSlot.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x9920ecc)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.BorderSlot.SetPadding (Underlying native function: SetPadding 0x15a6598)
	void SetPadding(struct Fmargin& InPadding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.BorderSlot.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x22fdb90)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | Native | Public | BlueprintCallable)
};

