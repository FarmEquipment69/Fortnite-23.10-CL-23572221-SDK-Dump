// Class /Script/FortniteUI.AthenaTravelLogFormatting
// Size: 0x28
class UAthenaTravelLogFormatting : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteUI.AthenaTravelLogFormatting.ShouldDisplayText (Underlying native function: ShouldDisplayText 0xa3116dc)
	static bool ShouldDisplayText(struct FAthenaTravelLogEntry& Entry); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.AthenaTravelLogFormatting.IsTravelLogTextDisplayEnabled (Underlying native function: IsTravelLogTextDisplayEnabled 0xa3109d0)
	static bool IsTravelLogTextDisplayEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.AthenaTravelLogFormatting.FormatTravelLogEntry (Underlying native function: FormatTravelLogEntry 0xa30fda0)
	static struct FText FormatTravelLogEntry(class UObject*& WorldContextObject, struct FAthenaTravelLogEntry& Entry); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

