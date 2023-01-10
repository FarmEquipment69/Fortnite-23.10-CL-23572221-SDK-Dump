// Class /Script/FortniteGame.FortSkyTubeAnchor
// Size: 0xf00
class AFortSkyTubeAnchor : public ABuildingProp
{
	bool bEnabled; // 0xef8 (0x1)
	bool bExemptFromShutdown; // 0xef9 (0x1)
	unsigned char padding_efa[0x6]; // 0xefa (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortSkyTubeAnchor.OnEnabledChanged (Has no native function)
	void OnEnabledChanged(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSkyTubeAnchor.IsExemptFromShutdown (Underlying native function: IsExemptFromShutdown 0x860a3c0)
	bool IsExemptFromShutdown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSkyTubeAnchor.IsEnabled (Underlying native function: IsEnabled 0x860a35c)
	bool IsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

