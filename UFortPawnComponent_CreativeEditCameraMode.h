// Class /Script/CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode
// Size: 0xf0
class UFortPawnComponent_CreativeEditCameraMode : public UFortPawnOverrideComponent
{
	float CameraBlendSwitchMeshTime; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	class UClass* ImmersiveCameraModeClass; // 0xa8 (0x8)
	struct FCreativeOptionVariableBase* WantsToImmersiveEdit; // 0xb0 (0x8)
	bool bIsImmersiveModeEnabled; // 0xb8 (0x1)
	unsigned char padding_b9[0x37]; // 0xb9 (0x37)

	/* Functions */

	// Function /Script/CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.ServerSetImmersiveEdit (Underlying native function: ServerSetImmersiveEdit 0x6f60bc0)
	void ServerSetImmersiveEdit(bool& bWantsToImmersiveEdit, bool& bIsCreativeEditModeEnabled); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.RestrictImmersiveMode (Underlying native function: RestrictImmersiveMode 0x273fd14)
	void RestrictImmersiveMode(); // (Final | Native | Private)

	// Function /Script/CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.OnWantsToImmersiveEditChanged (Underlying native function: OnWantsToImmersiveEditChanged 0x6f60afc)
	void OnWantsToImmersiveEditChanged(class UFortCreativeOption*& CreativeOption, unsigned char& IndexValue); // (Final | Native | Private)

	// Function /Script/CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.OnRep_IsImmersiveModeEnabled (Underlying native function: OnRep_IsImmersiveModeEnabled 0x6f60ae8)
	void OnRepIsImmersiveModeEnabled(); // (Final | Native | Private)

	// Function /Script/CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.OnCreativeEditModeChanged (Underlying native function: OnCreativeEditModeChanged 0x6f60a68)
	void OnCreativeEditModeChanged(bool& bIsCreativeEditModeEnabled); // (Final | Native | Private)

	// Function /Script/CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.HandleWeaponEquipped (Underlying native function: HandleWeaponEquipped 0x6f609a4)
	void HandleWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Private)

	// Function /Script/CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.BindVehicleEvents (Underlying native function: BindVehicleEvents 0x6f608c0)
	void BindVehicleEvents(class APawn*& Pawn, class AController*& OldController, class AController*& NewController); // (Final | Native | Private)

	// Function /Script/CreativeEditCameraModeRuntime.FortPawnComponent_CreativeEditCameraMode.AllowImmersiveMode (Underlying native function: AllowImmersiveMode 0x273fd14)
	void AllowImmersiveMode(); // (Final | Native | Private)
};

