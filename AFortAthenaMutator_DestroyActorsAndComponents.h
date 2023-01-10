// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents
// Size: 0x360
class AFortAthenaMutator_DestroyActorsAndComponents : public AFortAthenaMutator
{
	struct TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition> ActorDefinitions; // 0x330 (0x10)
	unsigned char padding_340[0x20]; // 0x340 (0x20)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.SetActorDefinitionsEnabled (Underlying native function: SetActorDefinitionsEnabled 0x7359a78)
	void SetActorDefinitionsEnabled(struct FGameplayTagContainer& InTags, bool& bEnabled); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.PermanentlyDisableActorDefinitions (Underlying native function: PermanentlyDisableActorDefinitions 0x735fac8)
	void PermanentlyDisableActorDefinitions(struct FGameplayTagContainer& InTags); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnTrackedActorDestroyed (Underlying native function: OnTrackedActorDestroyed 0x735f4e0)
	void OnTrackedActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnRep_ActorDefinitions (Underlying native function: OnRep_ActorDefinitions 0x735ede0)
	void OnRepActorDefinitions(struct TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition>& OldActorDefinitions); // (Final | Native | Private | HasOutParms)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnActorSpawned (Underlying native function: OnActorSpawned 0x735d84c)
	void OnActorSpawned(class AActor*& Actor); // (Final | Native | Private)
};

