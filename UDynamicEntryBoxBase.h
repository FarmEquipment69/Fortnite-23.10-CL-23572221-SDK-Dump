// Class /Script/UMG.DynamicEntryBoxBase
// Size: 0x228
class UDynamicEntryBoxBase : public UWidget
{
	enum EDynamicBoxType EntryBoxType; // 0x148 (0x1)
	unsigned char unreflected_149[0x7]; // 0x149 (0x7) 
	struct FVector2D EntrySpacing; // 0x150 (0x10)
	struct TArray<struct FVector2D> SpacingPattern; // 0x160 (0x10)
	struct FSlateChildSize* EntrySizeRule; // 0x170 (0x8)
	struct TEnumAsByte<EHorizontalAlignment> EntryHorizontalAlignment; // 0x178 (0x1)
	struct TEnumAsByte<EVerticalAlignment> EntryVerticalAlignment; // 0x179 (0x1)
	unsigned char unreflected_17a[0x2]; // 0x17a (0x2) 
	int MaxElementSize; // 0x17c (0x4)
	struct FRadialBoxSettings RadialBoxSettings; // 0x180 (0x10)
	unsigned char unreflected_190[0x10]; // 0x190 (0x10) 
	struct FUserWidgetPool EntryWidgetPool; // 0x1a0 (0x88)

	/* Functions */

	// Function /Script/UMG.DynamicEntryBoxBase.SetRadialSettings (Underlying native function: SetRadialSettings 0x99204a0)
	void SetRadialSettings(struct FRadialBoxSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.DynamicEntryBoxBase.SetEntrySpacing (Underlying native function: SetEntrySpacing 0x991f438)
	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.DynamicEntryBoxBase.GetNumEntries (Underlying native function: GetNumEntries 0x2889050)
	int GetNumEntries(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.DynamicEntryBoxBase.GetAllEntries (Underlying native function: GetAllEntries 0x1a0e724)
	struct TArray<class UUserWidget*> GetAllEntries(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

