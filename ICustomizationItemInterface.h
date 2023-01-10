// Class /Script/FortniteGame.CustomizationItemInterface
// Size: 0x28
class ICustomizationItemInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.CustomizationItemInterface.SetCustomizationCosmeticItemAndVariants (Underlying native function: SetCustomizationCosmeticItemAndVariants 0x7db6ac0)
	void SetCustomizationCosmeticItemAndVariants(class UAthenaCosmeticItemDefinition*& NewCosmeticItemDefinition, struct TArray<struct FMcpVariantChannelInfo>& InOverrideVariants); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CustomizationItemInterface.ResetCustomizationCosmeticItemAndVariants (Underlying native function: ResetCustomizationCosmeticItemAndVariants 0x7db69e0)
	void ResetCustomizationCosmeticItemAndVariants(class UAthenaCosmeticItemDefinition*& NewCosmeticItemDefinition, struct TArray<struct FMcpVariantChannelInfo>& InOverrideVariants); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CustomizationItemInterface.GetCustomizationItemRotatableSceneComponent (Underlying native function: GetCustomizationItemRotatableSceneComponent 0x7db681c)
	class USceneComponent* GetCustomizationItemRotatableSceneComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomizationItemInterface.GetCustomizationCosmeticItem (Underlying native function: GetCustomizationCosmeticItem 0x7db67f4)
	class UAthenaCosmeticItemDefinition* GetCustomizationCosmeticItem(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

