// Class /Script/FortniteGame.FortFXCustomizationComponent
// Size: 0xb0
class UFortFXCustomizationComponent : public UGameFrameworkComponent
{
	struct TArray<struct FParticleParamterVariant> ParticleParams; // 0xa0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortFXCustomizationComponent.ApplyFXCustomizationToComponent (Underlying native function: ApplyFXCustomizationToComponent 0x84757a4)
	static bool ApplyFXCustomizationToComponent(class AActor*& SourceActor, class UFXSystemComponent*& TargetFXComp); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXCustomizationComponent.ApplyFXCustomizationToActor (Underlying native function: ApplyFXCustomizationToActor 0x8475630)
	static bool ApplyFXCustomizationToActor(class AActor*& SourceActor, class AActor*& TargetActor, bool& bApplyToChildActors); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortFXCustomizationComponent.ApplyFXCustomizationInternal (Underlying native function: ApplyFXCustomizationInternal 0x847545c)
	bool ApplyFXCustomizationInternal(class UFXSystemComponent*& TargetFXComp); // (Final | Native | Protected | BlueprintCallable)
};

