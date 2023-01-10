// Class /Script/FortniteGame.FortCameraMode_AthenaVehicle
// Size: 0x1b20
class UFortCameraMode_AthenaVehicle : public UFortCameraMode_ThirdPerson
{
	struct FVector CameraOriginOffset; // 0x1b08 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortCameraMode_AthenaVehicle.OnPawnExitedVehicleFromSeat (Underlying native function: OnPawnExitedVehicleFromSeat 0x8067568)
	void OnPawnExitedVehicleFromSeat(struct TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn*& PlayerPawn, int& SeatIndex); // (Final | Native | Public | HasOutParms)
};

