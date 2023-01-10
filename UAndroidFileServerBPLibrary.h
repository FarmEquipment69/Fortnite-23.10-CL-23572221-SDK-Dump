// Class /Script/AndroidFileServer.AndroidFileServerBPLibrary
// Size: 0x28
class UAndroidFileServerBPLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer (Underlying native function: StopFileServer 0x7dab194)
	static bool StopFileServer(bool& bUSB, bool& bNetwork); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer (Underlying native function: StartFileServer 0x7dab0a8)
	static bool StartFileServer(bool& bUSB, bool& bNetwork, int& Port); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning (Underlying native function: IsFileServerRunning 0x24f75e4)
	static struct TEnumAsByte<EAFSActiveType> IsFileServerRunning(); // (Final | Native | Static | Public | BlueprintCallable)
};

