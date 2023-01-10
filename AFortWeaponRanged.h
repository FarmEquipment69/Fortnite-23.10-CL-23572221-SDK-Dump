// Class /Script/FortniteGame.FortWeaponRanged
// Size: 0x1530
class AFortWeaponRanged : public AFortWeapon
{
	struct FMulticastInlineDelegate OnProjectileSpawned; // 0x1028 (0x10)
	unsigned char unreflected_1038[0x18]; // 0x1038 (0x18) 
	class UClass* TracerTemplate; // 0x1050 (0x8)
	bool bAllowAutomaticWeaponCatchup; // 0x1058 (0x1)
	unsigned char unreflected_1059[0x7]; // 0x1059 (0x7) 
	int CurrentNumBullets; // 0x1060 (0x4)
	unsigned char unreflected_1064[0x4]; // 0x1064 (0x4) 
	struct FVector ScopeTargetingMuzzleOffset; // 0x1068 (0x18)
	struct FVector CurrentMuzzleBlockedLocation; // 0x1080 (0x18)
	enum EFortAbilityTargetingSource CurrentDamageStart; // 0x1098 (0x1)
	unsigned char unreflected_1099[0x7]; // 0x1099 (0x7) 
	struct FRotator MaxTargetingAimAdjustment; // 0x10a0 (0x18)
	unsigned char bShouldDisplayAmmoCounter; // 0x10b8 (0x1)
	unsigned char bShouldDisplayReticleAmmoCounter; // 0x10b8 (0x1)
	unsigned char bHideAmmoCounterDuringTargeting; // 0x10b8 (0x1)
	unsigned char bShouldDisplayAmmoCounterDuringSecondaryFire; // 0x10b8 (0x1)
	unsigned char bShouldHideReserveAmmo; // 0x10b8 (0x1)
	unsigned char bShouldAimFromMuzzleAtCloseRange; // 0x10b8 (0x1)
	unsigned char bAlwaysAimFromMuzzle; // 0x10b8 (0x1)
	unsigned char bMaintainAimLocationDuringTargeting; // 0x10b8 (0x1)
	unsigned char bUseScopeTargeting; // 0x10b9 (0x1)
	unsigned char bUseFirstPersonTargeting; // 0x10b9 (0x1)
	unsigned char bPersistentFireFX; // 0x10b9 (0x1)
	unsigned char bUseBeamParticles; // 0x10b9 (0x1)
	unsigned char bActivateRangeAbilityPerBurstShot; // 0x10b9 (0x1)
	unsigned char bUseImpactFXForProjectiles; // 0x10b9 (0x1)
	unsigned char bUseImpactFXForProjectileOverlaps; // 0x10b9 (0x1)
	unsigned char bUseImpactDecals; // 0x10b9 (0x1)
	unsigned char bUsePersistentBeam; // 0x10ba (0x1)
	unsigned char bUseShellsParticles; // 0x10ba (0x1)
	unsigned char bUseTracers; // 0x10ba (0x1)
	unsigned char bUseOverrideBaseSpread; // 0x10ba (0x1)
	unsigned char bIsMuzzleTraceNearWall; // 0x10ba (0x1)
	unsigned char unreflected_10bb[0x1]; // 0x10bb (0x1) 
	float MaxMuzzleAimCameraAimHeadingAngleDifferenceDegrees; // 0x10bc (0x4)
	float AimPitchMin; // 0x10c0 (0x4)
	float AimPitchMax; // 0x10c4 (0x4)
	float MuzzleTraceNearWallThreshold; // 0x10c8 (0x4)
	unsigned char unreflected_10cc[0xc]; // 0x10cc (0xc) 
	struct FFortEffectDistanceQuality BeamSignificance; // 0x10d8 (0x18)
	struct FFortEffectDistanceQuality ImpactSignificance; // 0x10f0 (0x18)
	struct FFortEffectDistanceQuality DecalSignificance; // 0x1108 (0x18)
	float ScopeImpactEffectDistanceOffset; // 0x1120 (0x4)
	unsigned char unreflected_1124[0x4]; // 0x1124 (0x4) 
	class UFXSystemComponent* MuzzlePSC; // 0x1128 (0x8)
	class UFXSystemComponent* ShellPSC; // 0x1130 (0x8)
	class UParticleSystem* BeamParticleSystem; // 0x1138 (0x8)
	struct TWeakObjectPtr<class UNiagaraSystem> BeamNiagaraSystemAsset; // 0x1140 (0x28)
	struct FName BeamSourceSocketName; // 0x1168 (0x4)
	unsigned char unreflected_116c[0x4]; // 0x116c (0x4) 
	class USkeletalMesh* FortSpawnPropOverride; // 0x1170 (0x8)
	class UAnimationAsset* FortSpawnPropAnimOverride; // 0x1178 (0x8)
	struct FVector DecalSizeMin; // 0x1180 (0x18)
	struct FVector DecalSizeMax; // 0x1198 (0x18)
	float DecalLifespanMin; // 0x11b0 (0x4)
	float DecalLifespanMax; // 0x11b4 (0x4)
	struct FLinearColor DecalColorStart; // 0x11b8 (0x10)
	struct FLinearColor DecalColorEnd; // 0x11c8 (0x10)
	class UMaterialInterface* DecalMaterial; // 0x11d8 (0x8)
	class UTexture2D* DecalTexture; // 0x11e0 (0x8)
	struct TArray<struct TEnumAsByte<EPhysicalSurface>> SurfaceAcceptingDecals; // 0x11e8 (0x10)
	unsigned char unreflected_11f8[0x4]; // 0x11f8 (0x4) 
	int ShellReloadCounter; // 0x11fc (0x4)
	unsigned char unreflected_1200[0x8]; // 0x1200 (0x8) 
	struct FRotator TargetingRotAdjustmentTotal; // 0x1208 (0x18)
	float LastTargetingRotAdjustmentWeight; // 0x1220 (0x4)
	unsigned char unreflected_1224[0x3c]; // 0x1224 (0x3c) 
	struct FRotator MaxTargetingAimAdjustPerFrame; // 0x1260 (0x18)
	unsigned char unreflected_1278[0x70]; // 0x1278 (0x70) 
	bool ScopePostProcessEnabled; // 0x12e8 (0x1)
	unsigned char unreflected_12e9[0x3]; // 0x12e9 (0x3) 
	float ScopePostProcessBlendWeight; // 0x12ec (0x4)
	struct TArray<struct FWeightedBlendable> ScopePostProcessMaterial; // 0x12f0 (0x10)
	unsigned char unreflected_1300[0x8]; // 0x1300 (0x8) 
	struct TArray<struct FFortBulletPatternEntry> BulletPattern; // 0x1308 (0x10)
	unsigned char unreflected_1318[0x30]; // 0x1318 (0x30) 
	class USoundBase* EnemyWarningWeaponImpactSFX; // 0x1348 (0x8)
	unsigned char unreflected_1350[0x28]; // 0x1350 (0x28) 
	class UNiagaraSystem* BeamNiagaraSystem; // 0x1378 (0x8)
	unsigned char unreflected_1380[0x5c]; // 0x1380 (0x5c) 
	unsigned char bUseAthenaRecoil; // 0x13dc (0x1)
	unsigned char bUseAthenaPerfectADSAim; // 0x13dc (0x1)
	unsigned char bFirstShotAccuracyCheckVehicleMovement; // 0x13dc (0x1)
	unsigned char unreflected_13dd[0x3]; // 0x13dd (0x3) 
	float FirstShotAccuracyMinWaitTime; // 0x13e0 (0x4)
	int BulletCountForPerBulletRecoil; // 0x13e4 (0x4)
	unsigned char unreflected_13e8[0x30]; // 0x13e8 (0x30) 
	class UAnimMontage* FireAnimation; // 0x1418 (0x8)
	class UAnimMontage* FireDownsightsAnimation; // 0x1420 (0x8)
	class UAnimMontage* FireFromCrouchWalkAnimation; // 0x1428 (0x8)
	class UAnimMontage* CockingAnimation; // 0x1430 (0x8)
	class UAnimMontage* WeaponFireMontage; // 0x1438 (0x8)
	class UAnimMontage* WeaponFireDownsightsMontage; // 0x1440 (0x8)
	class UAnimMontage* WeaponFireFromCrouchWalkMontage; // 0x1448 (0x8)
	class UAnimMontage* WeaponCockingMontage; // 0x1450 (0x8)
	class UFXSystemComponent* BeamPSC; // 0x1458 (0x8)
	bool bTracerFXSupportsMultipleSimultaneousTracers; // 0x1460 (0x1)
	bool bTracerFXSupportsMultipleSequentialTracers; // 0x1461 (0x1)
	unsigned char unreflected_1462[0x6]; // 0x1462 (0x6) 
	class UNiagaraComponent* TracerBeamFX; // 0x1468 (0x8)
	float CrouchWalkSpeedThreshold; // 0x1470 (0x4)
	bool bEnableRecoilDelay; // 0x1474 (0x1)
	unsigned char unreflected_1475[0x3]; // 0x1475 (0x3) 
	float ReticleSpreadZeroingDistanceFromMuzzle; // 0x1478 (0x4)
	unsigned char unreflected_147c[0x24]; // 0x147c (0x24) 
	struct FMulticastInlineDelegate OnOverheatValueChanged; // 0x14a0 (0x10)
	enum EFortWeaponOverheatState OverheatState; // 0x14b0 (0x1)
	unsigned char unreflected_14b1[0x7]; // 0x14b1 (0x7) 
	class UAnimMontage* OverheatedAnimation; // 0x14b8 (0x8)
	class UAnimMontage* WeaponOverheatedAnimation; // 0x14c0 (0x8)
	bool bCooldownWhileOverheated; // 0x14c8 (0x1)
	bool bShouldDisplayReticleOverheatIndicator; // 0x14c9 (0x1)
	unsigned char unreflected_14ca[0x2]; // 0x14ca (0x2) 
	float OverheatValue; // 0x14cc (0x4)
	unsigned char unreflected_14d0[0x4]; // 0x14d0 (0x4) 
	float TimeHeatWasLastAdded; // 0x14d4 (0x4)
	float TimeOverheatedBegan; // 0x14d8 (0x4)
	bool bCacheAimPointOnFire; // 0x14dc (0x1)
	unsigned char unreflected_14dd[0x3]; // 0x14dd (0x3) 
	struct FVector CachedAimPoint; // 0x14e0 (0x18)
	unsigned char unreflected_14f8[0x18]; // 0x14f8 (0x18) 
	struct TScriptInterface<class IFortAthenaAILODSettings> CachedLODSettingsManager; // 0x1510 (0x10)
	unsigned char unreflected_1520[0x8]; // 0x1520 (0x8) 
	bool bUseTargetingBasedLOD; // 0x1528 (0x1)
	unsigned char padding_1529[0x7]; // 0x1529 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRanged.UseScopeTargeting (Underlying native function: UseScopeTargeting 0x1416c58)
	bool UseScopeTargeting(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.UseFirstPersonTargeting (Underlying native function: UseFirstPersonTargeting 0x8e5ce48)
	bool UseFirstPersonTargeting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.TempHack_PlayOverheatedAnimation (Underlying native function: TempHack_PlayOverheatedAnimation 0x8e5ce20)
	void TempHackPlayOverheatedAnimation(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldSpawnBulletShellFX (Underlying native function: ShouldSpawnBulletShellFX 0x8e5cd9c)
	bool ShouldSpawnBulletShellFX(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldPlayShellFX (Underlying native function: ShouldPlayShellFX 0x18454fc)
	bool ShouldPlayShellFX(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldPlayReloadFX (Underlying native function: ShouldPlayReloadFX 0x29b9168)
	bool ShouldPlayReloadFX(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldPlayPersistentFireFX (Underlying native function: ShouldPlayPersistentFireFX 0x2fd17c8)
	bool ShouldPlayPersistentFireFX(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldHideReticleAmmoCounterWhileTargeting (Underlying native function: ShouldHideReticleAmmoCounterWhileTargeting 0x8e5cd4c)
	bool ShouldHideReticleAmmoCounterWhileTargeting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldDisplayReticleOverheatIndicator (Underlying native function: ShouldDisplayReticleOverheatIndicator 0x8e5cd34)
	bool ShouldDisplayReticleOverheatIndicator(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldDisplayReticleAmmoCounter (Underlying native function: ShouldDisplayReticleAmmoCounter 0x8e5cd0c)
	bool ShouldDisplayReticleAmmoCounter(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldDisplayAmmoCounterDuringSecondaryFire (Underlying native function: ShouldDisplayAmmoCounterDuringSecondaryFire 0x8e5ccf0)
	bool ShouldDisplayAmmoCounterDuringSecondaryFire(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.ShouldDisplayAmmoCounter (Underlying native function: ShouldDisplayAmmoCounter 0x8e5ccc8)
	bool ShouldDisplayAmmoCounter(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.SetUseTracers (Underlying native function: SetUseTracers 0x8e5ca20)
	void SetUseTracers(bool& bNewUseTracers); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetUseShellsParticles (Underlying native function: SetUseShellsParticles 0x8e5c990)
	void SetUseShellsParticles(bool& bNewUseShellsParticles); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetUseOverrideBaseSpread (Underlying native function: SetUseOverrideBaseSpread 0x8e5c910)
	void SetUseOverrideBaseSpread(bool& bUseOverride); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetUseImpactDecals (Underlying native function: SetUseImpactDecals 0x8e5c880)
	void SetUseImpactDecals(bool& bNewUseImpactDecals); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetUseBeamParticles (Underlying native function: SetUseBeamParticles 0x8e5c7f0)
	void SetUseBeamParticles(bool& bNewUseBeamParticles); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetShellReloadCounter (Underlying native function: SetShellReloadCounter 0x8e5c774)
	void SetShellReloadCounter(int& InputShellReloadCounter); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetHomingTarget (Underlying native function: SetHomingTarget 0x8e5c670)
	void SetHomingTarget(class AFortPawn*& PlayerPawn); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetDecalColorStart (Underlying native function: SetDecalColorStart 0x8e5c5f4)
	void SetDecalColorStart(struct FLinearColor& InputDecalColorStart); // (Final | Native | Protected | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetDecalColorEnd (Underlying native function: SetDecalColorEnd 0x8e5c578)
	void SetDecalColorEnd(struct FLinearColor& InputDecalColorEnd); // (Final | Native | Protected | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetBeamParticleSystem (Underlying native function: SetBeamParticleSystem 0x8e5c4e8)
	class UParticleSystem* SetBeamParticleSystem(class UParticleSystem*& InputBeamParticleSystem); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.SetBeamNiagaraSystem (Underlying native function: SetBeamNiagaraSystem 0x8e5c458)
	class UNiagaraSystem* SetBeamNiagaraSystem(class UNiagaraSystem*& InputBeamNiagaraSystem); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.ServerSetMuzzleTraceNearWall (Underlying native function: ServerSetMuzzleTraceNearWall 0x8e5c3d4)
	void ServerSetMuzzleTraceNearWall(bool& bIsNearWall); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortWeaponRanged.ReleaseShellsFXNative (Underlying native function: ReleaseShellsFXNative 0x8e5c150)
	void ReleaseShellsFXNative(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.OnStartOverheated (Has no native function)
	void OnStartOverheated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.OnStartHeating (Has no native function)
	void OnStartHeating(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.OnStartCooling (Has no native function)
	void OnStartCooling(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.OnSpawnProjectile (Has no native function)
	void OnSpawnProjectile(class AFortProjectileBase*& SpawnProjectile); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.OnRep_OverheatState (Underlying native function: OnRep_OverheatState 0x8e5bcb4)
	void OnRepOverheatState(enum EFortWeaponOverheatState& PreviousOverheatState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeaponRanged.OnLocalFailedToFireWhenOverheated (Has no native function)
	void OnLocalFailedToFireWhenOverheated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.OnFinishedCooling (Has no native function)
	void OnFinishedCooling(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.IsUsingScopeOrFirstPersonCamera (Underlying native function: IsUsingScopeOrFirstPersonCamera 0x8e5b5d0)
	bool IsUsingScopeOrFirstPersonCamera(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.IsUsingScope (Underlying native function: IsUsingScope 0x8e5b5ac)
	bool IsUsingScope(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.IsUsingFirstPersonCamera (Underlying native function: IsUsingFirstPersonCamera 0x8e5b538)
	bool IsUsingFirstPersonCamera(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.IsOverheated (Underlying native function: IsOverheated 0x8e5b514)
	bool IsOverheated(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.IsCachedIsProjectileWeapon (Underlying native function: IsCachedIsProjectileWeapon 0x227d3a8)
	bool IsCachedIsProjectileWeapon(); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.InitUpdateOverheatingState (Underlying native function: InitUpdateOverheatingState 0x8e5b390)
	void InitUpdateOverheatingState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.InitializeBeamFX (Underlying native function: InitializeBeamFX 0x8e5b428)
	void InitializeBeamFX(class UFXSystemComponent*& InBeamPSC); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.GetWeaponFireMontage (Underlying native function: GetWeaponFireMontage 0x6dd0764)
	class UAnimMontage* GetWeaponFireMontage(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetWeaponFireDownsightsMontage (Underlying native function: GetWeaponFireDownsightsMontage 0x8e5b0a4)
	class UAnimMontage* GetWeaponFireDownsightsMontage(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetUseBeamParticles (Underlying native function: GetUseBeamParticles 0x25e15dc)
	bool GetUseBeamParticles(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetUniqueMuzzleSocketNames (Underlying native function: GetUniqueMuzzleSocketNames 0xfe6dec)
	void GetUniqueMuzzleSocketNames(struct TArray<struct FName>& Names); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetTracerTemplate (Underlying native function: GetTracerTemplate 0x8e5b01c)
	class UClass* GetTracerTemplate(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetShellReloadCounter (Underlying native function: GetShellReloadCounter 0x8e5afa8)
	int GetShellReloadCounter(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetScopePostProcessMaterial (Underlying native function: GetScopePostProcessMaterial 0x8e5af8c)
	struct TArray<struct FWeightedBlendable> GetScopePostProcessMaterial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetScopeParameters (Has no native function)
	void GetScopeParameters(class UStaticMeshComponent*& ScopeComponent, struct FVector2D& DepthOfFieldVignetteRange, struct FVector& WeaponSightsOffset); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.GetOverheatState (Underlying native function: GetOverheatState 0x8e5aee0)
	enum EFortWeaponOverheatState GetOverheatState(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetOverheatingMaxValue (Underlying native function: GetOverheatingMaxValue 0x8e5aef8)
	float GetOverheatingMaxValue(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetMaxAdditionalPatternSpreadDegrees (Underlying native function: GetMaxAdditionalPatternSpreadDegrees 0x8e5ae44)
	float GetMaxAdditionalPatternSpreadDegrees(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetFireDownsightsAnimation (Underlying native function: GetFireDownsightsAnimation 0x8e5adc8)
	class UAnimMontage* GetFireDownsightsAnimation(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetFireAnimation (Underlying native function: GetFireAnimation 0x8e5adb0)
	class UAnimMontage* GetFireAnimation(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetCurrentReticleSpreadMultiplier (Underlying native function: GetCurrentReticleSpreadMultiplier 0x8e5ad78)
	float GetCurrentReticleSpreadMultiplier(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetCurrentOverheatValue (Underlying native function: GetCurrentOverheatValue 0x8e5ad60)
	float GetCurrentOverheatValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetCalculatedReticleSpread (Underlying native function: GetCalculatedReticleSpread 0x8e5ad38)
	float GetCalculatedReticleSpread(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetBeamPSC (Underlying native function: GetBeamPSC 0x8e5acc8)
	class UParticleSystemComponent* GetBeamPSC(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetBeamParticleSystem (Underlying native function: GetBeamParticleSystem 0x808c954)
	class UParticleSystem* GetBeamParticleSystem(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetBeamNiagaraSystem (Underlying native function: GetBeamNiagaraSystem 0x8e5acb0)
	class UNiagaraSystem* GetBeamNiagaraSystem(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetBeamNiagaraComponent (Underlying native function: GetBeamNiagaraComponent 0x8e5ac40)
	class UNiagaraComponent* GetBeamNiagaraComponent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.GetADSTransitionOutTime (Underlying native function: GetADSTransitionOutTime 0x8e5ab7c)
	float GetADSTransitionOutTime(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.GetADSTransitionInTime (Underlying native function: GetADSTransitionInTime 0x8e5ab54)
	float GetADSTransitionInTime(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.ForceScopeFX (Has no native function)
	void ForceScopeFX(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRanged.EnableCornersReticle (Underlying native function: EnableCornersReticle 0x8e5aac8)
	void EnableCornersReticle(bool& bNewEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.EnableAltOuterReticle (Underlying native function: EnableAltOuterReticle 0x8e5aa3c)
	void EnableAltOuterReticle(bool& bNewEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.EnableAltCenterReticle (Underlying native function: EnableAltCenterReticle 0x8e5a9b0)
	void EnableAltCenterReticle(bool& bNewEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.DoesWeaponOverheat (Underlying native function: DoesWeaponOverheat 0x8e5a978)
	bool DoesWeaponOverheat(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRanged.DeactivateShellsFXNative (Underlying native function: DeactivateShellsFXNative 0x2bf59e8)
	void DeactivateShellsFXNative(struct FName& SpawnProbabilityName); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.DeactivateMuzzleFlashFXNative (Underlying native function: DeactivateMuzzleFlashFXNative 0x2325b20)
	void DeactivateMuzzleFlashFXNative(struct TArray<class UParticleSystemComponent*>& LegacyMuzzleFXComponents); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.DeactivateBeamFX (Underlying native function: DeactivateBeamFX 0x2dfd9ac)
	void DeactivateBeamFX(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.ClientFixupOverheatValue (Underlying native function: ClientFixupOverheatValue 0x8e5a860)
	void ClientFixupOverheatValue(float& InOverheatValue); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortWeaponRanged.ClientFixOverheatState (Underlying native function: ClientFixOverheatState 0x8e5a7dc)
	void ClientFixOverheatState(enum EFortWeaponOverheatState& NewOverheatState); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortWeaponRanged.ClearHomingTarget (Underlying native function: ClearHomingTarget 0x8e5a7b8)
	void ClearHomingTarget(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.ActivateShellsFXNative (Underlying native function: ActivateShellsFXNative 0x1a0860c)
	void ActivateShellsFXNative(class UNiagaraSystem*& ShellBurstFX, class UNiagaraSystem*& ShellLoopingFX, struct FName& ShellSocketName, struct FName& RotationRateName, struct FVector& RotationRate, struct FName& VelocityName, struct FVector& Velocity, struct FName& GravityName, struct FVector& Gravity, struct FName& SizeName, struct FVector& Size, struct FName& ParentVelocityName, struct FVector& ParentVelocity, struct FName& RadiusName, float& Radius, struct FName& HeightName, float& Height, struct FName& ColorName, struct FLinearColor& ShellColor, struct FName& ShellTypeName, int& ShellTypeInt, float& CullDistance, bool& bUseShellsOnReload, struct FName& SpawnProbabilityName, float& SpawnRateScale); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.ActivateMuzzleFlashFXNative (Underlying native function: ActivateMuzzleFlashFXNative 0x1a073b8)
	void ActivateMuzzleFlashFXNative(bool& bPersistantFire, bool& bMuzzleUsesNiagara, struct TWeakObjectPtr<class UNiagaraSystem>& MuzzleNiagaraAsset, struct TArray<class UParticleSystemComponent*>& LegacyMuzzleFXComponents, float& MuzzleChanceOfLargeFlash, float& MuzzleFlashLargeMinScale, float& MuzzleFlashLargeMaxScale, float& MuzzleFlashSmallMinScale, float& MuzzleFlashSmallMaxScale); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRanged.AbortScopeFX (Has no native function)
	void AbortScopeFX(); // (Event | Public | BlueprintEvent)
};

