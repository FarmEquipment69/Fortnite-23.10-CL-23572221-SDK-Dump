// Class /Script/FortniteGame.PlateHawk
// Size: 0x55c0
class APlateHawk : public AFortCharacterVehicle
{
	int BlockedCount; // 0x55b0 (0x4)
	unsigned char padding_55b4[0xc]; // 0x55b4 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.PlateHawk.UseOrExitPressedFromSeat (Underlying native function: UseOrExitPressedFromSeat 0x831e5d0)
	void UseOrExitPressedFromSeat(int& SeatIndex); // (Final | Native | Private)

	// Function /Script/FortniteGame.PlateHawk.ServerJump (Underlying native function: ServerJump 0x831e38c)
	void ServerJump(); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.PlateHawk.OnHawkInputEvent (Has no native function)
	void OnHawkInputEvent(enum EPlateHawkInputEvents& InputEvent); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.PlateHawk.IsHawkInputBlocked (Underlying native function: IsHawkInputBlocked 0x83182c0)
	bool IsHawkInputBlocked(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.PlateHawk.BlockHawkInput (Underlying native function: BlockHawkInput 0x8317564)
	void BlockHawkInput(float& Duration); // (Final | Native | Private | BlueprintCallable)
};

