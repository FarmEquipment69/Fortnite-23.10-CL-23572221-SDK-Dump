// Class /Script/LevelSequence.LevelSequenceMediaController
// Size: 0x2b0
class ALevelSequenceMediaController : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class ALevelSequenceActor* Sequence; // 0x290 (0x8)
	class UMediaComponent* MediaComponent; // 0x298 (0x8)
	float ServerStartTimeSeconds; // 0x2a0 (0x4)
	unsigned char padding_2a4[0xc]; // 0x2a4 (0xc)

	/* Functions */

	// Function /Script/LevelSequence.LevelSequenceMediaController.SynchronizeToServer (Underlying native function: SynchronizeToServer 0x9a08e8c)
	void SynchronizeToServer(float& DesyncThresholdSeconds); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceMediaController.Play (Underlying native function: Play 0x9a0875c)
	void Play(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds (Underlying native function: OnRep_ServerStartTimeSeconds 0x9a08730)
	void OnRepServerStartTimeSeconds(); // (Final | Native | Private)

	// Function /Script/LevelSequence.LevelSequenceMediaController.GetSequence (Underlying native function: GetSequence 0x6d69558)
	class ALevelSequenceActor* GetSequence(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LevelSequence.LevelSequenceMediaController.GetMediaComponent (Underlying native function: GetMediaComponent 0x9962b00)
	class UMediaComponent* GetMediaComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

