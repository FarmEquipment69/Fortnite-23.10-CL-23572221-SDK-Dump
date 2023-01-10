// Class /Script/FortniteGame.FortGameStateEndless
// Size: 0x10d0
class AFortGameStateEndless : public AFortGameStatePvE
{
	int WaveNumber; // 0x10c8 (0x4)
	unsigned char padding_10cc[0x4]; // 0x10cc (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateEndless.SetWaveNumber (Underlying native function: SetWaveNumber 0x8c95950)
	void SetWaveNumber(int& NewWaveNumber); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateEndless.GetWaveNumber (Underlying native function: GetWaveNumber 0x8c93cb8)
	int GetWaveNumber(); // (Final | Native | Private | BlueprintCallable)
};

