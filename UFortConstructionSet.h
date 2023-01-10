// Class /Script/FortniteGame.FortConstructionSet
// Size: 0x238
class UFortConstructionSet : public UFortAttributeSet
{
	struct FFortGameplayAttributeData BuildSpeed; // 0x30 (0x28)
	struct FFortGameplayAttributeData RepairSpeed; // 0x58 (0x28)
	struct FFortGameplayAttributeData BuildCost; // 0x80 (0x28)
	struct FFortGameplayAttributeData RepairCost; // 0xa8 (0x28)
	struct FFortGameplayAttributeData MaxBuildLevel; // 0xd0 (0x28)
	struct FFortGameplayAttributeData BuildingSkill; // 0xf8 (0x28)
	struct FFortGameplayAttributeData TrapArmSpeed; // 0x120 (0x28)
	struct FFortGameplayAttributeData TrapReloadSpeed; // 0x148 (0x28)
	struct FFortGameplayAttributeData TrapBaseDamage; // 0x170 (0x28)
	struct FFortGameplayAttributeData TrapMaxDurability; // 0x198 (0x28)
	struct FFortGameplayAttributeData TrapDiceCritChance; // 0x1c0 (0x28)
	struct FFortGameplayAttributeData TrapDiceCritMultiplier; // 0x1e8 (0x28)
	struct FFortGameplayAttributeData TrapHealingSource; // 0x210 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortConstructionSet.OnRep_TrapReloadSpeed (Underlying native function: OnRep_TrapReloadSpeed 0x831d41c)
	void OnRepTrapReloadSpeed(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortConstructionSet.OnRep_TrapMaxDurability (Underlying native function: OnRep_TrapMaxDurability 0x831d350)
	void OnRepTrapMaxDurability(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortConstructionSet.OnRep_TrapHealingSource (Underlying native function: OnRep_TrapHealingSource 0x831d284)
	void OnRepTrapHealingSource(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortConstructionSet.OnRep_TrapDiceCritMultiplier (Underlying native function: OnRep_TrapDiceCritMultiplier 0x831d1b8)
	void OnRepTrapDiceCritMultiplier(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortConstructionSet.OnRep_TrapDiceCritChance (Underlying native function: OnRep_TrapDiceCritChance 0x831d0ec)
	void OnRepTrapDiceCritChance(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortConstructionSet.OnRep_TrapBaseDamage (Underlying native function: OnRep_TrapBaseDamage 0x831d020)
	void OnRepTrapBaseDamage(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortConstructionSet.OnRep_TrapArmSpeed (Underlying native function: OnRep_TrapArmSpeed 0x831cf54)
	void OnRepTrapArmSpeed(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortConstructionSet.OnRep_RepairSpeed (Underlying native function: OnRep_RepairSpeed 0x831be98)
	void OnRepRepairSpeed(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortConstructionSet.OnRep_RepairCost (Underlying native function: OnRep_RepairCost 0x831bdcc)
	void OnRepRepairCost(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortConstructionSet.OnRep_MaxBuildLevel (Underlying native function: OnRep_MaxBuildLevel 0x831addc)
	void OnRepMaxBuildLevel(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortConstructionSet.OnRep_BuildSpeed (Underlying native function: OnRep_BuildSpeed 0x83188bc)
	void OnRepBuildSpeed(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortConstructionSet.OnRep_BuildingSkill (Underlying native function: OnRep_BuildingSkill 0x8318b20)
	void OnRepBuildingSkill(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortConstructionSet.OnRep_BuildCost (Underlying native function: OnRep_BuildCost 0x8318724)
	void OnRepBuildCost(struct FFortGameplayAttributeData& OldValue); // (Final | Native | Public | HasOutParms)
};

