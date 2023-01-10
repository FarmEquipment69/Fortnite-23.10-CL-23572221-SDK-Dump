// Class /Script/FortniteGame.CreativeClassOptionBlueprintLibrary
// Size: 0x28
class UCreativeClassOptionBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.CreativeClassOptionBlueprintLibrary.SetLegacyClassIndex (Underlying native function: SetLegacyClassIndex 0x855214c)
	static void SetLegacyClassIndex(struct FCreativeClassOption*& ClassOption, int& LegacyClassIndex); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeClassOptionBlueprintLibrary.MakeFromLegacyClassIndex (Underlying native function: MakeFromLegacyClassIndex 0x85506f8)
	static struct FCreativeClassOption* MakeFromLegacyClassIndex(int& LegacyClassIndex); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeClassOptionBlueprintLibrary.IsClassType (Underlying native function: IsClassType 0x854f388)
	static bool IsClassType(struct FCreativeClassOption*& ClassOption, enum ECreativeClassType& ClassType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeClassOptionBlueprintLibrary.GetLegacyClassIndex (Underlying native function: GetLegacyClassIndex 0x854d594)
	static int GetLegacyClassIndex(struct FCreativeClassOption*& ClassOption); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeClassOptionBlueprintLibrary.ConvertToClassSlotIndex (Underlying native function: ConvertToClassSlotIndex 0x854b91c)
	static unsigned char ConvertToClassSlotIndex(struct FCreativeClassOption*& ClassOption); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

