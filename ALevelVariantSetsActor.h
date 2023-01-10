// Class /Script/VariantManagerContent.LevelVariantSetsActor
// Size: 0x2f0
class ALevelVariantSetsActor : public AActor
{
	struct FSoftObjectPath LevelVariantSets; // 0x288 (0x18)
	unsigned char DirectorInstances_2a0[0x50]; // 0x2a0 (0x50) (UNHANDLED PROPERTY TYPE: MapProperty UID: 0)

	/* Functions */

	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName (Underlying native function: SwitchOnVariantByName 0x7d326c4)
	bool SwitchOnVariantByName(struct FString& VariantSetName, struct FString& VariantName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex (Underlying native function: SwitchOnVariantByIndex 0x7d325b0)
	bool SwitchOnVariantByIndex(int& VariantSetIndex, int& VariantIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets (Underlying native function: SetLevelVariantSets 0x7d31cac)
	void SetLevelVariantSets(class ULevelVariantSets*& InVariantSets); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets (Underlying native function: GetLevelVariantSets 0x7d31214)
	class ULevelVariantSets* GetLevelVariantSets(bool& bLoad); // (Final | Native | Public | BlueprintCallable)
};

