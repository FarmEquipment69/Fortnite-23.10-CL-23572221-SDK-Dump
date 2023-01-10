// Class /Script/ValetRuntime.FortDagwoodVehicle
// Size: 0x2050
class AFortDagwoodVehicle : public AFortAthenaSKMotorVehicle
{
	class UClass* HardLandingCameraShake; // 0x1a38 (0x8)
	class UClass* DriverCamShakeClass; // 0x1a40 (0x8)
	class UClass* HandBrakeCamShakeClass; // 0x1a48 (0x8)
	enum EVehicleClass VehicleClass; // 0x1a50 (0x1)
	unsigned char unreflected_1a51[0x3]; // 0x1a51 (0x3) 
	float FadeDelay; // 0x1a54 (0x4)
	float FadeDuration; // 0x1a58 (0x4)
	float MinBrakeForceForSkid; // 0x1a5c (0x4)
	float MinForwardSpeedForSkid; // 0x1a60 (0x4)
	struct FGameplayTag SpeedLinesCueTag; // 0x1a64 (0x4)
	float FadeStartTime; // 0x1a68 (0x4)
	unsigned char unreflected_1a6c[0x4]; // 0x1a6c (0x4) 
	class UDagwoodNetworkPhysicsComponent* NetworkPhysicsComponent; // 0x1a70 (0x8)
	unsigned char unreflected_1a78[0x78]; // 0x1a78 (0x78) 
	struct FMulticastInlineDelegate OnTireModHealthChanged; // 0x1af0 (0x10)
	float RechargeableBoostPercent; // 0x1b00 (0x4)
	unsigned char unreflected_1b04[0x4]; // 0x1b04 (0x4) 
	class UFortSplatterSourceComponent* SplatterSourceComp; // 0x1b08 (0x8)
	bool bEnableNativizedTick; // 0x1b10 (0x1)
	unsigned char unreflected_1b11[0x7]; // 0x1b11 (0x7) 
	struct TArray<struct FName> PassengerLeanSockets; // 0x1b18 (0x10)
	struct TArray<struct FVector> PassngerLeanRelativeOffsets; // 0x1b28 (0x10)
	class UClass* PassengerCameraModeClass; // 0x1b38 (0x8)
	class UClass* PassengerCameraModeClassADS; // 0x1b40 (0x8)
	struct TArray<struct FName> WheelSocketNames; // 0x1b48 (0x10)
	class UFortDagwoodVehicleConfigs* FortDagwoodVehicleConfigs; // 0x1b58 (0x8)
	struct TArray<int> RearShocks; // 0x1b60 (0x10)
	struct FGameplayTagContainer OffroadEnvironmentDamageTags; // 0x1b70 (0x20)
	struct FGameplayTagContainer FireDamageTags; // 0x1b90 (0x20)
	struct FVector NativeWheelScaleRear; // 0x1bb0 (0x18)
	struct FVector NativeWheelScaleFront; // 0x1bc8 (0x18)
	struct FVector NativeTireScaleRear; // 0x1be0 (0x18)
	struct FVector NativeTireScaleFront; // 0x1bf8 (0x18)
	bool bTireSmokeActive; // 0x1c10 (0x1)
	bool bBoostFailed; // 0x1c11 (0x1)
	bool bCanBoostPitch; // 0x1c12 (0x1)
	bool bWasBrakeSkidding; // 0x1c13 (0x1)
	unsigned char unreflected_1c14[0x4]; // 0x1c14 (0x4) 
	uint64_t AccelForceFeedbackHandle; // 0x1c18 (0x8)
	uint64_t SkidForceFeedbackHandle; // 0x1c20 (0x8)
	uint64_t BrakeForceFeedbackHandle; // 0x1c28 (0x8)
	uint64_t HandBrakeForceFeedbackHandle; // 0x1c30 (0x8)
	bool bSpeedLinesActive; // 0x1c38 (0x1)
	unsigned char unreflected_1c39[0x1f]; // 0x1c39 (0x1f) 
	struct FDagwoodRuntimeModifiers DagwoodRuntimeModifiedProperties; // 0x1c58 (0x70)
	struct TArray<struct FAttachedWheel> ServerRepWheelData; // 0x1cc8 (0x10)
	unsigned char unreflected_1cd8[0x50]; // 0x1cd8 (0x50) 
	struct FVector FlipYawForwardTargetDirection; // 0x1d28 (0x18)
	struct FVector FlipYawOriginalForward; // 0x1d40 (0x18)
	enum ETireLocations LastPoppedTire; // 0x1d58 (0x1)
	unsigned char unreflected_1d59[0x3]; // 0x1d59 (0x3) 
	float RoadTopSpeedMultiplier; // 0x1d5c (0x4)
	float CurrentBumpiness; // 0x1d60 (0x4)
	float CurrentForwardAcceleration; // 0x1d64 (0x4)
	float PreviousTurnAlpha; // 0x1d68 (0x4)
	float CurrentCameraAssistStrength; // 0x1d6c (0x4)
	float LostGripTime; // 0x1d70 (0x4)
	float LostGripRightAlpha; // 0x1d74 (0x4)
	float HandbrakeTime; // 0x1d78 (0x4)
	float HandbrakeStartTime; // 0x1d7c (0x4)
	float FlipYawMult; // 0x1d80 (0x4)
	float FlipTimer; // 0x1d84 (0x4)
	float FlipExplodeTimer; // 0x1d88 (0x4)
	float FlipPushForceTimer; // 0x1d8c (0x4)
	float FlipAirTimer; // 0x1d90 (0x4)
	float FlipLanding; // 0x1d94 (0x4)
	float FlipStartTime; // 0x1d98 (0x4)
	float LastFlipDamageTime; // 0x1d9c (0x4)
	float PreFlipControlLossTimer; // 0x1da0 (0x4)
	bool bDidCinematicFlip; // 0x1da4 (0x1)
	bool bCanCinematicFlip; // 0x1da5 (0x1)
	bool bInPopTireVeer; // 0x1da6 (0x1)
	bool bInFlipRecovery; // 0x1da7 (0x1)
	bool bExplodeAfterFlip; // 0x1da8 (0x1)
	bool bLostGrip; // 0x1da9 (0x1)
	bool bApplyHandbrakeCatchupForce; // 0x1daa (0x1)
	bool bDidHandbrakeCatchup; // 0x1dab (0x1)
	bool bInFlipRoll; // 0x1dac (0x1)
	bool bInFlipYaw; // 0x1dad (0x1)
	bool bInFlipPitch; // 0x1dae (0x1)
	bool bFlipDidLeaveGround; // 0x1daf (0x1)
	bool bBreakBuildingsIfBlockingLeaningPassenger; // 0x1db0 (0x1)
	unsigned char unreflected_1db1[0x3]; // 0x1db1 (0x3) 
	float LeanBreakTimeAccumulator; // 0x1db4 (0x4)
	float LeanBreakCheckInterval; // 0x1db8 (0x4)
	unsigned char unreflected_1dbc[0x4]; // 0x1dbc (0x4) 
	struct TArray<struct FName> SeatToWindowShapeNames; // 0x1dc0 (0x10)
	class ULegacyCameraShake* OffroadCameraShakeInstance; // 0x1dd0 (0x8)
	class ULegacyCameraShake* DriverCameraShakeInstance; // 0x1dd8 (0x8)
	class ULegacyCameraShake* AccelCameraShakeInstance; // 0x1de0 (0x8)
	class ULegacyCameraShake* HandBrakeCameraShakeInstance; // 0x1de8 (0x8)
	class UNiagaraComponent* NativeCompRoadAndExhaust; // 0x1df0 (0x8)
	class UNiagaraComponent* NativeCompTireSkid; // 0x1df8 (0x8)
	class UNiagaraComponent* NativeCompDamage; // 0x1e00 (0x8)
	class UNiagaraComponent* NativeCompSpeedLines; // 0x1e08 (0x8)
	class UNiagaraSystem* NativeSysTireExhaust; // 0x1e10 (0x8)
	class UNiagaraSystem* NativeSysSpeedLines; // 0x1e18 (0x8)
	class UNiagaraSystem* NativeSysTireSkid; // 0x1e20 (0x8)
	struct TArray<struct TEnumAsByte<EPhysicalSurface>> RoadAndExhaustSurfaceTypeArrayForFX; // 0x1e28 (0x10)
	struct FString RoadAndExhaustPeelOutColorIndexName; // 0x1e38 (0x10)
	unsigned char unreflected_1e48[0x10]; // 0x1e48 (0x10) 
	struct TArray<enum ETireStates> FakeTireStates; // 0x1e58 (0x10)
	enum EPoppedTireReactionStates ActivePoppedTireReaction; // 0x1e68 (0x1)
	enum EPoppedTireReactionStates ReplicatedPoppedTireReaction; // 0x1e69 (0x1)
	unsigned char unreflected_1e6a[0x2]; // 0x1e6a (0x2) 
	struct TWeakObjectPtr<class AFortValetAudioController> ValetAudio; // 0x1e6c (0x8)
	unsigned char unreflected_1e74[0x4]; // 0x1e74 (0x4) 
	struct TArray<class UStaticMeshComponent*> TireMeshes; // 0x1e78 (0x10)
	struct TArray<class UStaticMeshComponent*> FakeTireMeshes; // 0x1e88 (0x10)
	unsigned char unreflected_1e98[0x4]; // 0x1e98 (0x4) 
	bool bIsInoperable; // 0x1e9c (0x1)
	unsigned char unreflected_1e9d[0x3]; // 0x1e9d (0x3) 
	int RandomSeed; // 0x1ea0 (0x4)
	struct FRandomStream* RandStream; // 0x1ea4 (0x8)
	unsigned char unreflected_1eac[0x104]; // 0x1eac (0x104) 
	unsigned char bSelfDestructEnabled; // 0x1fb0 (0x1)
	unsigned char bClientUsesSelfDestructTimer; // 0x1fb0 (0x1)
	unsigned char unreflected_1fb1[0x7]; // 0x1fb1 (0x7) 
	class UStaticMesh* TireBootMesh; // 0x1fb8 (0x8)
	struct TMap<int, struct FDagwoodActionDefForUI> MapSelfDestructActionDefForUI; // 0x1fc0 (0x50)
	float MinimumTimeBetweenSelfDestructPromptChanges; // 0x2010 (0x4)
	unsigned char padding_2014[0x3c]; // 0x2014 (0x3c)

	/* Functions */

	// Function /Script/ValetRuntime.FortDagwoodVehicle.StartFade (Underlying native function: StartFade 0x6df82a0)
	void StartFade(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetValetAudioController (Underlying native function: SetValetAudioController 0x2754ac8)
	void SetValetAudioController(class AFortValetAudioController*& ValetAudio); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetDamageInfoOnServer (Underlying native function: SetDamageInfoOnServer 0x6df7f9c)
	void SetDamageInfoOnServer(bool& bInDamageFriendlyVehicles, bool& bInDamageOtherVehicles, bool& bInDamageOwnVehicle, bool& bInDamageAllowedFromOtherVehicle); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeSpringsInfo (Underlying native function: ServerSetRuntimeSpringsInfo 0x6df7f00)
	void ServerSetRuntimeSpringsInfo(struct FRuntimeSpringsInfo& SpringsInfo); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeGravity (Underlying native function: ServerSetRuntimeGravity 0x6df7e6c)
	void ServerSetRuntimeGravity(float& GravMult); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeFuelInfo (Underlying native function: ServerSetRuntimeFuelInfo 0x6df7dbc)
	void ServerSetRuntimeFuelInfo(struct FRuntimeFuelInfo& FuelInfo); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeDriveInfo (Underlying native function: ServerSetRuntimeDriveInfo 0x6df7ce0)
	void ServerSetRuntimeDriveInfo(float& MaxIncline, float& MaxTilt); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeBoostInfo (Underlying native function: ServerSetRuntimeBoostInfo 0x6df7c2c)
	void ServerSetRuntimeBoostInfo(struct FRuntimeBoostInfo& BoostInfo); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.ServerSetFadeDuration (Underlying native function: ServerSetFadeDuration 0x6df7bc0)
	void ServerSetFadeDuration(float& NewFadeDuration); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.ServerSelfDestructActivated (Underlying native function: ServerSelfDestructActivated 0x6df7ba8)
	void ServerSelfDestructActivated(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.ServerAddRuntimeGearsInfo (Underlying native function: ServerAddRuntimeGearsInfo 0x6df7b14)
	void ServerAddRuntimeGearsInfo(struct FRuntimeGearInfo& GearInfo); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.SelfDestructCleanup (Underlying native function: SelfDestructCleanup 0x6df7b00)
	void SelfDestructCleanup(); // (Final | Native | Public)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnTickAudioFade (Has no native function)
	void OnTickAudioFade(float& FadeParam); // (Event | Public | BlueprintEvent)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnTickAudioController (Has no native function)
	void OnTickAudioController(float& DeltaTime); // (Event | Public | BlueprintEvent)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnStopHandbrake (Has no native function)
	void OnStopHandbrake(); // (Event | Public | BlueprintEvent)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnStartHandbrake (Has no native function)
	void OnStartHandbrake(); // (Event | Public | BlueprintEvent)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnServerAltInteract (Has no native function)
	void OnServerAltInteract(class AFortPawn*& Pawn); // (Event | Public | BlueprintEvent)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_ServerRepWheelData (Underlying native function: OnRep_ServerRepWheelData 0x130676c)
	void OnRepServerRepWheelData(struct TArray<struct FAttachedWheel>& PrevWheelData); // (Final | Native | Private | HasOutParms)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_RandSeed (Underlying native function: OnRep_RandSeed 0x28a08a0)
	void OnRepRandSeed(); // (Final | Native | Private)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_PoppedTireReaction (Underlying native function: OnRep_PoppedTireReaction 0x6df7940)
	void OnRepPoppedTireReaction(); // (Final | Native | Private)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_IsInoperable (Underlying native function: OnRep_IsInoperable 0x260dbd0)
	void OnRepIsInoperable(); // (Final | Native | Private)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_FakeTires (Underlying native function: OnRep_FakeTires 0x293ed38)
	void OnRepFakeTires(struct TArray<enum ETireStates>& PrevTireStates); // (Final | Native | Private | HasOutParms)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_DagwoodRuntimeModifiers (Underlying native function: OnRep_DagwoodRuntimeModifiers 0x1758338)
	void OnRepDagwoodRuntimeModifiers(struct FDagwoodRuntimeModifiers& PrevMods); // (Final | Native | Private | HasOutParms)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnInoperableChanged (Has no native function)
	void OnInoperableChanged(bool& bInoperable); // (Event | Public | BlueprintEvent)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStopped (Has no native function)
	void OnHoldSelfDestructStopped(class AFortPawn*& DriverPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStarted (Has no native function)
	void OnHoldSelfDestructStarted(class AFortPawn*& DriverPawn, float& ExitDuration); // (Event | Protected | BlueprintEvent)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnFlipImpactDamage (Has no native function)
	void OnFlipImpactDamage(); // (Event | Public | BlueprintEvent)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnDestroyedPropFromCollision (Has no native function)
	void OnDestroyedPropFromCollision(class ABuildingActor*& BuildingHitActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnClientBeginAltInteract (Has no native function)
	void OnClientBeginAltInteract(class AFortPawn*& Pawn); // (Event | Public | BlueprintEvent)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnBoostReady (Has no native function)
	void OnBoostReady(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnBoostFailed (Has no native function)
	void OnBoostFailed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.NativeCalculateAccelRumbleIntensity (Underlying native function: NativeCalculateAccelRumbleIntensity 0x6df77c0)
	float NativeCalculateAccelRumbleIntensity(float& MaxIntensity); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.MakeOperable (Underlying native function: MakeOperable 0x6df775c)
	void MakeOperable(bool& bAddGas); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.MakeInoperable (Underlying native function: MakeInoperable 0x6df773c)
	void MakeInoperable(); // (Native | Public | BlueprintCallable)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.IsTireSkidding (Underlying native function: IsTireSkidding 0x6df75f8)
	bool IsTireSkidding(float& MinSpeedForSkid, float& AngleForSkid, float& SpeedForPeelout, float& SpeedForBraking); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.IsOnLandscape (Underlying native function: IsOnLandscape 0x6df75e0)
	bool IsOnLandscape(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.IsNativeBPTickEnabled (Underlying native function: IsNativeBPTickEnabled 0x2830cb8)
	bool IsNativeBPTickEnabled(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.HandleCurrentPlaylistLoaded (Underlying native function: HandleCurrentPlaylistLoaded 0x6df73e8)
	void HandleCurrentPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Protected | HasOutParms)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetTireSurface (Underlying native function: GetTireSurface 0x6df735c)
	enum ETireSurfaces GetTireSurface(enum ETireLocations& TireIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetTireHealthPercent (Underlying native function: GetTireHealthPercent 0x6df72c4)
	float GetTireHealthPercent(enum ETireLocations& TireIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetMiddleAxleForwardAdjust (Underlying native function: GetMiddleAxleForwardAdjust 0x2bb9d78)
	float GetMiddleAxleForwardAdjust(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetCurrentDagwoodRuntimeProperties (Underlying native function: GetCurrentDagwoodRuntimeProperties 0x6df7174)
	struct FDagwoodRuntimeModifiers GetCurrentDagwoodRuntimeProperties(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetBumpiness (Underlying native function: GetBumpiness 0x6df715c)
	float GetBumpiness(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.ForwardOrReverseInputPressed (Underlying native function: ForwardOrReverseInputPressed 0x6df7138)
	bool ForwardOrReverseInputPressed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.CleanupLoopingPooledFX (Underlying native function: CleanupLoopingPooledFX 0x6df70bc)
	void CleanupLoopingPooledFX(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/ValetRuntime.FortDagwoodVehicle.ApplyRuntimeModifiers (Underlying native function: ApplyRuntimeModifiers 0x6df70a8)
	void ApplyRuntimeModifiers(); // (Final | Native | Private)
};

