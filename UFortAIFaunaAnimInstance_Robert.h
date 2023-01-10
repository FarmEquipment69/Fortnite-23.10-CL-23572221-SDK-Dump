// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert
// Size: 0x760
class UFortAIFaunaAnimInstance_Robert : public UFortAIFaunaAnimInstance
{
	unsigned char unreflected_6d0[0x8]; // 0x6d0 (0x8) 
	class AFortAIPawn* AIPawn; // 0x6d8 (0x8)
	bool bIdleStartTurn; // 0x6e0 (0x1)
	bool bEnableHeadTiltDownAdditive; // 0x6e1 (0x1)
	bool bIsFullBodyInPlace; // 0x6e2 (0x1)
	unsigned char unreflected_6e3[0x1]; // 0x6e3 (0x1) 
	float LocomotionPoseAdditiveAlpha; // 0x6e4 (0x4)
	bool bIsIdleShuffleTurn; // 0x6e8 (0x1)
	unsigned char unreflected_6e9[0x3]; // 0x6e9 (0x3) 
	float IdleShuffleBodyBend; // 0x6ec (0x4)
	float IdleShufflePlayRate; // 0x6f0 (0x4)
	bool bIdleShuffleTurnDirection; // 0x6f4 (0x1)
	bool bLookAtAdditiveTurnAlpha; // 0x6f5 (0x1)
	bool bTurnDirection; // 0x6f6 (0x1)
	unsigned char unreflected_6f7[0x1]; // 0x6f7 (0x1) 
	int PawnIDScale; // 0x6f8 (0x4)
	int HeadTiltDownAdditiveFrequenceySeconds; // 0x6fc (0x4)
	float ForceFullBodyTransition; // 0x700 (0x4)
	float LocomotionPoseAdditiveAlphaInterpRate; // 0x704 (0x4)
	float IdleStartTurnInterruptibleThreshold; // 0x708 (0x4)
	float LookAtAlphaThreshold; // 0x70c (0x4)
	float SpeedMovingThreshold; // 0x710 (0x4)
	float TurnDirectionThreshold; // 0x714 (0x4)
	float IdleShuffleBodyBendMultiplier; // 0x718 (0x4)
	float IdleShuffleTurnThreshold; // 0x71c (0x4)
	float IdleShuffleTurnDirectionThreshold; // 0x720 (0x4)
	float IdleShufflePlayRateInRangeA; // 0x724 (0x4)
	float IdleShufflePlayRateInRangeB; // 0x728 (0x4)
	float IdleShufflePlayRateOutRangeA; // 0x72c (0x4)
	float IdleShufflePlayRateOutRangeB; // 0x730 (0x4)
	bool bStateRuleTurnIdleIdle; // 0x734 (0x1)
	bool bStateRuleIdleTurnIdle; // 0x735 (0x1)
	bool bStateRuleTurnIdleMoving; // 0x736 (0x1)
	bool bStateRuleTurnMovingTurnIdle; // 0x737 (0x1)
	bool bStateRuleIdleMoving; // 0x738 (0x1)
	bool bStateRuleMovingIdle; // 0x739 (0x1)
	bool bStateRuleTurnMovingMoving; // 0x73a (0x1)
	bool bStateRuleMovingTurnMoving; // 0x73b (0x1)
	bool bStateRuleSwimmingFall; // 0x73c (0x1)
	bool bStateRuleLandIdle; // 0x73d (0x1)
	bool bStateRuleJumpStartApex; // 0x73e (0x1)
	bool bStateRuleFallIdle; // 0x73f (0x1)
	bool bStateRuleFallMoving; // 0x740 (0x1)
	bool bStateRuleSwimIdleSwimLoco; // 0x741 (0x1)
	bool bStateRuleSwimLocoSwimIdle; // 0x742 (0x1)
	bool bStateRuleSwimTurnSwimIdle; // 0x743 (0x1)
	bool bStateRuleSwimTurnSwimLoco; // 0x744 (0x1)
	bool bAnimRuleNegativeTurnAngle; // 0x745 (0x1)
	unsigned char unreflected_746[0x2]; // 0x746 (0x2) 
	float InterruptibleMaxCheck; // 0x748 (0x4)
	float SpeedStopTransition; // 0x74c (0x4)
	float SpeedIdleMoveTransition; // 0x750 (0x4)
	float SpeedToMoveMin; // 0x754 (0x4)
	float StateTimeFromEndThreshold; // 0x758 (0x4)
	unsigned char padding_75c[0x4]; // 0x75c (0x4)

	/* Functions */

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateStateVariables (Underlying native function: UpdateStateVariables 0x6e70dac)
	void UpdateStateVariables(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateLocomotionPoseAdditiveAlpha (Underlying native function: UpdateLocomotionPoseAdditiveAlpha 0x6e70c30)
	void UpdateLocomotionPoseAdditiveAlpha(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIsFullBodyInPlace (Underlying native function: UpdateIsFullBodyInPlace 0x6e70c08)
	void UpdateIsFullBodyInPlace(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIdleStartTurn (Underlying native function: UpdateIdleStartTurn 0x6e70be0)
	void UpdateIdleStartTurn(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateEnableHeadTiltDownAdditive (Underlying native function: UpdateEnableHeadTiltDownAdditive 0x6e70b58)
	void UpdateEnableHeadTiltDownAdditive(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIsFullBodyInPlace (Underlying native function: DetermineIsFullBodyInPlace 0x6e70a48)
	bool DetermineIsFullBodyInPlace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIdleStartTurn (Underlying native function: DetermineIdleStartTurn 0x6e70a24)
	bool DetermineIdleStartTurn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineEnableHeadTiltDownAdditive (Underlying native function: DetermineEnableHeadTiltDownAdditive 0x6e709c0)
	bool DetermineEnableHeadTiltDownAdditive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.CalculateLocomotionPoseAdditiveAlpha (Underlying native function: CalculateLocomotionPoseAdditiveAlpha 0x6e70844)
	float CalculateLocomotionPoseAdditiveAlpha(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};
