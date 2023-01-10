// Class /Script/NevadaRuntime.FortNevadaVehicle
// Size: 0x1fc0
class AFortNevadaVehicle : public AFortAthenaSKVehicle
{
	struct FNevadaState ServerReplicatedState; // 0x19c0 (0x14)
	unsigned char unreflected_19d4[0x4]; // 0x19d4 (0x4) 
	class UFortNevadaVehicleConfigs* FortNevadaVehicleConfigs; // 0x19d8 (0x8)
	class UClass* FortNevadaAudioControllerClass; // 0x19e0 (0x8)
	class UChildActorComponent* AudioControllerActor; // 0x19e8 (0x8)
	class AFortNevadaAudioController* FortNevadaAudioController; // 0x19f0 (0x8)
	struct FVehicleGamepadLiftInputs* LiftInputs; // 0x19f8 (0x8)
	float LastBatteryRegenTickTime; // 0x1a00 (0x4)
	bool bBoostThrust; // 0x1a04 (0x1)
	bool bBoostDrag; // 0x1a05 (0x1)
	bool bBoostInputReleased; // 0x1a06 (0x1)
	bool bUseTractorBeamUprightForce; // 0x1a07 (0x1)
	bool bDeadBattery; // 0x1a08 (0x1)
	unsigned char unreflected_1a09[0x3]; // 0x1a09 (0x3) 
	float TractorBeamExtraLengthForExtents; // 0x1a0c (0x4)
	struct FVector CrashingDesiredUp; // 0x1a10 (0x18)
	float BoostStartTime; // 0x1a28 (0x4)
	float BoostPitchAlpha; // 0x1a2c (0x4)
	float BoostChargeProgress; // 0x1a30 (0x4)
	int BoostChargesAvailable; // 0x1a34 (0x4)
	struct FVector CachedBoostMoveDir; // 0x1a38 (0x18)
	float CurrentStateStartTime; // 0x1a50 (0x4)
	float HeightAtLandingTime; // 0x1a54 (0x4)
	float CrashingScrapingTime; // 0x1a58 (0x4)
	float CrashingNotMovingTimer; // 0x1a5c (0x4)
	float AltimeterTraceHitDistance; // 0x1a60 (0x4)
	float TractorBeamAppliedForceMagnitude; // 0x1a64 (0x4)
	float AnimParamDriverSeatLeftRight; // 0x1a68 (0x4)
	float AnimParamDriverSeatForwardBack; // 0x1a6c (0x4)
	bool bForceNegativeLift; // 0x1a70 (0x1)
	bool bForcePositiveLift; // 0x1a71 (0x1)
	bool bInitialLift; // 0x1a72 (0x1)
	enum ENevadaFlightStates CurrentVehicleState; // 0x1a73 (0x1)
	unsigned char unreflected_1a74[0x4c]; // 0x1a74 (0x4c) 
	struct TWeakObjectPtr<class ALandscapeProxy> CachedLandscapeProxy; // 0x1ac0 (0x8)
	class UClass* PassengerCameraModeClass; // 0x1ac8 (0x8)
	bool bTractorBeamChargeStarted; // 0x1ad0 (0x1)
	unsigned char unreflected_1ad1[0x7]; // 0x1ad1 (0x7) 
	struct FTowhookParams TowhookParams; // 0x1ad8 (0xd0)
	class UClass* AttachedPawnHiddenVehicle; // 0x1ba8 (0x8)
	struct TWeakObjectPtr<class UPrimitiveComponent> TractorBeamAttachedPrimitive; // 0x1bb0 (0x8)
	class AFortAthenaVehicle* SpawnedTractorBeamVictimVehicle; // 0x1bb8 (0x8)
	struct TWeakObjectPtr<class UPrimitiveComponent> PreviousTractorBeamAttachedPrimitive; // 0x1bc0 (0x8)
	struct TArray<class AActor*> TractorBeamTargetedActors; // 0x1bc8 (0x10)
	struct TArray<class AActor*> PreviouslyTargetedActors; // 0x1bd8 (0x10)
	class AActor* TractorBeamAttachedActor; // 0x1be8 (0x8)
	class AActor* TractorBeamTargetedActor; // 0x1bf0 (0x8)
	struct FVector TractorBeamTargetPosition; // 0x1bf8 (0x18)
	unsigned char unreflected_1c10[0x1]; // 0x1c10 (0x1) 
	bool bBeamButtonReleased; // 0x1c11 (0x1)
	unsigned char unreflected_1c12[0x6]; // 0x1c12 (0x6) 
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> TractorBeamObjectsTypes; // 0x1c18 (0x10)
	struct FGameplayTagContainer DisallowedBeamTags; // 0x1c28 (0x20)
	struct FGameplayTagContainer AlwaysAllowedBeamTags; // 0x1c48 (0x20)
	unsigned char unreflected_1c68[0x98]; // 0x1c68 (0x98) 
	class UNiagaraSystem* TractorBeamFXUnattached; // 0x1d00 (0x8)
	class UNiagaraSystem* TractorBeamFXAttached; // 0x1d08 (0x8)
	class UNiagaraComponent* BeamPSC; // 0x1d10 (0x8)
	unsigned char unreflected_1d18[0x50]; // 0x1d18 (0x50) 
	struct TEnumAsByte<ETractorBeamState> TractorBeamState; // 0x1d68 (0x1)
	unsigned char unreflected_1d69[0x27]; // 0x1d69 (0x27) 
	float TractorBeamDeactivationTimestamp; // 0x1d90 (0x4)
	float TractorBeamDisruptedTimestamp; // 0x1d94 (0x4)
	unsigned char unreflected_1d98[0x80]; // 0x1d98 (0x80) 
	float CockpitHealth; // 0x1e18 (0x4)
	float NativeCockpitEnabled; // 0x1e1c (0x4)
	float LastCockpitHealthTickTime; // 0x1e20 (0x4)
	float LastCockpitDamageTime; // 0x1e24 (0x4)
	float CockpitDissolveStartTime; // 0x1e28 (0x4)
	unsigned char unreflected_1e2c[0x4]; // 0x1e2c (0x4) 
	struct FScalableFloat CockpitMaxHealth; // 0x1e30 (0x28)
	struct FScalableFloat CockpitHealthTickRate; // 0x1e58 (0x28)
	struct FScalableFloat CockpitHealthPerTick; // 0x1e80 (0x28)
	struct FScalableFloat CockpitRegenDelay; // 0x1ea8 (0x28)
	class UCurveFloat* CockpitHitMaterialWobble; // 0x1ed0 (0x8)
	float LastDamageAlpha; // 0x1ed8 (0x4)
	bool bDissolvingCockpit; // 0x1edc (0x1)
	bool bRestoringCockpit; // 0x1edd (0x1)
	bool bCockpitWobble; // 0x1ede (0x1)
	unsigned char unreflected_1edf[0x1]; // 0x1edf (0x1) 
	class UStaticMeshComponent* NativeCompShieldMesh; // 0x1ee0 (0x8)
	class UMaterialInstanceDynamic* NativeCockpitMaterial; // 0x1ee8 (0x8)
	class UMaterialInstanceDynamic* NativeEnergyRingMatInstance; // 0x1ef0 (0x8)
	class UMaterialInstanceDynamic* NativeEnergyFieldMatInstance; // 0x1ef8 (0x8)
	class UAudioComponent* NativeCompDamageStateLastLife; // 0x1f00 (0x8)
	class UAudioComponent* NativeCompDamageState; // 0x1f08 (0x8)
	struct FVector NativeLastHitLocation; // 0x1f10 (0x18)
	struct FVector NativeLastHitNormal; // 0x1f28 (0x18)
	class UNiagaraComponent* NativeCompDamageStateFX; // 0x1f40 (0x8)
	class UNiagaraComponent* NativeCompHologramScreen; // 0x1f48 (0x8)
	class UNiagaraComponent* NativeCompSpeedLines; // 0x1f50 (0x8)
	class UMaterialInterface* NativeEnergyRingMat; // 0x1f58 (0x8)
	class UMaterialInterface* NativeEnergyFieldMat; // 0x1f60 (0x8)
	class UNiagaraSystem* NativeSysDamageStateFX; // 0x1f68 (0x8)
	class UNiagaraSystem* NativeSysCockpitDestroyed; // 0x1f70 (0x8)
	class USoundBase* CockpitDamagedSound; // 0x1f78 (0x8)
	class USoundBase* CockpitDestroyedSound; // 0x1f80 (0x8)
	class USoundBase* CockpitRespawnSound; // 0x1f88 (0x8)
	class USoundBase* NativeDamageStateSound; // 0x1f90 (0x8)
	class USoundBase* NativeDamageStateLastLifeSound; // 0x1f98 (0x8)
	class UForceFeedbackEffect* CockpitDeactivatedForceFeedback; // 0x1fa0 (0x8)
	class UClass* CockpitDestroyedCamShake; // 0x1fa8 (0x8)
	struct TArray<class UClass*> TractorBeamDisallowedClasses; // 0x1fb0 (0x10)

	/* Functions */

	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetTractorBeamInactive (Underlying native function: SetTractorBeamInactive 0x6fdba60)
	void SetTractorBeamInactive(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetTractorBeamEnabled (Underlying native function: SetTractorBeamEnabled 0x6df775c)
	void SetTractorBeamEnabled(bool& bEnabled); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetCannonEnabled (Underlying native function: SetCannonEnabled 0x6df775c)
	void SetCannonEnabled(bool& bEnabled); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.SetAttachedPawnAddedVelocity (Underlying native function: SetAttachedPawnAddedVelocity 0x6fdb9d8)
	void SetAttachedPawnAddedVelocity(struct FVector& AddedVelocity); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamDetached (Has no native function)
	void OnTractorBeamDetached(class AActor*& DetachedActor, struct FVector& LastBeamPosition); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamDeactivated (Has no native function)
	void OnTractorBeamDeactivated(struct FVector& LastBeamPosition); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamChargeStarted (Has no native function)
	void OnTractorBeamChargeStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamAttached (Has no native function)
	void OnTractorBeamAttached(); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTractorBeamActivated (Has no native function)
	void OnTractorBeamActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnTargetedActorChanged (Has no native function)
	void OnTargetedActorChanged(class AActor*& NewTargetedActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnStartDescend (Has no native function)
	void OnStartDescend(); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnStartAscend (Has no native function)
	void OnStartAscend(); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamState (Underlying native function: OnRep_TractorBeamState 0x6fdb94c)
	void OnRepTractorBeamState(struct TEnumAsByte<ETractorBeamState>& PreviousState); // (Final | Native | Protected)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamChargeStarted (Underlying native function: OnRep_TractorBeamChargeStarted 0x6fdb8f0)
	void OnRepTractorBeamChargeStarted(); // (Final | Native | Public)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamAttached (Underlying native function: OnRep_TractorBeamAttached 0x6fdb8dc)
	void OnRepTractorBeamAttached(); // (Final | Native | Protected)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_TargetedActorChanged (Underlying native function: OnRep_TargetedActorChanged 0x6fdb8a0)
	void OnRepTargetedActorChanged(); // (Final | Native | Public)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_ReplicatedTargetedActors (Underlying native function: OnRep_ReplicatedTargetedActors 0x6fdb83c)
	void OnRepReplicatedTargetedActors(); // (Final | Native | Public)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRep_NevadaState (Underlying native function: OnRep_NevadaState 0x6fdb794)
	void OnRepNevadaState(struct FNevadaState& PrevState); // (Final | Native | Protected | HasOutParms)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRebootStarted (Has no native function)
	void OnRebootStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnRebootFinished (Has no native function)
	void OnRebootFinished(); // (Event | Public | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnOutOfBattery (Has no native function)
	void OnOutOfBattery(); // (Event | Public | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnNewVehicleState (Has no native function)
	void OnNewVehicleState(enum ENevadaFlightStates& NewVehicleState); // (Event | Protected | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnCrashingStarted (Has no native function)
	void OnCrashingStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnCrashedImpact (Has no native function)
	void OnCrashedImpact(); // (Event | Public | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBoostStarted (Has no native function)
	void OnBoostStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBoostFinished (Has no native function)
	void OnBoostFinished(); // (Event | Public | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBoostChargeRefilled (Has no native function)
	void OnBoostChargeRefilled(); // (Event | Public | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnBatteryRegen (Has no native function)
	void OnBatteryRegen(float& Newcharge); // (Event | Public | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnAttachedActorDied (Underlying native function: OnAttachedActorDied 0x6fdb57c)
	void OnAttachedActorDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Public | HasDefaults)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.OnAttachedActorDestroyed (Underlying native function: OnAttachedActorDestroyed 0x6fdb500)
	void OnAttachedActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Public)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.NativeToggleCockpit (Underlying native function: NativeToggleCockpit 0x6fdb480)
	void NativeToggleCockpit(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.IsTractorBeamDisrupted (Underlying native function: IsTractorBeamDisrupted 0x6fdb404)
	bool IsTractorBeamDisrupted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.IsTractorBeamAttached (Underlying native function: IsTractorBeamAttached 0x6fdb3e0)
	bool IsTractorBeamAttached(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.IsTractorBeamActive (Underlying native function: IsTractorBeamActive 0x6fdb3b8)
	bool IsTractorBeamActive(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetTractorBeamAttachLocation (Underlying native function: GetTractorBeamAttachLocation 0x6fdb2c4)
	struct FVector GetTractorBeamAttachLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetNumRebootsAvailable (Underlying native function: GetNumRebootsAvailable 0x6fdb2ac)
	int GetNumRebootsAvailable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetEnergyCanonChargePercent (Underlying native function: GetEnergyCanonChargePercent 0x6fdb284)
	float GetEnergyCanonChargePercent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetDriverSeatRotationAnimParams (Underlying native function: GetDriverSeatRotationAnimParams 0x6fdb1a8)
	void GetDriverSeatRotationAnimParams(float& OutLeftRight, float& OutForwardBack); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetCurrentVehicleState (Underlying native function: GetCurrentVehicleState 0x6fdb190)
	enum ENevadaFlightStates GetCurrentVehicleState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBoostChargeTimeRemaining (Underlying native function: GetBoostChargeTimeRemaining 0x6fdb144)
	float GetBoostChargeTimeRemaining(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBoostChargesAvailable (Underlying native function: GetBoostChargesAvailable 0x6fdb178)
	int GetBoostChargesAvailable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBoostChargeProgress (Underlying native function: GetBoostChargeProgress 0x6fdb124)
	float GetBoostChargeProgress(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetBatteryCharge (Underlying native function: GetBatteryCharge 0x6fdb0fc)
	float GetBatteryCharge(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.GetAudioController (Underlying native function: GetAudioController 0x6fdb0e4)
	class AFortNevadaAudioController* GetAudioController(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.EnablePilotBubbleCollisionOnServer (Underlying native function: EnablePilotBubbleCollisionOnServer 0x6df775c)
	void EnablePilotBubbleCollisionOnServer(bool& bNewCollisionEnabled); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.DisruptTractorBeam (Underlying native function: DisruptTractorBeam 0x6fdb090)
	void DisruptTractorBeam(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/NevadaRuntime.FortNevadaVehicle.AddPhysicsImpulseToTractorBeamAttachedActor (Underlying native function: AddPhysicsImpulseToTractorBeamAttachedActor 0x6fdaed0)
	void AddPhysicsImpulseToTractorBeamAttachedActor(struct FVector& Impulse, struct FName& BoneName, bool& bVelChange); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)
};

