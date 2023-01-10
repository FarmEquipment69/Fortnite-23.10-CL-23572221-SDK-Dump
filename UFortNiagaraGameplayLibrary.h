// Class /Script/FortniteGame.FortNiagaraGameplayLibrary
// Size: 0x28
class UFortNiagaraGameplayLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.TriggerBeam (Underlying native function: TriggerBeam 0x85ec7dc)
	static void TriggerBeam(class UFXSystemComponent*& Target); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SpawnFXSystemAttachedWithParams (Underlying native function: SpawnFXSystemAttachedWithParams 0x85ec4c0)
	static class UFXSystemComponent* SpawnFXSystemAttachedWithParams(struct FFXSystemSpawnParameters& SpawnParams); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SpawnFXSystemAttached (Underlying native function: SpawnFXSystemAttached 0x1b8ede4)
	static class UFXSystemComponent* SpawnFXSystemAttached(class UFXSystemAsset*& FXSystemAsset, class USceneComponent*& AttachToComponent, struct FName& AttachPointName, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale, struct TEnumAsByte<EAttachLocation>& LocationType, bool& bAutoDestroy, enum EPSCPoolMethod& PoolingMethod, bool& bAutoActivate); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SpawnFXAtLocationWithParams (Underlying native function: SpawnFXAtLocationWithParams 0x85ec428)
	static class UFXSystemComponent* SpawnFXAtLocationWithParams(struct FFXSystemSpawnParameters& SpawnParams); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SpawnFXAtLocation (Underlying native function: SpawnFXAtLocation 0x16da8b8)
	static class UFXSystemComponent* SpawnFXAtLocation(class UObject*& WorldContextObject, class UFXSystemAsset*& FXSystemAsset, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale, bool& bAutoDestroy, enum EPSCPoolMethod& PoolingMethod, bool& bAutoActivate); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SpawnAltFXAttached (Underlying native function: SpawnAltFXAttached 0x16ddb18)
	static class UFXSystemComponent* SpawnAltFXAttached(enum EFXType& Type, class UNiagaraSystem*& NiagaraSystemAsset, class UParticleSystem*& EmitterTemplate, class USceneComponent*& AttachToComponent, struct FName& AttachPointName, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale, struct TEnumAsByte<EAttachLocation>& LocationType, bool& bAutoDestroy, enum EPSCPoolMethod& PoolingMethod, bool& bAutoActivate); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SpawnAltFXAtLocation (Underlying native function: SpawnAltFXAtLocation 0x16dedf4)
	static class UFXSystemComponent* SpawnAltFXAtLocation(enum EFXType& Type, class UObject*& WorldContextObject, class UNiagaraSystem*& NiagaraSystemAsset, class UParticleSystem*& EmitterTemplate, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale, bool& bAutoDestroy, enum EPSCPoolMethod& PoolingMethod, bool& bAutoActivate); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SetMultiBeamPoints (Underlying native function: SetMultiBeamPoints 0x85eafb8)
	static void SetMultiBeamPoints(class UFXSystemComponent*& Target, int& EmitterIdx, int& SourceIndex, struct FVector& SourcePoint, struct TArray<struct FVector>& EndPoints); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SetInstanceParams (Underlying native function: SetInstanceParams 0x85ea8fc)
	static void SetInstanceParams(class UFXSystemComponent*& Target, struct TArray<struct FParticleSysParam>& InstanceParameters); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SetCustomTimeDilation (Underlying native function: SetCustomTimeDilation 0x85ea048)
	static void SetCustomTimeDilation(class UFXSystemComponent*& Target, float& Dilation); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SetBeamSourcePoint (Underlying native function: SetBeamSourcePoint 0x85e9e2c)
	static void SetBeamSourcePoint(class UFXSystemComponent*& Target, int& EmitterIdx, int& SourceIndex, struct FVector& SourcePoint); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SetBeamPoints (Underlying native function: SetBeamPoints 0x85e9b30)
	static void SetBeamPoints(class UFXSystemComponent*& Target, int& EmitterIdx, int& SourceIndex, struct FVector& SourcePoint, struct FVector& EndPoint); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SetBeamEndPoint (Underlying native function: SetBeamEndPoint 0x85e9960)
	static void SetBeamEndPoint(class UFXSystemComponent*& Target, int& EmitterIdx, struct FVector& EndPoint); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SetAssetOrSpawnAltFXAttached (Underlying native function: SetAssetOrSpawnAltFXAttached 0x1a044e4)
	static class UFXSystemComponent* SetAssetOrSpawnAltFXAttached(class UFXSystemComponent*& Existing, enum EFXType& Type, class UNiagaraSystem*& NiagaraSystemAsset, class UParticleSystem*& EmitterTemplate, class USceneComponent*& AttachToComponent, struct FName& AttachPointName, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale, struct TEnumAsByte<EAttachLocation>& LocationType, bool& bAutoDestroy, enum EPSCPoolMethod& PoolingMethod, bool& bAutoActivate); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SetAssetOrSpawnAltFXAtLocation (Underlying native function: SetAssetOrSpawnAltFXAtLocation 0x2571a28)
	static class UFXSystemComponent* SetAssetOrSpawnAltFXAtLocation(class UFXSystemComponent*& Existing, enum EFXType& Type, class UObject*& WorldContextObject, class UNiagaraSystem*& NiagaraSystemAsset, class UParticleSystem*& EmitterTemplate, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale, bool& bAutoDestroy, enum EPSCPoolMethod& PoolingMethod, bool& bAutoActivate); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SetAltSystemAsset (Underlying native function: SetAltSystemAsset 0x85e947c)
	static void SetAltSystemAsset(class UFXSystemComponent*& Target, class UNiagaraSystem*& NiagaraSystemAsset, class UParticleSystem*& EmitterTemplate); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.SelectAltSystemAsset (Underlying native function: SelectAltSystemAsset 0x150e8fc)
	static struct TWeakObjectPtr<class UFXSystemAsset> SelectAltSystemAsset(enum EFXType& Type, struct TWeakObjectPtr<class UNiagaraSystem>& NiagaraSystemAsset, struct TWeakObjectPtr<class UParticleSystem>& EmitterTemplate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.IsNiagaraFXTypeEnabled (Underlying native function: IsNiagaraFXTypeEnabled 0x2d87384)
	static bool IsNiagaraFXTypeEnabled(enum EFXType& InType); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.IsNiagaraEffectEnabledSoftPtr (Underlying native function: IsNiagaraEffectEnabledSoftPtr 0x150ffdc)
	static bool IsNiagaraEffectEnabledSoftPtr(enum EFXType& InType, struct TWeakObjectPtr<class UNiagaraSystem>& InFXSystemAsset); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.IsNiagaraEffectEnabled (Underlying native function: IsNiagaraEffectEnabled 0x24375c0)
	static bool IsNiagaraEffectEnabled(enum EFXType& InType, class UNiagaraSystem*& InFXSystemAsset); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.GetPlayerWaterType (Underlying native function: GetPlayerWaterType 0x85e6b9c)
	static int GetPlayerWaterType(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.GetEnabledSoftPtr (Underlying native function: GetEnabledSoftPtr 0x85e64f4)
	static struct TWeakObjectPtr<class UFXSystemAsset> GetEnabledSoftPtr(struct FFortPortableSoftParticles& SoftParticles); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.EndLegacyAnimTrails (Underlying native function: EndLegacyAnimTrails 0x2197768)
	static void EndLegacyAnimTrails(class UFXSystemComponent*& Target); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortNiagaraGameplayLibrary.BeginLegacyAnimTrails (Underlying native function: BeginLegacyAnimTrails 0x85e5038)
	static void BeginLegacyAnimTrails(class UFXSystemComponent*& Target, struct FName& FirstSocketName, struct FName& SecondSocketName, struct TEnumAsByte<ETrailWidthMode>& WidthMode, float& Width); // (Final | Native | Static | Public | BlueprintCallable)
};

