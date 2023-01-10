// Class /Script/FortniteGame.FortAthenaVehicle
// Size: 0x1940
class AFortAthenaVehicle : public AFortPhysicsPawn
{
	unsigned char unreflected_480[0x68]; // 0x480 (0x68) 
	struct FPredictionReplicationProxy_AP NetPredictionProxyAP; // 0x4e8 (0x18)
	struct FPredictionReplicationProxy_SP NetPredictionProxySP; // 0x500 (0x18)
	struct TWeakObjectPtr<class UAthenaItemWrapDefinition> SoftOverrideItemWrap; // 0x518 (0x28)
	class UAthenaItemWrapDefinition* OverrideItemWrap; // 0x540 (0x8)
	struct FMulticastInlineDelegate OnSpringCompressionDelegate; // 0x548 (0x10)
	struct TSet<class AFortPlayerPawnAthena*> PlayersBasedOnVehicle; // 0x558 (0x50)
	unsigned char unreflected_5a8[0x20]; // 0x5a8 (0x20) 
	struct FMulticastInlineDelegate OnSleepStateChangedDelegate; // 0x5c8 (0x10)
	struct FWaterSurfaceInfo WaterSurfaceDataCache; // 0x5d8 (0x68)
	unsigned char unreflected_640[0x8]; // 0x640 (0x8) 
	struct TWeakObjectPtr<class AController> LastDamageInstigator; // 0x648 (0x8)
	struct TWeakObjectPtr<class AController> LastOutOfHealthInstigator; // 0x650 (0x8)
	struct TWeakObjectPtr<class AActor> LastOutOfHealthDamageCauser; // 0x658 (0x8)
	class USplineComponent* BoundsXYSplineComponent; // 0x660 (0x8)
	class USkeletalMeshComponentBudgeted* SkeletalMesh; // 0x668 (0x8)
	unsigned char unreflected_670[0x28]; // 0x670 (0x28) 
	int CustomDepthStencilValue; // 0x698 (0x4)
	int CustomDepthStencilValueForHighlightedVehicle; // 0x69c (0x4)
	unsigned char SquadId; // 0x6a0 (0x1)
	unsigned char TeamId; // 0x6a1 (0x1)
	struct TEnumAsByte<EVehicleInitialOverlapBehavior> InitialOverlapBehavior; // 0x6a2 (0x1)
	unsigned char bDisableUpdateForcedDebugInput; // 0x6a3 (0x1)
	unsigned char bDisableUpdateAutoRun; // 0x6a3 (0x1)
	unsigned char bDisableUpdateHonk; // 0x6a3 (0x1)
	unsigned char bDisableUpdateIgnoredBuildingActors; // 0x6a3 (0x1)
	unsigned char bDisableUpdateIngoredPawnsForDamage; // 0x6a3 (0x1)
	unsigned char bDisableUpdateSafeTeleport; // 0x6a3 (0x1)
	unsigned char bUseForceHeading; // 0x6a3 (0x1)
	unsigned char bDestroyOnLastExit; // 0x6a4 (0x1)
	unsigned char bShowDamageNumbers; // 0x6a4 (0x1)
	unsigned char bShowDamageNumbersAtImpactLocation; // 0x6a4 (0x1)
	unsigned char bPlayDamageAudio; // 0x6a4 (0x1)
	unsigned char bShowVehicleHealthBarOnPlayerHUD; // 0x6a4 (0x1)
	unsigned char bDestroyBuildingSMActorOnForceExit; // 0x6a4 (0x1)
	unsigned char bIgnoreAllFallingDamage; // 0x6a4 (0x1)
	unsigned char bIgnoreNextFallingDamage; // 0x6a4 (0x1)
	unsigned char bShouldClearFallDamageImmunityForPawnsOnExit; // 0x6a5 (0x1)
	unsigned char bIsBraking; // 0x6a5 (0x1)
	unsigned char bPlayedDying; // 0x6a5 (0x1)
	unsigned char bForceDeath; // 0x6a5 (0x1)
	unsigned char bPlayInstantDeathEffects; // 0x6a5 (0x1)
	unsigned char bHasDriver; // 0x6a5 (0x1)
	unsigned char bHasPassengers; // 0x6a5 (0x1)
	unsigned char bCanSleepWhileNotTouchingAnything; // 0x6a5 (0x1)
	unsigned char bIsTouchingAnything; // 0x6a6 (0x1)
	unsigned char bIsInWater; // 0x6a6 (0x1)
	unsigned char bIsInWaterBody; // 0x6a6 (0x1)
	unsigned char bIsOverlappingWaterBody; // 0x6a6 (0x1)
	unsigned char bIsFullyInWaterBody; // 0x6a6 (0x1)
	unsigned char bCanDriveOnIncline; // 0x6a6 (0x1)
	unsigned char bCanCoastOnIncline; // 0x6a6 (0x1)
	unsigned char bWheelsOnGround; // 0x6a6 (0x1)
	unsigned char bAnyWheelsOnGround; // 0x6a7 (0x1)
	unsigned char bIsTouchingDrivableGround; // 0x6a7 (0x1)
	unsigned char bIsTouchingGroundWithoutWheels; // 0x6a7 (0x1)
	unsigned char bPossiblyTouchingTop; // 0x6a7 (0x1)
	unsigned char unreflected_6a8[0x2]; // 0x6a8 (0x2) 
	unsigned char bUseGravity; // 0x6aa (0x1)
	unsigned char bAllowInteractBetweenFortVolumes; // 0x6aa (0x1)
	unsigned char bCanPassengerPawnsTakeDamage; // 0x6aa (0x1)
	unsigned char bServerIsInUndergroundVolume; // 0x6ab (0x1)
	unsigned char bEnableCurieMaterial; // 0x6ab (0x1)
	unsigned char bEnforceTeamRestrictionForMiniGame; // 0x6ab (0x1)
	unsigned char bEnforceMinigameClassRestriction; // 0x6ab (0x1)
	unsigned char bUseCustomDepthStencilValue; // 0x6ab (0x1)
	unsigned char bStencilEnabled; // 0x6ab (0x1)
	unsigned char bCachedSquadRestrictionEnabled; // 0x6ab (0x1)
	unsigned char bEnforceTeamRestriction; // 0x6ac (0x1)
	unsigned char unreflected_6ad[0x3]; // 0x6ad (0x3) 
	int MinigameClassID; // 0x6b0 (0x4)
	unsigned char unreflected_6b4[0x4]; // 0x6b4 (0x4) 
	struct FMulticastInlineDelegate OnPawnEnteredVehicleAtSeat; // 0x6b8 (0x10)
	struct FMulticastInlineDelegate OnPawnEnteredVehicleSeat; // 0x6c8 (0x10)
	struct FMulticastInlineDelegate OnPawnExitedVehicleSeat; // 0x6d8 (0x10)
	struct FMulticastInlineDelegate OnPawnExitedVehicleFromSeat; // 0x6e8 (0x10)
	struct FMulticastInlineDelegate OnPawnFinishEnteringVehicle; // 0x6f8 (0x10)
	struct FMulticastInlineDelegate OnVehicleHornEvent; // 0x708 (0x10)
	struct FMulticastInlineDelegate OnVehicleOwnerChanged; // 0x718 (0x10)
	unsigned char bWaitingForSleep; // 0x728 (0x1)
	unsigned char bAttemptAsyncOrientationCorrection; // 0x728 (0x1)
	unsigned char bIsAsyncCorrectingOrientation; // 0x728 (0x1)
	unsigned char bAlwaysCreateNavComponent; // 0x729 (0x1)
	unsigned char bAllowInteractBetweenFortVolumesRuntime; // 0x729 (0x1)
	unsigned char bTricksEnabled; // 0x729 (0x1)
	unsigned char unreflected_72a[0x6]; // 0x72a (0x6) 
	float FireDamageTickTimer; // 0x730 (0x4)
	float CurrentFOV; // 0x734 (0x4)
	struct FGameplayTagContainer FireEnvDamageTags; // 0x738 (0x20)
	struct FGameplayTagContainer PawnIgnoreBumpTags; // 0x758 (0x20)
	class USlateBrushAsset* DriverReticleBrush; // 0x778 (0x8)
	struct FGameplayTagContainer AppliedVehicleModTags; // 0x780 (0x20)
	class UFortVehicleModCollectedData* CollectedVehicleModData; // 0x7a0 (0x8)
	unsigned char unreflected_7a8[0x4]; // 0x7a8 (0x4) 
	float WaterEffectsVehicleMaxSpeedKmh; // 0x7ac (0x4)
	class UNiagaraSystem* WaterEffectsAsset; // 0x7b0 (0x8)
	class UNiagaraComponent* WaterEffectsComponent; // 0x7b8 (0x8)
	unsigned char unreflected_7c0[0x8]; // 0x7c0 (0x8) 
	struct FGameplayTagContainer GameplayTags; // 0x7c8 (0x20)
	struct TSet<struct FIgnoredPawn> PawnsToIgnoreForDamge; // 0x7e8 (0x50)
	struct TArray<class AFortPawn*> PawnsToIgnoreForCollision; // 0x838 (0x10)
	struct TArray<class AFortPawn*> IgnoredPawnsPendingTeleport; // 0x848 (0x10)
	float LastPropImpactImpulseTime; // 0x858 (0x4)
	unsigned char unreflected_85c[0x4]; // 0x85c (0x4) 
	struct TArray<struct FPredictedDestroyedBuilding> PredictedDestroyedBuildings; // 0x860 (0x10)
	struct TArray<class UBuildingEditModeMetadata*> WallsVehicleCanDestroy; // 0x870 (0x10)
	struct TArray<class UBuildingEditModeMetadata*> WallsVehicleCannotDestroyWhenBoosting; // 0x880 (0x10)
	struct TArray<class UClass*> BuildingPropClassesVehicleCanDestroy; // 0x890 (0x10)
	struct TArray<class UClass*> BuildingPropClassesVehicleCannotDestroyWhenBoosting; // 0x8a0 (0x10)
	struct TArray<struct TScriptInterface<class IVehicleSeatInputHookProvider>> SeatInputProviders; // 0x8b0 (0x10)
	struct FFortAthenaVehicleInputState EmptyDriverInputState; // 0x8c0 (0x40)
	struct FVector AverageSpringNormal; // 0x900 (0x18)
	float TopSpeedCurrentMultiplier; // 0x918 (0x4)
	float PushForceCurrentMultiplier; // 0x91c (0x4)
	struct FVector2D LastStickInput; // 0x920 (0x10)
	unsigned char unreflected_930[0x10]; // 0x930 (0x10) 
	float SteeringAngle; // 0x940 (0x4)
	unsigned char unreflected_944[0x24]; // 0x944 (0x24) 
	float FrontLateralFrictionRuntimeMultiplier; // 0x968 (0x4)
	float RearLateralFrictionRuntimeMultiplier; // 0x96c (0x4)
	struct FVector LocalRearFrictionPt; // 0x970 (0x18)
	struct FVector LocalFrontFrictionPt; // 0x988 (0x18)
	float FrontMassRatio; // 0x9a0 (0x4)
	float RearMassRatio; // 0x9a4 (0x4)
	unsigned char unreflected_9a8[0x20]; // 0x9a8 (0x20) 
	float TotalBrakingDelta; // 0x9c8 (0x4)
	unsigned char unreflected_9cc[0x69]; // 0x9cc (0x69) 
	struct TEnumAsByte<EPhysicalSurface> PrimarySurfaceType; // 0xa35 (0x1)
	struct TEnumAsByte<EFortBaseWeaponDamage> WeaponResponseType; // 0xa36 (0x1)
	unsigned char VTDMode; // 0xa37 (0x1)
	unsigned char unreflected_a38[0x3]; // 0xa38 (0x3) 
	struct TEnumAsByte<EPhysicalSurface> SurfaceTypeVehicleOn; // 0xa3b (0x1)
	unsigned char unreflected_a3c[0x14]; // 0xa3c (0x14) 
	int ForcedMaterialVariantIndex; // 0xa50 (0x4)
	unsigned char unreflected_a54[0x4]; // 0xa54 (0x4) 
	struct FFortRechargingActionTimer FuelCharge; // 0xa58 (0xd8)
	struct FMulticastInlineDelegate OnRechargeableFuelAboveThreshold; // 0xb30 (0x10)
	struct FMulticastInlineDelegate OnRechargeableFuelBelowThreshold; // 0xb40 (0x10)
	struct FMulticastInlineDelegate OnOutOfRechargeableFuel; // 0xb50 (0x10)
	struct FMulticastInlineDelegate OnNotOutOfRechargeableFuel; // 0xb60 (0x10)
	struct FMulticastInlineDelegate OnMountedWeaponFiredEvent; // 0xb70 (0x10)
	unsigned char unreflected_b80[0x4]; // 0xb80 (0x4) 
	float SeatSwitchCooldown; // 0xb84 (0x4)
	struct FGameplayTagContainer VehicleTags; // 0xb88 (0x20)
	struct TArray<struct FVehicleSpringInfo> Springs; // 0xba8 (0x10)
	struct FSpringGroundTriangle GroundTriangle; // 0xbb8 (0xc)
	unsigned char unreflected_bc4[0x4]; // 0xbc4 (0x4) 
	struct TArray<struct FSMVehicleGear> Gears; // 0xbc8 (0x10)
	struct TArray<struct FSMVehicleGear> SprintGears; // 0xbd8 (0x10)
	struct TArray<struct FSMVehicleGear> ReverseGears; // 0xbe8 (0x10)
	float ForwardDrivingAntiGravityScaler; // 0xbf8 (0x4)
	float CameraSpaceForwardDistanceOffset; // 0xbfc (0x4)
	unsigned char unreflected_c00[0x4]; // 0xc00 (0x4) 
	float CameraAssistStrength; // 0xc04 (0x4)
	float CameraAssistRampUp; // 0xc08 (0x4)
	bool bAllowAutoCamera; // 0xc0c (0x1)
	unsigned char unreflected_c0d[0x3]; // 0xc0d (0x3) 
	float TimeToAutoCamera; // 0xc10 (0x4)
	float MinSpeedForAutoCamera; // 0xc14 (0x4)
	float CameraAssistBaseHeight; // 0xc18 (0x4)
	float CameraAssistUpHillScaler; // 0xc1c (0x4)
	float CameraAssistSteerScaler; // 0xc20 (0x4)
	float CameraAssistForwardScale; // 0xc24 (0x4)
	float AngleDegreesThresholdFromCurrentCameraToTarget; // 0xc28 (0x4)
	float CameraFOVOffset; // 0xc2c (0x4)
	class UClass* TetheredCamera; // 0xc30 (0x8)
	unsigned char unreflected_c38[0x30]; // 0xc38 (0x30) 
	class UClass* PlayerCollisionGameplayEffect; // 0xc68 (0x8)
	class UPrimitiveComponent* OverlapComponent; // 0xc70 (0x8)
	class UPrimitiveComponent* WaterOverlapComponent; // 0xc78 (0x8)
	unsigned char unreflected_c80[0x4]; // 0xc80 (0x4) 
	float WaterLevel; // 0xc84 (0x4)
	int WaterOverlapCount; // 0xc88 (0x4)
	float VehicleMinHorSpeedToDamage; // 0xc8c (0x4)
	float VehicleMaxHorSpeedToDamage; // 0xc90 (0x4)
	float VehicleMinHorSpeedDamage; // 0xc94 (0x4)
	float VehicleMaxHorSpeedDamage; // 0xc98 (0x4)
	float TargetingZOffset; // 0xc9c (0x4)
	float BrakeAboveTopSpeedDelta; // 0xca0 (0x4)
	float TimeToIdleBrake; // 0xca4 (0x4)
	float DragCoefficient; // 0xca8 (0x4)
	float PrimaryCameraPitchConstraint; // 0xcac (0x4)
	float PrimaryCameraYawConstraint; // 0xcb0 (0x4)
	float CachedSpeed; // 0xcb4 (0x4)
	struct FName MainBodyCollision; // 0xcb8 (0x4)
	unsigned char unreflected_cbc[0x4]; // 0xcbc (0x4) 
	struct FVector TestInitialLinearVelocity; // 0xcc0 (0x18)
	struct FVector TestInitialAngularVelocity; // 0xcd8 (0x18)
	struct FHitResult LookAheadHit; // 0xcf0 (0xe0)
	class UFortVehicleTrickSet* TrickSet; // 0xdd0 (0x8)
	struct FName PushForceSocket; // 0xdd8 (0x4)
	struct FName FrontWheelsSocket; // 0xddc (0x4)
	struct FName RearWheelSockets; // 0xde0 (0x4)
	unsigned char unreflected_de4[0x4]; // 0xde4 (0x4) 
	class UWeaponHitNotifyAudioBank* DefaultHitNotifyAudioBank; // 0xde8 (0x8)
	struct FMulticastInlineDelegate OnHandleOutOfHealthDelegate; // 0xdf0 (0x10)
	struct FMulticastInlineDelegate OnHealthChanged; // 0xe00 (0x10)
	unsigned char unreflected_e10[0x18]; // 0xe10 (0x18) 
	struct FMulticastInlineDelegate OnDamageablePartHealthChanged; // 0xe28 (0x10)
	struct FName BulletCollisionComponentTag; // 0xe38 (0x4)
	unsigned char unreflected_e3c[0x4]; // 0xe3c (0x4) 
	class UClass* GEDamagePassengersOnDeath; // 0xe40 (0x8)
	struct FMulticastInlineDelegate OnVehicleSquadChanged; // 0xe48 (0x10)
	float LifespanAfterDeath; // 0xe58 (0x4)
	float LastDamagedTime; // 0xe5c (0x4)
	struct TArray<struct FSeatTransitionMontage> SeatTransitions; // 0xe60 (0x10)
	unsigned char unreflected_e70[0x30]; // 0xe70 (0x30) 
	struct FMulticastInlineDelegate OnVehicleEnteredWaterBody; // 0xea0 (0x10)
	struct FMulticastInlineDelegate OnVehicleExitedWaterBody; // 0xeb0 (0x10)
	struct FVehicleRuntimeModifiers RuntimeModifiedProperties; // 0xec0 (0x18)
	struct TArray<class ABuildingActor*> LocallyIgnoredBuildingActors; // 0xed8 (0x10)
	struct FVector PreviousBuildingQueryPosition; // 0xee8 (0x18)
	float ImpulseResponseMultiplier; // 0xf00 (0x4)
	float ImpulseResponseZBias; // 0xf04 (0x4)
	unsigned char unreflected_f08[0x28]; // 0xf08 (0x28) 
	struct FTimerHandle* WaterSubmergedTimerHandle; // 0xf30 (0x8)
	unsigned char unreflected_f38[0x20]; // 0xf38 (0x20) 
	class USoundEffectSourcePresetChain* EmoteAudioSourcePresetChain; // 0xf58 (0x8)
	class USoundAttenuation* EmoteAudioAttenuation; // 0xf60 (0x8)
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0xf68 (0x98)
	struct FMulticastInlineDelegate OnSurfaceTypeVehicleIsOnChangedDelegate; // 0x1000 (0x10)
	class UFortAbilitySet* StartupAbilitySet; // 0x1010 (0x8)
	class UFortVehicleSeatComponent* VehicleSeatComponent; // 0x1018 (0x8)
	class UFortVehicleInteractionOverrideComponent* VehicleInteractionOverrideComponent; // 0x1020 (0x8)
	class UFortSkyTubePhysicsComponent* SkyTubePhysicsComponent; // 0x1028 (0x8)
	class UFortVehiclePontoonsComponent* PontoonsComponent; // 0x1030 (0x8)
	class UFortAthenaTrackableAIObjectComponent* TrackableAIObjectComponent; // 0x1038 (0x8)
	struct TArray<struct FAthenaCarPlayerSlot> PlayerSlots; // 0x1040 (0x10)
	struct TArray<struct FAthenaCarPlayerSlot> PlayerSlotsBackup; // 0x1050 (0x10)
	struct TArray<struct FAthenaCarPlayerSlotUnreplicated*> PlayerSlotsUnreplicated; // 0x1060 (0x10)
	class UFortVehicleMovementSet* VehicleMovementSet; // 0x1070 (0x8)
	struct FReplicatedAthenaVehicleAttributes VehicleAttributes; // 0x1078 (0x20)
	class UFortVehiclePhysicsCollisionDamageComponent* CachedVehiclePhysicsCollisionDamageComponent; // 0x1098 (0x8)
	class UFortVehicleFuelComponent* CachedFuelComponent; // 0x10a0 (0x8)
	struct TArray<struct FText> ReasonsWhyCantContainPlayers; // 0x10a8 (0x10)
	struct TArray<class ABuildingActor*> IgnoredBuildingActors; // 0x10b8 (0x10)
	struct TArray<struct FVehicleDamageablePart> DamageableParts; // 0x10c8 (0x10)
	struct TArray<struct FVehicleToggleablePart*> ToggledParts; // 0x10d8 (0x10)
	unsigned char unreflected_10e8[0x268]; // 0x10e8 (0x268) 
	struct FVehicleTargetOrientation CorrectTargetOrientation; // 0x1350 (0x48)
	class UClass* CameraModeClass; // 0x1398 (0x8)
	class UClass* DrivingAnimClass; // 0x13a0 (0x8)
	class UClass* DriverAnimLayerOverlayClass; // 0x13a8 (0x8)
	class UClass* PassengerAnimLayerOverlayClass; // 0x13b0 (0x8)
	class UFortVehicleAnimSet* AnimSet; // 0x13b8 (0x8)
	unsigned char unreflected_13c0[0x138]; // 0x13c0 (0x138) 
	struct FFortAttributeInitializationKey* AttributeInitKey; // 0x14f8 (0x8)
	class UFortAbilitySystemComponent* AbilitySystemComponent; // 0x1500 (0x8)
	class UFortHealthSet* HealthSet; // 0x1508 (0x8)
	class UFortAthenaImpulseResponseSet* ImpulseResponseSet; // 0x1510 (0x8)
	class UFortDamageSet* DamageSet; // 0x1518 (0x8)
	class UFortHealthBarIndicator* HealthBarIndicator; // 0x1520 (0x8)
	struct FVehicleCosmeticInfo VehicleCosmeticInfo; // 0x1528 (0x38)
	unsigned char unreflected_1560[0x18]; // 0x1560 (0x18) 
	class UFortVehicleNavModifierComponent* NavModifierComponent; // 0x1578 (0x8)
	bool bShouldSleepAtSpawn; // 0x1580 (0x1)
	bool bSpawnedSleepLockActive; // 0x1581 (0x1)
	unsigned char unreflected_1582[0x2]; // 0x1582 (0x2) 
	uint32_t ForceKinematicOnClientCount; // 0x1584 (0x4)
	class AActor* ImpactInstigator; // 0x1588 (0x8)
	unsigned char unreflected_1590[0x58]; // 0x1590 (0x58) 
	float NormalizedRPM; // 0x15e8 (0x4)
	unsigned char unreflected_15ec[0x4]; // 0x15ec (0x4) 
	struct TArray<struct FVehicleSpecificUIDetails> CustomUI; // 0x15f0 (0x10)
	struct TArray<struct FActiveVehicleUI> ActiveCustomUI; // 0x1600 (0x10)
	struct TArray<struct FVehicleSpecificUIDetails> MobileCustomUI; // 0x1610 (0x10)
	unsigned char unreflected_1620[0x8]; // 0x1620 (0x8) 
	struct FMulticastInlineDelegate OnModAppliedOnClientDelegate; // 0x1628 (0x10)
	struct FGameplayTag AlwaysDamageVehiclesWithTag; // 0x1638 (0x4)
	unsigned char unreflected_163c[0x4]; // 0x163c (0x4) 
	struct FTireInfo BaseTireInfo; // 0x1640 (0x1d0)
	class UPrimitiveComponent* CurrentOverlapComponent; // 0x1810 (0x8)
	class UClass* VehicleConfigsClass; // 0x1818 (0x8)
	class UFortPhysicsVehicleConfigs* FortPhysicsVehicleConfigs; // 0x1820 (0x8)
	unsigned char unreflected_1828[0x4]; // 0x1828 (0x4) 
	bool bBoosting; // 0x182c (0x1)
	unsigned char unreflected_182d[0x3]; // 0x182d (0x3) 
	float BoostEndTime; // 0x1830 (0x4)
	unsigned char unreflected_1834[0x4]; // 0x1834 (0x4) 
	struct FMulticastInlineDelegate OnBoostStartedDelegate; // 0x1838 (0x10)
	struct FMulticastInlineDelegate OnBoostFinishedDelegate; // 0x1848 (0x10)
	class UFortSoundIndicatorComponent* SoundIndicatorComponent; // 0x1858 (0x8)
	bool bShouldDealDamage; // 0x1860 (0x1)
	unsigned char unreflected_1861[0x7]; // 0x1861 (0x7) 
	class UNiagaraComponent* NativeCompLowFuelSputter; // 0x1868 (0x8)
	class UNiagaraSystem* NativeSysLowFuelSputter; // 0x1870 (0x8)
	struct FMulticastInlineDelegate OnOutOfFuelDelegate; // 0x1878 (0x10)
	struct FMulticastInlineDelegate OnGainedFuelDelegate; // 0x1888 (0x10)
	struct FMulticastInlineDelegate OnLowFuelDelegate; // 0x1898 (0x10)
	int DebugDestroyLogCount; // 0x18a8 (0x4)
	float ServerCriticalHealth; // 0x18ac (0x4)
	float HealthZeroTime; // 0x18b0 (0x4)
	unsigned char bExploded; // 0x18b4 (0x1)
	unsigned char bPendingDeath; // 0x18b4 (0x1)
	unsigned char bOnFire; // 0x18b4 (0x1)
	unsigned char unreflected_18b5[0x3]; // 0x18b5 (0x3) 
	struct FMulticastInlineDelegate OnStartCriticalHealth; // 0x18b8 (0x10)
	struct FMulticastInlineDelegate OnExplode; // 0x18c8 (0x10)
	unsigned char unreflected_18d8[0x18]; // 0x18d8 (0x18) 
	bool bOnRoad; // 0x18f0 (0x1)
	bool bOnLandscape; // 0x18f1 (0x1)
	bool bOnDirt; // 0x18f2 (0x1)
	bool bOnGrass; // 0x18f3 (0x1)
	bool bOnIce; // 0x18f4 (0x1)
	bool bOnSnow; // 0x18f5 (0x1)
	bool bOnVehicle; // 0x18f6 (0x1)
	unsigned char unreflected_18f7[0x1]; // 0x18f7 (0x1) 
	struct TArray<enum ETireSurfaces> TireSurfaces; // 0x18f8 (0x10)
	struct FMulticastInlineDelegate OnTirePoppedDelegate; // 0x1908 (0x10)
	float LastPopTireTime; // 0x1918 (0x4)
	unsigned char unreflected_191c[0x4]; // 0x191c (0x4) 
	struct TArray<enum ETireStates> TireStates; // 0x1920 (0x10)
	float RimScrapeDamageTimer; // 0x1930 (0x4)
	unsigned char padding_1934[0xc]; // 0x1934 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaVehicle.WheelsOnGround (Underlying native function: WheelsOnGround 0x2fd17c8)
	bool WheelsOnGround(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.WeaponFired (Has no native function)
	void WeaponFired(class UFortVehicleSeatWeaponComponent*& WeaponComponent, float& Overheat); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.WakeUpOnGroundDied (Underlying native function: WakeUpOnGroundDied 0x8041ab4)
	void WakeUpOnGroundDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/FortniteGame.FortAthenaVehicle.WakeUp (Underlying native function: WakeUp 0x1854b58)
	void WakeUp(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.VehicleIsInSkyTube (Underlying native function: VehicleIsInSkyTube 0x8041a84)
	bool VehicleIsInSkyTube(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.UseOrExitReleasedFromSeat (Underlying native function: UseOrExitReleasedFromSeat 0x8041a00)
	void UseOrExitReleasedFromSeat(int& FromSeatIndex); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.UseOrExitPressedFromSeat (Underlying native function: UseOrExitPressedFromSeat 0x804197c)
	void UseOrExitPressedFromSeat(int& FromSeatIndex); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.UpdateClientWithVehicleTestInput (Underlying native function: UpdateClientWithVehicleTestInput 0x804188c)
	void UpdateClientWithVehicleTestInput(struct FVector& LinearVelocity, struct FVector& AngularVelocity); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetWaterDestructionDelay (Underlying native function: SetWaterDestructionDelay 0x8041230)
	void SetWaterDestructionDelay(float& NewWaterDestructionDelay); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetVehicleStencilHighlighted (Underlying native function: SetVehicleStencilHighlighted 0x8041134)
	static bool SetVehicleStencilHighlighted(class AActor*& PotentialVehicle, bool& bHighlighted, int& StencilValueOverride); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetUnoccupiedAutoDestroy (Underlying native function: SetUnoccupiedAutoDestroy 0x80410a8)
	void SetUnoccupiedAutoDestroy(float& UnoccupiedTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetSupportCosmeticWrap (Underlying native function: SetSupportCosmeticWrap 0x8041024)
	void SetSupportCosmeticWrap(bool& bNewSupportCosmeticWrap); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetStaticPhysics (Underlying native function: SetStaticPhysics 0x8040fa4)
	void SetStaticPhysics(bool& bStatic); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetSpringEnabled (Underlying native function: SetSpringEnabled 0x8040edc)
	void SetSpringEnabled(int& SpringIndex, bool& bEnabled); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetShouldSleepAtSpawn (Underlying native function: SetShouldSleepAtSpawn 0x8040e5c)
	void SetShouldSleepAtSpawn(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetShouldDealDamage (Underlying native function: SetShouldDealDamage 0x8040ddc)
	void SetShouldDealDamage(bool& bNewValue); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetShootingCone (Underlying native function: SetShootingCone 0x8040cfc)
	void SetShootingCone(int& SeatIdx, struct FAthenaVehicleShootingCone*& InCone); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetPropDestructionParams (Underlying native function: SetPropDestructionParams 0x22d76e4)
	void SetPropDestructionParams(struct TArray<class UClass*>& InBuildingPropClassesVehicleCanDestroy, struct TArray<class UClass*>& InBuildingPropClassesVehicleCannotDestroyWhenBoosting, struct TArray<class UBuildingEditModeMetadata*>& InWallsVehicleCanDestroy, struct TArray<class UBuildingEditModeMetadata*>& InWallsVehicleCannotDestroyWhenBoosting); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetOnFire (Underlying native function: SetOnFire 0x8040c7c)
	void SetOnFire(bool& bNewValue); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetNormalizedAudioRPM (Underlying native function: SetNormalizedAudioRPM 0x8040bf4)
	void SetNormalizedAudioRPM(float& NewValue); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetMinigameTeamID (Underlying native function: SetMinigameTeamID 0x8040b74)
	void SetMinigameTeamID(unsigned char& NewTeamID); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetMinigameClassID (Underlying native function: SetMinigameClassID 0x8040af4)
	void SetMinigameClassID(int& NewClassID); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetImpulseResponseZBias (Underlying native function: SetImpulseResponseZBias 0x80409f0)
	void SetImpulseResponseZBias(float& ZBias); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetImpulseResponseMultiplier (Underlying native function: SetImpulseResponseMultiplier 0x8040968)
	void SetImpulseResponseMultiplier(float& Multiplier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetIgnoreNextFallingDamage (Underlying native function: SetIgnoreNextFallingDamage 0x80408e0)
	void SetIgnoreNextFallingDamage(bool& bInIgnoreNextFallingDamage); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetIgnoreAllFallingDamage (Underlying native function: SetIgnoreAllFallingDamage 0x8040858)
	void SetIgnoreAllFallingDamage(bool& InIgnoreAllFallingDamage); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetHealthPercent (Underlying native function: SetHealthPercent 0x80407cc)
	void SetHealthPercent(float& Percent); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetForceInfiniteFuel (Underlying native function: SetForceInfiniteFuel 0x8040748)
	void SetForceInfiniteFuel(bool& bNewForceInfiniteFuel); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetEnforceTeamRestriction (Underlying native function: SetEnforceTeamRestriction 0x80406c8)
	void SetEnforceTeamRestriction(bool& bNewEnforceTeamRestriction); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetEnforceMinigameClassRestriction (Underlying native function: SetEnforceMinigameClassRestriction 0x8040614)
	void SetEnforceMinigameClassRestriction(bool& bNewEnforceClassRestriction); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetDyingPhysics (Underlying native function: SetDyingPhysics 0x80405fc)
	void SetDyingPhysics(); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetCurrentFocusedSocketLocation (Underlying native function: SetCurrentFocusedSocketLocation 0x8040574)
	void SetCurrentFocusedSocketLocation(int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetAllowInteractionBetweenFortVolumes (Underlying native function: SetAllowInteractionBetweenFortVolumes 0x80404ec)
	void SetAllowInteractionBetweenFortVolumes(bool& bInteractBetweenVolumes); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.SetActorBase (Underlying native function: SetActorBase 0x8040420)
	void SetActorBase(class AActor*& InActorBase, int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.ServerUsingRiftPortal (Underlying native function: ServerUsingRiftPortal 0x804039c)
	void ServerUsingRiftPortal(class AActor*& RiftPortal); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortAthenaVehicle.ServerStartFire (Underlying native function: ServerStartFire 0x8040318)
	void ServerStartFire(unsigned char& FireModeNum); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortAthenaVehicle.ServerSetIgnoreNextFallingDamage (Underlying native function: ServerSetIgnoreNextFallingDamage 0x8040294)
	void ServerSetIgnoreNextFallingDamage(bool& InIgnoreNextFallingDamage); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortAthenaVehicle.ServerSetIgnoreAllFallingDamage (Underlying native function: ServerSetIgnoreAllFallingDamage 0x8040210)
	void ServerSetIgnoreAllFallingDamage(bool& InIgnoreAllFallingDamage); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortAthenaVehicle.ServerSetDestructionInfo (Underlying native function: ServerSetDestructionInfo 0x80400b0)
	void ServerSetDestructionInfo(float& InSelfDestructTime, float& InMaxTimeZeroHealth, float& InMaxTimeSelfDestructCleanup, float& InMaxTimeExplosion); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.ServerReceiveInputCmd (Underlying native function: ServerReceiveInputCmd 0x803ffd8)
	void ServerReceiveInputCmd(int& ClientFrameNumber, struct TArray<unsigned char>& Data); // (0x00000002 | Net | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortAthenaVehicle.ServerOnAttemptInteract (Underlying native function: ServerOnAttemptInteract 0x803ff00)
	bool ServerOnAttemptInteract(struct FInteractionType& InteractType); // (0x00000002 | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaVehicle.SeatIsTurret (Underlying native function: SeatIsTurret 0x803fdb4)
	bool SeatIsTurret(int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.ResetTrick (Underlying native function: ResetTrick 0x803fd94)
	void ResetTrick(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.ResetHasContact (Underlying native function: ResetHasContact 0x803fd7c)
	void ResetHasContact(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.RequestReliablePhysicsUpdate (Underlying native function: RequestReliablePhysicsUpdate 0x803fd64)
	void RequestReliablePhysicsUpdate(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortAthenaVehicle.RepairDamageablePart (Underlying native function: RepairDamageablePart 0x803fcb8)
	void RepairDamageablePart(struct FName& ShapeName, float& NewHealthPercent); // (Final | BlueprintAuthorityOnly | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.RepairAllDamageableParts (Underlying native function: RepairAllDamageableParts 0x803fc30)
	void RepairAllDamageableParts(float& NewHealthPercent); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.RemoveReasonWhyCantContainPlayers (Underlying native function: RemoveReasonWhyCantContainPlayers 0x803fb60)
	bool RemoveReasonWhyCantContainPlayers(struct FText& TextToRemove); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.RemoveObjectToIgnoreForShocks (Underlying native function: RemoveObjectToIgnoreForShocks 0x58c5550)
	bool RemoveObjectToIgnoreForShocks(class AActor*& Actor); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.RemoveIgnoredPawnForDamage (Underlying native function: RemoveIgnoredPawnForDamage 0x803fadc)
	void RemoveIgnoredPawnForDamage(class AFortPawn*& IgnoredPawn); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.ReleaseVehicleControlledExternalyInternal (Underlying native function: ReleaseVehicleControlledExternalyInternal 0x803fac8)
	void ReleaseVehicleControlledExternalyInternal(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.RearLateralFrictionHasReachedMax (Underlying native function: RearLateralFrictionHasReachedMax 0x803fab0)
	bool RearLateralFrictionHasReachedMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.PlayerIsTryingToReverse (Underlying native function: PlayerIsTryingToReverse 0x24c92dc)
	bool PlayerIsTryingToReverse(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.PawnHitByVehicle (Underlying native function: PawnHitByVehicle 0x803f928)
	void PawnHitByVehicle(class AFortPawn*& Pawn, struct FVector& ImpactPoint, struct FVector& ImpactNormal, struct FVector& LaunchVector); // (0x00000002 | Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OverridePontoonRadiusOnServer (Underlying native function: OverridePontoonRadiusOnServer 0x803f860)
	void OverridePontoonRadiusOnServer(int& PontoonIndex, float& NewRadius); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.OverrideCurrentWrap (Underlying native function: OverrideCurrentWrap 0x803f7d8)
	void OverrideCurrentWrap(class UAthenaItemWrapDefinition*& LoadedWrap); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnWaterTooDeep (Underlying native function: OnWaterTooDeep 0x24b8434)
	void OnWaterTooDeep(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnSurfaceTypeVehicleIsOnChanged (Has no native function)
	void OnSurfaceTypeVehicleIsOnChanged(struct TEnumAsByte<EPhysicalSurface>& SurfaceTypeVehicleIsOn); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnStopTick (Has no native function)
	void OnStopTick(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnStartTick (Has no native function)
	void OnStartTick(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnStartFire (Has no native function)
	void OnStartFire(unsigned char& FireModeNum); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnSleepStateChanged (Has no native function)
	void OnSleepStateChanged(bool& bAwake); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnSignificanceLODChanged (Has no native function)
	void OnSignificanceLODChanged(int& NewLOD); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnSetVehicleFxMaterial (Has no native function)
	void OnSetVehicleFxMaterial(struct FGameplayTag& FxTag, class UMaterialInterface*& FxMaterial); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnSetVehicleFx (Has no native function)
	void OnSetVehicleFx(struct FGameplayTag& FxTag, class UFXSystemAsset*& FxSystem); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnSetSeatCollision (Has no native function)
	void OnSetSeatCollision(int& SeatIndex, bool& bOccupied); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRimScrapeDamage (Has no native function)
	void OnRimScrapeDamage(int& TireIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_VehicleAttributes (Underlying native function: OnRep_VehicleAttributes 0x2580eec)
	void OnRepVehicleAttributes(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_ToggleableParts (Underlying native function: OnRep_ToggleableParts 0x803f748)
	void OnRepToggleableParts(struct TArray<struct FVehicleToggleablePart*>& PrevToggleableParts); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_Tires (Underlying native function: OnRep_Tires 0x252fce8)
	void OnRepTires(struct TArray<enum ETireStates>& PrevTireStates); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_SurfaceTypeVehicleOn (Underlying native function: OnRep_SurfaceTypeVehicleOn 0x19b0e5c)
	void OnRepSurfaceTypeVehicleOn(struct TEnumAsByte<EPhysicalSurface>& PreviousSurfaceOn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_SpawnedSleepLockActive (Underlying native function: OnRep_SpawnedSleepLockActive 0x803f734)
	void OnRepSpawnedSleepLockActive(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_PendingDeath (Underlying native function: OnRep_PendingDeath 0x803f720)
	void OnRepPendingDeath(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_OverrideWrap (Underlying native function: OnRep_OverrideWrap 0x803f704)
	void OnRepOverrideWrap(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_OnFire (Underlying native function: OnRep_OnFire 0x803f6b0)
	void OnRepOnFire(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_NetPrediction_SP (Underlying native function: OnRep_NetPrediction_SP 0x803f644)
	void OnRepNetPredictionSP(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_NetPrediction_AP (Underlying native function: OnRep_NetPrediction_AP 0x803f5ec)
	void OnRepNetPredictionAP(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_IgnoredBuildingActors (Underlying native function: OnRep_IgnoredBuildingActors 0x1b0b7bc)
	void OnRepIgnoredBuildingActors(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_HealthSet (Underlying native function: OnRep_HealthSet 0x273fd14)
	void OnRepHealthSet(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_ForceKinematicOnClientCount (Underlying native function: OnRep_ForceKinematicOnClientCount 0x273fd14)
	void OnRepForceKinematicOnClientCount(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_Exploded (Underlying native function: OnRep_Exploded 0x803f5d8)
	void OnRepExploded(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_DamageableParts (Underlying native function: OnRep_DamageableParts 0x13079fc)
	void OnRepDamageableParts(struct TArray<struct FVehicleDamageablePart>& PrevDamageableParts); // (Final | 0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_CorrectTargetOrientation (Underlying native function: OnRep_CorrectTargetOrientation 0x2bf4c50)
	void OnRepCorrectTargetOrientation(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnRep_AbilitySystemComponent (Underlying native function: OnRep_AbilitySystemComponent 0x273fd14)
	void OnRepAbilitySystemComponent(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnPrimitiveComponentWake (Underlying native function: OnPrimitiveComponentWake 0x803f510)
	void OnPrimitiveComponentWake(class UPrimitiveComponent*& WakingComponent, struct FName& BoneName); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnPrimitiveComponentSleep (Underlying native function: OnPrimitiveComponentSleep 0x1674e3c)
	void OnPrimitiveComponentSleep(class UPrimitiveComponent*& WakingComponent, struct FName& BoneName); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnPoppedTire (Underlying native function: OnPoppedTire 0x803f448)
	void OnPoppedTire(int& TireIndex, bool& bFakeTire); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnPawnExitVehicle (Underlying native function: OnPawnExitVehicle 0x803f380)
	void OnPawnExitVehicle(class AFortPlayerPawn*& PlayerPawn, struct FName& ExitSocketName); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnPawnEnterVehicle (Has no native function)
	void OnPawnEnterVehicle(class AFortPlayerPawn*& PlayerPawn, int& SeatIdx); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnModAppliedOnClient (Has no native function)
	void OnModAppliedOnClient(struct FGameplayTag& ModTag); // (0x00000002 | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnIsSprintingChanged (Has no native function)
	void OnIsSprintingChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnImpactDamageApplied (Has no native function)
	void OnImpactDamageApplied(float& Damage, struct FVector& ImpactNormal); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnHonk (Has no native function)
	void OnHonk(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnHoldExitStopped (Has no native function)
	void OnHoldExitStopped(class AFortPawn*& ExitingPawn); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnHoldExitStarted (Has no native function)
	void OnHoldExitStarted(class AFortPawn*& ExitingPawn, float& ExitDuration); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnHitBuildingActor (Has no native function)
	void OnHitBuildingActor(struct FHitResult& HitResult, float& ModifiedDamageToApply); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnHealed (Has no native function)
	void OnHealed(float& Heal, struct FGameplayTagContainer& HealTags, struct FGameplayEffectContextHandle& EffectContext, class AController*& EventInstigator, class AActor*& HealCauser); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnGearShiftUp (Has no native function)
	void OnGearShiftUp(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnGearShiftDown (Has no native function)
	void OnGearShiftDown(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnFuelTouchedFire (Has no native function)
	void OnFuelTouchedFire(class AActor*& SourceActor); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnFireStop (Has no native function)
	void OnFireStop(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnFireStart (Has no native function)
	void OnFireStart(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnExitRoad (Has no native function)
	void OnExitRoad(); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnExitOverlap (Underlying native function: OnExitOverlap 0x26695f0)
	void OnExitOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnExitLandscape (Has no native function)
	void OnExitLandscape(); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnExitedWaterVolume (Has no native function)
	void OnExitedWaterVolume(struct FVector& WaterSurfacePoint); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnExitedWaterBody (Has no native function)
	void OnExitedWaterBody(class AFortWaterBodyActor*& WaterBody); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnEnterOverlap (Underlying native function: OnEnterOverlap 0x803efd0)
	void OnEnterOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnEnterLandscape (Has no native function)
	void OnEnterLandscape(); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnEnteredWaterVolume (Has no native function)
	void OnEnteredWaterVolume(struct FVector& WaterSurfacePoint); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnEnteredWaterBody (Has no native function)
	void OnEnteredWaterBody(class AFortWaterBodyActor*& WaterBody); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnEnteredRoad (Has no native function)
	void OnEnteredRoad(); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnDeathPlayEffects (Has no native function)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (0x00000002 | BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnDamagePlayEffects (Has no native function)
	void OnDamagePlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnDamaged (Has no native function)
	void OnDamaged(float& Damage, struct FGameplayTagContainer& DamageTags, struct FGameplayEffectContextHandle& EffectContext, class AController*& EventInstigator, class AActor*& DamageCauser); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnCollisionHitEffects (Has no native function)
	void OnCollisionHitEffects(struct FVector& HitLocation, struct FVector& HitNormalImpulse, struct FVector& HitFrictionImpulse, struct FVector& HitNormal, class AActor*& HitActor, struct TEnumAsByte<EPhysicalSurface>& HitSurfaceType); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.OnCollisionHitDamageEffects (Has no native function)
	void OnCollisionHitDamageEffects(float& DamageTaken); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.MulticastVehicleInputStateUnreliable (Underlying native function: MulticastVehicleInputStateUnreliable 0x11164c8)
	void MulticastVehicleInputStateUnreliable(struct FFortAthenaVehicleInputStateUnreliable& InputState, class AFortPlayerPawn*& Pawn); // (0x00000002 | Net | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.ModifyIncomingDamage (Underlying native function: ModifyIncomingDamage 0x803ed70)
	float ModifyIncomingDamage(float& Damage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& EffectContext, class AController*& EventInstigator, class AActor*& DamageCauser); // (0x00000002 | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAthenaVehicle.ManageSpeedDamageMutlipliers (Underlying native function: ManageSpeedDamageMutlipliers 0x803ed5c)
	void ManageSpeedDamageMutlipliers(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaVehicle.K2_ApplyCosmeticWrap (Has no native function)
	void K2ApplyCosmeticWrap(class UAthenaItemWrapDefinition*& LoadedWrap); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsSquadRestricted (Underlying native function: IsSquadRestricted 0x803eccc)
	bool IsSquadRestricted(class AFortPlayerPawnAthena*& InteractingPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsSprinting (Underlying native function: IsSprinting 0x803eca4)
	bool IsSprinting(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsSlowEnoughToInteract (Underlying native function: IsSlowEnoughToInteract 0x803ec7c)
	bool IsSlowEnoughToInteract(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsScrapingSidesOrTop (Underlying native function: IsScrapingSidesOrTop 0x803ec54)
	bool IsScrapingSidesOrTop(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsRechargeableFuelBelowThreshold (Underlying native function: IsRechargeableFuelBelowThreshold 0x803ec30)
	bool IsRechargeableFuelBelowThreshold(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsPendingDeath (Underlying native function: IsPendingDeath 0x803ebd0)
	bool IsPendingDeath(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsOverlappingWaterBody (Underlying native function: IsOverlappingWaterBody 0x803eba8)
	bool IsOverlappingWaterBody(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsOutOfRechargeableFuel (Underlying native function: IsOutOfRechargeableFuel 0x803eb7c)
	bool IsOutOfRechargeableFuel(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsOnFire (Underlying native function: IsOnFire 0x803eb60)
	bool IsOnFire(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsMagnetizedForSkyTubes (Underlying native function: IsMagnetizedForSkyTubes 0x803eb38)
	bool IsMagnetizedForSkyTubes(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsJumping (Underlying native function: IsJumping 0x801e7cc)
	bool IsJumping(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsInWaterBody (Underlying native function: IsInWaterBody 0x2aa7348)
	bool IsInWaterBody(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsInWater (Underlying native function: IsInWater 0x23bb978)
	bool IsInWater(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsInSkyTube (Underlying native function: IsInSkyTube 0x803eb10)
	bool IsInSkyTube(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsInReverseGear (Underlying native function: IsInReverseGear 0x803eae8)
	bool IsInReverseGear(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsInAir (Underlying native function: IsInAir 0x803eab8)
	bool IsInAir(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsHonking (Underlying native function: IsHonking 0x803ea90)
	bool IsHonking(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsEnforcingTeamRestriction (Underlying native function: IsEnforcingTeamRestriction 0x803ea74)
	bool IsEnforcingTeamRestriction(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsEnforcingMinigameClassRestriction (Underlying native function: IsEnforcingMinigameClassRestriction 0x803ea58)
	bool IsEnforcingMinigameClassRestriction(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsDriverSplitScreen (Underlying native function: IsDriverSplitScreen 0x803e9e0)
	bool IsDriverSplitScreen(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsDriverMinigameTeamRestricted (Underlying native function: IsDriverMinigameTeamRestricted 0x287fb00)
	bool IsDriverMinigameTeamRestricted(class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsCriticalHealth (Underlying native function: IsCriticalHealth 0x803e9b8)
	bool IsCriticalHealth(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsCorrectingOrientation (Underlying native function: IsCorrectingOrientation 0x803e990)
	bool IsCorrectingOrientation(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsCameraControlledRotation (Underlying native function: IsCameraControlledRotation 0x803e958)
	bool IsCameraControlledRotation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsBraking (Underlying native function: IsBraking 0x803e930)
	bool IsBraking(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsAsleep (Underlying native function: IsAsleep 0x29dce44)
	bool IsAsleep(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.IsAirControlling (Underlying native function: IsAirControlling 0x803e908)
	bool IsAirControlling(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.HasExploded (Underlying native function: HasExploded 0x28208e0)
	bool HasExploded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.HasEverContainedPlayers (Underlying native function: HasEverContainedPlayers 0x803e8d8)
	bool HasEverContainedPlayers(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.HasDriver (Underlying native function: HasDriver 0x28ddb40)
	bool HasDriver(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.HasConstraints (Underlying native function: HasConstraints 0x803e8b4)
	bool HasConstraints(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.HandleOutOfFuel (Underlying native function: HandleOutOfFuel 0x803e89c)
	void HandleOutOfFuel(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.HandleLowFuel (Underlying native function: HandleLowFuel 0x803e848)
	void HandleLowFuel(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.HandleFuelChanged (Underlying native function: HandleFuelChanged 0x223fe48)
	void HandleFuelChanged(float& NewFuelPercent, float& OldFuelPercent); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAthenaVehicle.GunOverheat (Has no native function)
	void GunOverheat(class UFortVehicleSeatWeaponComponent*& WeaponComponent); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetWaterLevel (Underlying native function: GetWaterLevel 0x803e830)
	float GetWaterLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetVehicleVelocity (Underlying native function: GetVehicleVelocity 0x13efbf8)
	struct FVector GetVehicleVelocity(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetTotalSpeedKmh (Underlying native function: GetTotalSpeedKmh 0x13efbcc)
	float GetTotalSpeedKmh(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetTireState (Underlying native function: GetTireState 0x25f5da4)
	bool GetTireState(int& TireIndex); // (Final | 0x00000002 | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetSteeringAngle (Underlying native function: GetSteeringAngle 0x803e818)
	float GetSteeringAngle(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetStandingFiringOffsetForSeat (Underlying native function: GetStandingFiringOffsetForSeat 0x803e770)
	struct FVector GetStandingFiringOffsetForSeat(int& SeatIdx); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetSpringLengthRatio (Underlying native function: GetSpringLengthRatio 0x803e6e0)
	float GetSpringLengthRatio(int& SpringIdx); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetSignificanceLOD (Underlying native function: GetSignificanceLOD 0x803e6b8)
	int GetSignificanceLOD(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetShootingCone (Underlying native function: GetShootingCone 0x803e510)
	bool GetShootingCone(int& SeatIdx, struct FTransform& OutConeTM, struct FAthenaVehicleShootingCone*& OutCone); // (0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetSelfDestructDelay (Underlying native function: GetSelfDestructDelay 0x803e4e4)
	float GetSelfDestructDelay(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetSelfDestructCleanupDelay (Underlying native function: GetSelfDestructCleanupDelay 0x803e4b8)
	float GetSelfDestructCleanupDelay(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetSeatSwitchCooldown (Underlying native function: GetSeatSwitchCooldown 0x803e420)
	float GetSeatSwitchCooldown(int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetPreviousLinearVelocity (Underlying native function: GetPreviousLinearVelocity 0x803e3f8)
	struct FVector GetPreviousLinearVelocity(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetPreviousLinearAcceleration (Underlying native function: GetPreviousLinearAcceleration 0x803e3d0)
	struct FVector GetPreviousLinearAcceleration(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetPontoonRadius (Underlying native function: GetPontoonRadius 0x803e33c)
	float GetPontoonRadius(int& PontoonIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetPawnAtSeat (Underlying native function: GetPawnAtSeat 0x803e2a8)
	class AFortPlayerPawn* GetPawnAtSeat(int& SeatIdx); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetNormalizedAudioRPM (Underlying native function: GetNormalizedAudioRPM 0x803e27c)
	float GetNormalizedAudioRPM(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetMinigameTeamID (Underlying native function: GetMinigameTeamID 0x803e194)
	unsigned char GetMinigameTeamID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetMinigameClassID (Underlying native function: GetMinigameClassID 0x803e17c)
	int GetMinigameClassID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetMaxZeroHealthTime (Underlying native function: GetMaxZeroHealthTime 0x803e150)
	float GetMaxZeroHealthTime(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetMaxHealth (Underlying native function: GetMaxHealth 0x1a0a300)
	float GetMaxHealth(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetIndicatorRelativeOffset (Underlying native function: GetIndicatorRelativeOffset 0x803e10c)
	struct FVector GetIndicatorRelativeOffset(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetHealth (Underlying native function: GetHealth 0x1a0ac5c)
	float GetHealth(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetExplosionDelay (Underlying native function: GetExplosionDelay 0x803e0e0)
	float GetExplosionDelay(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetDriver (Underlying native function: GetDriver 0x803e0b0)
	class AFortPlayerPawn* GetDriver(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetDisplayName (Underlying native function: GetDisplayName 0x803e034)
	struct FString GetDisplayName(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetDesiredForwardVelocityDelta (Underlying native function: GetDesiredForwardVelocityDelta 0x803e008)
	float GetDesiredForwardVelocityDelta(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetDesiredForwardVelocity (Underlying native function: GetDesiredForwardVelocity 0x803dfdc)
	float GetDesiredForwardVelocity(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetDesiredForwardSpeedKmh (Underlying native function: GetDesiredForwardSpeedKmh 0x803dfb0)
	float GetDesiredForwardSpeedKmh(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetCurrentRuntimeProperties (Underlying native function: GetCurrentRuntimeProperties 0x803df30)
	struct FVehicleRuntimeModifiers GetCurrentRuntimeProperties(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetCurrentGear (Underlying native function: GetCurrentGear 0x803df10)
	int GetCurrentGear(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetCurrentFOV (Underlying native function: GetCurrentFOV 0x803deb8)
	float GetCurrentFOV(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetCurrentForwardVelocity (Underlying native function: GetCurrentForwardVelocity 0x803dee4)
	float GetCurrentForwardVelocity(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetCurrentBrakeForce (Underlying native function: GetCurrentBrakeForce 0x803de1c)
	float GetCurrentBrakeForce(float& ForwardSpeedKmh); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetCrouchingFiringOffsetForSeat (Underlying native function: GetCrouchingFiringOffsetForSeat 0x803dd74)
	struct FVector GetCrouchingFiringOffsetForSeat(int& SeatIdx); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetBrakingDelta (Underlying native function: GetBrakingDelta 0x803dd48)
	float GetBrakingDelta(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetAllNonDriverPassengers (Underlying native function: GetAllNonDriverPassengers 0x803dca4)
	struct TArray<class AFortPlayerPawn*> GetAllNonDriverPassengers(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GetAccelerationAlpha (Underlying native function: GetAccelerationAlpha 0x13edfa8)
	float GetAccelerationAlpha(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.GameplayCue_Damage (Underlying native function: GameplayCue_Damage 0x1641fa8)
	void GameplayCueDamage(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.GamepadUseOrExitReleasedFromSeat (Underlying native function: GamepadUseOrExitReleasedFromSeat 0x803dc20)
	void GamepadUseOrExitReleasedFromSeat(int& FromSeatIndex); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.GamepadUseOrExitPressedFromSeat (Underlying native function: GamepadUseOrExitPressedFromSeat 0x803db9c)
	void GamepadUseOrExitPressedFromSeat(int& FromSeatIndex); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.ForceSeatSinglePawn (Underlying native function: ForceSeatSinglePawn 0x803dad4)
	bool ForceSeatSinglePawn(class AFortPlayerPawn*& PawnToSeat, int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.ForceSeatPawns (Underlying native function: ForceSeatPawns 0x803da20)
	void ForceSeatPawns(struct TArray<class AFortPlayerPawn*>& PawnsToSeat); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.FindSeatIndex (Underlying native function: FindSeatIndex 0x803d988)
	int FindSeatIndex(class AFortPlayerPawn*& PlayerPawn); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.EnableVehicleStencil (Underlying native function: EnableVehicleStencil 0x803d77c)
	static void EnableVehicleStencil(class AActor*& PotentialVehicle, bool& bEnable, bool& bHighlighted, int& StencilValueOverride); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.EjectSeat (Underlying native function: EjectSeat 0x803d6e8)
	bool EjectSeat(int& SeatIndex); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.EjectPlayerPawn (Underlying native function: EjectPlayerPawn 0x803d650)
	bool EjectPlayerPawn(class AFortPlayerPawn*& InPlayerPawn); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.EjectAllPlayers (Underlying native function: EjectAllPlayers 0x803d630)
	void EjectAllPlayers(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.DisableTrickCredit (Underlying native function: DisableTrickCredit 0x803d5a4)
	void DisableTrickCredit(float& Duration); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.DestroyVehicle (Underlying native function: DestroyVehicle 0x803d588)
	void DestroyVehicle(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.DestroyAllDamageableParts (Underlying native function: DestroyAllDamageableParts 0x273fd14)
	void DestroyAllDamageableParts(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.DemagnetizeFromSkyTube (Underlying native function: DemagnetizeFromSkyTube 0x25dd0e4)
	void DemagnetizeFromSkyTube(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.DebugDrawImpactBucket (Underlying native function: DebugDrawImpactBucket 0x803d45c)
	void DebugDrawImpactBucket(struct FVector& Location, struct FVector& ImpactVector, struct FColor& Color); // (0x00000002 | Net | NetReliable | Native | Event | Protected | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortAthenaVehicle.ContainsPlayers (Underlying native function: ContainsPlayers 0x803d42c)
	bool ContainsPlayers(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.ClientTeleportVehicleToLoc (Underlying native function: ClientTeleportVehicleToLoc 0x803d3ac)
	void ClientTeleportVehicleToLoc(struct FVector& TeleportLocation); // (0x00000002 | Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortAthenaVehicle.ClientIsDriver (Underlying native function: ClientIsDriver 0x803d37c)
	bool ClientIsDriver(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.ClientBroadcastAbilityImpactAtLocation (Underlying native function: ClientBroadcastAbilityImpactAtLocation 0x803d168)
	void ClientBroadcastAbilityImpactAtLocation(class UObject*& WorldContextObject, class USoundBase*& InSound, class UObject*& InInstigator, struct FVector& Velocity, float& Radius, struct FName& tag, bool& bSubtractLocalNoise); // (0x00000002 | Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortAthenaVehicle.CanTeleport (Underlying native function: CanTeleport 0x803d124)
	bool CanTeleport(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.CanShootFromSeat (Underlying native function: CanShootFromSeat 0x803d090)
	bool CanShootFromSeat(int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.CanForcePawnToSeat (Underlying native function: CanForcePawnToSeat 0x803cfc8)
	bool CanForcePawnToSeat(class AFortPlayerPawn*& PawnToSeat, int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.CanDriveOnIncline (Underlying native function: CanDriveOnIncline 0x803cfac)
	bool CanDriveOnIncline(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.CanCorrectOrientation (Underlying native function: CanCorrectOrientation 0x803cf18)
	bool CanCorrectOrientation(class AFortPawn*& FP); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.CanContainPlayers (Underlying native function: CanContainPlayers 0x803cee8)
	bool CanContainPlayers(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.CanAntigravityOnIncline (Underlying native function: CanAntigravityOnIncline 0x803cecc)
	bool CanAntigravityOnIncline(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.BroadcastResetWaterIdleTimeEmpty (Underlying native function: BroadcastResetWaterIdleTimeEmpty 0x2c3a98c)
	void BroadcastResetWaterIdleTimeEmpty(); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortAthenaVehicle.BreakSpawnedSleepLock (Underlying native function: BreakSpawnedSleepLock 0x273fd14)
	void BreakSpawnedSleepLock(); // (Final | BlueprintAuthorityOnly | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.BP_OnSpringCompression (Has no native function)
	void BPOnSpringCompression(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.BP_OnLowFuel (Has no native function)
	void BPOnLowFuel(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.BP_OnGainedFuel (Has no native function)
	void BPOnGainedFuel(float& NewPercent); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.BP_OnEmptyFuel (Has no native function)
	void BPOnEmptyFuel(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.BP_OnBoostStarted (Has no native function)
	void BPOnBoostStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.BP_OnBoostFinished (Has no native function)
	void BPOnBoostFinished(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.BP_CanInteract (Underlying native function: BP_CanInteract 0x803ce08)
	bool BPCanInteract(class AController*& InController); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicle.BlocksBuilding (Underlying native function: BlocksBuilding 0x803ce9c)
	bool BlocksBuilding(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.ApplyMaterialAndUseWrapIfPossible (Underlying native function: ApplyMaterialAndUseWrapIfPossible 0x1a095f8)
	class UMaterialInstanceDynamic* ApplyMaterialAndUseWrapIfPossible(class UMaterialInterface*& MaterialToUse, int& SlotIndex, bool& bAlwaysCreateMID); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.AnyWheelsOnGround (Underlying native function: AnyWheelsOnGround 0x803cde0)
	bool AnyWheelsOnGround(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.AllowInteractionBetweenFortVolume (Underlying native function: AllowInteractionBetweenFortVolume 0x803cdb0)
	bool AllowInteractionBetweenFortVolume(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicle.AddReasonWhyCantContainPlayers (Underlying native function: AddReasonWhyCantContainPlayers 0x803ccf0)
	void AddReasonWhyCantContainPlayers(struct FText& TextToAdd); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicle.AddObjectToIgnoreForShocks (Underlying native function: AddObjectToIgnoreForShocks 0x58c5440)
	bool AddObjectToIgnoreForShocks(class AActor*& Actor); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

