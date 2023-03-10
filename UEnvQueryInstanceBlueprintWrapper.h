// Class /Script/AIModule.EnvQueryInstanceBlueprintWrapper
// Size: 0x78
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	int QueryID; // 0x30 (0x4)
	unsigned char unreflected_34[0x24]; // 0x34 (0x24) 
	class UClass* ItemType; // 0x58 (0x8)
	int OptionIndex; // 0x60 (0x4)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	struct FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68 (0x10)

	/* Functions */

	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam (Underlying native function: SetNamedParam 0x9fef188)
	void SetNamedParam(struct FName& ParamName, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations (Underlying native function: GetResultsAsLocations 0x9fee5d0)
	struct TArray<struct FVector> GetResultsAsLocations(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors (Underlying native function: GetResultsAsActors 0x9fee55c)
	struct TArray<class AActor*> GetResultsAsActors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations (Underlying native function: GetQueryResultsAsLocations 0x9fee4b0)
	bool GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors (Underlying native function: GetQueryResultsAsActors 0x9fee404)
	bool GetQueryResultsAsActors(struct TArray<class AActor*>& ResultActors); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore (Underlying native function: GetItemScore 0x9fee26c)
	float GetItemScore(int& ItemIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature (Has no native function)
	void EQSQueryDoneSignatureDelegateSignature(class UEnvQueryInstanceBlueprintWrapper*& QueryInstance, struct TEnumAsByte<EEnvQueryStatus>& QueryStatus); // (MulticastDelegate | Public | Delegate)
};

