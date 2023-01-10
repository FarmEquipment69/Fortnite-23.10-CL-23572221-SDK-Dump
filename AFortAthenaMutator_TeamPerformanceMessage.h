// Class /Script/FortniteGame.FortAthenaMutator_TeamPerformanceMessage
// Size: 0x348
class AFortAthenaMutator_TeamPerformanceMessage : public AFortAthenaMutator
{
	struct TArray<struct FTeamPerformanceMessageData> MessageDatas; // 0x330 (0x10)
	struct FTeamPerformanceMessageReplication* MessageTriggerReplicated; // 0x340 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_TeamPerformanceMessage.SetMessageEnabled (Underlying native function: SetMessageEnabled 0x8263a50)
	void SetMessageEnabled(struct FName& NameIdentifier, bool& bEnabled); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_TeamPerformanceMessage.OnTeamScoreChanged (Underlying native function: OnTeamScoreChanged 0x81d6fd0)
	void OnTeamScoreChanged(unsigned char& TeamId, int& NewScore); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_TeamPerformanceMessage.OnRep_MessageTriggerReplicated (Underlying native function: OnRep_MessageTriggerReplicated 0x8263628)
	void OnRepMessageTriggerReplicated(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_TeamPerformanceMessage.OnGoalScoreChanged (Underlying native function: OnGoalScoreChanged 0x273fd14)
	void OnGoalScoreChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_TeamPerformanceMessage.MulticastTriggerMessage_Unreliable (Underlying native function: MulticastTriggerMessage_Unreliable 0x8262a3c)
	void MulticastTriggerMessageUnreliable(struct FTeamPerformanceMessageReplication*& InMessageTrigger); // (Net | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_TeamPerformanceMessage.MulticastTriggerMessage_Reliable (Underlying native function: MulticastTriggerMessage_Reliable 0x82629b4)
	void MulticastTriggerMessageReliable(struct FTeamPerformanceMessageReplication*& InMessageTrigger); // (Net | NetReliable | Native | Event | NetMulticast | Protected)
};

