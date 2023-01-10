// Class /Script/FortniteGame.FortDateTimeLibrary
// Size: 0x28
class UFortDateTimeLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortDateTimeLibrary.GetTimeTillEventTagEnds (Underlying native function: GetTimeTillEventTagEnds 0x85e6e20)
	static struct FTimespan* GetTimeTillEventTagEnds(class AFortPlayerController*& FortPC, struct FString& EventTag); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortDateTimeLibrary.GetTimespanAsText (Underlying native function: GetTimespanAsText 0x27daf58)
	static struct FText GetTimespanAsText(struct FTimespan*& Timespan, bool& bShowSeconds, enum ETimespanAsTextFormat& FormatType, enum ETimespanUnitDisplayFormat& UnitDisplayType); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortDateTimeLibrary.GetTimeSinceEventTagStart (Underlying native function: GetTimeSinceEventTagStart 0x85e6c68)
	static struct FTimespan* GetTimeSinceEventTagStart(class AFortPlayerController*& FortPC, struct FString& EventTag); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortDateTimeLibrary.GetTimeSinceAthenaSeasonStart (Underlying native function: GetTimeSinceAthenaSeasonStart 0x85e6bcc)
	static struct FTimespan* GetTimeSinceAthenaSeasonStart(class AFortPlayerController*& FortPC); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortDateTimeLibrary.GetMcpRelativeUtcNow (Underlying native function: GetMcpRelativeUtcNow 0x85e6644)
	static struct FDateTime* GetMcpRelativeUtcNow(class AFortPlayerController*& FortPC); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)
};

