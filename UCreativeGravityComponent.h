// Class /Script/FortniteGame.CreativeGravityComponent
// Size: 0xa8
class UCreativeGravityComponent : public UActorComponent
{
	class UFortSharedGravityMovementData* GravityPresets; // 0xa0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.CreativeGravityComponent.SetPresetGravityOverride (Underlying native function: SetPresetGravityOverride 0x84fbc9c)
	bool SetPresetGravityOverride(class AActor*& PhysicsObject, int& PresetIndex, bool& bUseCustomGravity, float& CustomGravity); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.CreativeGravityComponent.SetCustomGravityOverride (Underlying native function: SetCustomGravityOverride 0x84fb6f0)
	bool SetCustomGravityOverride(class AActor*& PhysicsObject, float& CustomMultiplier, bool& bUseCustomGravity, float& CustomGravity); // (Final | Native | Public | BlueprintCallable | Const)
};

