// Class /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent
// Size: 0x220
class UFortCreativeCreatureManagerInfoComponent : public UFortMinigameLogicComponent
{
	unsigned char unreflected_168[0x18]; // 0x168 (0x18) 
	struct TWeakObjectPtr<class UClass> CreatureBlueprintClass; // 0x180 (0x28)
	int MaxHealth; // 0x1a8 (0x4)
	float HearingAggroRange; // 0x1ac (0x4)
	int ScorePoints; // 0x1b0 (0x4)
	float DamageCaused; // 0x1b4 (0x4)
	float EnvironmentalDamageOverride; // 0x1b8 (0x4)
	float MovementSpeedMultiplier; // 0x1bc (0x4)
	bool bImmuneToWeaponKnockback; // 0x1c0 (0x1)
	unsigned char unreflected_1c1[0x7]; // 0x1c1 (0x7) 
	class UFortCreativeCreatureManagerComponent* CreatureManagerComponent; // 0x1c8 (0x8)
	class UClass* DamageOverrideEffect; // 0x1d0 (0x8)
	class UClass* EnvironmentalDamageOverrideEffect; // 0x1d8 (0x8)
	class UClass* MovementSpeedOverrideEffect; // 0x1e0 (0x8)
	class UClass* WeaponKnockbackImmunityEffect; // 0x1e8 (0x8)
	class UClass* MaxHealthOverrideEffect; // 0x1f0 (0x8)
	enum EScoreDistributionType ScoreDistribution; // 0x1f8 (0x1)
	enum ECreatureManagerAffectedTargets AffectedTargetsType; // 0x1f9 (0x1)
	unsigned char padding_1fa[0x26]; // 0x1fa (0x26)

	/* Functions */

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetWeaponKnockbackImmunityEffect (Underlying native function: SetWeaponKnockbackImmunityEffect 0xa0fe9d8)
	void SetWeaponKnockbackImmunityEffect(class UClass*& Effect); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetWeaponKnockbackImmunity (Underlying native function: SetWeaponKnockbackImmunity 0xa0fe958)
	void SetWeaponKnockbackImmunity(bool& InImmuneToWeaponKnockback); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetScorePoints (Underlying native function: SetScorePoints 0xa0fe8dc)
	void SetScorePoints(int& InScorePoints); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetScoreDistribution (Underlying native function: SetScoreDistribution 0xa0fe860)
	void SetScoreDistribution(enum EScoreDistributionType& InScoreDistribution); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetOverrideDamage (Underlying native function: SetOverrideDamage 0xa0fe7dc)
	void SetOverrideDamage(float& InOverrideDamage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementSpeedOverrideEffect (Underlying native function: SetMovementSpeedOverrideEffect 0xa0fe75c)
	void SetMovementSpeedOverrideEffect(class UClass*& Effect); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementSpeedMultiplier (Underlying native function: SetMovementSpeedMultiplier 0xa0fe6d8)
	void SetMovementSpeedMultiplier(float& InOverrideMovementSpeedMultiplier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementOverrideTag (Underlying native function: SetMovementOverrideTag 0xa0fe65c)
	void SetMovementOverrideTag(struct FGameplayTag& tag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealthOverrideTag (Underlying native function: SetMaxHealthOverrideTag 0xa0fe5e0)
	void SetMaxHealthOverrideTag(struct FGameplayTag& tag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealthOverrideEffect (Underlying native function: SetMaxHealthOverrideEffect 0xa0fe560)
	void SetMaxHealthOverrideEffect(class UClass*& Effect); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealth (Underlying native function: SetMaxHealth 0xa0fe4e4)
	void SetMaxHealth(int& InMaxHealth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetHearingAggroRange (Underlying native function: SetHearingAggroRange 0xa0fe460)
	void SetHearingAggroRange(float& InHearingAggroRange); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetEnvironmentalDamageOverrideEffect (Underlying native function: SetEnvironmentalDamageOverrideEffect 0xa0fe3e0)
	void SetEnvironmentalDamageOverrideEffect(class UClass*& Effect); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetEnvironmentalDamageOverride (Underlying native function: SetEnvironmentalDamageOverride 0xa0fe35c)
	void SetEnvironmentalDamageOverride(float& InOverrideDamage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetDamageOverrideTag (Underlying native function: SetDamageOverrideTag 0xa0fe2e0)
	void SetDamageOverrideTag(struct FGameplayTag& tag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetDamageOverrideEffect (Underlying native function: SetDamageOverrideEffect 0xa0fe260)
	void SetDamageOverrideEffect(class UClass*& Effect); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetCreatureManagerComponent (Underlying native function: SetCreatureManagerComponent 0xa0fe1e0)
	void SetCreatureManagerComponent(class UFortCreativeCreatureManagerComponent*& InCreatureManagerComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetCreatureBlueprintClass (Underlying native function: SetCreatureBlueprintClass 0xa0fe0b8)
	void SetCreatureBlueprintClass(struct TWeakObjectPtr<class UClass>& InCreatureBlueprintClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.SetAffectedTargetsType (Underlying native function: SetAffectedTargetsType 0xa0fe03c)
	void SetAffectedTargetsType(enum ECreatureManagerAffectedTargets& InAffectedTargetsType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetWeaponKnockbackImmunity (Underlying native function: ResetWeaponKnockbackImmunity 0xa0fe024)
	void ResetWeaponKnockbackImmunity(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetScorePoints (Underlying native function: ResetScorePoints 0xa0fe00c)
	void ResetScorePoints(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetScoreDistribution (Underlying native function: ResetScoreDistribution 0xa0fdff4)
	void ResetScoreDistribution(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetOverrideDamage (Underlying native function: ResetOverrideDamage 0xa0fdfdc)
	void ResetOverrideDamage(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetMovementSpeedMultiplier (Underlying native function: ResetMovementSpeedMultiplier 0xa0fdfc4)
	void ResetMovementSpeedMultiplier(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetMaxHealth (Underlying native function: ResetMaxHealth 0xa0fdfac)
	void ResetMaxHealth(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetHearingAggroRange (Underlying native function: ResetHearingAggroRange 0xa0fdf94)
	void ResetHearingAggroRange(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetEnvironmentalDamageOverride (Underlying native function: ResetEnvironmentalDamageOverride 0xa0fdf7c)
	void ResetEnvironmentalDamageOverride(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.GetWeaponKnockbackImmunity (Underlying native function: GetWeaponKnockbackImmunity 0xa0fd920)
	bool GetWeaponKnockbackImmunity(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.GetScorePoints (Underlying native function: GetScorePoints 0x7f666dc)
	int GetScorePoints(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.GetScoreDistribution (Underlying native function: GetScoreDistribution 0xa0fd908)
	enum EScoreDistributionType GetScoreDistribution(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.GetOverrideDamage (Underlying native function: GetOverrideDamage 0x99f9f24)
	float GetOverrideDamage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.GetMovementSpeedMultiplier (Underlying native function: GetMovementSpeedMultiplier 0xa0fd8f0)
	float GetMovementSpeedMultiplier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.GetMaxHealth (Underlying native function: GetMaxHealth 0x2889050)
	int GetMaxHealth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.GetHearingAggroRange (Underlying native function: GetHearingAggroRange 0x7f666c4)
	float GetHearingAggroRange(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.GetEnvironmentalDamageOverride (Underlying native function: GetEnvironmentalDamageOverride 0xa0fd8d8)
	float GetEnvironmentalDamageOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.GetCreatureManagerComponent (Underlying native function: GetCreatureManagerComponent 0xa0fd8c0)
	class UFortCreativeCreatureManagerComponent* GetCreatureManagerComponent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.GetCreatureBlueprintClass (Underlying native function: GetCreatureBlueprintClass 0xa0fd788)
	struct TWeakObjectPtr<class UClass> GetCreatureBlueprintClass(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent.GetAffectedTargetsType (Underlying native function: GetAffectedTargetsType 0xa0fd770)
	enum ECreatureManagerAffectedTargets GetAffectedTargetsType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

