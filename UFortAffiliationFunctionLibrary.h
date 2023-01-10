// Class /Script/FortniteGame.FortAffiliationFunctionLibrary
// Size: 0x28
class UFortAffiliationFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortAffiliationFunctionLibrary.RemoveFromFaction (Underlying native function: RemoveFromFaction 0x7fbe108)
	static void RemoveFromFaction(class AActor*& Actor, struct FGameplayTag& FactionTag); // (Final | BlueprintAuthorityOnly | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAffiliationFunctionLibrary.RemoveFromAllFactions (Underlying native function: RemoveFromAllFactions 0x7fbe098)
	static void RemoveFromAllFactions(class AActor*& Actor); // (Final | BlueprintAuthorityOnly | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAffiliationFunctionLibrary.GetCurrentFactions (Underlying native function: GetCurrentFactions 0x7fbc6f8)
	static struct FGameplayTagContainer GetCurrentFactions(class AActor*& Actor); // (Final | BlueprintAuthorityOnly | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAffiliationFunctionLibrary.ChangeFactionAttitudeTowardsActor (Underlying native function: ChangeFactionAttitudeTowardsActor 0x7fbb02c)
	static void ChangeFactionAttitudeTowardsActor(class UObject*& WorldContextObject, struct FGameplayTagContainer& FactionTags, class AActor*& TowardsActor, struct TEnumAsByte<EFortFactionAttitude>& Attitude); // (Final | BlueprintAuthorityOnly | Native | Static | Private | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAffiliationFunctionLibrary.ChangeAttitudeBetweenActors (Underlying native function: ChangeAttitudeBetweenActors 0x7fbaecc)
	static void ChangeAttitudeBetweenActors(class UObject*& WorldContextObject, class AActor*& FactionOwner, class AActor*& TowardsActor, struct TEnumAsByte<EFortFactionAttitude>& Attitude); // (Final | BlueprintAuthorityOnly | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAffiliationFunctionLibrary.AddToFactions (Underlying native function: AddToFactions 0x7fbadc8)
	static void AddToFactions(class AActor*& Actor, struct FGameplayTagContainer& FactionsTagContainer); // (Final | BlueprintAuthorityOnly | Native | Static | Private | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAffiliationFunctionLibrary.AddToFaction (Underlying native function: AddToFaction 0x7fbad14)
	static void AddToFaction(class AActor*& Actor, struct FGameplayTag& FactionTag); // (Final | BlueprintAuthorityOnly | Native | Static | Private | BlueprintCallable)
};

