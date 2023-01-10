// Class /Script/FortniteGame.FortMountedWeaponInterface
// Size: 0x28
class IFortMountedWeaponInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortMountedWeaponInterface.GetWeaponComponentCached (Underlying native function: GetWeaponComponentCached 0x8e425c4)
	class UFortVehicleSeatWeaponComponent* GetWeaponComponentCached(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMountedWeaponInterface.BP_GetHostVehicle (Underlying native function: BP_GetHostVehicle 0x8e411c0)
	struct TScriptInterface<class IFortVehicleInterface> BPGetHostVehicle(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMountedWeaponInterface.AddToIgnoreActors (Underlying native function: AddToIgnoreActors 0x8e40cf4)
	void AddToIgnoreActors(class AActor*& Actor); // (Native | Public | BlueprintCallable)
};

