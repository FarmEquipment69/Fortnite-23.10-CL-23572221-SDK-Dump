// Class /Script/AudioMotorSim.AudioMotorModelComponent
// Size: 0x100
class UAudioMotorModelComponent : public UActorComponent
{
	struct TArray<struct FMotorSimEntry> SimComponents; // 0xa0 (0x10)
	struct TArray<struct TScriptInterface<class IAudioMotorSimOutput>> AudioComponents; // 0xb0 (0x10)
	unsigned char padding_c0[0x40]; // 0xc0 (0x40)

	/* Functions */

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.Update (Underlying native function: Update 0x10eaacc)
	void Update(struct FAudioMotorSimInputContext& Input); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.StopOutput (Underlying native function: StopOutput 0x20eb530)
	void StopOutput(); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.StartOutput (Underlying native function: StartOutput 0x14211f8)
	void StartOutput(); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.Reset (Underlying native function: Reset 0x2664ff8)
	void Reset(); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.RemoveMotorSimComponent (Underlying native function: RemoveMotorSimComponent 0x6e5e444)
	void RemoveMotorSimComponent(struct TScriptInterface<class IAudioMotorSim>& InComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.RemoveMotorAudioComponent (Underlying native function: RemoveMotorAudioComponent 0x6e5e39c)
	void RemoveMotorAudioComponent(struct TScriptInterface<class IAudioMotorSimOutput>& InComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetRuntimeInfo (Underlying native function: GetRuntimeInfo 0x25a2d98)
	struct FAudioMotorSimRuntimeContext GetRuntimeInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetRpm (Underlying native function: GetRpm 0x6e5e384)
	float GetRpm(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetGear (Underlying native function: GetGear 0x2ade2c0)
	int GetGear(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetCachedInputData (Underlying native function: GetCachedInputData 0x2474254)
	struct FAudioMotorSimInputContext GetCachedInputData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.AddMotorSimComponent (Underlying native function: AddMotorSimComponent 0x229ac78)
	void AddMotorSimComponent(struct TScriptInterface<class IAudioMotorSim>& InComponent, int& SortOrder); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMotorSim.AudioMotorModelComponent.AddMotorAudioComponent (Underlying native function: AddMotorAudioComponent 0x25a01e8)
	void AddMotorAudioComponent(struct TScriptInterface<class IAudioMotorSimOutput>& InComponent); // (Final | Native | Public | BlueprintCallable)
};

