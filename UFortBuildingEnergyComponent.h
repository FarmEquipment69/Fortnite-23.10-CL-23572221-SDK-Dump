// Class /Script/FortniteGame.FortBuildingEnergyComponent
// Size: 0xb0
class UFortBuildingEnergyComponent : public UActorComponent
{
	class UFortBuildingEnergyComponentAttrSet* EnergyComponentAttrSet; // 0xa0 (0x8)
	class UClass* EnergyComponentRechargeAbility; // 0xa8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortBuildingEnergyComponent.UpdateRegenRateAttr (Underlying native function: UpdateRegenRateAttr 0x83adf4c)
	void UpdateRegenRateAttr(float& NewRegenRate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBuildingEnergyComponent.UpdateEnergyRechargeDelayAttr (Underlying native function: UpdateEnergyRechargeDelayAttr 0x83adec8)
	void UpdateEnergyRechargeDelayAttr(float& NewEnergyRechargeDelay); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBuildingEnergyComponent.UpdateEnergyCostAttr (Underlying native function: UpdateEnergyCostAttr 0x83ade44)
	void UpdateEnergyCostAttr(float& NewEnergyCost); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBuildingEnergyComponent.UpdateEnergyCapacityAttr (Underlying native function: UpdateEnergyCapacityAttr 0x83addc0)
	void UpdateEnergyCapacityAttr(float& NewEnergyCapacity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBuildingEnergyComponent.UpdateCurrentEnergyLevelAttr (Underlying native function: UpdateCurrentEnergyLevelAttr 0x83add3c)
	void UpdateCurrentEnergyLevelAttr(float& NewEnergyLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortBuildingEnergyComponent.OnRep_EnergyAttrSet (Underlying native function: OnRep_EnergyAttrSet 0x83aca40)
	void OnRepEnergyAttrSet(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortBuildingEnergyComponent.OnCurrentEnergyAttributesChanged (Has no native function)
	void OnCurrentEnergyAttributesChanged(); // (Event | Public | BlueprintEvent)
};

