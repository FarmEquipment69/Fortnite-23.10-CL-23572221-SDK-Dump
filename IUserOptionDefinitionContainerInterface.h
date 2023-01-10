// Class /Script/FortniteGame.UserOptionDefinitionContainerInterface
// Size: 0x28
class IUserOptionDefinitionContainerInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.UserOptionDefinitionContainerInterface.GetUserOptionsInteractionText (Underlying native function: GetUserOptionsInteractionText 0x877bb0c)
	struct FText GetUserOptionsInteractionText(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionDefinitionContainerInterface.GetUserOptionsInteractionSpeed (Underlying native function: GetUserOptionsInteractionSpeed 0x877badc)
	struct FCurveTableRowHandle GetUserOptionsInteractionSpeed(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionDefinitionContainerInterface.GetUserOptionsDisplayName (Underlying native function: GetUserOptionsDisplayName 0x7db7c48)
	struct FText GetUserOptionsDisplayName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionDefinitionContainerInterface.GetUserOptionsDescription (Underlying native function: GetUserOptionsDescription 0x877ba60)
	struct FText GetUserOptionsDescription(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionDefinitionContainerInterface.GetUserOptionList (Underlying native function: GetUserOptionList 0x877b9cc)
	class UPlaylistUserOptions* GetUserOptionList(bool& bAllowGenerated); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionDefinitionContainerInterface.GetUserOptionDefinitions (Underlying native function: GetUserOptionDefinitions 0x877b928)
	struct TArray<struct FUserOptionDefinition> GetUserOptionDefinitions(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionDefinitionContainerInterface.GetGrantedContextTagsFromObject (Underlying native function: GetGrantedContextTagsFromObject 0x877b694)
	void GetGrantedContextTagsFromObject(class UObject*& Object, struct FGameplayTagContainer& ContextTags); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

