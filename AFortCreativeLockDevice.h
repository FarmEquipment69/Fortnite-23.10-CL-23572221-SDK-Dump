// Class /Script/FortniteGame.FortCreativeLockDevice
// Size: 0xf18
class AFortCreativeLockDevice : public ABuildingProp
{
	struct FMulticastInlineDelegate OnLocalPawnInventoryChanged; // 0xef8 (0x10)
	unsigned char unreflected_f08[0x8]; // 0xf08 (0x8) 
	class AFortPlayerController* CachedLocalController; // 0xf10 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeLockDevice.HandleLocalPawnExitPreviewArea (Underlying native function: HandleLocalPawnExitPreviewArea 0x854ed10)
	void HandleLocalPawnExitPreviewArea(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeLockDevice.HandleLocalPawnEnterToPreviewArea (Underlying native function: HandleLocalPawnEnterToPreviewArea 0x854ec00)
	void HandleLocalPawnEnterToPreviewArea(class APawn*& Pawn); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)
};

