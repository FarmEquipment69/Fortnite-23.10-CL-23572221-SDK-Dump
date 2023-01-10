// Class /Script/FortniteGame.AthenaTraversePoint
// Size: 0xba0
class AAthenaTraversePoint : public ABuildingGameplayActor
{
	struct FVector2D MiniMapSize; // 0x9d8 (0x10)
	struct FVector2D CompassSize; // 0x9e8 (0x10)
	unsigned char unreflected_9f8[0x8]; // 0x9f8 (0x8) 
	struct FSlateBrush MiniMapBrushActive; // 0xa00 (0xc0)
	struct FSlateBrush CompassBrushActive; // 0xac0 (0xc0)
	bool bShouldTeleportToGround; // 0xb80 (0x1)
	enum ETraversePointState CurrentState; // 0xb81 (0x1)
	unsigned char padding_b82[0x1e]; // 0xb82 (0x1e)

	/* Functions */

	// Function /Script/FortniteGame.AthenaTraversePoint.OnRep_CurrentState (Underlying native function: OnRep_CurrentState 0x7fbde4c)
	void OnRepCurrentState(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.AthenaTraversePoint.OnNewState_TouchedByPlayer_Server (Underlying native function: OnNewState_TouchedByPlayer_Server 0x7fbd708)
	void OnNewStateTouchedByPlayerServer(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.AthenaTraversePoint.OnNewState_TouchedByPlayer_Client (Has no native function)
	void OnNewStateTouchedByPlayerClient(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaTraversePoint.OnNewState_Hidden_Server (Underlying native function: OnNewState_Hidden_Server 0x7fbd6f0)
	void OnNewStateHiddenServer(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.AthenaTraversePoint.OnNewState_Hidden_Client (Has no native function)
	void OnNewStateHiddenClient(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaTraversePoint.OnNewState_Finished_Server (Underlying native function: OnNewState_Finished_Server 0x7fbd6d8)
	void OnNewStateFinishedServer(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.AthenaTraversePoint.OnNewState_Finished_Client (Has no native function)
	void OnNewStateFinishedClient(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaTraversePoint.OnNewState_Active_Server (Underlying native function: OnNewState_Active_Server 0x7fbd6c0)
	void OnNewStateActiveServer(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.AthenaTraversePoint.OnNewState_Active_Client (Has no native function)
	void OnNewStateActiveClient(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.AthenaTraversePoint.OnImpactedByPlayer (Underlying native function: OnImpactedByPlayer 0x7fbd5dc)
	void OnImpactedByPlayer(class AActor*& PlayerActor); // (Final | 0x00000002 | Native | Protected | BlueprintCallable)
};

