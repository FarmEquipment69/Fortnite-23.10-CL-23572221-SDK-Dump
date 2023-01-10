// Class /Script/FortniteGame.BuildingLayoutRequirement
// Size: 0xe60
class ABuildingLayoutRequirement : public ABuildingPlayerPrimitivePreview
{
	struct FMulticastInlineDelegate OnLayoutSatisfied; // 0xe00 (0x10)
	struct FMulticastInlineDelegate OnLayoutUnSatisfied; // 0xe10 (0x10)
	class UClass* LayoutRequirementSMActorClass; // 0xe20 (0x8)
	bool bIgnoreResourceTypeRequirements; // 0xe28 (0x1)
	bool bMakeSatisfyingActorIndestructibleWhileRequirementExists; // 0xe29 (0x1)
	bool bNeedToInitializeRequirementStatus; // 0xe2a (0x1)
	bool bRequirementSatisfied; // 0xe2b (0x1)
	enum ELayoutRequirementStatus RequirementStatus; // 0xe2c (0x1)
	struct TEnumAsByte<EFortResourceType> OverrideResourceType; // 0xe2d (0x1)
	bool bAllowAnyPattern; // 0xe2e (0x1)
	bool bAllowOccupantPatternEditing; // 0xe2f (0x1)
	struct TWeakObjectPtr<class UMaterialInterface> LayoutDisplayMaterial; // 0xe30 (0x28)
	class UMaterialInstanceDynamic* LayoutDisplayMID; // 0xe58 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BuildingLayoutRequirement.SupportsEditingOfOccupant (Underlying native function: SupportsEditingOfOccupant 0x8389388)
	bool SupportsEditingOfOccupant(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingLayoutRequirement.SetRequirementVisible (Underlying native function: SetRequirementVisible 0x8388fa4)
	void SetRequirementVisible(bool& bVisible); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingLayoutRequirement.SetRequiredResourceType (Underlying native function: SetRequiredResourceType 0x8388f18)
	void SetRequiredResourceType(struct TEnumAsByte<EFortResourceType>& DesiredResourceType); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingLayoutRequirement.OnRequirementSatisfyingActorDied (Underlying native function: OnRequirementSatisfyingActorDied 0x8387994)
	void OnRequirementSatisfyingActorDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Native | Public | HasDefaults)

	// Function /Script/FortniteGame.BuildingLayoutRequirement.OnRep_RequirementStatus (Underlying native function: OnRep_RequirementStatus 0x8357a58)
	void OnRepRequirementStatus(); // (Native | Protected)

	// Function /Script/FortniteGame.BuildingLayoutRequirement.DeactivateRequirement (Underlying native function: DeactivateRequirement 0x8383154)
	void DeactivateRequirement(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingLayoutRequirement.ActivateRequirement (Underlying native function: ActivateRequirement 0x83820b4)
	void ActivateRequirement(bool& bMakeVisible); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

