// Class /Script/FortniteGame.AthenaBarrierFlag
// Size: 0x1080
class AAthenaBarrierFlag : public ABuildingGameplayActor
{
	enum EBarrierFlagState CurrentState; // 0x9d8 (0x1)
	enum EBarrierFoodTeam FoodTeam; // 0x9d9 (0x1)
	unsigned char unreflected_9da[0x6]; // 0x9da (0x6) 
	struct FBarrierFlagDisplayData FoodDisplayData[0x2]; // 0x9e0 (0x350) (ARRAY) 

	/* Functions */

	// Function /Script/FortniteGame.AthenaBarrierFlag.OnStateChange (Has no native function)
	void OnStateChange(enum EBarrierFlagState& NewState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaBarrierFlag.OnRep_FoodTeam (Underlying native function: OnRep_FoodTeam 0x7f97c80)
	void OnRepFoodTeam(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.AthenaBarrierFlag.OnRep_CurrentState (Underlying native function: OnRep_CurrentState 0x7f97c24)
	void OnRepCurrentState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.AthenaBarrierFlag.OnNewFoodTeam (Has no native function)
	void OnNewFoodTeam(enum EBarrierFoodTeam& NewFoodTeam); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaBarrierFlag.GetObjectiveActor (Underlying native function: GetObjectiveActor 0x7f96988)
	class AAthenaBarrierObjective* GetObjectiveActor(); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.AthenaBarrierFlag.GetMeshScale (Underlying native function: GetMeshScale 0x7f968fc)
	struct FVector GetMeshScale(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaBarrierFlag.GetHeadMesh (Underlying native function: GetHeadMesh 0x7f96830)
	class UStaticMesh* GetHeadMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaBarrierFlag.ClientSetLlamaRotation (Has no native function)
	void ClientSetLlamaRotation(struct FRotator& NewDirection); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaBarrierFlag.ClientSetIsFriendly (Has no native function)
	void ClientSetIsFriendly(bool& bIsFriendlyLlama); // (Event | Protected | BlueprintEvent)
};

