// Class /Script/EnhancedInput.EnhancedInputSubsystemInterface
// Size: 0x28
class IEnhancedInputSubsystemInterface : public IInterface
{

	/* Functions */

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings (Underlying native function: RequestRebuildControlMappings 0x7ce8c0c)
	void RequestRebuildControlMappings(struct FModifyContextOptions& Options, enum EInputMappingRebuildType& RebuildType); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappedKey (Underlying native function: RemovePlayerMappedKey 0x7ce8b30)
	int RemovePlayerMappedKey(struct FName& MappingName, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig (Underlying native function: RemovePlayerMappableConfig 0x7ce8a54)
	void RemovePlayerMappableConfig(class UPlayerMappableInputConfig*& Config, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext (Underlying native function: RemoveMappingContext 0x7ce897c)
	void RemoveMappingContext(class UInputMappingContext*& MappingContext, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys (Underlying native function: RemoveAllPlayerMappedKeys 0x7ce88e4)
	void RemoveAllPlayerMappedKeys(struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet (Underlying native function: QueryMapKeyInContextSet 0x7ce84f8)
	enum EMappingQueryResult QueryMapKeyInContextSet(struct TArray<class UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext*& InputContext, class UInputAction*& Action, struct FKey& Key, struct TArray<struct FMappingQueryIssue>& OutIssues, enum EMappingQueryIssue& BlockingIssues); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet (Underlying native function: QueryMapKeyInActiveContextSet 0x7ce822c)
	enum EMappingQueryResult QueryMapKeyInActiveContextSet(class UInputMappingContext*& InputContext, class UInputAction*& Action, struct FKey& Key, struct TArray<struct FMappingQueryIssue>& OutIssues, enum EMappingQueryIssue& BlockingIssues); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction (Underlying native function: QueryKeysMappedToAction 0x7ce8184)
	struct TArray<struct FKey> QueryKeysMappedToAction(class UInputAction*& Action); // (BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction (Underlying native function: InjectInputVectorForAction 0x7ce78a4)
	void InjectInputVectorForAction(class UInputAction*& Action, struct FVector& Value, struct TArray<class UInputModifier*>& Modifiers, struct TArray<class UInputTrigger*>& Triggers); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction (Underlying native function: InjectInputForAction 0x7ce76e4)
	void InjectInputForAction(class UInputAction*& Action, struct FInputActionValue& RawValue, struct TArray<class UInputModifier*>& Modifiers, struct TArray<class UInputTrigger*>& Triggers); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext (Underlying native function: HasMappingContext 0x7ce7610)
	bool HasMappingContext(class UInputMappingContext*& MappingContext, int& OutFoundPriority); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.GetPlayerMappedKey (Underlying native function: GetPlayerMappedKey 0x7ce73f0)
	struct FKey GetPlayerMappedKey(struct FName& MappingName); // (BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings (Underlying native function: GetAllPlayerMappableActionKeyMappings 0x7ce6d10)
	struct TArray<struct FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings(); // (BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings (Underlying native function: ClearAllMappings 0x6cf5b1c)
	void ClearAllMappings(); // (BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappedKey (Underlying native function: AddPlayerMappedKey 0x7ce6644)
	int AddPlayerMappedKey(struct FName& MappingName, struct FKey& NewKey, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig (Underlying native function: AddPlayerMappableConfig 0x7ce6568)
	void AddPlayerMappableConfig(class UPlayerMappableInputConfig*& Config, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext (Underlying native function: AddMappingContext 0x7ce645c)
	void AddMappingContext(class UInputMappingContext*& MappingContext, int& Priority, struct FModifyContextOptions& Options); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)
};

