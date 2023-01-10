// Class /Script/UMG.CanvasPanelSlot
// Size: 0x88
class UCanvasPanelSlot : public UPanelSlot
{
	struct FAnchorData LayoutData; // 0x38 (0x40)
	bool bAutoSize; // 0x78 (0x1)
	unsigned char unreflected_79[0x3]; // 0x79 (0x3) 
	int ZOrder; // 0x7c (0x4)
	unsigned char padding_80[0x8]; // 0x80 (0x8)

	/* Functions */

	// Function /Script/UMG.CanvasPanelSlot.SetZOrder (Underlying native function: SetZOrder 0x9921654)
	void SetZOrder(int& InZOrder); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.CanvasPanelSlot.SetSize (Underlying native function: SetSize 0x99208e8)
	void SetSize(struct FVector2D& InSize); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.CanvasPanelSlot.SetPosition (Underlying native function: SetPosition 0x9920318)
	void SetPosition(struct FVector2D& InPosition); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.CanvasPanelSlot.SetOffsets (Underlying native function: SetOffsets 0x9920064)
	void SetOffsets(struct Fmargin& InOffset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.CanvasPanelSlot.SetMinimum (Underlying native function: SetMinimum 0x991fed8)
	void SetMinimum(struct FVector2D& InMinimumAnchors); // (Final | Native | Public | HasDefaults)

	// Function /Script/UMG.CanvasPanelSlot.SetMaximum (Underlying native function: SetMaximum 0x991fe50)
	void SetMaximum(struct FVector2D& InMaximumAnchors); // (Final | Native | Public | HasDefaults)

	// Function /Script/UMG.CanvasPanelSlot.SetLayout (Underlying native function: SetLayout 0x991fd08)
	void SetLayout(struct FAnchorData& InLayoutData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.CanvasPanelSlot.SetAutoSize (Underlying native function: SetAutoSize 0x991ed1c)
	void SetAutoSize(bool& InbAutoSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.CanvasPanelSlot.SetAnchors (Underlying native function: SetAnchors 0x991ebfc)
	void SetAnchors(struct Fanchors& InAnchors); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.CanvasPanelSlot.SetAlignment (Underlying native function: SetAlignment 0x991eb74)
	void SetAlignment(struct FVector2D& InAlignment); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.CanvasPanelSlot.GetZOrder (Underlying native function: GetZOrder 0x991e0c4)
	int GetZOrder(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.CanvasPanelSlot.GetSize (Underlying native function: GetSize 0x991dc34)
	struct FVector2D GetSize(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.CanvasPanelSlot.GetPosition (Underlying native function: GetPosition 0x991dbe0)
	struct FVector2D GetPosition(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.CanvasPanelSlot.GetOffsets (Underlying native function: GetOffsets 0x991d938)
	struct Fmargin GetOffsets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.CanvasPanelSlot.GetLayout (Underlying native function: GetLayout 0x991d844)
	struct FAnchorData GetLayout(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.CanvasPanelSlot.GetAutoSize (Underlying native function: GetAutoSize 0x991d73c)
	bool GetAutoSize(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.CanvasPanelSlot.GetAnchors (Underlying native function: GetAnchors 0x991d708)
	struct Fanchors GetAnchors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.CanvasPanelSlot.GetAlignment (Underlying native function: GetAlignment 0x991d6d8)
	struct FVector2D GetAlignment(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

