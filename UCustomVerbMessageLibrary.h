// Class /Script/FortniteGame.CustomVerbMessageLibrary
// Size: 0x28
class UCustomVerbMessageLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.CustomVerbMessageLibrary.OverrideContextLocation (Underlying native function: OverrideContextLocation 0x5ac2bd0)
	static void OverrideContextLocation(struct FCustomVerbMessage& CustomVerb, struct FVector& ContextLocation, struct FCustomVerbMessage& Result); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.CustomVerbMessageLibrary.MakeCustomVerbMessage (Underlying native function: MakeCustomVerbMessage 0x8e0df38)
	static struct FCustomVerbMessage MakeCustomVerbMessage(class UObject*& Author, struct FGameplayTag& VerbName, int& Amount, struct FGameplayTagContainer& ContextTags); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CustomVerbMessageLibrary.BroadcastCustomVerbMessage (Underlying native function: BroadcastCustomVerbMessage 0x8e0c218)
	static void BroadcastCustomVerbMessage(class AActor*& ActorContext, struct FCustomVerbMessage& CustomVerb); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CustomVerbMessageLibrary.AddValue (Underlying native function: AddValue 0x8e0bf2c)
	static void AddValue(struct FCustomVerbMessage& CustomVerb, struct FName& ValueName, float& Value, struct FCustomVerbMessage& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CustomVerbMessageLibrary.AddTagsFromSubject (Underlying native function: AddTagsFromSubject 0x8e0bd10)
	static void AddTagsFromSubject(struct FCustomVerbMessage& CustomVerb, struct FName& SubjectName, class UObject*& SubjectObject, struct FCustomVerbMessage& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CustomVerbMessageLibrary.AddTagsForSubject (Underlying native function: AddTagsForSubject 0x8e0bab4)
	static void AddTagsForSubject(struct FCustomVerbMessage& CustomVerb, struct FName& SubjectName, struct FGameplayTagContainer& SubjectTags, struct FCustomVerbMessage& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

