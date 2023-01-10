// Class /Script/AudioGameplay.AudioComponentGroup
// Size: 0x450
class UAudioComponentGroup : public USceneComponent
{
	unsigned char unreflected_2a0[0x8]; // 0x2a0 (0x8) 
	struct FMulticastInlineDelegate OnStopped; // 0x2a8 (0x10)
	struct FMulticastInlineDelegate OnKilled; // 0x2b8 (0x10)
	struct FMulticastInlineDelegate OnVirtualized; // 0x2c8 (0x10)
	struct FMulticastInlineDelegate OnUnvirtualized; // 0x2d8 (0x10)
	struct TArray<class UAudioComponent*> Components; // 0x2e8 (0x10)
	struct TArray<struct FAudioParameter> ParamsToSet; // 0x2f8 (0x10)
	struct TArray<struct FAudioParameter> PersistentParams; // 0x308 (0x10)
	struct TArray<struct TScriptInterface<class IAudioComponentGroupExtension>> Extensions; // 0x318 (0x10)
	unsigned char padding_328[0x128]; // 0x328 (0x128)

	/* Functions */

	// Function /Script/AudioGameplay.AudioComponentGroup.StopSound (Underlying native function: StopSound 0x52a18f0)
	void StopSound(class USoundBase*& sound, float& FadeTime); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/AudioGameplay.AudioComponentGroup.StaticGetOrCreateComponentGroup (Underlying native function: StaticGetOrCreateComponentGroup 0x52a1850)
	static class UAudioComponentGroup* StaticGetOrCreateComponentGroup(class AActor*& Actor); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/AudioGameplay.AudioComponentGroup.SetVolumeMultiplier (Underlying native function: SetVolumeMultiplier 0x52a17b0)
	void SetVolumeMultiplier(float& InVolume); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/AudioGameplay.AudioComponentGroup.SetPitchMultiplier (Underlying native function: SetPitchMultiplier 0x52a1710)
	void SetPitchMultiplier(float& InPitch); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/AudioGameplay.AudioComponentGroup.SetLowPassFilter (Underlying native function: SetLowPassFilter 0x52a1670)
	void SetLowPassFilter(float& InFrequency); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/AudioGameplay.AudioComponentGroup.RemoveExtension (Underlying native function: RemoveExtension 0x52a15b0)
	void RemoveExtension(struct TScriptInterface<class IAudioComponentGroupExtension>& NewExtension); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/AudioGameplay.AudioComponentGroup.IsVirtualized (Underlying native function: IsVirtualized 0x52a1590)
	bool IsVirtualized(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioGameplay.AudioComponentGroup.IsPlayingAny (Underlying native function: IsPlayingAny 0x52a1560)
	bool IsPlayingAny(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioGameplay.AudioComponentGroup.GetStringParamValue (Underlying native function: GetStringParamValue 0x52a1450)
	struct FString GetStringParamValue(struct FName& ParamName); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioGameplay.AudioComponentGroup.GetFloatParamValue (Underlying native function: GetFloatParamValue 0x52a1390)
	float GetFloatParamValue(struct FName& ParamName); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioGameplay.AudioComponentGroup.GetBoolParamValue (Underlying native function: GetBoolParamValue 0x52a12d0)
	bool GetBoolParamValue(struct FName& ParamName); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioGameplay.AudioComponentGroup.EnableVirtualization (Underlying native function: EnableVirtualization 0x52a1290)
	void EnableVirtualization(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/AudioGameplay.AudioComponentGroup.DisableVirtualization (Underlying native function: DisableVirtualization 0x52a1250)
	void DisableVirtualization(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/AudioGameplay.AudioComponentGroup.BroadcastStopAll (Underlying native function: BroadcastStopAll 0x52a1220)
	void BroadcastStopAll(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/AudioGameplay.AudioComponentGroup.BroadcastKill (Underlying native function: BroadcastKill 0x52a11f0)
	void BroadcastKill(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/AudioGameplay.AudioComponentGroup.BroadcastEvent (Underlying native function: BroadcastEvent 0x52a1150)
	void BroadcastEvent(struct FName& EventName); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/AudioGameplay.AudioComponentGroup.AddExternalComponent (Underlying native function: AddExternalComponent 0x52a0f80)
	void AddExternalComponent(class UAudioComponent*& ComponentToAdd); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/AudioGameplay.AudioComponentGroup.AddExtension (Underlying native function: AddExtension 0x52a0eb0)
	void AddExtension(struct TScriptInterface<class IAudioComponentGroupExtension>& NewExtension); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)
};

