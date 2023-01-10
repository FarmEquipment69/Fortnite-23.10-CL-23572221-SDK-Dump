// Class /Script/FortniteGame.FortWeapon
// Size: 0x1028
class AFortWeapon : public AActor
{
	unsigned char unreflected_288[0x28]; // 0x288 (0x28) 
	struct FMulticastInlineDelegate OnWeaponRateOfFireChanged; // 0x2b0 (0x10)
	unsigned char unreflected_2c0[0x18]; // 0x2c0 (0x18) 
	struct FMulticastInlineDelegate OnPressTrigger; // 0x2d8 (0x10)
	struct FMulticastInlineDelegate OnReleaseTrigger; // 0x2e8 (0x10)
	unsigned char unreflected_2f8[0x20]; // 0x2f8 (0x20) 
	float TimeToEquip; // 0x318 (0x4)
	unsigned char unreflected_31c[0xc]; // 0x31c (0xc) 
	bool bIsEquippingWeapon; // 0x328 (0x1)
	bool bIsReloadingWeapon; // 0x329 (0x1)
	bool bIsChargingWeapon; // 0x32a (0x1)
	bool bDisableEquipAnimation; // 0x32b (0x1)
	unsigned char unreflected_32c[0x1]; // 0x32c (0x1) 
	bool bIsAimingConsumable; // 0x32d (0x1)
	unsigned char unreflected_32e[0x22]; // 0x32e (0x22) 
	struct FMulticastInlineDelegate OnLocalAmmoChanged; // 0x350 (0x10)
	struct FMulticastInlineDelegate OnLocalReloadStarted; // 0x360 (0x10)
	struct FMulticastInlineDelegate OnLocalReloadCancelled; // 0x370 (0x10)
	struct FMulticastInlineDelegate OnLocalTargetingChanged; // 0x380 (0x10)
	struct FMulticastInlineDelegate OnSecondaryAbilityToggled; // 0x390 (0x10)
	struct FMulticastInlineDelegate OnWeaponFireAudioVisuals; // 0x3a0 (0x10)
	unsigned char unreflected_3b0[0x8]; // 0x3b0 (0x8) 
	struct FMulticastInlineDelegate OnConsumeAmmo; // 0x3b8 (0x10)
	struct FMulticastInlineDelegate OnReticleColorChanged; // 0x3c8 (0x10)
	unsigned char unreflected_3d8[0x14]; // 0x3d8 (0x14) 
	bool bUseAttributeCaching; // 0x3ec (0x1)
	unsigned char unreflected_3ed[0x3]; // 0x3ed (0x3) 
	class UFortWeaponItemDefinition* WeaponData; // 0x3f0 (0x8)
	class UFortWeaponItemDefinition* CosmeticOverrideWeaponData; // 0x3f8 (0x8)
	bool bImpactFXAttachedToHitActor; // 0x400 (0x1)
	unsigned char unreflected_401[0x7]; // 0x401 (0x7) 
	struct TArray<struct FFortGameplayAbilityBehaviorDistanceData> GameplayAbilityBehaviorDistanceData; // 0x408 (0x10)
	class UWeaponHitNotifyAudioBank* HitNotifyAudioBank; // 0x418 (0x8)
	unsigned char unreflected_420[0x18]; // 0x420 (0x18) 
	bool bRemoveAbilitiesWhenRemovedFromInventory; // 0x438 (0x1)
	enum EFortWeaponAbilityRemovalPolicy GrantedAbilityRemovalPolicy[0x3]; // 0x439 (0x1) (ARRAY) 
	unsigned char unreflected_43c[0x44]; // 0x43c (0x44) 
	unsigned char EquippedWeaponDestroyWrapperRepCounter; // 0x480 (0x1)
	unsigned char unreflected_481[0x37]; // 0x481 (0x37) 
	struct FMulticastInlineDelegate OnPlayImpactFXDelegate; // 0x4b8 (0x10)
	unsigned char unreflected_4c8[0x98]; // 0x4c8 (0x98) 
	float PersistentFXStartTime; // 0x560 (0x4)
	float MinimumTimeForPersistentFX; // 0x564 (0x4)
	struct TWeakObjectPtr<class UAthenaItemWrapDefinition> OverrideItemWrapSoftPtr; // 0x568 (0x28)
	unsigned char unreflected_590[0x10]; // 0x590 (0x10) 
	enum EFortWeaponReduceMeshWorkSetting WeaponReduceMeshWorkSetting; // 0x5a0 (0x1)
	bool bWeaponSupportsQuartzGunfire; // 0x5a1 (0x1)
	unsigned char unreflected_5a2[0x6]; // 0x5a2 (0x6) 
	class UFortQuartzGunfireComponent* QuartzGunfireComp; // 0x5a8 (0x8)
	bool bShouldDrawNativeReticle; // 0x5b0 (0x1)
	bool bShouldForceCheckCollisions; // 0x5b1 (0x1)
	unsigned char unreflected_5b2[0x6]; // 0x5b2 (0x6) 
	class UTexture2D* ReticleImage; // 0x5b8 (0x8)
	class UTexture2D* AutoFireReticleImage; // 0x5c0 (0x8)
	struct FColor ReticleDefaultColor; // 0x5c8 (0x4)
	struct FColor ReticleEnemyColor; // 0x5cc (0x4)
	struct FColor ReticleBuildingColor; // 0x5d0 (0x4)
	struct FColor ReticleNoTargetColor; // 0x5d4 (0x4)
	class UTexture2D* HitNotifyReticleImage; // 0x5d8 (0x8)
	class UTexture2D* HitNotifyLocationReticleImage; // 0x5e0 (0x8)
	class UTexture2D* CriticalHitNotifyLocationReticleImage; // 0x5e8 (0x8)
	class UTexture2D* ReticleCenterImage; // 0x5f0 (0x8)
	class UTexture2D* ReticleCenterPerfectAimImage; // 0x5f8 (0x8)
	class UTexture2D* ReticleInvalidTargetImage; // 0x600 (0x8)
	class UTexture2D* MuzzleBlockedReticleImage; // 0x608 (0x8)
	class UTexture2D* ReticleAltCenterImage; // 0x610 (0x8)
	class UTexture2D* ReticleOuterImage; // 0x618 (0x8)
	class UTexture2D* ReticleAltOuterImage; // 0x620 (0x8)
	float ReticleDefaultPrimaryStrikeAngle; // 0x628 (0x4)
	float ReticleDefaultSecondaryStrikeAngle; // 0x62c (0x4)
	bool bSupportsAutofireAtReticleTarget; // 0x630 (0x1)
	bool bSupportsTapToFireMode; // 0x631 (0x1)
	unsigned char unreflected_632[0x6]; // 0x632 (0x6) 
	class UClass* CameraBase3PClass; // 0x638 (0x8)
	class UClass* CameraTargeting3PClass; // 0x640 (0x8)
	class UClass* CameraTargeting3PReloadClass; // 0x648 (0x8)
	class UClass* CameraBase1PClass; // 0x650 (0x8)
	class UClass* CameraTargeting1PClass; // 0x658 (0x8)
	class USoundBase* DestroyedSound; // 0x660 (0x8)
	class USoundBase* OutOfAmmoSound; // 0x668 (0x8)
	class USoundBase* ReloadSounds[0x3]; // 0x670 (0x8) (ARRAY) 
	class USoundBase* PrimaryFireSound1P; // 0x688 (0x8)
	class USoundBase* PrimaryFireSound[0x3]; // 0x690 (0x8) (ARRAY) 
	class USoundBase* PrimaryFireStopSound1P; // 0x6a8 (0x8)
	class USoundBase* PrimaryFireStopSound[0x3]; // 0x6b0 (0x8) (ARRAY) 
	class USoundBase* SecondaryFireSound[0x3]; // 0x6c8 (0x8) (ARRAY) 
	class USoundBase* SecondaryFireStopSound[0x3]; // 0x6e0 (0x8) (ARRAY) 
	class USoundBase* ChargeFireSound1P[0x3]; // 0x6f8 (0x8) (ARRAY) 
	class USoundBase* ChargeFireSound[0x3]; // 0x710 (0x8) (ARRAY) 
	class USoundBase* TargetingStartSound; // 0x728 (0x8)
	class USoundBase* TargetingEndSound; // 0x730 (0x8)
	float PrimaryFireSoundFadeOutTime; // 0x738 (0x4)
	unsigned char unreflected_73c[0x4]; // 0x73c (0x4) 
	class USoundBase* ImpactPhysicalSurfaceSounds[0x1e]; // 0x740 (0x8) (ARRAY) 
	unsigned char unreflected_830[0x8]; // 0x830 (0x8) 
	class UParticleSystem* ImpactPhysicalSurfaceEffects[0x1e]; // 0x838 (0x8) (ARRAY) 
	struct TArray<class UNiagaraSystem*> ImpactNiagaraPhysicalSurfaceEffectAssets; // 0x928 (0x10)
	class UClass* ImpactCameraShake; // 0x938 (0x8)
	class UForceFeedbackEffect* PrimaryForceFeedbackEffect; // 0x940 (0x8)
	class UForceFeedbackEffect* SecondaryForceFeedbackEffect; // 0x948 (0x8)
	class UForceFeedbackEffect* PrimaryImpactForceFeedbackEffect; // 0x950 (0x8)
	class UForceFeedbackEffect* SecondaryImpactForceFeedbackEffect; // 0x958 (0x8)
	struct TArray<class UNiagaraSystem*> ImpactNiagaraPhysicalSurfaceEffectInstances; // 0x960 (0x10)
	class UFortGenericDataStoreManagerComponent* DataStoreManager; // 0x970 (0x8)
	class UAudioComponent* FireAudioChannels[0x4]; // 0x978 (0x8) (ARRAY) 
	class UAudioComponent* ReloadAudioChannels[0x3]; // 0x998 (0x8) (ARRAY) 
	class UAudioComponent* TargetingAudioChannels[0x2]; // 0x9b0 (0x8) (ARRAY) 
	class UFortSoundIndicatorComponent* SoundIndicatorComponent; // 0x9c0 (0x8)
	int CurrentGunFireIndex; // 0x9c8 (0x4)
	unsigned char unreflected_9cc[0x4]; // 0x9cc (0x4) 
	class USkeletalMeshComponentBudgeted* WeaponMesh; // 0x9d0 (0x8)
	struct TArray<class USkeletalMeshComponentBudgeted*> AllWeaponMeshes; // 0x9d8 (0x10)
	struct TArray<class UMaterialInterface*> DefaultWeaponMaterials; // 0x9e8 (0x10)
	struct TMap<class USkeletalMeshComponentBudgeted*, struct FMaterialInterfaceArray> OriginalMaterialMap; // 0x9f8 (0x50)
	int FireAudioChannelWantsToPlay[0x4]; // 0xa48 (0x4) (ARRAY) 
	int WrapSectionMask; // 0xa58 (0x4)
	bool bUsingSecondaryFireAudio; // 0xa5c (0x1)
	bool bHasCachedAdditionalMeshes; // 0xa5d (0x1)
	unsigned char unreflected_a5e[0x2]; // 0xa5e (0x2) 
	struct FColor CurrentReticleColor; // 0xa60 (0x4)
	unsigned char unreflected_a64[0x4]; // 0xa64 (0x4) 
	struct FVector CurrentDamageStartLocation; // 0xa68 (0x18)
	struct FVector CurrentAdjustedAimDirection; // 0xa80 (0x18)
	struct FFortEffectDistanceQuality FireFXSignificance; // 0xa98 (0x18)
	float LastFireTime; // 0xab0 (0x4)
	float LastFireTimeVerified; // 0xab4 (0x4)
	bool bIsPlayingFireFX; // 0xab8 (0x1)
	bool bFireFXTriggered; // 0xab9 (0x1)
	bool bWeaponFireCustomAudioTriggered; // 0xaba (0x1)
	unsigned char unreflected_abb[0x1]; // 0xabb (0x1) 
	float TimerIntervalAdjustment; // 0xabc (0x4)
	float InputQueueTimePercent; // 0xac0 (0x4)
	bool bAllowTargeting; // 0xac4 (0x1)
	bool bIsTargeting; // 0xac5 (0x1)
	unsigned char unreflected_ac6[0x2]; // 0xac6 (0x2) 
	float LastTargetingTransitionTime; // 0xac8 (0x4)
	unsigned char unreflected_acc[0x4]; // 0xacc (0x4) 
	struct FVector TargetSourceOffset; // 0xad0 (0x18)
	struct FVector TargetSourceOffsetWhileCrouched; // 0xae8 (0x18)
	struct FVector TargetSourceOffsetWhileTargeting; // 0xb00 (0x18)
	bool bTraceThroughPawns; // 0xb18 (0x1)
	bool bTraceThroughWorld; // 0xb19 (0x1)
	unsigned char unreflected_b1a[0x2]; // 0xb1a (0x2) 
	int TraceThroughPawnsLimit; // 0xb1c (0x4)
	int TraceThroughBuildingsLimit; // 0xb20 (0x4)
	int TraceThroughLandscapeLimit; // 0xb24 (0x4)
	bool bUseProjectileTrace; // 0xb28 (0x1)
	bool bUseVariableFocalDistanceTargeting; // 0xb29 (0x1)
	bool bUseWeaponTraceForReticle; // 0xb2a (0x1)
	unsigned char unreflected_b2b[0x1]; // 0xb2b (0x1) 
	float ProjectilePitchOffset; // 0xb2c (0x4)
	float LastReloadTime; // 0xb30 (0x4)
	float LastSuccessfulReloadTime; // 0xb34 (0x4)
	float CurrentReloadDuration; // 0xb38 (0x4)
	unsigned char unreflected_b3c[0x4]; // 0xb3c (0x4) 
	struct FGuid ItemEntryGuid; // 0xb40 (0x10)
	struct FGuid TrackerGuid; // 0xb50 (0x10)
	int WeaponLevel; // 0xb60 (0x4)
	int AmmoCount; // 0xb64 (0x4)
	int PhantomReserveAmmo; // 0xb68 (0x4)
	unsigned char unreflected_b6c[0x8]; // 0xb6c (0x8) 
	int BurstFireCounter; // 0xb74 (0x4)
	float ChargeTime; // 0xb78 (0x4)
	float AccumulatedChargeTime; // 0xb7c (0x4)
	float LastChargeTime; // 0xb80 (0x4)
	struct FGameplayTag StartChargeGameplayCue; // 0xb84 (0x4)
	struct FGameplayTag MaxChargeGameplayCue; // 0xb88 (0x4)
	struct FGameplayTag OutOfAmmoTextOverrideFailTag; // 0xb8c (0x4)
	struct FGameplayTag NoSpareAmmoToReloadTextOverrideFailTag; // 0xb90 (0x4)
	unsigned char unreflected_b94[0x4]; // 0xb94 (0x4) 
	struct FGameplayTagQuery FireCanInterruptEquipQuery; // 0xb98 (0x48)
	int CurrentShotLogIndex; // 0xbe0 (0x4)
	unsigned char unreflected_be4[0x4]; // 0xbe4 (0x4) 
	struct TArray<uint32_t> ShotLogFlags; // 0xbe8 (0x10)
	unsigned char bInitializedWeaponItem; // 0xbf8 (0x1)
	unsigned char bPendingDestroyDueToDurabilityOrStackCount; // 0xbf8 (0x1)
	unsigned char bCompletedAppliedAlterationsLoad; // 0xbf9 (0x1)
	unsigned char bCompletedWeaponLoad; // 0xbf9 (0x1)
	unsigned char bIsCosmeticLimited; // 0xbf9 (0x1)
	unsigned char bReplicatedAppliedAlterationsWithNoInstigator; // 0xbf9 (0x1)
	unsigned char bShouldFullyApplyVariantsOnEquip; // 0xbf9 (0x1)
	unsigned char bSecondaryFireAlwaysCancelSwimSprint; // 0xbf9 (0x1)
	unsigned char bEnableNativeChargeUp; // 0xbfa (0x1)
	unsigned char bShowWhenHolstered; // 0xbfa (0x1)
	unsigned char unreflected_bfb[0x1]; // 0xbfb (0x1) 
	int16_t ChargeStatusPack; // 0xbfc (0x2)
	unsigned char unreflected_bfe[0xe]; // 0xbfe (0xe) 
	struct TWeakObjectPtr<class AFortProjectileTrajectory> AttachedTrajectoryIndicator; // 0xc0c (0x8)
	unsigned char unreflected_c14[0x4]; // 0xc14 (0x4) 
	class UFortGameplayAbility* ActiveAbility; // 0xc18 (0x8)
	struct FGameplayAbilitySpecHandle PrimaryAbilitySpecHandle; // 0xc20 (0x4)
	struct FGameplayAbilitySpecHandle SecondaryAbilitySpecHandle; // 0xc24 (0x4)
	struct FGameplayAbilitySpecHandle ReloadAbilitySpecHandle; // 0xc28 (0x4)
	struct FGameplayAbilitySpecHandle ImpactAbilitySpecHandle; // 0xc2c (0x4)
	struct FGameplayAbilitySpecHandle ReticleTraceOverrideSpecHandle; // 0xc30 (0x4)
	unsigned char unreflected_c34[0x4]; // 0xc34 (0x4) 
	struct TArray<struct FGameplayAbilitySpecHandle> EquippedAbilityHandles; // 0xc38 (0x10)
	struct TArray<struct FFortAbilitySetHandle> EquippedAbilitySetHandles; // 0xc48 (0x10)
	struct TArray<class UFortAlterationItemDefinition*> AppliedAlterations; // 0xc58 (0x10)
	struct TArray<struct FFortWeaponModSlot> WeaponModSlots; // 0xc68 (0x10)
	struct TArray<struct FFortEquippedWeaponModSlot> EquippedWeaponModSlots; // 0xc78 (0x10)
	struct FCosmeticVariantCache PreviousWeaponVariants; // 0xc88 (0x18)
	unsigned char unreflected_ca0[0x20]; // 0xca0 (0x20) 
	class UAthenaItemWrapDefinition* AppliedItemWrap; // 0xcc0 (0x8)
	class AFortFXManager* CachedFXManager; // 0xcc8 (0x8)
	class UFortSignificanceManager* CachedSignificanceManager; // 0xcd0 (0x8)
	struct FName MuzzleSocketName; // 0xcd8 (0x4)
	struct FName MuzzleFalloffSocketName; // 0xcdc (0x4)
	struct FName WeaponHandSocketNameOverride; // 0xce0 (0x4)
	struct FName LeftHandWeaponHandSocketNameOverride; // 0xce4 (0x4)
	struct TArray<struct TEnumAsByte<EFortCustomPartType>> WeaponHandSocketPartOverrides; // 0xce8 (0x10)
	unsigned char unreflected_cf8[0x8]; // 0xcf8 (0x8) 
	unsigned char bForceOverrideGenerateOverlapEvents; // 0xd00 (0x1)
	unsigned char unreflected_d01[0xeb]; // 0xd01 (0xeb) 
	float MaxWeaponSwitchNetworkWaitTime; // 0xdec (0x4)
	float LastFireAbilityTime; // 0xdf0 (0x4)
	unsigned char unreflected_df4[0x2c]; // 0xdf4 (0x2c) 
	struct FDelegate OnGetAimRotOverride; // 0xe20 (0xc)
	unsigned char unreflected_e2c[0x4]; // 0xe2c (0x4) 
	class UAnimMontage* EquipAnimation; // 0xe30 (0x8)
	class UAnimMontage* ReloadAnimation; // 0xe38 (0x8)
	struct TArray<class UAnimMontage*> CustomReloadAnimationPerAmmoToFill; // 0xe40 (0x10)
	class UAnimMontage* PrimaryAbilityAnimation; // 0xe50 (0x8)
	class UAnimMontage* SecondaryAbilityAnimation; // 0xe58 (0x8)
	class UAnimMontage* WeaponEquipMontage; // 0xe60 (0x8)
	class UAnimMontage* WeaponReloadMontage; // 0xe68 (0x8)
	struct TArray<class UAnimMontage*> CustomWeaponReloadMontagePerAmmoToFill; // 0xe70 (0x10)
	class UAnimMontage* WeaponPrimaryAbilityMontage; // 0xe80 (0x8)
	class UAnimMontage* WeaponSecondaryAbilityMontage; // 0xe88 (0x8)
	class UAnimSequence* PoseOffsetAnimSequence; // 0xe90 (0x8)
	class UAnimSequence* PoseOffsetAnimSequenceFemaleOverride; // 0xe98 (0x8)
	struct TEnumAsByte<EFortWeaponCoreAnimation> WeaponCoreAnimation; // 0xea0 (0x1)
	struct TEnumAsByte<EFortWeaponCoreAnimation> WeaponCoreAnimationOverride; // 0xea1 (0x1)
	unsigned char unreflected_ea2[0x6]; // 0xea2 (0x6) 
	class UFortWeaponAnimSet* WeaponPawnAnimSet; // 0xea8 (0x8)
	struct FFortLocomotionAnimSets LocomotionAnimSets; // 0xeb0 (0x10)
	class UClass* WeaponPawnAnimLayerOverlayClass; // 0xec0 (0x8)
	class UFortWeaponAdditiveAnimSet* WeaponAdditiveAnimSet; // 0xec8 (0x8)
	class UFortWeaponAnimSet* WeaponPawnAnimsetOverride; // 0xed0 (0x8)
	unsigned char unreflected_ed8[0x30]; // 0xed8 (0x30) 
	class UAnimMontage* UnableToPerformActionMontageOverride; // 0xf08 (0x8)
	struct TWeakObjectPtr<class UFortWeaponFireModeData> ActiveFireMode; // 0xf10 (0x28)
	struct TWeakObjectPtr<class UFortWeaponFireModeData> FireModeDataHipFire; // 0xf38 (0x28)
	struct TWeakObjectPtr<class UFortWeaponFireModeData> FireModeDataAimDownSight; // 0xf60 (0x28)
	struct TWeakObjectPtr<class UFortWeaponFireModeData> FireModeDataOverride; // 0xf88 (0x28)
	unsigned char unreflected_fb0[0x10]; // 0xfb0 (0x10) 
	class ACustomItemWrapModifier* ItemWrapModifier; // 0xfc0 (0x8)
	unsigned char unreflected_fc8[0x18]; // 0xfc8 (0x18) 
	class AActor* LockOnTargetCandidate; // 0xfe0 (0x8)
	unsigned char unreflected_fe8[0x1]; // 0xfe8 (0x1) 
	bool bIgnoreTryToFireSlotCooldownRestriction; // 0xfe9 (0x1)
	unsigned char unreflected_fea[0x1]; // 0xfea (0x1) 
	bool bFireConsumableAnalyticEvent; // 0xfeb (0x1)
	unsigned char unreflected_fec[0x4]; // 0xfec (0x4) 
	struct FMulticastInlineDelegate OnWeaponHudKeyActionUpdated; // 0xff0 (0x10)
	struct TArray<struct FWeaponHudData> HudKeyActionData; // 0x1000 (0x10)
	unsigned char padding_1010[0x18]; // 0x1010 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortWeapon.WeaponDataIsValid (Underlying native function: WeaponDataIsValid 0x8e45b10)
	bool WeaponDataIsValid(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.WeaponDataHasMatchingGameplayTag (Underlying native function: WeaponDataHasMatchingGameplayTag 0x8e45a84)
	bool WeaponDataHasMatchingGameplayTag(struct FGameplayTag& TagToCheck); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.WeaponDataHasAnyMatchingGameplayTags (Underlying native function: WeaponDataHasAnyMatchingGameplayTags 0x8e459b8)
	bool WeaponDataHasAnyMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.UseWeaponDurability (Underlying native function: UseWeaponDurability 0x8e45934)
	void UseWeaponDurability(float& DurabilityScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.UpdateDamageStartLocation (Underlying native function: UpdateDamageStartLocation 0x8e4591c)
	void UpdateDamageStartLocation(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.TryToCustomFire (Underlying native function: TryToCustomFire 0x8e458c4)
	void TryToCustomFire(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.TryReloadAmmoFromAbility (Underlying native function: TryReloadAmmoFromAbility 0x24f75e4)
	bool TryReloadAmmoFromAbility(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.StopWeaponFireFX (Underlying native function: StopWeaponFireFX 0x2e2012c)
	void StopWeaponFireFX(); // (0x00000002 | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.StopWeaponFireCustomAudio (Has no native function)
	void StopWeaponFireCustomAudio(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.StopForceFeedback (Underlying native function: StopForceFeedback 0x2e07194)
	void StopForceFeedback(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.StartCharge (Underlying native function: StartCharge 0x8e45828)
	void StartCharge(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.ShowWeaponFireAudioVisual (Underlying native function: ShowWeaponFireAudioVisual 0x8e45814)
	void ShowWeaponFireAudioVisual(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetWeaponVisibilityControllerOnly (Underlying native function: SetWeaponVisibilityControllerOnly 0x8e45750)
	void SetWeaponVisibilityControllerOnly(bool& bDesiredVisibility, bool& bForceUpdate); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetWeaponVisibility (Underlying native function: SetWeaponVisibility 0x8e4568c)
	void SetWeaponVisibility(bool& bDesiredVisibility, bool& bForceUpdate); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetWeaponPawnAnimsetOverride (Underlying native function: SetWeaponPawnAnimsetOverride 0x8e4560c)
	void SetWeaponPawnAnimsetOverride(class UFortWeaponAnimSet*& WeaponPawnAnimsetOverride); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetWeaponData (Underlying native function: SetWeaponData 0x8e4558c)
	void SetWeaponData(class UFortWeaponItemDefinition*& InWeaponData); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetWeaponCoreAnimOverride (Underlying native function: SetWeaponCoreAnimOverride 0x8e45510)
	void SetWeaponCoreAnimOverride(struct TEnumAsByte<EFortWeaponCoreAnimation>& InWeaponCoreAnimationOverride); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetTrajectoryVisibilityControllerOnly (Underlying native function: SetTrajectoryVisibilityControllerOnly 0x8e4537c)
	void SetTrajectoryVisibilityControllerOnly(class AFortPlayerController*& FortPlayerController, bool& bNewVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetTrajectoryVisibility (Underlying native function: SetTrajectoryVisibility 0x8e452fc)
	void SetTrajectoryVisibility(bool& bNewVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetTraceThroughPawnsLimit (Underlying native function: SetTraceThroughPawnsLimit 0x8e45280)
	void SetTraceThroughPawnsLimit(int& NewTraceThroughPawnsLimit); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetTraceThroughPawns (Underlying native function: SetTraceThroughPawns 0x8e45200)
	void SetTraceThroughPawns(bool& bNewTraceThroughPawns); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetTraceThroughLandscapeLimit (Underlying native function: SetTraceThroughLandscapeLimit 0x8e45184)
	void SetTraceThroughLandscapeLimit(int& NewTraceThroughTerrainLimit); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetTraceThroughBuildingsLimit (Underlying native function: SetTraceThroughBuildingsLimit 0x8e45108)
	void SetTraceThroughBuildingsLimit(int& NewTraceThroughBuildingsLimit); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetTargetingReload3PCamera (Underlying native function: SetTargetingReload3PCamera 0x8e4507c)
	void SetTargetingReload3PCamera(class UClass*& NewTargetingReloadCam); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetTargeting3PCamera (Underlying native function: SetTargeting3PCamera 0x8e44ff0)
	void SetTargeting3PCamera(class UClass*& NewTargetingCam); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetShouldDrawNativeReticle (Underlying native function: SetShouldDrawNativeReticle 0x8e44ef0)
	void SetShouldDrawNativeReticle(bool& bInShouldDrawReticle); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetOverrideFireModeData (Underlying native function: SetOverrideFireModeData 0x8e44d68)
	void SetOverrideFireModeData(struct TWeakObjectPtr<class UFortWeaponFireModeData>& OverrideFireModeData); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetNativeChargeUpEnabled (Underlying native function: SetNativeChargeUpEnabled 0x8e44bd0)
	void SetNativeChargeUpEnabled(bool& bEnabled); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetHudKeyActionVisibilityByID (Underlying native function: SetHudKeyActionVisibilityByID 0x8e449cc)
	bool SetHudKeyActionVisibilityByID(struct FString& KeyActionId, bool& bVisible); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetHudKeyActionVisibility (Underlying native function: SetHudKeyActionVisibility 0x8e44908)
	bool SetHudKeyActionVisibility(int& Index, bool& bVisible); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetHudKeyActionsVisibility (Underlying native function: SetHudKeyActionsVisibility 0x2388438)
	void SetHudKeyActionsVisibility(struct TArray<struct FWeaponHudKeyActionVisibility*>& IndexVisibilityArray); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetHudKeyActionDescriptionByID (Underlying native function: SetHudKeyActionDescriptionByID 0x8e44734)
	bool SetHudKeyActionDescriptionByID(struct FString& KeyActionId, struct FText& InActionDescription); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetHudKeyActionDescription (Underlying native function: SetHudKeyActionDescription 0x8e44648)
	bool SetHudKeyActionDescription(int& Index, struct FText& InActionDescription); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetHiddenInGameOtherLocalControllersOnly (Underlying native function: SetHiddenInGameOtherLocalControllersOnly 0x8e44538)
	bool SetHiddenInGameOtherLocalControllersOnly(class USceneComponent*& SceneComp, bool& NewHidden, bool& bPropagateToChildren); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetHiddenInGameControllerOnly (Underlying native function: SetHiddenInGameControllerOnly 0x8e44428)
	bool SetHiddenInGameControllerOnly(class USceneComponent*& SceneComp, bool& NewHidden, bool& bPropagateToChildren); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetFireSoundPitchMultiplier (Underlying native function: SetFireSoundPitchMultiplier 0x8e44214)
	void SetFireSoundPitchMultiplier(float& NewPitch); // (Final | BlueprintCosmetic | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetChargeTime (Underlying native function: SetChargeTime 0x8e43fc4)
	void SetChargeTime(float& InChargeTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.SetBase3PCamera (Underlying native function: SetBase3PCamera 0x8e43f38)
	void SetBase3PCamera(class UClass*& NewBaseCam); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.ServerSetChargeState (Underlying native function: ServerSetChargeState 0x8ac1e10)
	void ServerSetChargeState(unsigned char& NewState); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortWeapon.ServerResetShotReport (Underlying native function: ServerResetShotReport 0x1598df4)
	void ServerResetShotReport(); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortWeapon.RestoreOriginalMaterials (Underlying native function: RestoreOriginalMaterials 0x8e434e4)
	void RestoreOriginalMaterials(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.ResetWeaponCoreAnimOverride (Underlying native function: ResetWeaponCoreAnimOverride 0x8e434cc)
	void ResetWeaponCoreAnimOverride(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.ResetTempWeaponMaterialOverride (Underlying native function: ResetTempWeaponMaterialOverride 0x8e434b8)
	void ResetTempWeaponMaterialOverride(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.Reload (Underlying native function: Reload 0x8e434a0)
	void Reload(); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.PlayWeaponFireFX (Underlying native function: PlayWeaponFireFX 0x879587c)
	void PlayWeaponFireFX(bool& bSecondaryFire); // (0x00000002 | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.PlayWeaponFireCustomAudio (Has no native function)
	void PlayWeaponFireCustomAudio(bool& bPersistentFire, bool& bSecondaryFire); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.PlayReloadFX (Underlying native function: PlayReloadFX 0x2b24b64)
	void PlayReloadFX(struct TEnumAsByte<EFortReloadFXState>& ReloadStage); // (0x00000002 | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.PlayNativeImpactFX (Underlying native function: PlayNativeImpactFX 0x8e4338c)
	void PlayNativeImpactFX(struct FHitResult& HitResult, struct FGameplayCueParameters& GameplayCueParameters); // (0x00000002 | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.PlayForceFeedback (Underlying native function: PlayForceFeedback 0x234b8f4)
	void PlayForceFeedback(bool& bSecondaryFire, bool& bPersistentFire, bool& bImpact); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.OnWrapApplied (Has no native function)
	void OnWrapApplied(class UAthenaItemWrapDefinition*& WrapDefinition); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnWeaponVisibilityChanged (Underlying native function: OnWeaponVisibilityChanged 0x22eb220)
	void OnWeaponVisibilityChanged(bool& bVisible, bool& bSetForLocalControllerOnly); // (0x00000002 | Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnWeaponMontageStarted (Underlying native function: OnWeaponMontageStarted 0x22eaf94)
	void OnWeaponMontageStarted(class UAnimMontage*& WeaponMontage); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortWeapon.OnWeaponMontageBlendingOut (Underlying native function: OnWeaponMontageBlendingOut 0x2260348)
	void OnWeaponMontageBlendingOut(class UAnimMontage*& WeaponMontage, bool& bInterrupted); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortWeapon.OnWeaponDetached (Has no native function)
	void OnWeaponDetached(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnWeaponAttached (Has no native function)
	void OnWeaponAttached(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnTetherDetached (Has no native function)
	void OnTetherDetached(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnStopWeaponFireFX (Has no native function)
	void OnStopWeaponFireFX(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnStartCharge (Has no native function)
	void OnStartCharge(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnSetTargeting (Has no native function)
	void OnSetTargeting(bool& bNewIsTargeting); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnRep_ReplicatedWeaponModSlots (Underlying native function: OnRep_ReplicatedWeaponModSlots 0x2ab0d84)
	void OnRepReplicatedWeaponModSlots(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortWeapon.OnRep_ReplicatedWeaponData (Underlying native function: OnRep_ReplicatedWeaponData 0x12ae424)
	void OnRepReplicatedWeaponData(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortWeapon.OnRep_ReplicatedCosmeticOverrideWeaponData (Underlying native function: OnRep_ReplicatedCosmeticOverrideWeaponData 0x17fb358)
	void OnRepReplicatedCosmeticOverrideWeaponData(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortWeapon.OnRep_ReplicatedAppliedAlterations (Underlying native function: OnRep_ReplicatedAppliedAlterations 0x2419310)
	void OnRepReplicatedAppliedAlterations(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortWeapon.OnRep_PrimaryAbilitySpecHandle (Underlying native function: OnRep_PrimaryAbilitySpecHandle 0x8e431c0)
	void OnRepPrimaryAbilitySpecHandle(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeapon.OnRep_PhantomReserveAmmo (Underlying native function: OnRep_PhantomReserveAmmo 0x8e431a8)
	void OnRepPhantomReserveAmmo(); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortWeapon.OnRep_LastFireTimeVerified (Underlying native function: OnRep_LastFireTimeVerified 0xe7dca8)
	void OnRepLastFireTimeVerified(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeapon.OnRep_EquippedWeaponDestroyWrapper (Underlying native function: OnRep_EquippedWeaponDestroyWrapper 0x8e4313c)
	void OnRepEquippedWeaponDestroyWrapper(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeapon.OnRep_ChargeStatusPack (Underlying native function: OnRep_ChargeStatusPack 0x136edd0)
	void OnRepChargeStatusPack(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeapon.OnRep_AmmoCount (Underlying native function: OnRep_AmmoCount 0x20fc0c0)
	void OnRepAmmoCount(int& OldAmmoCount); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortWeapon.OnRemoteClientReachedMinCharge (Has no native function)
	void OnRemoteClientReachedMinCharge(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnRemoteClientReachedMaxCharge (Has no native function)
	void OnRemoteClientReachedMaxCharge(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnReachedMinCharge (Has no native function)
	void OnReachedMinCharge(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnReachedMaxChargeForCurAmmo (Has no native function)
	void OnReachedMaxChargeForCurAmmo(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnReachedMaxCharge (Has no native function)
	void OnReachedMaxCharge(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnPlayWeaponFireFX (Has no native function)
	void OnPlayWeaponFireFX(bool& bPersistentFire, bool& bSecondaryFire); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnPlayReloadFX (Has no native function)
	void OnPlayReloadFX(struct TEnumAsByte<EFortReloadFXState>& ReloadStage); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnPlayImpactFX (Underlying native function: OnPlayImpactFX 0x14f6dac)
	void OnPlayImpactFX(struct FHitResult& HitResult, struct TEnumAsByte<EPhysicalSurface>& ImpactPhysicalSurface, class UFXSystemComponent*& SpawnedPSC); // (0x00000002 | Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnPawnMontageStarted (Underlying native function: OnPawnMontageStarted 0x12a1a4c)
	void OnPawnMontageStarted(class UAnimMontage*& PawnMontage); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortWeapon.OnPawnMontageBlendingOut (Underlying native function: OnPawnMontageBlendingOut 0x12a149c)
	void OnPawnMontageBlendingOut(class UAnimMontage*& PawnMontage, bool& bInterrupted); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortWeapon.OnOutOfAmmoFire (Has no native function)
	void OnOutOfAmmoFire(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnInstigatorSet (Has no native function)
	void OnInstigatorSet(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnInitWeaponCosmetics (Has no native function)
	void OnInitWeaponCosmetics(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnInitCosmeticAlterations (Has no native function)
	void OnInitCosmeticAlterations(struct FFortCosmeticModification& CosmeticMod); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnInitAlteration (Has no native function)
	void OnInitAlteration(class UFortAlterationItemDefinition*& NewAlteration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnEquippedWeaponDestory (Has no native function)
	void OnEquippedWeaponDestory(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnEndCharge (Has no native function)
	void OnEndCharge(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnChargeUp (Has no native function)
	void OnChargeUp(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnChargeDown (Has no native function)
	void OnChargeDown(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnApplyFireModeData (Has no native function)
	void OnApplyFireModeData(class UFortWeaponFireModeData*& FireModeData); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.OnAmmoCountChanged (Has no native function)
	void OnAmmoCountChanged(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.ModAmmo (Underlying native function: ModAmmo 0x8e42ca8)
	void ModAmmo(int& AmountToUse); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.K2_OnUnEquip (Has no native function)
	void K2OnUnEquip(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.K2_ConsumeAmmo (Underlying native function: K2_ConsumeAmmo 0x8e42bc8)
	void K2ConsumeAmmo(int& Quantity, bool& bCheckInfiniteAmmo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.IsSuppressed (Underlying native function: IsSuppressed 0x8e42ba4)
	bool IsSuppressed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.IsReloading (Underlying native function: IsReloading 0x82a9fc8)
	bool IsReloading(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.IsQuartzGunfireEnabled (Underlying native function: IsQuartzGunfireEnabled 0xe7de94)
	bool IsQuartzGunfireEnabled(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.IsProjectileWeapon (Underlying native function: IsProjectileWeapon 0xe7d8b4)
	bool IsProjectileWeapon(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.IsGauntlet (Underlying native function: IsGauntlet 0x8e42ad4)
	bool IsGauntlet(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.IsFiring (Underlying native function: IsFiring 0x8e42aac)
	bool IsFiring(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.IsEquipped (Underlying native function: IsEquipped 0x8e42a84)
	bool IsEquipped(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.IsCosmeticLimited (Underlying native function: IsCosmeticLimited 0x8e42a68)
	bool IsCosmeticLimited(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.IsBeingEquipped (Underlying native function: IsBeingEquipped 0x6e8e638)
	bool IsBeingEquipped(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.InventoryOwnerHasInfiniteAmmo (Underlying native function: InventoryOwnerHasInfiniteAmmo 0x8e42a44)
	bool InventoryOwnerHasInfiniteAmmo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.HasInfiniteAmmo (Underlying native function: HasInfiniteAmmo 0x8e42a20)
	bool HasInfiniteAmmo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.HandleBlueprintProbablyCosmeticStomp (Underlying native function: HandleBlueprintProbablyCosmeticStomp 0x8e42a0c)
	void HandleBlueprintProbablyCosmeticStomp(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponReloadMontage (Underlying native function: GetWeaponReloadMontage 0x8e429f4)
	class UAnimMontage* GetWeaponReloadMontage(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponRateOfFireModifier (Underlying native function: GetWeaponRateOfFireModifier 0x8e429c4)
	float GetWeaponRateOfFireModifier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponPawnAnimSet (Underlying native function: GetWeaponPawnAnimSet 0x8e429a4)
	class UFortWeaponAnimSet* GetWeaponPawnAnimSet(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponMeshes (Underlying native function: GetWeaponMeshes 0x8e42908)
	void GetWeaponMeshes(struct TArray<class USkeletalMeshComponentBudgeted*>& WeaponMeshes); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponMesh (Underlying native function: GetWeaponMesh 0x8e428f0)
	class USkeletalMeshComponentBudgeted* GetWeaponMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponEquipMontage (Underlying native function: GetWeaponEquipMontage 0x8e428d8)
	class UAnimMontage* GetWeaponEquipMontage(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponDataWeaponStatHandle (Underlying native function: GetWeaponDataWeaponStatHandle 0x2766d64)
	struct FDataTableRowHandle GetWeaponDataWeaponStatHandle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponDataTriggerType (Underlying native function: GetWeaponDataTriggerType 0x8e428ac)
	struct TEnumAsByte<EFortWeaponTriggerType> GetWeaponDataTriggerType(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponDataSmallPreviewImageBrush (Underlying native function: GetWeaponDataSmallPreviewImageBrush 0x8e42868)
	struct FSlateBrush GetWeaponDataSmallPreviewImageBrush(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponDataSmallPreviewImage (Underlying native function: GetWeaponDataSmallPreviewImage 0x8e427c8)
	struct TWeakObjectPtr<class UTexture2D> GetWeaponDataSmallPreviewImage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponDataRarity (Underlying native function: GetWeaponDataRarity 0x8e427a4)
	enum EFortRarity GetWeaponDataRarity(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponDataPlayerGrantedGameplayTags (Underlying native function: GetWeaponDataPlayerGrantedGameplayTags 0x8e426ec)
	void GetWeaponDataPlayerGrantedGameplayTags(struct FGameplayTagContainer& GameplayTags); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponDataItemType (Underlying native function: GetWeaponDataItemType 0x8e426c8)
	enum EFortItemType GetWeaponDataItemType(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponDataGameplayTags (Underlying native function: GetWeaponDataGameplayTags 0x8e42610)
	void GetWeaponDataGameplayTags(struct FGameplayTagContainer& GameplayTags); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponDataAmmoWorldItemDefinition (Underlying native function: GetWeaponDataAmmoWorldItemDefinition 0x8e425ec)
	class UFortWorldItemDefinition* GetWeaponDataAmmoWorldItemDefinition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponData (Underlying native function: GetWeaponData 0x29685d4)
	class UFortWeaponItemDefinition* GetWeaponData(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponChargeStateForFireFX (Underlying native function: GetWeaponChargeStateForFireFX 0x8e4259c)
	enum EFortWeaponChargeStateForFireFX GetWeaponChargeStateForFireFX(); // (0x00000002 | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetWeaponAdditiveAnimSet (Underlying native function: GetWeaponAdditiveAnimSet 0x8e4257c)
	class UFortWeaponAdditiveAnimSet* GetWeaponAdditiveAnimSet(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetTrackerGuid (Underlying native function: GetTrackerGuid 0x8e42560)
	struct FGuid GetTrackerGuid(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetTraceThroughPawnsLimit (Underlying native function: GetTraceThroughPawnsLimit 0x8e42548)
	int GetTraceThroughPawnsLimit(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetTraceThroughPawns (Underlying native function: GetTraceThroughPawns 0x8e42530)
	bool GetTraceThroughPawns(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetTraceThroughLandscapeLimit (Underlying native function: GetTraceThroughLandscapeLimit 0x8e42518)
	int GetTraceThroughLandscapeLimit(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetTraceThroughBuildingsLimit (Underlying native function: GetTraceThroughBuildingsLimit 0x8e42500)
	int GetTraceThroughBuildingsLimit(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetTimeToNextFire (Underlying native function: GetTimeToNextFire 0x1552720)
	float GetTimeToNextFire(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetSupportsAutoFireAtReticleTargetMode (Underlying native function: GetSupportsAutoFireAtReticleTargetMode 0x6803fa4)
	bool GetSupportsAutoFireAtReticleTargetMode(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetReticleColorOverride (Underlying native function: GetReticleColorOverride 0x8e422b0)
	bool GetReticleColorOverride(struct FColor& OutColor, struct TArray<struct FHitResult>& HitResults); // (0x00000002 | Native | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortWeapon.GetReticleColor (Underlying native function: GetReticleColor 0x8e42280)
	struct FColor GetReticleColor(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetRemainingAmmo (Underlying native function: GetRemainingAmmo 0x8e42258)
	int GetRemainingAmmo(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetReloadTime (Underlying native function: GetReloadTime 0x8e4222c)
	float GetReloadTime(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetReloadProgress (Underlying native function: GetReloadProgress 0x8e42200)
	float GetReloadProgress(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetReloadAnimation (Underlying native function: GetReloadAnimation 0x8e421d8)
	class UAnimMontage* GetReloadAnimation(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetRange (Underlying native function: GetRange 0x8e421ac)
	float GetRange(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetProjectileSpeed (Underlying native function: GetProjectileSpeed 0x8e42110)
	float GetProjectileSpeed(float& ChargePercent); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetProjectilePitchOffset (Underlying native function: GetProjectilePitchOffset 0x8e420f8)
	float GetProjectilePitchOffset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetPlayerActiveGrantedGameplayTags (Underlying native function: GetPlayerActiveGrantedGameplayTags 0x8e4203c)
	void GetPlayerActiveGrantedGameplayTags(struct FGameplayTagContainer& GameplayTags); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetPickupInstigatorData (Underlying native function: GetPickupInstigatorData 0x8e41f3c)
	bool GetPickupInstigatorData(int& InstigatorHandle, struct FPickupInstigatorData& InstigatorData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetOutOfAmmoTextOverride (Has no native function)
	struct FText GetOutOfAmmoTextOverride(); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeapon.GetMuzzleSocketTransform (Underlying native function: GetMuzzleSocketTransform 0x8e41e5c)
	struct FTransform GetMuzzleSocketTransform(int& PatternIndex); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetMuzzleSocketName (Underlying native function: GetMuzzleSocketName 0x2af3f58)
	struct FName GetMuzzleSocketName(int& PatternIndex); // (Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetMuzzleLocation (Underlying native function: GetMuzzleLocation 0x18456ec)
	struct FVector GetMuzzleLocation(int& PatternIndex); // (0x00000002 | Native | Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetMeleeAttackPlayRate (Underlying native function: GetMeleeAttackPlayRate 0x8e41e34)
	float GetMeleeAttackPlayRate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.GetMagazineAmmoCount (Underlying native function: GetMagazineAmmoCount 0x10de598)
	int GetMagazineAmmoCount(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetLocomotionAnimSets (Underlying native function: GetLocomotionAnimSets 0x8e41e18)
	struct FFortLocomotionAnimSets GetLocomotionAnimSets(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortWeapon.GetLocalRemainingAmmo (Underlying native function: GetLocalRemainingAmmo 0x8e41df0)
	int GetLocalRemainingAmmo(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetLocalMagazineAmmoCount (Underlying native function: GetLocalMagazineAmmoCount 0x8e41dc8)
	int GetLocalMagazineAmmoCount(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetItemTemplateObjects (Underlying native function: GetItemTemplateObjects 0x8e41be0)
	bool GetItemTemplateObjects(class UClass*& TemplateClass, struct TArray<class UFortCreativeItemTemplate*>& TemplateObjs, bool& bOnlyEnabled); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetIsTargeting (Underlying native function: GetIsTargeting 0x8e41bc8)
	bool GetIsTargeting(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetIsChargingWeapon (Underlying native function: GetIsChargingWeapon 0x8e41bb0)
	bool GetIsChargingWeapon(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetInventoryItem (Underlying native function: GetInventoryItem 0x8e41b8c)
	class UFortItem* GetInventoryItem(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetInventoryGUID (Underlying native function: GetInventoryGUID 0x8e41b70)
	struct FGuid GetInventoryGUID(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetHudKeyActionData (Underlying native function: GetHudKeyActionData 0x8e41ac4)
	struct TArray<struct FWeaponHudData> GetHudKeyActionData(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetFiringRate (Underlying native function: GetFiringRate 0x8e41a98)
	float GetFiringRate(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetEquipAnimation (Underlying native function: GetEquipAnimation 0x8e41a80)
	class UAnimMontage* GetEquipAnimation(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetDamageStartLocation (Underlying native function: GetDamageStartLocation 0x8e4198c)
	struct FVector GetDamageStartLocation(struct FVector& AimDir, int& PatternIndex); // (0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetCurrentMaxChargePercent (Underlying native function: GetCurrentMaxChargePercent 0x8e41964)
	float GetCurrentMaxChargePercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetCoreAnimation (Underlying native function: GetCoreAnimation 0x8e4193c)
	struct TEnumAsByte<EFortWeaponCoreAnimation> GetCoreAnimation(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetChargeToMinPercent (Underlying native function: GetChargeToMinPercent 0x8e41830)
	float GetChargeToMinPercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetChargeToAutoDischarge (Underlying native function: GetChargeToAutoDischarge 0x8e41808)
	float GetChargeToAutoDischarge(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetChargeTime (Underlying native function: GetChargeTime 0x8e417f0)
	float GetChargeTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetChargePercent (Underlying native function: GetChargePercent 0x2574afc)
	float GetChargePercent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetChargedWeaponFireSound (Underlying native function: GetChargedWeaponFireSound 0x8e41858)
	class USoundBase* GetChargedWeaponFireSound(struct TEnumAsByte<EFortWeaponSoundState>& Channel, bool& bSecondaryFire); // (0x00000002 | Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortWeapon.GetBulletsPerClip (Underlying native function: GetBulletsPerClip 0x8e417cc)
	int GetBulletsPerClip(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetAudioParameterComponent (Underlying native function: GetAudioParameterComponent 0x24d102c)
	class UAudioParameterComponent* GetAudioParameterComponent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetAmmoVariantHandle (Underlying native function: GetAmmoVariantHandle 0x235bd7c)
	struct FItemVariantHandle GetAmmoVariantHandle(class UFortWorldItemDefinition*& AmmoItemDefinition); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetAmmoCostPerFire (Underlying native function: GetAmmoCostPerFire 0x8e41720)
	int GetAmmoCostPerFire(float& ChargePercentage); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetAlterations (Underlying native function: GetAlterations 0x8e416a8)
	struct TArray<class UFortAlterationItemDefinition*> GetAlterations(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GetAccumulatedChargeTime (Underlying native function: GetAccumulatedChargeTime 0x8e41690)
	float GetAccumulatedChargeTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.GameplayCue_Weapons_Activation (Underlying native function: GameplayCue_Weapons_Activation 0xe7d4d4)
	void GameplayCueWeaponsActivation(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortWeapon.GameplayCue_Impact (Underlying native function: GameplayCue_Impact 0xe7d8dc)
	void GameplayCueImpact(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.EndCharge (Underlying native function: EndCharge 0x8e41668)
	void EndCharge(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.DoesHaveOverrideWrap (Underlying native function: DoesHaveOverrideWrap 0x8e41644)
	bool DoesHaveOverrideWrap(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeapon.DetermineReticleColor (Underlying native function: DetermineReticleColor 0x8e4148c)
	struct FColor DetermineReticleColor(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.ClientReportShotFlags (Underlying native function: ClientReportShotFlags 0x8e41338)
	void ClientReportShotFlags(uint32_t& ShotFlags, int& ShotIndex); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortWeapon.ClientHandleReloadFromAbility (Underlying native function: ClientHandleReloadFromAbility 0x16162d8)
	void ClientHandleReloadFromAbility(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortWeapon.ClientGivenTo (Underlying native function: ClientGivenTo 0x8e412b4)
	void ClientGivenTo(class APawn*& P); // (0x00000002 | Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortWeapon.ClearOverrideFireModeData (Underlying native function: ClearOverrideFireModeData 0x8e41288)
	void ClearOverrideFireModeData(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.CheckPendingFire (Underlying native function: CheckPendingFire 0x8e41274)
	void CheckPendingFire(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.CancelActiveAbility (Underlying native function: CancelActiveAbility 0x159a5dc)
	void CancelActiveAbility(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeapon.AttemptApplyOverrideWrapToActor (Underlying native function: AttemptApplyOverrideWrapToActor 0x8e40d74)
	void AttemptApplyOverrideWrapToActor(class AActor*& Actor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)
};

