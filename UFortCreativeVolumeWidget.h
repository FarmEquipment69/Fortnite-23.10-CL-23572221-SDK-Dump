// Class /Script/FortniteUI.FortCreativeVolumeWidget
// Size: 0x270
class UFortCreativeVolumeWidget : public UUserWidget
{
	unsigned char unreflected_270[0x270]; 

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeVolumeWidget.OnVolumeManagerClientEnterVolume (Underlying native function: OnVolumeManagerClientEnterVolume 0xa535c48)
	void OnVolumeManagerClientEnterVolume(class APlayerState*& PlayerState, class AFortVolume*& Volume); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortCreativeVolumeWidget.OnGameInstanceGameStateSet (Underlying native function: OnGameInstanceGameStateSet 0x6ffb0fc)
	void OnGameInstanceGameStateSet(class AFortGameState*& GameState); // (Native | Protected)

	// Function /Script/FortniteUI.FortCreativeVolumeWidget.GetVolume (Underlying native function: GetVolume 0x707b924)
	class AFortVolume* GetVolume(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCreativeVolumeWidget.BindToVolumeManager (Underlying native function: BindToVolumeManager 0x71e664c)
	void BindToVolumeManager(); // (Native | Protected)
};

