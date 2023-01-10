// Class /Script/FortniteGame.FortSafeZoneIndicator
// Size: 0x610
class AFortSafeZoneIndicator : public AActor
{
	class UFortMiniMapComponent* MinimapComp; // 0x288 (0x8)
	float PreviousRadius; // 0x290 (0x4)
	float NextRadius; // 0x294 (0x4)
	float NextNextRadius; // 0x298 (0x4)
	unsigned char unreflected_29c[0x4]; // 0x29c (0x4) 
	struct FVector_NetQuantize100 PreviousCenter; // 0x2a0 (0x18)
	struct FVector_NetQuantize100 NextCenter; // 0x2b8 (0x18)
	struct FVector_NetQuantize100 NextNextCenter; // 0x2d0 (0x18)
	bool bSafezoneEventDriven; // 0x2e8 (0x1)
	bool bPaused; // 0x2e9 (0x1)
	bool bPausedForPreview; // 0x2ea (0x1)
	bool bPausedForPreviewPrevious; // 0x2eb (0x1)
	int PlaylistMaxSafeZoneIndex; // 0x2ec (0x4)
	struct FGameplayTag MegaStormGameplayCueTag; // 0x2f0 (0x4)
	int NextNextMegaStormGridCellThickness; // 0x2f4 (0x4)
	int NextMegaStormGridCellThickness; // 0x2f8 (0x4)
	float MegaStormDelayTimeBeforeDestruction; // 0x2fc (0x4)
	int NumActiveMegaStormCircles; // 0x300 (0x4)
	int ActiveMegaStormCircleGridCellCountFromEdge; // 0x304 (0x4)
	float SafeZoneHeight; // 0x308 (0x4)
	unsigned char unreflected_30c[0x14]; // 0x30c (0x14) 
	struct FSlateBrush MiniMapIconBrush; // 0x320 (0xc0)
	struct FSlateBrush FarOffMiniMapIconBrush; // 0x3e0 (0xc0)
	unsigned char unreflected_4a0[0x8]; // 0x4a0 (0x8) 
	struct FMulticastInlineDelegate SafezoneStateChangedDelegate; // 0x4a8 (0x10)
	struct FMulticastInlineDelegate OnSafeZonePhaseChanged; // 0x4b8 (0x10)
	unsigned char unreflected_4c8[0x10]; // 0x4c8 (0x10) 
	int CurrentPhase; // 0x4d8 (0x4)
	struct FFortSafeZoneDamageInfo* CurrentDamageInfo; // 0x4dc (0x8)
	int PhaseCount; // 0x4e4 (0x4)
	float SafeZoneStartShrinkTime; // 0x4e8 (0x4)
	float SafeZoneFinishShrinkTime; // 0x4ec (0x4)
	float Radius; // 0x4f0 (0x4)
	unsigned char unreflected_4f4[0x4]; // 0x4f4 (0x4) 
	class UStaticMeshComponent* SafeZoneMesh; // 0x4f8 (0x8)
	class UCurveFloat* MovementAudioCrossfadeCurve; // 0x500 (0x8)
	class UCurveFloat* MovementAudioPitchModCurve; // 0x508 (0x8)
	class UCurveFloat* ClockTickingAudioVolumeCurve; // 0x510 (0x8)
	class UCurveFloat* ClockTickingAudioPitchCurve; // 0x518 (0x8)
	struct FVector2D SafeZoneAudioSpeedRange; // 0x520 (0x10)
	float AudioDopplerInterpSpeed; // 0x530 (0x4)
	unsigned char unreflected_534[0x4]; // 0x534 (0x4) 
	class UMaterialParameterCollection* MaterialCollection; // 0x538 (0x8)
	struct FName SafeZoneLocName; // 0x540 (0x4)
	struct FName SafeZoneScaleName; // 0x544 (0x4)
	float SafeZoneWorldScale; // 0x548 (0x4)
	unsigned char unreflected_54c[0x4]; // 0x54c (0x4) 
	struct FVector ViewTargetLocation; // 0x550 (0x18)
	struct FVector SafeZoneAudioLocation; // 0x568 (0x18)
	bool bIsViewTargetPawnOutside; // 0x580 (0x1)
	unsigned char unreflected_581[0x3]; // 0x581 (0x3) 
	struct FName SuperStormActiveName; // 0x584 (0x4)
	float MegaStormFXAlphaFactor; // 0x588 (0x4)
	float MegaStormFXFadeInTime; // 0x58c (0x4)
	float MegaStormFXFadeOutTime; // 0x590 (0x4)
	bool bMegaStormGameplayCueStarted; // 0x594 (0x1)
	bool bMegaStormStopPending; // 0x595 (0x1)
	bool bCleanupFXWithAlphaFactor; // 0x596 (0x1)
	unsigned char unreflected_597[0x1]; // 0x597 (0x1) 
	float MegaStormOneOverFXFadeInTime; // 0x598 (0x4)
	float MegaStormOneOverFXFadeOutTime; // 0x59c (0x4)
	class UAudioComponent* ShieldBoundaryAudio; // 0x5a0 (0x8)
	class UAudioComponent* HoldingAudio; // 0x5a8 (0x8)
	class UAudioComponent* HoldingTickAudio; // 0x5b0 (0x8)
	bool bMegastormAudioActive; // 0x5b8 (0x1)
	unsigned char unreflected_5b9[0x3]; // 0x5b9 (0x3) 
	float AudioLowPassValue; // 0x5bc (0x4)
	float AudioPitchMod; // 0x5c0 (0x4)
	float AudioCrossfade; // 0x5c4 (0x4)
	float MegastormAudioIntensity; // 0x5c8 (0x4)
	float HoldingStartTime; // 0x5cc (0x4)
	bool bPreviewDuringWarmup; // 0x5d0 (0x1)
	unsigned char unreflected_5d1[0x3]; // 0x5d1 (0x3) 
	float TimeRemainingWhenPhasePaused; // 0x5d4 (0x4)
	unsigned char ForceUpdateCount; // 0x5d8 (0x1)
	unsigned char unreflected_5d9[0x27]; // 0x5d9 (0x27) 
	class AFortSafeZoneIndicatorFuture* FutureReplicator; // 0x600 (0x8)
	unsigned char padding_608[0x8]; // 0x608 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortSafeZoneIndicator.StopPreviewingPhase (Underlying native function: StopPreviewingPhase 0x273fd14)
	void StopPreviewingPhase(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.StartPhase (Underlying native function: StartPhase 0x6e8edb4)
	void StartPhase(int& InPhaseIndex); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.ShouldShowWarmupPreview (Underlying native function: ShouldShowWarmupPreview 0x8181f54)
	bool ShouldShowWarmupPreview(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.SetShowWarmupPreview (Underlying native function: SetShowWarmupPreview 0x6df775c)
	void SetShowWarmupPreview(bool& bNewPreviewDuringWarmup); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.SetSafeZoneRadiusAndCenter (Underlying native function: SetSafeZoneRadiusAndCenter 0x8181d70)
	void SetSafeZoneRadiusAndCenter(float& InRadius, struct FVector& InLocation); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.SetSafeZoneRadius (Underlying native function: SetSafeZoneRadius 0x6df7bc0)
	void SetSafeZoneRadius(float& InRadius); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.SetSafeZonePhases (Underlying native function: SetSafeZonePhases 0x8181cf4)
	void SetSafeZonePhases(struct TArray<struct FFortSafeZonePhaseInfo>& InPhases); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.SetSafeZonePausedForPreview (Underlying native function: SetSafeZonePausedForPreview 0x8181c74)
	void SetSafeZonePausedForPreview(bool& bSetTo); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.SetSafeZoneHeight (Underlying native function: SetSafeZoneHeight 0x8181bf0)
	void SetSafeZoneHeight(float& NewWaterHeight); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.SetPhaseInfoRadius (Underlying native function: SetPhaseInfoRadius 0x8181a44)
	void SetPhaseInfoRadius(struct FFortSafeZonePhaseInfo& InOutPhase, float& InRadius, int& PhaseIndex, class AFortAthenaMapInfo*& MapInfo); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.PauseAndPreviewPhase (Underlying native function: PauseAndPreviewPhase 0x6e8edb4)
	void PauseAndPreviewPhase(int& PhaseToPreview); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.OnSafeZoneStateChange (Has no native function)
	void OnSafeZoneStateChange(enum EFortSafeZoneState& NewState, bool& bInitial); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.OnRep_PhaseCount (Underlying native function: OnRep_PhaseCount 0x303af80)
	void OnRepPhaseCount(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.OnRep_NumActiveMegaStormCircles (Underlying native function: OnRep_NumActiveMegaStormCircles 0x8180c84)
	void OnRepNumActiveMegaStormCircles(int& PrevNumActiveMegaStormCircles); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.OnRep_CurrentPhase (Underlying native function: OnRep_CurrentPhase 0x2c3ff94)
	void OnRepCurrentPhase(); // (Final | 0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.OnRep_CurrentDamageInfo (Underlying native function: OnRep_CurrentDamageInfo 0x2d64e68)
	void OnRepCurrentDamageInfo(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.OnForceStopStormFadeTimer (Has no native function)
	void OnForceStopStormFadeTimer(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.OnForceResetCloudStartingBias (Has no native function)
	void OnForceResetCloudStartingBias(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.OnBeginStartingStateEffectsEvent (Has no native function)
	void OnBeginStartingStateEffectsEvent(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.OnBeginStartingStateEffects (Underlying native function: OnBeginStartingStateEffects 0x818098c)
	void OnBeginStartingStateEffects(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.ModifyPhase (Underlying native function: ModifyPhase 0x8180830)
	void ModifyPhase(int& PhaseToModify, struct FFortSafeZonePhaseInfo& NewPhase); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.MegaStormMinTimerExpired (Underlying native function: MegaStormMinTimerExpired 0x818081c)
	void MegaStormMinTimerExpired(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.InitializeWithMapDefaultPhases (Underlying native function: InitializeWithMapDefaultPhases 0x273fd14)
	void InitializeWithMapDefaultPhases(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetTimeSinceSafeZonesStart (Underlying native function: GetTimeSinceSafeZonesStart 0x2b2b31c)
	float GetTimeSinceSafeZonesStart(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetSafeZoneState (Underlying native function: GetSafeZoneState 0x2d7ae64)
	enum EFortSafeZoneState GetSafeZoneState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetSafeZoneStartShrinkTime (Underlying native function: GetSafeZoneStartShrinkTime 0x2c8f81c)
	float GetSafeZoneStartShrinkTime(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetSafeZoneShrinkSpeedRelativeTo (Underlying native function: GetSafeZoneShrinkSpeedRelativeTo 0x817fcc8)
	float GetSafeZoneShrinkSpeedRelativeTo(float& DistanceToTravel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetSafeZoneShrinkSpeed (Underlying native function: GetSafeZoneShrinkSpeed 0x817fca0)
	float GetSafeZoneShrinkSpeed(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetSafeZoneRadius (Underlying native function: GetSafeZoneRadius 0x2722d10)
	float GetSafeZoneRadius(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetSafeZonePhases (Underlying native function: GetSafeZonePhases 0x817fc28)
	struct TArray<struct FFortSafeZonePhaseInfo> GetSafeZonePhases(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetSafeZonePausedForPreview (Underlying native function: GetSafeZonePausedForPreview 0x817fc10)
	bool GetSafeZonePausedForPreview(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetSafeZoneFinishShrinkTime (Underlying native function: GetSafeZoneFinishShrinkTime 0x2c8f844)
	float GetSafeZoneFinishShrinkTime(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetSafeZoneCenter (Underlying native function: GetSafeZoneCenter 0x817fbe0)
	struct FVector GetSafeZoneCenter(); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetPhaseInfo (Underlying native function: GetPhaseInfo 0x817f830)
	bool GetPhaseInfo(struct FFortSafeZonePhaseInfo& OutSafeZonePhase, int& InPhaseToGet); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetPhaseCount (Underlying native function: GetPhaseCount 0x817f818)
	int GetPhaseCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetMovementAudioCurveValues (Underlying native function: GetMovementAudioCurveValues 0x817f6f8)
	void GetMovementAudioCurveValues(float& Time, float& CrossfadeValue, float& PitchModValue); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetCurrentPhaseIndex (Underlying native function: GetCurrentPhaseIndex 0x29aa488)
	int GetCurrentPhaseIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetCurrentDamageInfo (Underlying native function: GetCurrentDamageInfo 0x817f558)
	struct FFortSafeZoneDamageInfo* GetCurrentDamageInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.GetClockTickingAudioCurveValues (Underlying native function: GetClockTickingAudioCurveValues 0x817f394)
	void GetClockTickingAudioCurveValues(float& Time, float& VolumeModValue, float& PitchModValue); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSafeZoneIndicator.ConstructMapDefaultPhase (Underlying native function: ConstructMapDefaultPhase 0x817efbc)
	bool ConstructMapDefaultPhase(int& PhaseToConstruct, struct FFortSafeZonePhaseInfo& OutConstructedPhase); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

