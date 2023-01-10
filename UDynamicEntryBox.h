// Class /Script/UMG.DynamicEntryBox
// Size: 0x230
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
	class UClass* EntryWidgetClass; // 0x228 (0x8)

	/* Functions */

	// Function /Script/UMG.DynamicEntryBox.Reset (Underlying native function: Reset 0x26cc818)
	void Reset(bool& bDeleteWidgets); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.DynamicEntryBox.RemoveEntry (Underlying native function: RemoveEntry 0x991e424)
	void RemoveEntry(class UUserWidget*& EntryWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntryOfClass (Underlying native function: BP_CreateEntryOfClass 0x991cc9c)
	class UUserWidget* BPCreateEntryOfClass(class UClass*& EntryClass); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntry (Underlying native function: BP_CreateEntry 0x2686950)
	class UUserWidget* BPCreateEntry(); // (Final | Native | Private | BlueprintCallable)
};

