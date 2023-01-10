// Class /Script/FortniteGame.CreativeTeamOptionBlueprintLibrary
// Size: 0x28
class UCreativeTeamOptionBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.CreativeTeamOptionBlueprintLibrary.SetLegacyTeamIndex (Underlying native function: SetLegacyTeamIndex 0x855221c)
	static void SetLegacyTeamIndex(struct FCreativeTeamOption*& TeamOption, int& LegacyTeamIndex); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeTeamOptionBlueprintLibrary.MakeFromLegacyTeamIndex (Underlying native function: MakeFromLegacyTeamIndex 0x8550784)
	static struct FCreativeTeamOption* MakeFromLegacyTeamIndex(int& LegacyTeamIndex); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeTeamOptionBlueprintLibrary.IsTeamType (Underlying native function: IsTeamType 0x854f388)
	static bool IsTeamType(struct FCreativeTeamOption*& TeamOption, enum ECreativeTeamType& TeamType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeTeamOptionBlueprintLibrary.GetLegacyTeamIndex (Underlying native function: GetLegacyTeamIndex 0x854d624)
	static int GetLegacyTeamIndex(struct FCreativeTeamOption*& TeamOption, bool& bShiftIndex); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeTeamOptionBlueprintLibrary.ConvertToTeam (Underlying native function: ConvertToTeam 0x854b9ac)
	static struct TEnumAsByte<EFortTeam> ConvertToTeam(struct FCreativeTeamOption*& TeamOption); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

