// Class /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent
// Size: 0xe8
class UDynamicCapsuleComponent : public UFortPawnComponent
{
	struct FDynamicCapsuleState ReplicatedCapsuleState; // 0xa0 (0x10)
	unsigned char padding_b0[0x38]; // 0xb0 (0x38)

	/* Functions */

	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ServerRemoveDynamicCapsule (Underlying native function: ServerRemoveDynamicCapsule 0x706a668)
	void ServerRemoveDynamicCapsule(struct FGameplayTag& tag); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ServerApplyDynamicCapsule (Underlying native function: ServerApplyDynamicCapsule 0x706a4ec)
	void ServerApplyDynamicCapsule(struct FGameplayTag& tag, float& CapsuleRadius, float& CapsuleHalfHeight, double& NewRelativeMeshHeight); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.RemoveDynamicCapsule (Underlying native function: RemoveDynamicCapsule 0x706a454)
	bool RemoveDynamicCapsule(struct FGameplayTag& tag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.OnRep_DynamicCapsuleReplicatedState (Underlying native function: OnRep_DynamicCapsuleReplicatedState 0x13c8690)
	void OnRepDynamicCapsuleReplicatedState(); // (Final | Native | Private)

	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ApplyDynamicCapsuleWithLocationAdjust (Underlying native function: ApplyDynamicCapsuleWithLocationAdjust 0x706a1f8)
	bool ApplyDynamicCapsuleWithLocationAdjust(struct FGameplayTag& tag, float& CapsuleRadius, float& CapsuleHalfHeight, double& NewRelativeMeshHeight); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ApplyDynamicCapsule (Underlying native function: ApplyDynamicCapsule 0x706a0e4)
	bool ApplyDynamicCapsule(struct FGameplayTag& tag, float& CapsuleRadius, float& CapsuleHalfHeight); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

