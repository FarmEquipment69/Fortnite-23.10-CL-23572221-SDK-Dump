// Class /Script/FortniteUI.FortSettingValueDiscreteDynamic_AudioOutputDevice
// Size: 0x238
class UFortSettingValueDiscreteDynamic_AudioOutputDevice : public UFortSettingValueDiscreteDynamic
{
	unsigned char unreflected_238[0x238]; 

	/* Functions */

	// Function /Script/FortniteUI.FortSettingValueDiscreteDynamic_AudioOutputDevice.OnCompletedDeviceSwap (Underlying native function: OnCompletedDeviceSwap 0xa79c7ac)
	void OnCompletedDeviceSwap(struct FSwapAudioOutputResult& SwapResult); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteUI.FortSettingValueDiscreteDynamic_AudioOutputDevice.OnAudioOutputDevicesObtained (Underlying native function: OnAudioOutputDevicesObtained 0x1d2f0a8)
	void OnAudioOutputDevicesObtained(struct TArray<struct FAudioOutputDeviceInfo>& AvailableDevices); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteUI.FortSettingValueDiscreteDynamic_AudioOutputDevice.DeviceSwitched (Underlying native function: DeviceSwitched 0xa79be88)
	void DeviceSwitched(struct FString& DeviceID); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortSettingValueDiscreteDynamic_AudioOutputDevice.DeviceAddedOrRemoved (Underlying native function: DeviceAddedOrRemoved 0xa79bd28)
	void DeviceAddedOrRemoved(struct FString& DeviceID); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortSettingValueDiscreteDynamic_AudioOutputDevice.DefaultDeviceChanged (Underlying native function: DefaultDeviceChanged 0xa79bb80)
	void DefaultDeviceChanged(enum EAudioDeviceChangedRole& InRole, struct FString& DeviceID); // (Final | Native | Public)
};

