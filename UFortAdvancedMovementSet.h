// Class /Script/FortniteGame.FortAdvancedMovementSet
// Size: 0x210
class UFortAdvancedMovementSet : public UFortAttributeSet
{
	struct FFortGameplayAttributeData GroundFriction; // 0x30 (0x28)
	struct FFortGameplayAttributeData BrakingDecelerationWalking; // 0x58 (0x28)
	struct FFortGameplayAttributeData BrakingDecelerationFalling; // 0x80 (0x28)
	struct FFortGameplayAttributeData BrakingDecelerationFlying; // 0xa8 (0x28)
	struct FFortGameplayAttributeData MaxAcceleration; // 0xd0 (0x28)
	struct FFortGameplayAttributeData MaxAccelerationFlying; // 0xf8 (0x28)
	struct FFortGameplayAttributeData BrakingFrictionFactor; // 0x120 (0x28)
	struct FFortGameplayAttributeData JumpZVelocity; // 0x148 (0x28)
	struct FFortGameplayAttributeData JumpHorizontalAccelerationOverride; // 0x170 (0x28)
	struct FFortGameplayAttributeData JumpHorizontalVelocityOverride; // 0x198 (0x28)
	struct FFortGameplayAttributeData MinAnalogWalkSpeed; // 0x1c0 (0x28)
	struct FFortGameplayAttributeData AirControlMultiplier; // 0x1e8 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortAdvancedMovementSet.OnRep_MinAnalogWalkSpeed (Underlying native function: OnRep_MinAnalogWalkSpeed 0x2082570)
	void OnRepMinAnalogWalkSpeed(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAdvancedMovementSet.OnRep_MaxAccelerationFlying (Underlying native function: OnRep_MaxAccelerationFlying 0x2082210)
	void OnRepMaxAccelerationFlying(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAdvancedMovementSet.OnRep_MaxAcceleration (Underlying native function: OnRep_MaxAcceleration 0x2082060)
	void OnRepMaxAcceleration(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAdvancedMovementSet.OnRep_JumpZVelocity (Underlying native function: OnRep_JumpZVelocity 0x20823c0)
	void OnRepJumpZVelocity(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAdvancedMovementSet.OnRep_GroundFriction (Underlying native function: OnRep_GroundFriction 0x20819a0)
	void OnRepGroundFriction(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAdvancedMovementSet.OnRep_BrakingFrictionFactor (Underlying native function: OnRep_BrakingFrictionFactor 0x8318658)
	void OnRepBrakingFrictionFactor(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAdvancedMovementSet.OnRep_BrakingDecelerationWalking (Underlying native function: OnRep_BrakingDecelerationWalking 0x2081b50)
	void OnRepBrakingDecelerationWalking(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAdvancedMovementSet.OnRep_BrakingDecelerationFlying (Underlying native function: OnRep_BrakingDecelerationFlying 0x2081eb0)
	void OnRepBrakingDecelerationFlying(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAdvancedMovementSet.OnRep_BrakingDecelerationFalling (Underlying native function: OnRep_BrakingDecelerationFalling 0x2081d00)
	void OnRepBrakingDecelerationFalling(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)
};

