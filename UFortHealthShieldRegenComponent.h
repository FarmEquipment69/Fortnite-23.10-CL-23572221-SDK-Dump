// Class /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent
// Size: 0x190
class UFortHealthShieldRegenComponent : public UActorComponent
{
	unsigned char unreflected_190[0x190]; 

	/* Functions */

	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.ClearHealthShieldRegen_ShieldListenerDelegates (Underlying native function: ClearHealthShieldRegen_ShieldListenerDelegates 0x7093fcc)
	static void ClearHealthShieldRegenShieldListenerDelegates(class UGameplayAbility*& OwningAbility); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.ClearHealthShieldRegen_HealthListenerDelegates (Underlying native function: ClearHealthShieldRegen_HealthListenerDelegates 0x7093d70)
	static void ClearHealthShieldRegenHealthListenerDelegates(class UGameplayAbility*& OwningAbility); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AssignHealthShieldRegen_ShieldListenerDelegates (Underlying native function: AssignHealthShieldRegen_ShieldListenerDelegates 0x709361c)
	static void AssignHealthShieldRegenShieldListenerDelegates(class UGameplayAbility*& OwningAbility, struct FFortHealthShieldRegen_ShieldDelegateContainer& Delegates); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AssignHealthShieldRegen_HealthListenerDelegates (Underlying native function: AssignHealthShieldRegen_HealthListenerDelegates 0x70930f8)
	static void AssignHealthShieldRegenHealthListenerDelegates(class UGameplayAbility*& OwningAbility, struct FFortHealthShieldRegen_HealthDelegateContainer& Delegates); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent.AllowHealthShieldRegen (Underlying native function: AllowHealthShieldRegen 0x70930dc)
	static bool AllowHealthShieldRegen(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

