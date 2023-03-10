// Class /Script/VehicleAudioRuntime.FortVehicleAudioController
// Size: 0x2e8
class AFortVehicleAudioController : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class UFortVehicleSoundData* VehicleSoundData; // 0x290 (0x8)
	unsigned char unreflected_298[0x4]; // 0x298 (0x4) 
	int CurrentSignificance; // 0x29c (0x4)
	bool bListenerInRange; // 0x2a0 (0x1)
	bool bForceUpdatePastListenerRange; // 0x2a1 (0x1)
	unsigned char unreflected_2a2[0x6]; // 0x2a2 (0x6) 
	class AFortAthenaVehicle* VehicleBase; // 0x2a8 (0x8)
	class UFortPhysicsVehicleConfigs* PhysicsVehicleConfigs; // 0x2b0 (0x8)
	class UFortLayeredAudioComponent* LayeredAudioComponent; // 0x2b8 (0x8)
	class UAudioParameterComponent* AudioParameterComponent; // 0x2c0 (0x8)
	class UAudioMotorModelComponent* AudioMotorModelComponent; // 0x2c8 (0x8)
	class UREVComponent* REVComponent; // 0x2d0 (0x8)
	struct TArray<class UFortVehicleSoundComponent*> VehicleSoundComponents; // 0x2d8 (0x10)

	/* Functions */

	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.Update (Underlying native function: Update 0x6e5d7ac)
	void Update(float& DeltaSeconds); // (Native | Public | BlueprintCallable)

	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.Shutdown (Underlying native function: Shutdown 0x26b0974)
	void Shutdown(); // (Native | Public | BlueprintCallable)

	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.SetVehicle (Underlying native function: SetVehicle 0x6e5d728)
	void SetVehicle(class AFortAthenaVehicle*& InVehicle); // (Native | Public | BlueprintCallable)

	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.SetLayeredAudioComponent (Underlying native function: SetLayeredAudioComponent 0x279384c)
	void SetLayeredAudioComponent(class UFortLayeredAudioComponent*& InComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.IsNativizationEnabled (Underlying native function: IsNativizationEnabled 0x6e5d700)
	bool IsNativizationEnabled(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.Init (Underlying native function: Init 0x1598df4)
	void Init(); // (Native | Public | BlueprintCallable)

	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetVehicleActor (Underlying native function: GetVehicleActor 0x23fadf8)
	class AFortAthenaVehicle* GetVehicleActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetREVComponent (Underlying native function: GetREVComponent 0x6e5d6e8)
	class UREVComponent* GetREVComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetPhysicsVehicleConfigs (Underlying native function: GetPhysicsVehicleConfigs 0x529a440)
	class UFortPhysicsVehicleConfigs* GetPhysicsVehicleConfigs(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetLayeredAudioComponent (Underlying native function: GetLayeredAudioComponent 0x6e5d6d0)
	class UFortLayeredAudioComponent* GetLayeredAudioComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetAudioParameterComponent (Underlying native function: GetAudioParameterComponent 0x259f780)
	class UAudioParameterComponent* GetAudioParameterComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetAudioMotorModelComponent (Underlying native function: GetAudioMotorModelComponent 0x24fd2ec)
	class UAudioMotorModelComponent* GetAudioMotorModelComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

