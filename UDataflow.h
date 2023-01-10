// Class /Script/DataflowEngine.Dataflow
// Size: 0xa0
class UDataflow : public UEdGraph
{
	unsigned char unreflected_60[0x28]; // 0x60 (0x28) 
	bool bActive; // 0x88 (0x1)
	unsigned char unreflected_89[0x7]; // 0x89 (0x7) 
	struct TArray<class UObject*> Targets; // 0x90 (0x10)

	/* Functions */

	// Function /Script/DataflowEngine.Dataflow.EvaluateTerminalNodeByName (Underlying native function: EvaluateTerminalNodeByName 0x5b605c0)
	void EvaluateTerminalNodeByName(struct FName& NodeName, class UObject*& Asset); // (Final | Native | Public | BlueprintCallable)
};

