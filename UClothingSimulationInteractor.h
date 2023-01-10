// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size: 0x90
class UClothingSimulationInteractor : public UObject
{
	struct TMap<struct FName, class UClothingInteractor*> ClothingInteractors; // 0x28 (0x50)
	unsigned char padding_78[0x18]; // 0x78 (0x18)

	/* Functions */

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps (Underlying native function: SetNumSubsteps 0x2923258)
	void SetNumSubsteps(int& NumSubsteps); // (Native | Public | BlueprintCallable)

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations (Underlying native function: SetNumIterations 0x29232dc)
	void SetNumIterations(int& NumIterations); // (Native | Public | BlueprintCallable)

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations (Underlying native function: SetMaxNumIterations 0x99e7c50)
	void SetMaxNumIterations(int& MaxNumIterations); // (Native | Public | BlueprintCallable)

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness (Underlying native function: SetAnimDriveSpringStiffness 0x99e7bc8)
	void SetAnimDriveSpringStiffness(float& InStiffness); // (Native | Public | BlueprintCallable)

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated (Underlying native function: PhysicsAssetUpdated 0x23fd994)
	void PhysicsAssetUpdated(); // (Native | Public | BlueprintCallable)

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime (Underlying native function: GetSimulationTime 0x99e7bb0)
	float GetSimulationTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps (Underlying native function: GetNumSubsteps 0x99e7b98)
	int GetNumSubsteps(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles (Underlying native function: GetNumKinematicParticles 0x99e7b84)
	int GetNumKinematicParticles(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations (Underlying native function: GetNumIterations 0x2e42d44)
	int GetNumIterations(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles (Underlying native function: GetNumDynamicParticles 0x99e7b6c)
	int GetNumDynamicParticles(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths (Underlying native function: GetNumCloths 0x99e7b58)
	int GetNumCloths(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor (Underlying native function: GetClothingInteractor 0x29dbcd0)
	class UClothingInteractor* GetClothingInteractor(struct FString& ClothingAssetName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride (Underlying native function: EnableGravityOverride 0x99e7acc)
	void EnableGravityOverride(struct FVector& InVector); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride (Underlying native function: DisableGravityOverride 0x13eec30)
	void DisableGravityOverride(); // (Native | Public | BlueprintCallable)

	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated (Underlying native function: ClothConfigUpdated 0x2871e0c)
	void ClothConfigUpdated(); // (Native | Public | BlueprintCallable)
};

