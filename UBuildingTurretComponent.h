// Class /Script/FortniteGame.BuildingTurretComponent
// Size: 0xe8
class UBuildingTurretComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnTurretTargetChanged; // 0xa0 (0x10)
	struct FGameplayTag OnFireTagTrigger; // 0xb0 (0x4)
	float FiringInterval; // 0xb4 (0x4)
	float CurrentTargetValidationInterval; // 0xb8 (0x4)
	unsigned char bPerformPeriodicValidationOnCurrentTarget; // 0xbc (0x1)
	unsigned char unreflected_bd[0x3]; // 0xbd (0x3) 
	class UPrimitiveComponent* TargetingOverlapComponent; // 0xc0 (0x8)
	class UAbilitySystemComponent* OwnerASC; // 0xc8 (0x8)
	class AActor* CurrentTarget; // 0xd0 (0x8)
	unsigned char padding_d8[0x10]; // 0xd8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.BuildingTurretComponent.SetTargetingOverlapComponent (Underlying native function: SetTargetingOverlapComponent 0x6ce33a4)
	void SetTargetingOverlapComponent(class UPrimitiveComponent*& NewTargetingOverlapComponent); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingTurretComponent.OnTargetingEndOverlap (Underlying native function: OnTargetingEndOverlap 0x83acec8)
	void OnTargetingEndOverlap(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Native | Protected)

	// Function /Script/FortniteGame.BuildingTurretComponent.OnTargetingBeginOverlap (Underlying native function: OnTargetingBeginOverlap 0x83accd8)
	void OnTargetingBeginOverlap(class UPrimitiveComponent*& OverlappedComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.BuildingTurretComponent.OnRep_CurrentTarget (Underlying native function: OnRep_CurrentTarget 0x6ffb0fc)
	void OnRepCurrentTarget(class AActor*& OldTarget); // (Native | Protected)

	// Function /Script/FortniteGame.BuildingTurretComponent.OnPerformTargetValidation (Underlying native function: OnPerformTargetValidation 0x71e664c)
	void OnPerformTargetValidation(); // (Native | Protected)

	// Function /Script/FortniteGame.BuildingTurretComponent.OnFiringTimer (Underlying native function: OnFiringTimer 0x71e6634)
	void OnFiringTimer(); // (Native | Protected)

	// Function /Script/FortniteGame.BuildingTurretComponent.IsValidTarget (Underlying native function: IsValidTarget 0x6ff9e8c)
	bool IsValidTarget(class AActor*& InTarget); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingTurretComponent.ChooseBestTarget (Underlying native function: ChooseBestTarget 0x83aa6bc)
	class AActor* ChooseBestTarget(struct TArray<class AActor*>& InOutPotentialTargets); // (Native | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingTurretComponent.AttemptSetCurrentTarget (Underlying native function: AttemptSetCurrentTarget 0x83aa564)
	bool AttemptSetCurrentTarget(class AActor*& NewTarget); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

