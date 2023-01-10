// Class /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin
// Size: 0x5d8
class ASpecialEventPlayerMannequin : public AFortPlayerMannequin
{
	unsigned char bDisableCollisionOnBeginPlay; // 0x5d0 (0x1)
	unsigned char bDisableComponentsTickOnServer; // 0x5d0 (0x1)
	unsigned char bRegisterWithSpecialEventMutatorOnClient; // 0x5d0 (0x1)
	unsigned char bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization; // 0x5d0 (0x1)
	unsigned char padding_5d1[0x7]; // 0x5d1 (0x7)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.RegisterWithSpecialEventMutator (Underlying native function: RegisterWithSpecialEventMutator 0x735fe8c)
	void RegisterWithSpecialEventMutator(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.HandleOnMutatorAdded (Underlying native function: HandleOnMutatorAdded 0x735d1d8)
	void HandleOnMutatorAdded(class AFortGameplayMutator*& NewMutator); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.DestroyUnusedSkeletalMeshComponents (Underlying native function: DestroyUnusedSkeletalMeshComponents 0x735aa80)
	void DestroyUnusedSkeletalMeshComponents(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)
};

