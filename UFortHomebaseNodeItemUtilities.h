// Class /Script/FortniteUI.FortHomebaseNodeItemUtilities
// Size: 0x28
class UFortHomebaseNodeItemUtilities : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteUI.FortHomebaseNodeItemUtilities.IsSquadSlotUnseen (Underlying native function: IsSquadSlotUnseen 0xa821cf8)
	static bool IsSquadSlotUnseen(class AFortPlayerController*& FortPC, struct FName& SquadId, int& SquadSlot); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHomebaseNodeItemUtilities.IsHomebaseNodeItemUnseenForTagContainer (Underlying native function: IsHomebaseNodeItemUnseenForTagContainer 0xa821a30)
	static bool IsHomebaseNodeItemUnseenForTagContainer(class AFortPlayerController*& FortPC, struct FGameplayTagContainer& Tags); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemNameForTagContainer (Underlying native function: GetHomebaseNodeItemNameForTagContainer 0xa82088c)
	static struct FString GetHomebaseNodeItemNameForTagContainer(class AFortPlayerController*& FortPC, struct FGameplayTagContainer& Tags); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemForTagContainer (Underlying native function: GetHomebaseNodeItemForTagContainer 0xa82078c)
	static class UFortHomebaseNodeItem* GetHomebaseNodeItemForTagContainer(class AFortPlayerController*& FortPC, struct FGameplayTagContainer& Tags); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemForSquadSlot (Underlying native function: GetHomebaseNodeItemForSquadSlot 0xa820688)
	static class UFortHomebaseNodeItem* GetHomebaseNodeItemForSquadSlot(class AFortPlayerController*& FortPC, struct FName& SquadId, int& SquadSlot); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHomebaseNodeItemUtilities.AreAnyHomebaseNodeItemsUnseenForSquadType (Underlying native function: AreAnyHomebaseNodeItemsUnseenForSquadType 0xa8200f8)
	static bool AreAnyHomebaseNodeItemsUnseenForSquadType(class AFortPlayerController*& FortPC, enum EFortHomebaseSquadType& SquadType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHomebaseNodeItemUtilities.AreAnyHomebaseNodeItemsUnseenForSquadId (Underlying native function: AreAnyHomebaseNodeItemsUnseenForSquadId 0xa820028)
	static bool AreAnyHomebaseNodeItemsUnseenForSquadId(class AFortPlayerController*& FortPC, struct FName& SquadId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

