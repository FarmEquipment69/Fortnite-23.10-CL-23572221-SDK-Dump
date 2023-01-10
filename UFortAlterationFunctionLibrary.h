// Class /Script/FortniteGame.FortAlterationFunctionLibrary
// Size: 0x28
class UFortAlterationFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortAlterationFunctionLibrary.GetAlterationImpactPhysicalSurfaceEffects (Underlying native function: GetAlterationImpactPhysicalSurfaceEffects 0x8cb9314)
	static class UParticleSystem* GetAlterationImpactPhysicalSurfaceEffects(struct TEnumAsByte<EPhysicalSurface>& HitSurface, struct FFortCosmeticModification& CosmeticMod); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortAlterationFunctionLibrary.GetAlterationImpactNiagaraPhysicalSurfaceEffects (Underlying native function: GetAlterationImpactNiagaraPhysicalSurfaceEffects 0x8cb91ec)
	static class UNiagaraSystem* GetAlterationImpactNiagaraPhysicalSurfaceEffects(struct TEnumAsByte<EPhysicalSurface>& HitSurface, struct FFortCosmeticModification& CosmeticMod); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

