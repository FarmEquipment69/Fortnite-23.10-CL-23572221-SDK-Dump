// Class /Script/FortniteGame.UserOptionValuesInterface
// Size: 0x28
class IUserOptionValuesInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.UserOptionValuesInterface.SetUserOptionValues (Underlying native function: SetUserOptionValues 0x7dced48)
	bool SetUserOptionValues(class APlayerController*& PlayerController, struct TMap<struct FString, struct FString>& UserOptionValues); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.UserOptionValuesInterface.SetUserOptionValue (Underlying native function: SetUserOptionValue 0x7dcea94)
	bool SetUserOptionValue(class APlayerController*& PlayerController, struct FString& UserOptionKey, struct FString& UserOptionValue); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.UserOptionValuesInterface.GetUserOptionValues (Underlying native function: GetUserOptionValues 0x7dce918)
	bool GetUserOptionValues(struct TMap<struct FString, struct FString>& UserOptionValues); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionValuesInterface.GetUserOptionValue (Underlying native function: GetUserOptionValue 0x7dce698)
	bool GetUserOptionValue(struct FString& UserOptionKey, struct FString& UserOptionValue); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.UserOptionValuesInterface.BP_GetUserOptionDefinitions (Underlying native function: BP_GetUserOptionDefinitions 0x7dc89f8)
	struct TScriptInterface<class IUserOptionDefinitionContainerInterface> BPGetUserOptionDefinitions(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

