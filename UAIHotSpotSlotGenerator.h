// Class /Script/FortniteAI.AIHotSpotSlotGenerator
// Size: 0x28
class UAIHotSpotSlotGenerator : public UObject
{

	/* Functions */

	// Function /Script/FortniteAI.AIHotSpotSlotGenerator.GetHotSpot (Underlying native function: GetHotSpot 0xa06c00c)
	class AAIHotSpot* GetHotSpot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.AIHotSpotSlotGenerator.GenerateSlots (Underlying native function: GenerateSlots 0x1832458)
	void GenerateSlots(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteAI.AIHotSpotSlotGenerator.AddSlot (Underlying native function: AddSlot 0xa14e948)
	class UAIHotSpotSlot* AddSlot(struct FVector& RelativeLocation, struct FRotator& RelativeRotation, class UClass*& CustomSlotClass, bool& bEnabled); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

