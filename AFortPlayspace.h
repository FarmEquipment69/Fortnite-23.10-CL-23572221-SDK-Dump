// Class /Script/FortniteGame.FortPlayspace
// Size: 0x670
class AFortPlayspace : public APlayspace
{
	unsigned char unreflected_558[0xc8]; // 0x558 (0xc8) 
	bool bSubscribeToMeshNetwork; // 0x620 (0x1)
	unsigned char unreflected_621[0x2]; // 0x621 (0x2) 
	enum EFortPlayspaceUserAcceptanceType UserAcceptanceType; // 0x623 (0x1)
	unsigned char unreflected_624[0x4]; // 0x624 (0x4) 
	struct FFortPlayspaceMatchmakingSettings MatchmakingSettings; // 0x628 (0x28)
	class UClass* ReplicatedStateClass; // 0x650 (0x8)
	class AFortPlayspaceReplicatedState* ReplicatedState; // 0x658 (0x8)
	class UGameplayEventRouterComponent* EventRouter; // 0x660 (0x8)
	bool bShouldCreateEventRouter; // 0x668 (0x1)
	unsigned char padding_669[0x7]; // 0x669 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayspace.PostHandleMatchStarted (Underlying native function: PostHandleMatchStarted 0x3057b24)
	void PostHandleMatchStarted(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayspace.OnRep_ShouldCreateEventRouter (Underlying native function: OnRep_ShouldCreateEventRouter 0x8bdd980)
	void OnRepShouldCreateEventRouter(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayspace.OnMeshNetworkReady (Underlying native function: OnMeshNetworkReady 0x8bdd798)
	void OnMeshNetworkReady(enum EMeshNetworkNodeType& NodeType); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortPlayspace.OnMeshNetworkEventStart (Underlying native function: OnMeshNetworkEventStart 0x8bdd558)
	void OnMeshNetworkEventStart(struct FName& EventName, struct FDateTime*& EventStartTime, enum EMeshNetworkNodeType& NodeType, struct FString& EventParameters); // (0x00000002 | Native | Protected | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortPlayspace.OnMeshNetworkEventEnd (Underlying native function: OnMeshNetworkEventEnd 0x8bdd484)
	void OnMeshNetworkEventEnd(struct FName& EventName, enum EMeshNetworkNodeType& NodeType); // (0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortPlayspace.OnMeshNetworkEventChange (Underlying native function: OnMeshNetworkEventChange 0x8bdd244)
	void OnMeshNetworkEventChange(struct FName& EventName, struct FDateTime*& EventStartTime, enum EMeshNetworkNodeType& NodeType, struct FString& EventParameters); // (0x00000002 | Native | Protected | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortPlayspace.OnMeshNetworkEventBurst (Underlying native function: OnMeshNetworkEventBurst 0x8bdd058)
	void OnMeshNetworkEventBurst(struct FName& EventName, enum EMeshNetworkNodeType& NodeType, struct FString& EventParameters); // (0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortPlayspace.HandleMatchStarted_Internal (Underlying native function: HandleMatchStarted_Internal 0x8bdbe1c)
	void HandleMatchStartedInternal(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayspace.HandleMatchStarted (Underlying native function: HandleMatchStarted 0x29fce3c)
	void HandleMatchStarted(); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayspace.GetReplicatedState (Underlying native function: GetReplicatedState 0x8bdba08)
	class AFortPlayspaceReplicatedState* GetReplicatedState(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayspace.Blueprint_HandleMatchStarted (Has no native function)
	void BlueprintHandleMatchStarted(); // (Event | Protected | BlueprintEvent)
};

