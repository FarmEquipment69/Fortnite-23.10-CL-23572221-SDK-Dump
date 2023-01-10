// Class /Script/FortniteGame.FortPhysicsMagneticForceComponent
// Size: 0xc8
class UFortPhysicsMagneticForceComponent : public UGameFrameworkComponent
{
	unsigned char unreflected_a0[0x18]; // 0xa0 (0x18) 
	struct TArray<struct FPhysicsMagneticForceData> ForcesToApply; // 0xb8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPhysicsMagneticForceComponent.EndMagneticForce (Underlying native function: EndMagneticForce 0x8b0c544)
	void EndMagneticForce(struct FPhysicsMagneticForceHandle& Handle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsMagneticForceComponent.EndAllMagneticForces (Underlying native function: EndAllMagneticForces 0x8b0c4a4)
	void EndAllMagneticForces(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsMagneticForceComponent.BeginMagneticForce (Underlying native function: BeginMagneticForce 0x8b0aa24)
	void BeginMagneticForce(float& Magnitude, float& DistanceFallOffBias, float& DistanceFallOffExponent, bool& bShouldAffectOwner, bool& bAtLocation, struct FVector& Location, bool& bLocationIsRelative, class UTargetingPreset*& TargetingPreset, struct FPhysicsMagneticForceHandle& OutHandle); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

