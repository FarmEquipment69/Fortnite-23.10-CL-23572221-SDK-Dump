// Class /Script/FortniteGame.FortPlayerPushableCart
// Size: 0xb88
class AFortPlayerPushableCart : public ABuildingGameplayActor
{
	struct FMulticastInlineDelegate OnCheckPointReached; // 0x9d8 (0x10)
	struct FMulticastInlineDelegate OnPushersOrDefendersChanged; // 0x9e8 (0x10)
	struct FMulticastInlineDelegate OnCartPlayerPushableChanged; // 0x9f8 (0x10)
	struct FMulticastInlineDelegate OnPlayerEnteredPushArea; // 0xa08 (0x10)
	struct FMulticastInlineDelegate OnPlayerExitedPushArea; // 0xa18 (0x10)
	struct FMulticastInlineDelegate OnCartApproachingCheckPoint; // 0xa28 (0x10)
	struct FMulticastInlineDelegate PlayerPushableCartOnTeamsRolesChanged; // 0xa38 (0x10)
	class UFortMovementComp_GroundSpline* MovementComponent; // 0xa48 (0x8)
	struct TWeakObjectPtr<class AFortAthenaMutator_Uranium> UraniumMutatorOwner; // 0xa50 (0x8)
	struct TWeakObjectPtr<class USplineComponent> SplineComponent; // 0xa58 (0x8)
	struct TArray<int> SplineCheckPointIndices; // 0xa60 (0x10)
	unsigned char CurrentCheckPoint; // 0xa70 (0x1)
	struct FTeamRoles TeamRoles; // 0xa71 (0x2)
	unsigned char unreflected_a73[0x25]; // 0xa73 (0x25) 
	unsigned char TotalActivePushers; // 0xa98 (0x1)
	unsigned char TotalActiveDefenders; // 0xa99 (0x1)
	bool bIsPushable; // 0xa9a (0x1)
	unsigned char unreflected_a9b[0x5]; // 0xa9b (0x5) 
	struct FScalableFloat BasePushSpeed; // 0xaa0 (0x28)
	struct FScalableFloat PushSpeedPercentPerPusher; // 0xac8 (0x28)
	struct FScalableFloat Acceleration; // 0xaf0 (0x28)
	struct FScalableFloat Deceleration; // 0xb18 (0x28)
	struct FScalableFloat YawSpeed; // 0xb40 (0x28)
	unsigned char unreflected_b68[0x18]; // 0xb68 (0x18) 
	bool bIsNearCheckpoint; // 0xb80 (0x1)
	unsigned char padding_b81[0x7]; // 0xb81 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerPushableCart.SetNearCheckpoint (Underlying native function: SetNearCheckpoint 0x6df775c)
	void SetNearCheckpoint(bool& bNear); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPushableCart.RemovePlayerFromPushArea (Underlying native function: RemovePlayerFromPushArea 0x6df70d4)
	void RemovePlayerFromPushArea(class AFortPlayerPawn*& PlayerToRemove); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerPushableCart.OnSplineSet (Has no native function)
	void OnSplineSet(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPushableCart.OnSplinePointReached (Underlying native function: OnSplinePointReached 0x815f0f0)
	void OnSplinePointReached(int& SplinePointReached, bool& bWasMovingForward); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPushableCart.OnRep_TotalActivePushers (Underlying native function: OnRep_TotalActivePushers 0x815effc)
	void OnRepTotalActivePushers(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPushableCart.OnRep_TotalActiveDefenders (Underlying native function: OnRep_TotalActiveDefenders 0x815effc)
	void OnRepTotalActiveDefenders(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPushableCart.OnRep_TeamRoles (Underlying native function: OnRep_TeamRoles 0x815ef58)
	void OnRepTeamRoles(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPushableCart.OnRep_CurrentCheckpoint (Underlying native function: OnRep_CurrentCheckpoint 0x815ec24)
	void OnRepCurrentCheckpoint(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerPushableCart.OnRep_bIsNearCheckpoint (Underlying native function: OnRep_bIsNearCheckpoint 0x815f040)
	void OnRepbIsNearCheckpoint(); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteGame.FortPlayerPushableCart.OnPushersOrDefendersChanged__DelegateSignature (Has no native function)
	void OnPushersOrDefendersChangedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPlayerPushableCart.OnPlayerExitedPushArea__DelegateSignature (Has no native function)
	void OnPlayerExitedPushAreaDelegateSignature(class AFortPlayerPawn*& PlayerState, bool& bPlayerIsAPusher); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPlayerPushableCart.OnPlayerEnteredPushArea__DelegateSignature (Has no native function)
	void OnPlayerEnteredPushAreaDelegateSignature(class AFortPlayerPawn*& PlayerState, bool& bPlayerIsAPusher); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPlayerPushableCart.OnCheckPointReached__DelegateSignature (Has no native function)
	void OnCheckPointReachedDelegateSignature(int& CheckPointIndex); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPlayerPushableCart.OnCartPlayerPushableChanged__DelegateSignature (Has no native function)
	void OnCartPlayerPushableChangedDelegateSignature(bool& bNewPlayerPushable); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortPlayerPushableCart.OnCartApproachingCheckPoint__DelegateSignature (Has no native function)
	void OnCartApproachingCheckPointDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortPlayerPushableCart.IsNearCheckpoint (Underlying native function: IsNearCheckpoint 0x815e534)
	bool IsNearCheckpoint(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerPushableCart.IsCartContested (Underlying native function: IsCartContested 0x815d830)
	bool IsCartContested(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetTransformAtCheckPoint (Underlying native function: GetTransformAtCheckPoint 0x815d06c)
	void GetTransformAtCheckPoint(struct FTransform& OutTransform, int& CheckPointIndex); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetTotalCheckPoints (Underlying native function: GetTotalCheckPoints 0x815d054)
	int GetTotalCheckPoints(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetTotalActivePushers (Underlying native function: GetTotalActivePushers 0x815d03c)
	unsigned char GetTotalActivePushers(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetTotalActiveDefenders (Underlying native function: GetTotalActiveDefenders 0x815d024)
	unsigned char GetTotalActiveDefenders(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetSplineIndexForNextCheckPoint (Underlying native function: GetSplineIndexForNextCheckPoint 0x815cf9c)
	int GetSplineIndexForNextCheckPoint(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetSplineIndexForCurrentCheckPoint (Underlying native function: GetSplineIndexForCurrentCheckPoint 0x815cf7c)
	int GetSplineIndexForCurrentCheckPoint(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetSplineDistanceAtCheckPoint (Underlying native function: GetSplineDistanceAtCheckPoint 0x815ceec)
	float GetSplineDistanceAtCheckPoint(int& CheckPointIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetPushingStrength (Underlying native function: GetPushingStrength 0x815cd80)
	int GetPushingStrength(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetPusherTeam (Underlying native function: GetPusherTeam 0x815cd68)
	unsigned char GetPusherTeam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetPushAreaShapeComponent (Underlying native function: GetPushAreaShapeComponent 0x7f96988)
	class UShapeComponent* GetPushAreaShapeComponent(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetPercentProgressTowardsNextCheckPoint (Underlying native function: GetPercentProgressTowardsNextCheckPoint 0x815cc00)
	float GetPercentProgressTowardsNextCheckPoint(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetNextCheckPointIndex (Underlying native function: GetNextCheckPointIndex 0x815cbcc)
	unsigned char GetNextCheckPointIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetLastReachedCheckPointIndex (Underlying native function: GetLastReachedCheckPointIndex 0x815c888)
	unsigned char GetLastReachedCheckPointIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetIsPlayerPushable (Underlying native function: GetIsPlayerPushable 0x815c858)
	bool GetIsPlayerPushable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetDistanceToNextCheckPoint (Underlying native function: GetDistanceToNextCheckPoint 0x815c700)
	float GetDistanceToNextCheckPoint(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetDesiredSpeed (Underlying native function: GetDesiredSpeed 0x815c6d8)
	float GetDesiredSpeed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetDefenderTeam (Underlying native function: GetDefenderTeam 0x815c6c0)
	unsigned char GetDefenderTeam(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetCheckPointTransforms (Underlying native function: GetCheckPointTransforms 0x815c5ec)
	void GetCheckPointTransforms(struct TArray<struct FTransform>& OutTransforms); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetCartDistanceAlongSpline (Underlying native function: GetCartDistanceAlongSpline 0x815c5c0)
	float GetCartDistanceAlongSpline(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerPushableCart.GetCameraActor (Underlying native function: GetCameraActor 0x815c598)
	class AActor* GetCameraActor(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerPushableCart.AddPlayerToPushArea (Underlying native function: AddPlayerToPushArea 0x6df70d4)
	void AddPlayerToPushArea(class AFortPlayerPawn*& PlayerToAdd); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

