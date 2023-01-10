// Class /Script/FortniteGame.FortBrushSizeFunctionLibrary
// Size: 0x28
class UFortBrushSizeFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortBrushSizeFunctionLibrary.ShrinkBrushSize (Underlying native function: ShrinkBrushSize 0x7dc7904)
	static struct TEnumAsByte<EFortBrushSize> ShrinkBrushSize(struct TEnumAsByte<EFortBrushSize>& OriginalBrushSize, int& Steps); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortBrushSizeFunctionLibrary.GrowBrushSize (Underlying native function: GrowBrushSize 0x7dc7838)
	static struct TEnumAsByte<EFortBrushSize> GrowBrushSize(struct TEnumAsByte<EFortBrushSize>& OriginalBrushSize, int& Steps); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

