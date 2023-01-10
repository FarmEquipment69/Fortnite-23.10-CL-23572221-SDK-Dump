// Class /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase
// Size: 0xf40
class ACinematicSequenceDeviceBase : public ABuildingProp
{
	unsigned char unreflected_ef8[0x20]; // 0xef8 (0x20) 
	class ULevelSequence* Sequence; // 0xf18 (0x8)
	class ALevelSequenceActor* LevelSequenceActor; // 0xf20 (0x8)
	class AFortPlayerController* InstigatingController; // 0xf28 (0x8)
	unsigned char InstigatingTeam; // 0xf30 (0x1)
	unsigned char unreflected_f31[0x3]; // 0xf31 (0x3) 
	unsigned char bLoopPlayback; // 0xf34 (0x1)
	unsigned char bRestoreState; // 0xf34 (0x1)
	unsigned char bAutoPlay; // 0xf34 (0x1)
	unsigned char unreflected_f35[0x3]; // 0xf35 (0x3) 
	enum EFortMinigameState AutoPlayMinigameState; // 0xf38 (0x1)
	enum ECinematicSequenceVisibility Visibility; // 0xf39 (0x1)
	bool bLevelSequenceActorAlwaysRelevant; // 0xf3a (0x1)
	unsigned char padding_f3b[0x5]; // 0xf3b (0x5)

	/* Functions */

	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop (Underlying native function: Stop 0x6f8f7d4)
	void Stop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Play (Underlying native function: Play 0x6f8f7c0)
	void Play(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause (Underlying native function: Pause 0x6f8f798)
	void Pause(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated (Underlying native function: HandleSequencePlayerCreated 0x6e68090)
	void HandleSequencePlayerCreated(class ULevelSequencePlayer*& Player); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer (Underlying native function: GetSequencePlayer 0x6f8f778)
	class UMovieSceneSequencePlayer* GetSequencePlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

