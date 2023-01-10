// Class /Script/Engine.PlayerCameraManager
// Size: 0x3340
class APlayerCameraManager : public AActor
{
	class APlayerController* PCOwner; // 0x288 (0x8)
	class USceneComponent* TransformComponent; // 0x290 (0x8)
	unsigned char unreflected_298[0x4]; // 0x298 (0x4) 
	float DefaultFOV; // 0x29c (0x4)
	unsigned char unreflected_2a0[0x4]; // 0x2a0 (0x4) 
	float DefaultOrthoWidth; // 0x2a4 (0x4)
	unsigned char unreflected_2a8[0x4]; // 0x2a8 (0x4) 
	float DefaultAspectRatio; // 0x2ac (0x4)
	unsigned char unreflected_2b0[0x70]; // 0x2b0 (0x70) 
	struct FCameraCacheEntry CameraCache; // 0x320 (0x7d0)
	struct FCameraCacheEntry LastFrameCameraCache; // 0xaf0 (0x7d0)
	struct FTViewTarget ViewTarget; // 0x12c0 (0x7e0)
	struct FTViewTarget PendingViewTarget; // 0x1aa0 (0x7e0)
	unsigned char unreflected_2280[0x30]; // 0x2280 (0x30) 
	struct FCameraCacheEntry CameraCachePrivate; // 0x22b0 (0x7d0)
	struct FCameraCacheEntry LastFrameCameraCachePrivate; // 0x2a80 (0x7d0)
	struct TArray<class UCameraModifier*> ModifierList; // 0x3250 (0x10)
	struct TArray<class UClass*> DefaultModifiers; // 0x3260 (0x10)
	float FreeCamDistance; // 0x3270 (0x4)
	unsigned char unreflected_3274[0x4]; // 0x3274 (0x4) 
	struct FVector FreeCamOffset; // 0x3278 (0x18)
	struct FVector ViewTargetOffset; // 0x3290 (0x18)
	struct FMulticastInlineDelegate OnAudioFadeChangeEvent; // 0x32a8 (0x10)
	unsigned char unreflected_32b8[0x18]; // 0x32b8 (0x18) 
	struct TArray<struct TScriptInterface<class ICameraLensEffectInterface>> CameraLensEffects; // 0x32d0 (0x10)
	class UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x32e0 (0x8)
	struct TArray<struct FPostProcessSettings> PostProcessBlendCache; // 0x32e8 (0x10)
	unsigned char unreflected_32f8[0x10]; // 0x32f8 (0x10) 
	class ACameraActor* AnimCameraActor; // 0x3308 (0x8)
	unsigned char bIsOrthographic; // 0x3310 (0x1)
	unsigned char bDefaultConstrainAspectRatio; // 0x3310 (0x1)
	unsigned char bClientSimulatingViewTarget; // 0x3310 (0x1)
	unsigned char bUseClientSideCameraUpdates; // 0x3310 (0x1)
	unsigned char bGameCameraCutThisFrame; // 0x3311 (0x1)
	unsigned char unreflected_3312[0x2]; // 0x3312 (0x2) 
	float ViewPitchMin; // 0x3314 (0x4)
	float ViewPitchMax; // 0x3318 (0x4)
	float ViewYawMin; // 0x331c (0x4)
	float ViewYawMax; // 0x3320 (0x4)
	float ViewRollMin; // 0x3324 (0x4)
	float ViewRollMax; // 0x3328 (0x4)
	unsigned char unreflected_332c[0x4]; // 0x332c (0x4) 
	float ServerUpdateCameraTimeout; // 0x3330 (0x4)
	unsigned char padding_3334[0xc]; // 0x3334 (0xc)

	/* Functions */

	// Function /Script/Engine.PlayerCameraManager.SwapPendingViewTargetWhenUsingClientSideCameraUpdates (Underlying native function: SwapPendingViewTargetWhenUsingClientSideCameraUpdates 0x9a4fdd8)
	void SwapPendingViewTargetWhenUsingClientSideCameraUpdates(); // (Final | Native | Protected)

	// Function /Script/Engine.PlayerCameraManager.StopCameraShake (Underlying native function: StopCameraShake 0x9a4fd0c)
	void StopCameraShake(class UCameraShakeBase*& ShakeInstance, bool& bImmediately); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.StopCameraFade (Underlying native function: StopCameraFade 0x9a4fcf4)
	void StopCameraFade(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.StopAllInstancesOfCameraShakeFromSource (Underlying native function: StopAllInstancesOfCameraShakeFromSource 0x9a4fbf4)
	void StopAllInstancesOfCameraShakeFromSource(class UClass*& Shake, class UCameraShakeSourceComponent*& SourceComponent, bool& bImmediately); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.StopAllInstancesOfCameraShake (Underlying native function: StopAllInstancesOfCameraShake 0x9a4fb28)
	void StopAllInstancesOfCameraShake(class UClass*& Shake, bool& bImmediately); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.StopAllCameraShakesFromSource (Underlying native function: StopAllCameraShakesFromSource 0x9a4fa5c)
	void StopAllCameraShakesFromSource(class UCameraShakeSourceComponent*& SourceComponent, bool& bImmediately); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.StopAllCameraShakes (Underlying native function: StopAllCameraShakes 0x9a4f9d8)
	void StopAllCameraShakes(bool& bImmediately); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.StartCameraShakeFromSource (Underlying native function: StartCameraShakeFromSource 0x9a4f838)
	class UCameraShakeBase* StartCameraShakeFromSource(class UClass*& ShakeClass, class UCameraShakeSourceComponent*& SourceComponent, float& Scale, enum ECameraShakePlaySpace& Playspace, struct FRotator& UserPlaySpaceRot); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.StartCameraShake (Underlying native function: StartCameraShake 0x175698c)
	class UCameraShakeBase* StartCameraShake(class UClass*& ShakeClass, float& Scale, enum ECameraShakePlaySpace& Playspace, struct FRotator& UserPlaySpaceRot); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.StartCameraFade (Underlying native function: StartCameraFade 0x9a4f668)
	void StartCameraFade(float& FromAlpha, float& ToAlpha, float& Duration, struct FLinearColor& Color, bool& bShouldFadeAudio, bool& bHoldWhenFinished); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.SetManualCameraFade (Underlying native function: SetManualCameraFade 0x9a4f560)
	void SetManualCameraFade(float& InFadeAmount, struct FLinearColor& Color, bool& bInFadeAudio); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.SetGameCameraCutThisFrame (Underlying native function: SetGameCameraCutThisFrame 0x8bbe634)
	void SetGameCameraCutThisFrame(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.RemoveGenericCameraLensEffect (Underlying native function: RemoveGenericCameraLensEffect 0x9a4f4cc)
	void RemoveGenericCameraLensEffect(struct TScriptInterface<class ICameraLensEffectInterface>& Emitter); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.RemoveCameraModifier (Underlying native function: RemoveCameraModifier 0x9a4f438)
	bool RemoveCameraModifier(class UCameraModifier*& ModifierToRemove); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.RemoveCameraLensEffect (Underlying native function: RemoveCameraLensEffect 0x9a4f3b4)
	void RemoveCameraLensEffect(class AEmitterCameraLensEffectBase*& Emitter); // (Native | Public)

	// Function /Script/Engine.PlayerCameraManager.PhotographyCameraModify (Underlying native function: PhotographyCameraModify 0x9a4f228)
	void PhotographyCameraModify(struct FVector& NewCameraLocation, struct FVector& PreviousCameraLocation, struct FVector& OriginalCameraLocation, struct FVector& ResultCameraLocation); // (BlueprintCosmetic | Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/Engine.PlayerCameraManager.OnPhotographySessionStart (Underlying native function: OnPhotographySessionStart 0x26b0974)
	void OnPhotographySessionStart(); // (BlueprintCosmetic | Native | Event | Public | BlueprintEvent)

	// Function /Script/Engine.PlayerCameraManager.OnPhotographySessionEnd (Underlying native function: OnPhotographySessionEnd 0x82aa228)
	void OnPhotographySessionEnd(); // (BlueprintCosmetic | Native | Event | Public | BlueprintEvent)

	// Function /Script/Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureStart (Underlying native function: OnPhotographyMultiPartCaptureStart 0x1598df4)
	void OnPhotographyMultiPartCaptureStart(); // (BlueprintCosmetic | Native | Event | Public | BlueprintEvent)

	// Function /Script/Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureEnd (Underlying native function: OnPhotographyMultiPartCaptureEnd 0x2466474)
	void OnPhotographyMultiPartCaptureEnd(); // (BlueprintCosmetic | Native | Event | Public | BlueprintEvent)

	// Function /Script/Engine.PlayerCameraManager.GetOwningPlayerController (Underlying native function: GetOwningPlayerController 0x879453c)
	class APlayerController* GetOwningPlayerController(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerCameraManager.GetFOVAngle (Underlying native function: GetFOVAngle 0x9a4ec20)
	float GetFOVAngle(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerCameraManager.GetCameraRotation (Underlying native function: GetCameraRotation 0x234ad64)
	struct FRotator GetCameraRotation(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerCameraManager.GetCameraLocation (Underlying native function: GetCameraLocation 0x234ada0)
	struct FVector GetCameraLocation(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PlayerCameraManager.FindCameraModifierByClass (Underlying native function: FindCameraModifierByClass 0x9a4eb8c)
	class UCameraModifier* FindCameraModifierByClass(class UClass*& ModifierClass); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.ClearCameraLensEffects (Underlying native function: ClearCameraLensEffects 0x1854b58)
	void ClearCameraLensEffects(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.BlueprintUpdateCamera (Has no native function)
	bool BlueprintUpdateCamera(class AActor*& CameraTarget, struct FVector& NewCameraLocation, struct FRotator& NewCameraRotation, float& NewCameraFOV); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/Engine.PlayerCameraManager.AddNewCameraModifier (Underlying native function: AddNewCameraModifier 0x9a4eaf8)
	class UCameraModifier* AddNewCameraModifier(class UClass*& ModifierClass); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.AddGenericCameraLensEffect (Underlying native function: AddGenericCameraLensEffect 0x9a4ea5c)
	struct TScriptInterface<class ICameraLensEffectInterface> AddGenericCameraLensEffect(class UClass*& LensEffectEmitterClass); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PlayerCameraManager.AddCameraLensEffect (Underlying native function: AddCameraLensEffect 0x9a4e834)
	class AEmitterCameraLensEffectBase* AddCameraLensEffect(class UClass*& LensEffectEmitterClass); // (Native | Public)
};

