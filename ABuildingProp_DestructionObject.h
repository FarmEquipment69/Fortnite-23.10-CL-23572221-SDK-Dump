// Class /Script/FortniteGame.BuildingProp_DestructionObject
// Size: 0xf50
class ABuildingProp_DestructionObject : public ABuildingProp
{
	struct FMulticastInlineDelegate OnBuildingAttributeSetHealthChangedDelegate; // 0xef8 (0x10)
	struct TArray<struct FText> ObjectiveNameTexts; // 0xf08 (0x10)
	struct FText ObjectiveTextTemplate; // 0xf18 (0x18)
	struct FText ObjectiveText; // 0xf30 (0x18)
	unsigned char padding_f48[0x8]; // 0xf48 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_DestructionObject.OnBuildingAttributeSetHealthChanged (Underlying native function: OnBuildingAttributeSetHealthChanged 0x8386fac)
	void OnBuildingAttributeSetHealthChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingProp_DestructionObject.GetObjectiveNameText (Underlying native function: GetObjectiveNameText 0x83846f8)
	struct FText GetObjectiveNameText(int& ObjectiveNameIndex); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

