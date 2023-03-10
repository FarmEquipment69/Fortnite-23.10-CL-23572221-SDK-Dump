// ScriptStruct /Script/FortniteGame.SwingingControlParams
// Size: 0x6e8
struct FSwingingControlParams
{
	class UCurveFloat* ReelForceByRopeLength; // 0x0 (0x8)
	struct FScalableFloat ReelingSpeed; // 0x8 (0x28)
	struct FScalableFloat ReelingSpeedGrounded; // 0x30 (0x28)
	struct FScalableFloat ReelingSpeedGroundedAttachedVehicle; // 0x58 (0x28)
	struct FScalableFloat InputAccelMultiplier; // 0x80 (0x28)
	struct FScalableFloat InputAccelMultiplierAirbornUnattached; // 0xa8 (0x28)
	struct FScalableFloat AirbornUnattachedInputFriction; // 0xd0 (0x28)
	struct FScalableFloat LengthForMaxReelForce; // 0xf8 (0x28)
	struct FScalableFloat MaxHorizontalSpeed; // 0x120 (0x28)
	struct FScalableFloat MaxHorizontalSpeedGrounded; // 0x148 (0x28)
	struct FScalableFloat MaxHorizontalSpeedGroundedAttachedVehicle; // 0x170 (0x28)
	struct FScalableFloat SwingGravity; // 0x198 (0x28)
	struct FScalableFloat GravityMultiplierWhileAttached; // 0x1c0 (0x28)
	struct FScalableFloat UnattachedGroundedFriction; // 0x1e8 (0x28)
	struct FScalableFloat UnattachedGroundedBraking; // 0x210 (0x28)
	struct FScalableFloat UnattachedGroundedCounterInputMaxDrag; // 0x238 (0x28)
	struct FScalableFloat UnattachedGroundedCounterInputMinDrag; // 0x260 (0x28)
	struct FScalableFloat UnattachedGroundedCounterInputMaxDot; // 0x288 (0x28)
	struct FScalableFloat UnattachedGroundedCounterInputMinDot; // 0x2b0 (0x28)
	struct FScalableFloat AttachedNoAccelFriction; // 0x2d8 (0x28)
	struct FScalableFloat AttachedNoAccelBraking; // 0x300 (0x28)
	struct FScalableFloat AttachedGroundedSwingingFriction; // 0x328 (0x28)
	struct FScalableFloat AttachedGroundedSwingingBraking; // 0x350 (0x28)
	struct FScalableFloat UnattachedCancelSpeed; // 0x378 (0x28)
	struct FScalableFloat MinTimeDetachedForExit; // 0x3a0 (0x28)
	struct FScalableFloat AdditionalDownAccelWhileSwinging; // 0x3c8 (0x28)
	struct FScalableFloat VerticalDistanceToAttachPointToLeaveGround; // 0x3f0 (0x28)
	struct FScalableFloat JumpZVelocity; // 0x418 (0x28)
	struct FScalableFloat WaterMaxImmersionPercent; // 0x440 (0x28)
	struct FScalableFloat WaterUpSpeed; // 0x468 (0x28)
	struct FScalableFloat DefaultForwardInputAccel; // 0x490 (0x28)
	struct FScalableFloat InitialAttachedSpeed; // 0x4b8 (0x28)
	struct FScalableFloat GroundTraceDistance; // 0x4e0 (0x28)
	struct FScalableFloat DistanceThresholdForGrounded; // 0x508 (0x28)
	struct FScalableFloat SpeedForMaxInputAccel; // 0x530 (0x28)
	struct FScalableFloat MinInputAccelMultiplier; // 0x558 (0x28)
	struct FScalableFloat MinRopeLengthForAccel; // 0x580 (0x28)
	struct FScalableFloat ClampPosVerticalSpeedWhileAttached; // 0x5a8 (0x28)
	struct FScalableFloat MaxAttachedPosVerticalSpeed; // 0x5d0 (0x28)
	struct FScalableFloat ClampNegVerticalSpeedWhileAttached; // 0x5f8 (0x28)
	struct FScalableFloat MaxAttachedNegVerticalSpeed; // 0x620 (0x28)
	struct FScalableFloat ClampPosVerticalSpeedWhileUnattached; // 0x648 (0x28)
	struct FScalableFloat MaxUnattachedPosVerticalSpeed; // 0x670 (0x28)
	struct FScalableFloat ClampNegVerticalSpeedWhileUnattached; // 0x698 (0x28)
	struct FScalableFloat MaxUnattachedNegVerticalSpeed; // 0x6c0 (0x28)
};

