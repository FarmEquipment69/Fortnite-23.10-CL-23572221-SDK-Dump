// Class /Script/Engine.PlayerController
// Size: 0x848
class APlayerController : public AController
{
	unsigned char unreflected_320[0x8]; // 0x320 (0x8) 
	class UPlayer* Player; // 0x328 (0x8)
	class APawn* AcknowledgedPawn; // 0x330 (0x8)
	class AHUD* MyHUD; // 0x338 (0x8)
	class APlayerCameraManager* PlayerCameraManager; // 0x340 (0x8)
	class UClass* PlayerCameraManagerClass; // 0x348 (0x8)
	bool bAutoManageActiveCameraTarget; // 0x350 (0x1)
	unsigned char unreflected_351[0x7]; // 0x351 (0x7) 
	struct FRotator TargetViewRotation; // 0x358 (0x18)
	unsigned char unreflected_370[0x18]; // 0x370 (0x18) 
	float SmoothTargetViewRotationSpeed; // 0x388 (0x4)
	unsigned char unreflected_38c[0x4]; // 0x38c (0x4) 
	struct TArray<class AActor*> HiddenActors; // 0x390 (0x10)
	struct TArray<struct TWeakObjectPtr<class UPrimitiveComponent>> HiddenPrimitiveComponents; // 0x3a0 (0x10)
	unsigned char unreflected_3b0[0x4]; // 0x3b0 (0x4) 
	float LastSpectatorStateSynchTime; // 0x3b4 (0x4)
	struct FVector LastSpectatorSyncLocation; // 0x3b8 (0x18)
	struct FRotator LastSpectatorSyncRotation; // 0x3d0 (0x18)
	int ClientCap; // 0x3e8 (0x4)
	unsigned char unreflected_3ec[0x4]; // 0x3ec (0x4) 
	class UCheatManager* CheatManager; // 0x3f0 (0x8)
	class UClass* CheatClass; // 0x3f8 (0x8)
	class UPlayerInput* PlayerInput; // 0x400 (0x8)
	struct TArray<struct FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x408 (0x10)
	class UClass* AsyncPhysicsDataClass; // 0x418 (0x8)
	class UAsyncPhysicsInputComponent* AsyncPhysicsDataComponent; // 0x420 (0x8)
	unsigned char unreflected_428[0x80]; // 0x428 (0x80) 
	unsigned char bPlayerIsWaiting; // 0x4a8 (0x1)
	unsigned char unreflected_4a9[0x3]; // 0x4a9 (0x3) 
	unsigned char NetPlayerIndex; // 0x4ac (0x1)
	unsigned char unreflected_4ad[0x5b]; // 0x4ad (0x5b) 
	class UNetConnection* PendingSwapConnection; // 0x508 (0x8)
	class UNetConnection* NetConnection; // 0x510 (0x8)
	unsigned char unreflected_518[0x18]; // 0x518 (0x18) 
	float InputYawScale; // 0x530 (0x4)
	float InputPitchScale; // 0x534 (0x4)
	float InputRollScale; // 0x538 (0x4)
	unsigned char bShowMouseCursor; // 0x53c (0x1)
	unsigned char bEnableClickEvents; // 0x53c (0x1)
	unsigned char bEnableTouchEvents; // 0x53c (0x1)
	unsigned char bEnableMouseOverEvents; // 0x53c (0x1)
	unsigned char bEnableTouchOverEvents; // 0x53c (0x1)
	unsigned char bForceFeedbackEnabled; // 0x53c (0x1)
	unsigned char bEnableMotionControls; // 0x53c (0x1)
	unsigned char bEnableStreamingSource; // 0x53c (0x1)
	unsigned char bStreamingSourceShouldActivate; // 0x53d (0x1)
	unsigned char bStreamingSourceShouldBlockOnSlowStreaming; // 0x53d (0x1)
	unsigned char unreflected_53e[0x2]; // 0x53e (0x2) 
	enum EStreamingSourcePriority StreamingSourcePriority; // 0x540 (0x1)
	unsigned char unreflected_541[0x3]; // 0x541 (0x3) 
	struct FColor StreamingSourceDebugColor; // 0x544 (0x4)
	struct TArray<struct FStreamingSourceShape> StreamingSourceShapes; // 0x548 (0x10)
	float ForceFeedbackScale; // 0x558 (0x4)
	unsigned char unreflected_55c[0x4]; // 0x55c (0x4) 
	struct TArray<struct FKey> ClickEventKeys; // 0x560 (0x10)
	struct TEnumAsByte<EMouseCursor> DefaultMouseCursor; // 0x570 (0x1)
	struct TEnumAsByte<EMouseCursor> CurrentMouseCursor; // 0x571 (0x1)
	struct TEnumAsByte<ECollisionChannel> DefaultClickTraceChannel; // 0x572 (0x1)
	struct TEnumAsByte<ECollisionChannel> CurrentClickTraceChannel; // 0x573 (0x1)
	float HitResultTraceDistance; // 0x574 (0x4)
	uint16_t SeamlessTravelCount; // 0x578 (0x2)
	uint16_t LastCompletedSeamlessTravelCount; // 0x57a (0x2)
	unsigned char unreflected_57c[0x84]; // 0x57c (0x84) 
	class UInputComponent* InactiveStateInputComponent; // 0x600 (0x8)
	unsigned char bShouldPerformFullTickWhenPaused; // 0x608 (0x1)
	unsigned char unreflected_609[0x17]; // 0x609 (0x17) 
	class UTouchInterface* CurrentTouchInterface; // 0x620 (0x8)
	class UClass* OverridePlayerInputClass; // 0x628 (0x8)
	unsigned char unreflected_630[0x78]; // 0x630 (0x78) 
	class ASpectatorPawn* SpectatorPawn; // 0x6a8 (0x8)
	unsigned char unreflected_6b0[0x4]; // 0x6b0 (0x4) 
	bool bIsLocalPlayerController; // 0x6b4 (0x1)
	unsigned char unreflected_6b5[0x3]; // 0x6b5 (0x3) 
	struct FVector SpawnLocation; // 0x6b8 (0x18)
	unsigned char padding_6d0[0x178]; // 0x6d0 (0x178)

	/* Functions */

	// Function /Script/Engine.PlayerController.WasInputKeyJustReleased (Underlying native function: WasInputKeyJustReleased 0x9d4e43c)
	bool WasInputKeyJustReleased(struct FKey& Key); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.WasInputKeyJustPressed (Underlying native function: WasInputKeyJustPressed 0x9d4e358)
	bool WasInputKeyJustPressed(struct FKey& Key); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.ToggleSpeaking (Underlying native function: ToggleSpeaking 0x9d4e2d4)
	void ToggleSpeaking(bool& bInSpeaking); // (Exec | Native | Public)

	// Function /Script/Engine.PlayerController.TestServerLevelVisibilityChange (Underlying native function: TestServerLevelVisibilityChange 0x9d4e230)
	void TestServerLevelVisibilityChange(struct FName& PackageName, struct FName& Filename); // (Final | Exec | Native | Private)

	// Function /Script/Engine.PlayerController.SwitchLevel (Underlying native function: SwitchLevel 0x801f620)
	void SwitchLevel(struct FString& URL); // (Exec | Native | Public)

	// Function /Script/Engine.PlayerController.StreamingSourceShouldBlockOnSlowStreaming (Underlying native function: StreamingSourceShouldBlockOnSlowStreaming 0x9d4e208)
	bool StreamingSourceShouldBlockOnSlowStreaming(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.StreamingSourceShouldActivate (Underlying native function: StreamingSourceShouldActivate 0x9d4e1e0)
	bool StreamingSourceShouldActivate(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.StopHapticEffect (Underlying native function: StopHapticEffect 0x9d4e158)
	void StopHapticEffect(enum EControllerHand& Hand); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.StartFire (Underlying native function: StartFire 0x9d4e0d4)
	void StartFire(unsigned char& FireModeNum); // (Exec | Native | Public)

	// Function /Script/Engine.PlayerController.SetVirtualJoystickVisibility (Underlying native function: SetVirtualJoystickVisibility 0x9d4e050)
	void SetVirtualJoystickVisibility(bool& bVisible); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.SetViewTargetWithBlend (Underlying native function: SetViewTargetWithBlend 0x9d4dec8)
	void SetViewTargetWithBlend(class AActor*& NewViewTarget, float& BlendTime, struct TEnumAsByte<EViewTargetBlendFunction>& BlendFunc, float& BlendExp, bool& bLockOutgoing); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.SetName (Underlying native function: SetName 0x9d4dd70)
	void SetName(struct FString& S); // (Exec | Native | Public)

	// Function /Script/Engine.PlayerController.SetMouseLocation (Underlying native function: SetMouseLocation 0x9d4dcb0)
	void SetMouseLocation(int& X, int& Y); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.SetMouseCursorWidget (Underlying native function: SetMouseCursorWidget 0x9d4dadc)
	void SetMouseCursorWidget(struct TEnumAsByte<EMouseCursor>& Cursor, class UUserWidget*& CursorWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.SetMotionControlsEnabled (Underlying native function: SetMotionControlsEnabled 0x9d4da5c)
	void SetMotionControlsEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.SetHapticsByValue (Underlying native function: SetHapticsByValue 0x9d4d960)
	void SetHapticsByValue(float& Frequency, float& Amplitude, enum EControllerHand& Hand); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.SetDisableHaptics (Underlying native function: SetDisableHaptics 0x9d4d8dc)
	void SetDisableHaptics(bool& bNewDisabled); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.SetDeprecatedInputYawScale (Underlying native function: SetDeprecatedInputYawScale 0x9d4d858)
	void SetDeprecatedInputYawScale(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.SetDeprecatedInputRollScale (Underlying native function: SetDeprecatedInputRollScale 0x9d4d7d4)
	void SetDeprecatedInputRollScale(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.SetDeprecatedInputPitchScale (Underlying native function: SetDeprecatedInputPitchScale 0x9d4d750)
	void SetDeprecatedInputPitchScale(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.SetControllerLightColor (Underlying native function: SetControllerLightColor 0x9d4d6d4)
	void SetControllerLightColor(struct FColor& Color); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PlayerController.SetCinematicMode (Underlying native function: SetCinematicMode 0x9d4d528)
	void SetCinematicMode(bool& bInCinematicMode, bool& bHidePlayer, bool& bAffectsHUD, bool& bAffectsMovement, bool& bAffectsTurning); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.SetAudioListenerOverride (Underlying native function: SetAudioListenerOverride 0x9d4d348)
	void SetAudioListenerOverride(class USceneComponent*& AttachToComponent, struct FVector& Location, struct FRotator& Rotation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PlayerController.SetAudioListenerAttenuationOverride (Underlying native function: SetAudioListenerAttenuationOverride 0x9d4d270)
	void SetAudioListenerAttenuationOverride(class USceneComponent*& AttachToComponent, struct FVector& AttenuationLocationOVerride); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PlayerController.ServerViewSelf (Underlying native function: ServerViewSelf 0x9d4d1a0)
	void ServerViewSelf(struct FViewTargetTransitionParams& TransitionParams); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerViewPrevPlayer (Underlying native function: ServerViewPrevPlayer 0x9d4d154)
	void ServerViewPrevPlayer(); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerViewNextPlayer (Underlying native function: ServerViewNextPlayer 0x9d4d108)
	void ServerViewNextPlayer(); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerVerifyViewTarget (Underlying native function: ServerVerifyViewTarget 0x9d4d0bc)
	void ServerVerifyViewTarget(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerUpdateMultipleLevelsVisibility (Underlying native function: ServerUpdateMultipleLevelsVisibility 0x9d4cfc4)
	void ServerUpdateMultipleLevelsVisibility(struct TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities); // (Final | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerUpdateLevelVisibility (Underlying native function: ServerUpdateLevelVisibility 0x1ff6e88)
	void ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo& LevelVisibility); // (Final | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerUpdateCamera (Underlying native function: ServerUpdateCamera 0x9d4ceb4)
	void ServerUpdateCamera(struct FVector_NetQuantize& CamLoc, int& CamPitchAndYaw); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerUnmutePlayer (Underlying native function: ServerUnmutePlayer 0x9d4cda0)
	void ServerUnmutePlayer(struct FUniqueNetIdRepl& PlayerId); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerUnblockPlayer (Underlying native function: ServerUnblockPlayer 0x9d4cc8c)
	void ServerUnblockPlayer(struct FUniqueNetIdRepl& PlayerId); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerToggleAILogging (Underlying native function: ServerToggleAILogging 0x9d4cc40)
	void ServerToggleAILogging(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerShortTimeout (Underlying native function: ServerShortTimeout 0x2a36a98)
	void ServerShortTimeout(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerSetSpectatorWaiting (Underlying native function: ServerSetSpectatorWaiting 0x9d4cb90)
	void ServerSetSpectatorWaiting(bool& bWaiting); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerSetSpectatorLocation (Underlying native function: ServerSetSpectatorLocation 0x9d4ca58)
	void ServerSetSpectatorLocation(struct FVector& NewLoc, struct FRotator& NewRot); // (Net | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerSendLatestAsyncPhysicsTimestamp (Underlying native function: ServerSendLatestAsyncPhysicsTimestamp 0x9d4c9cc)
	void ServerSendLatestAsyncPhysicsTimestamp(struct FAsyncPhysicsTimestamp*& Timestamp); // (Final | Net | Native | Event | Private | NetServer)

	// Function /Script/Engine.PlayerController.ServerRestartPlayer (Underlying native function: ServerRestartPlayer 0x9d4c980)
	void ServerRestartPlayer(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerRecvClientInputFrame (Underlying native function: ServerRecvClientInputFrame 0x9d4c8a8)
	void ServerRecvClientInputFrame(int& RecvClientInputFrame, struct TArray<unsigned char>& Data); // (Net | Native | Event | Public | NetServer)

	// Function /Script/Engine.PlayerController.ServerPause (Underlying native function: ServerPause 0x9d4c85c)
	void ServerPause(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerNotifyLoadedWorld (Underlying native function: ServerNotifyLoadedWorld 0x9d4c7b0)
	void ServerNotifyLoadedWorld(struct FName& WorldPackageName); // (Final | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerMutePlayer (Underlying native function: ServerMutePlayer 0x9d4c69c)
	void ServerMutePlayer(struct FUniqueNetIdRepl& PlayerId); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerExecRPC (Underlying native function: ServerExecRPC 0x9d4c520)
	void ServerExecRPC(struct FString& Msg); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerExec (Underlying native function: ServerExec 0x6ee971c)
	void ServerExec(struct FString& Msg); // (Final | Exec | Native | Public)

	// Function /Script/Engine.PlayerController.ServerCheckClientPossessionReliable (Underlying native function: ServerCheckClientPossessionReliable 0x9d4c4d4)
	void ServerCheckClientPossessionReliable(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerCheckClientPossession (Underlying native function: ServerCheckClientPossession 0x9d4c488)
	void ServerCheckClientPossession(); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerChangeName (Underlying native function: ServerChangeName 0x9d4c30c)
	void ServerChangeName(struct FString& S); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerCamera (Underlying native function: ServerCamera 0x9d4c270)
	void ServerCamera(struct FName& NewMode); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerBlockPlayer (Underlying native function: ServerBlockPlayer 0x9d4c15c)
	void ServerBlockPlayer(struct FUniqueNetIdRepl& PlayerId); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.ServerAcknowledgePossession (Underlying native function: ServerAcknowledgePossession 0x9d4c0bc)
	void ServerAcknowledgePossession(class APawn*& P); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/Engine.PlayerController.SendToConsole (Underlying native function: SendToConsole 0x9d4bf64)
	void SendToConsole(struct FString& Command); // (Exec | Native | Public)

	// Function /Script/Engine.PlayerController.RestartLevel (Underlying native function: RestartLevel 0x8ac1a18)
	void RestartLevel(); // (Exec | Native | Public)

	// Function /Script/Engine.PlayerController.ResetControllerLightColor (Underlying native function: ResetControllerLightColor 0x9d4bf50)
	void ResetControllerLightColor(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.ProjectWorldLocationToScreen (Underlying native function: ProjectWorldLocationToScreen 0x9d4be1c)
	bool ProjectWorldLocationToScreen(struct FVector& WorldLocation, struct FVector2D& ScreenLocation, bool& bPlayerViewportRelative); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.PlayHapticEffect (Underlying native function: PlayHapticEffect 0x9d4ba2c)
	void PlayHapticEffect(class UHapticFeedbackEffect_Base*& HapticEffect, enum EControllerHand& Hand, float& Scale, bool& bLoop); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.PlayDynamicForceFeedback (Underlying native function: PlayDynamicForceFeedback 0x9d4b798)
	void PlayDynamicForceFeedback(float& Intensity, float& Duration, bool& bAffectsLeftLarge, bool& bAffectsLeftSmall, bool& bAffectsRightLarge, bool& bAffectsRightSmall, struct TEnumAsByte<EDynamicForceFeedbackAction>& Action, struct FLatentActionInfo& LatentInfo); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/Engine.PlayerController.Pause (Underlying native function: Pause 0x7fbd6c0)
	void Pause(); // (Exec | Native | Public)

	// Function /Script/Engine.PlayerController.OnServerStartedVisualLogger (Underlying native function: OnServerStartedVisualLogger 0x9d4b6fc)
	void OnServerStartedVisualLogger(bool& bIsLogging); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.OnRep_AsyncPhysicsDataComponent (Underlying native function: OnRep_AsyncPhysicsDataComponent 0x9d4b6dc)
	void OnRepAsyncPhysicsDataComponent(); // (Final | Native | Private)

	// Function /Script/Engine.PlayerController.LocalTravel (Underlying native function: LocalTravel 0x9d4b4c4)
	void LocalTravel(struct FString& URL); // (Exec | Native | Public)

	// Function /Script/Engine.PlayerController.K2_ClientPlayForceFeedback (Underlying native function: K2_ClientPlayForceFeedback 0x2891b08)
	void K2ClientPlayForceFeedback(class UForceFeedbackEffect*& ForceFeedbackEffect, struct FName& tag, bool& bLooping, bool& bIgnoreTimeDilation, bool& bPlayWhilePaused); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.IsStreamingSourceEnabled (Underlying native function: IsStreamingSourceEnabled 0x8e5cd0c)
	bool IsStreamingSourceEnabled(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.IsInputKeyDown (Underlying native function: IsInputKeyDown 0x9d4b22c)
	bool IsInputKeyDown(struct FKey& Key); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetViewportSize (Underlying native function: GetViewportSize 0x9d4b094)
	void GetViewportSize(int& SizeX, int& SizeY); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetStreamingSourceShapes (Underlying native function: GetStreamingSourceShapes 0x9d4af28)
	void GetStreamingSourceShapes(struct TArray<struct FStreamingSourceShape>& OutShapes); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetStreamingSourcePriority (Underlying native function: GetStreamingSourcePriority 0x24c92dc)
	enum EStreamingSourcePriority GetStreamingSourcePriority(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetStreamingSourceLocationAndRotation (Underlying native function: GetStreamingSourceLocationAndRotation 0x9d4ae44)
	void GetStreamingSourceLocationAndRotation(struct FVector& OutLocation, struct FRotator& OutRotation); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetSpectatorPawn (Underlying native function: GetSpectatorPawn 0x2a3851c)
	class ASpectatorPawn* GetSpectatorPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetPlatformUserId (Underlying native function: GetPlatformUserId 0x9d4ad20)
	struct FPlatformUserId GetPlatformUserId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetOverridePlayerInputClass (Underlying native function: GetOverridePlayerInputClass 0x993c768)
	class UClass* GetOverridePlayerInputClass(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetMousePosition (Underlying native function: GetMousePosition 0x9d4ac00)
	bool GetMousePosition(float& LocationX, float& LocationY); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetInputVectorKeyState (Underlying native function: GetInputVectorKeyState 0x9d4ab08)
	struct FVector GetInputVectorKeyState(struct FKey& Key); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetInputTouchState (Underlying native function: GetInputTouchState 0x9d4a998)
	void GetInputTouchState(struct TEnumAsByte<ETouchIndex>& FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetInputMouseDelta (Underlying native function: GetInputMouseDelta 0x9d4a8c0)
	void GetInputMouseDelta(float& DeltaX, float& DeltaY); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetInputMotionState (Underlying native function: GetInputMotionState 0x9d4a730)
	void GetInputMotionState(struct FVector& Tilt, struct FVector& RotationRate, struct FVector& Gravity, struct FVector& Acceleration); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetInputKeyTimeDown (Underlying native function: GetInputKeyTimeDown 0x9d4a648)
	float GetInputKeyTimeDown(struct FKey& Key); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetInputAnalogStickState (Underlying native function: GetInputAnalogStickState 0x9d4a49c)
	void GetInputAnalogStickState(struct TEnumAsByte<EControllerAnalogStick>& WhichStick, float& StickX, float& StickY); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetInputAnalogKeyState (Underlying native function: GetInputAnalogKeyState 0x9d4a3b4)
	float GetInputAnalogKeyState(struct FKey& Key); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetHUD (Underlying native function: GetHUD 0x9d49b50)
	class AHUD* GetHUD(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetHitResultUnderFingerForObjects (Underlying native function: GetHitResultUnderFingerForObjects 0x9d4a20c)
	bool GetHitResultUnderFingerForObjects(struct TEnumAsByte<ETouchIndex>& FingerIndex, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool& bTraceComplex, struct FHitResult& HitResult); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetHitResultUnderFingerByChannel (Underlying native function: GetHitResultUnderFingerByChannel 0x9d4a098)
	bool GetHitResultUnderFingerByChannel(struct TEnumAsByte<ETouchIndex>& FingerIndex, struct TEnumAsByte<ETraceTypeQuery>& TraceChannel, bool& bTraceComplex, struct FHitResult& HitResult); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetHitResultUnderFinger (Underlying native function: GetHitResultUnderFinger 0x9d49f24)
	bool GetHitResultUnderFinger(struct TEnumAsByte<ETouchIndex>& FingerIndex, struct TEnumAsByte<ECollisionChannel>& TraceChannel, bool& bTraceComplex, struct FHitResult& HitResult); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetHitResultUnderCursorForObjects (Underlying native function: GetHitResultUnderCursorForObjects 0x9d49dc0)
	bool GetHitResultUnderCursorForObjects(struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool& bTraceComplex, struct FHitResult& HitResult); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetHitResultUnderCursorByChannel (Underlying native function: GetHitResultUnderCursorByChannel 0x9d49c94)
	bool GetHitResultUnderCursorByChannel(struct TEnumAsByte<ETraceTypeQuery>& TraceChannel, bool& bTraceComplex, struct FHitResult& HitResult); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetHitResultUnderCursor (Underlying native function: GetHitResultUnderCursor 0x9d49b68)
	bool GetHitResultUnderCursor(struct TEnumAsByte<ECollisionChannel>& TraceChannel, bool& bTraceComplex, struct FHitResult& HitResult); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetFocalLocation (Underlying native function: GetFocalLocation 0x9d49b14)
	struct FVector GetFocalLocation(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetDeprecatedInputYawScale (Underlying native function: GetDeprecatedInputYawScale 0x9d49aec)
	float GetDeprecatedInputYawScale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetDeprecatedInputRollScale (Underlying native function: GetDeprecatedInputRollScale 0x9d49ac4)
	float GetDeprecatedInputRollScale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetDeprecatedInputPitchScale (Underlying native function: GetDeprecatedInputPitchScale 0x9d49a9c)
	float GetDeprecatedInputPitchScale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetAsyncPhysicsDataToWrite (Underlying native function: GetAsyncPhysicsDataToWrite 0x9d49a3c)
	class UAsyncPhysicsData* GetAsyncPhysicsDataToWrite(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.GetAsyncPhysicsDataToConsume (Underlying native function: GetAsyncPhysicsDataToConsume 0x9d49a04)
	class UAsyncPhysicsData* GetAsyncPhysicsDataToConsume(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.FOV (Underlying native function: FOV 0x9d49364)
	void FOV(float& NewFOV); // (Exec | Native | Public)

	// Function /Script/Engine.PlayerController.EnableCheats (Underlying native function: EnableCheats 0x86814bc)
	void EnableCheats(); // (Exec | Native | Public)

	// Function /Script/Engine.PlayerController.DeprojectScreenPositionToWorld (Underlying native function: DeprojectScreenPositionToWorld 0x9d49130)
	bool DeprojectScreenPositionToWorld(float& ScreenX, float& ScreenY, struct FVector& WorldLocation, struct FVector& WorldDirection); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.DeprojectMousePositionToWorld (Underlying native function: DeprojectMousePositionToWorld 0x9d49040)
	bool DeprojectMousePositionToWorld(struct FVector& WorldLocation, struct FVector& WorldDirection); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerController.ConsoleKey (Underlying native function: ConsoleKey 0x9d48f60)
	void ConsoleKey(struct FKey& Key); // (Exec | Native | Public)

	// Function /Script/Engine.PlayerController.ClientWasKicked (Underlying native function: ClientWasKicked 0x9d48ecc)
	void ClientWasKicked(struct FText& KickReason); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientVoiceHandshakeComplete (Underlying native function: ClientVoiceHandshakeComplete 0x2d7a8f8)
	void ClientVoiceHandshakeComplete(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientUpdateMultipleLevelsStreamingStatus (Underlying native function: ClientUpdateMultipleLevelsStreamingStatus 0x9d48e38)
	void ClientUpdateMultipleLevelsStreamingStatus(struct TArray<struct FUpdateLevelStreamingLevelStatus>& LevelStatuses); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientUpdateLevelStreamingStatus (Underlying native function: ClientUpdateLevelStreamingStatus 0x9d48c60)
	void ClientUpdateLevelStreamingStatus(struct FName& PackageName, bool& bNewShouldBeLoaded, bool& bNewShouldBeVisible, bool& bNewShouldBlockOnLoad, int& LODIndex, struct FNetLevelVisibilityTransactionId& TransactionId); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientUnmutePlayers (Underlying native function: ClientUnmutePlayers 0x9d48bd0)
	void ClientUnmutePlayers(struct TArray<struct FUniqueNetIdRepl>& PlayerIds); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientUnmutePlayer (Underlying native function: ClientUnmutePlayer 0x9d48aec)
	void ClientUnmutePlayer(struct FUniqueNetIdRepl& PlayerId); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientTravelInternal (Underlying native function: ClientTravelInternal 0x9d488b4)
	void ClientTravelInternal(struct FString& URL, struct TEnumAsByte<ETravelType>& TravelType, bool& bSeamless, struct FGuid& MapPackageGuid); // (Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/Engine.PlayerController.ClientTravel (Underlying native function: ClientTravel 0x9d48680)
	void ClientTravel(struct FString& URL, struct TEnumAsByte<ETravelType>& TravelType, bool& bSeamless, struct FGuid& MapPackageGuid); // (Final | Native | Public | HasDefaults)

	// Function /Script/Engine.PlayerController.ClientTeamMessage (Underlying native function: ClientTeamMessage 0x9d48468)
	void ClientTeamMessage(class APlayerState*& SenderPlayerState, struct FString& S, struct FName& Type, float& MsgLifeTime); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientStopForceFeedback (Underlying native function: ClientStopForceFeedback 0x2629ab0)
	void ClientStopForceFeedback(class UForceFeedbackEffect*& ForceFeedbackEffect, struct FName& tag); // (Net | NetReliable | Native | Event | Public | NetClient | BlueprintCallable)

	// Function /Script/Engine.PlayerController.ClientStopCameraShakesFromSource (Underlying native function: ClientStopCameraShakesFromSource 0x9d4839c)
	void ClientStopCameraShakesFromSource(class UCameraShakeSourceComponent*& SourceComponent, bool& bImmediately); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.ClientStopCameraShake (Underlying native function: ClientStopCameraShake 0x9a5ac34)
	void ClientStopCameraShake(class UClass*& Shake, bool& bImmediately); // (Net | NetReliable | Native | Event | Public | NetClient | BlueprintCallable)

	// Function /Script/Engine.PlayerController.ClientStartOnlineSession (Underlying native function: ClientStartOnlineSession 0x9d48384)
	void ClientStartOnlineSession(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientStartCameraShakeFromSource (Underlying native function: ClientStartCameraShakeFromSource 0x9d48288)
	void ClientStartCameraShakeFromSource(class UClass*& Shake, class UCameraShakeSourceComponent*& SourceComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.ClientStartCameraShake (Underlying native function: ClientStartCameraShake 0x1757590)
	void ClientStartCameraShake(class UClass*& Shake, float& Scale, enum ECameraShakePlaySpace& Playspace, struct FRotator& UserPlaySpaceRot); // (Net | Native | Event | Public | HasDefaults | NetClient | BlueprintCallable)

	// Function /Script/Engine.PlayerController.ClientSpawnGenericCameraLensEffect (Underlying native function: ClientSpawnGenericCameraLensEffect 0x9d48204)
	void ClientSpawnGenericCameraLensEffect(class UClass*& LensEffectEmitterClass); // (Net | Native | Event | Public | NetClient | BlueprintCallable)

	// Function /Script/Engine.PlayerController.ClientSpawnCameraLensEffect (Underlying native function: ClientSpawnCameraLensEffect 0x8abe0e4)
	void ClientSpawnCameraLensEffect(class UClass*& LensEffectEmitterClass); // (Net | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientSetViewTarget (Underlying native function: ClientSetViewTarget 0x9d48114)
	void ClientSetViewTarget(class AActor*& A, struct FViewTargetTransitionParams& TransitionParams); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientSetSpectatorWaiting (Underlying native function: ClientSetSpectatorWaiting 0x9d48090)
	void ClientSetSpectatorWaiting(bool& bWaiting); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientSetHUD (Underlying native function: ClientSetHUD 0x1a65e8c)
	void ClientSetHUD(class UClass*& NewHUDClass); // (Net | NetReliable | Native | Event | Public | NetClient | BlueprintCallable)

	// Function /Script/Engine.PlayerController.ClientSetForceMipLevelsToBeResident (Underlying native function: ClientSetForceMipLevelsToBeResident 0x9d47f90)
	void ClientSetForceMipLevelsToBeResident(class UMaterialInterface*& Material, float& ForceDuration, int& CinematicTextureGroups); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientSetCinematicMode (Underlying native function: ClientSetCinematicMode 0x9d47e38)
	void ClientSetCinematicMode(bool& bInCinematicMode, bool& bAffectsMovement, bool& bAffectsTurning, bool& bAffectsHUD); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientSetCameraMode (Underlying native function: ClientSetCameraMode 0x9d47db4)
	void ClientSetCameraMode(struct FName& NewCamMode); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientSetCameraFade (Underlying native function: ClientSetCameraFade 0x9d47bd0)
	void ClientSetCameraFade(bool& bEnableFading, struct FColor& FadeColor, struct FVector2D& FadeAlpha, float& FadeTime, bool& bFadeAudio, bool& bHoldWhenFinished); // (Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/Engine.PlayerController.ClientSetBlockOnAsyncLoading (Underlying native function: ClientSetBlockOnAsyncLoading 0x27b897c)
	void ClientSetBlockOnAsyncLoading(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientReturnToMainMenuWithTextReason (Underlying native function: ClientReturnToMainMenuWithTextReason 0x1f4b864)
	void ClientReturnToMainMenuWithTextReason(struct FText& ReturnReason); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientReturnToMainMenu (Underlying native function: ClientReturnToMainMenu 0x9d47a78)
	void ClientReturnToMainMenu(struct FString& ReturnReason); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientRetryClientRestart (Underlying native function: ClientRetryClientRestart 0x77ad758)
	void ClientRetryClientRestart(class APawn*& NewPawn); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientRestart (Underlying native function: ClientRestart 0x9d479f4)
	void ClientRestart(class APawn*& NewPawn); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientReset (Underlying native function: ClientReset 0x8ac1a48)
	void ClientReset(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientRepObjRef (Underlying native function: ClientRepObjRef 0x9d47970)
	void ClientRepObjRef(class UObject*& Object); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientRecvServerAckFrameDebug (Underlying native function: ClientRecvServerAckFrameDebug 0x9d478a4)
	void ClientRecvServerAckFrameDebug(unsigned char& NumBuffered, float& TargetNumBufferedCmds); // (Net | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientRecvServerAckFrame (Underlying native function: ClientRecvServerAckFrame 0x9d477a8)
	void ClientRecvServerAckFrame(int& LastProcessedInputFrame, int& RecvServerFrameNumber, int8_t& TimeDilation); // (Net | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientReceiveLocalizedMessage (Underlying native function: ClientReceiveLocalizedMessage 0x9d47620)
	void ClientReceiveLocalizedMessage(class UClass*& message, int& Switch, class APlayerState*& RelatedPlayerState1, class APlayerState*& RelatedPlayerState2, class UObject*& OptionalObject); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientPrestreamTextures (Underlying native function: ClientPrestreamTextures 0x9d474d8)
	void ClientPrestreamTextures(class AActor*& ForcedActor, float& ForceDuration, bool& bEnableStreaming, int& CinematicTextureGroups); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientPrepareMapChange (Underlying native function: ClientPrepareMapChange 0x9d473d8)
	void ClientPrepareMapChange(struct FName& LevelName, bool& bFirst, bool& bLast); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientPlaySoundAtLocation (Underlying native function: ClientPlaySoundAtLocation 0x9d47284)
	void ClientPlaySoundAtLocation(class USoundBase*& sound, struct FVector& Location, float& VolumeMultiplier, float& PitchMultiplier); // (Net | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/Engine.PlayerController.ClientPlaySound (Underlying native function: ClientPlaySound 0x9d47188)
	void ClientPlaySound(class USoundBase*& sound, float& VolumeMultiplier, float& PitchMultiplier); // (Net | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientPlayForceFeedback_Internal (Underlying native function: ClientPlayForceFeedback_Internal 0x25a56e0)
	void ClientPlayForceFeedbackInternal(class UForceFeedbackEffect*& ForceFeedbackEffect, struct FForceFeedbackParameters*& Params); // (Final | Net | Native | Event | Private | NetClient)

	// Function /Script/Engine.PlayerController.ClientMutePlayer (Underlying native function: ClientMutePlayer 0x9d470a4)
	void ClientMutePlayer(struct FUniqueNetIdRepl& PlayerId); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientMessage (Underlying native function: ClientMessage 0x9d46ed0)
	void ClientMessage(struct FString& S, struct FName& Type, float& MsgLifeTime); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientIgnoreMoveInput (Underlying native function: ClientIgnoreMoveInput 0x9d46e4c)
	void ClientIgnoreMoveInput(bool& bIgnore); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientIgnoreLookInput (Underlying native function: ClientIgnoreLookInput 0x9d46dc8)
	void ClientIgnoreLookInput(bool& bIgnore); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientGotoState (Underlying native function: ClientGotoState 0x9d46d44)
	void ClientGotoState(struct FName& NewState); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientGameEnded (Underlying native function: ClientGameEnded 0x9d46c78)
	void ClientGameEnded(class AActor*& EndGameFocus, bool& bIsWinner); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientForceGarbageCollection (Underlying native function: ClientForceGarbageCollection 0x9d46c60)
	void ClientForceGarbageCollection(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientFlushLevelStreaming (Underlying native function: ClientFlushLevelStreaming 0x9d46c14)
	void ClientFlushLevelStreaming(); // (Final | Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientEndOnlineSession (Underlying native function: ClientEndOnlineSession 0x9d46bfc)
	void ClientEndOnlineSession(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientEnableNetworkVoice (Underlying native function: ClientEnableNetworkVoice 0x288d3cc)
	void ClientEnableNetworkVoice(bool& bEnable); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientCorrectionAsyncPhysicsTimestamp (Underlying native function: ClientCorrectionAsyncPhysicsTimestamp 0x9d46b70)
	void ClientCorrectionAsyncPhysicsTimestamp(struct FAsyncPhysicsTimestamp*& Timestamp); // (Final | Net | Native | Event | Private | NetClient)

	// Function /Script/Engine.PlayerController.ClientCommitMapChange (Underlying native function: ClientCommitMapChange 0x9d46b58)
	void ClientCommitMapChange(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientClearCameraLensEffects (Underlying native function: ClientClearCameraLensEffects 0x9d46b40)
	void ClientClearCameraLensEffects(); // (Net | NetReliable | Native | Event | Public | NetClient | BlueprintCallable)

	// Function /Script/Engine.PlayerController.ClientCapBandwidth (Underlying native function: ClientCapBandwidth 0x2aa27d4)
	void ClientCapBandwidth(int& Cap); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientCancelPendingMapChange (Underlying native function: ClientCancelPendingMapChange 0x9a474a8)
	void ClientCancelPendingMapChange(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientAddTextureStreamingLoc (Underlying native function: ClientAddTextureStreamingLoc 0x9d46a30)
	void ClientAddTextureStreamingLoc(struct FVector& InLoc, float& Duration, bool& bOverrideLocation); // (Final | Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/Engine.PlayerController.ClientAckUpdateLevelVisibility (Underlying native function: ClientAckUpdateLevelVisibility 0x9d46934)
	void ClientAckUpdateLevelVisibility(struct FName& PackageName, struct FNetLevelVisibilityTransactionId& TransactionId, bool& bClientAckCanMakeVisible); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/Engine.PlayerController.ClientAckTimeDilation (Underlying native function: ClientAckTimeDilation 0x9d46868)
	void ClientAckTimeDilation(float& TimeDilation, int& ServerStep); // (Final | Net | Native | Event | Private | NetClient)

	// Function /Script/Engine.PlayerController.ClearAudioListenerOverride (Underlying native function: ClearAudioListenerOverride 0x9d46840)
	void ClearAudioListenerOverride(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.ClearAudioListenerAttenuationOverride (Underlying native function: ClearAudioListenerAttenuationOverride 0x9d46818)
	void ClearAudioListenerAttenuationOverride(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.CanRestartPlayer (Underlying native function: CanRestartPlayer 0x9d467f0)
	bool CanRestartPlayer(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.Camera (Underlying native function: Camera 0x9d4676c)
	void Camera(struct FName& NewMode); // (Exec | Native | Public)

	// Function /Script/Engine.PlayerController.AddYawInput (Underlying native function: AddYawInput 0x9d466e4)
	void AddYawInput(float& Val); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.AddRollInput (Underlying native function: AddRollInput 0x9d4665c)
	void AddRollInput(float& Val); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.AddPitchInput (Underlying native function: AddPitchInput 0x9d465d4)
	void AddPitchInput(float& Val); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerController.ActivateTouchInterface (Underlying native function: ActivateTouchInterface 0x9d46474)
	void ActivateTouchInterface(class UTouchInterface*& NewTouchInterface); // (Native | Public | BlueprintCallable)
};

