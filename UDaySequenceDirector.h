// Class /Script/DaySequence.DaySequenceDirector
// Size: 0x38
class UDaySequenceDirector : public UObject
{
	class UDaySequencePlayer* Player; // 0x28 (0x8)
	int SubSequenceID; // 0x30 (0x4)
	int MovieScenePlayerIndex; // 0x34 (0x4)

	/* Functions */

	// Function /Script/DaySequence.DaySequenceDirector.OnCreated (Has no native function)
	void OnCreated(); // (Event | Public | BlueprintEvent)

	// Function /Script/DaySequence.DaySequenceDirector.GetSequence (Underlying native function: GetSequence 0x7cc296c)
	class UMovieSceneSequence* GetSequence(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DaySequence.DaySequenceDirector.GetMasterSequenceTime (Underlying native function: GetMasterSequenceTime 0x7cc293c)
	struct FQualifiedFrameTime GetMasterSequenceTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DaySequence.DaySequenceDirector.GetCurrentTime (Underlying native function: GetCurrentTime 0x7cc27d4)
	struct FQualifiedFrameTime GetCurrentTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DaySequence.DaySequenceDirector.GetBoundObjects (Underlying native function: GetBoundObjects 0x7cc2700)
	struct TArray<class UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID& ObjectBinding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DaySequence.DaySequenceDirector.GetBoundObject (Underlying native function: GetBoundObject 0x7cc2644)
	class UObject* GetBoundObject(struct FMovieSceneObjectBindingID& ObjectBinding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DaySequence.DaySequenceDirector.GetBoundActors (Underlying native function: GetBoundActors 0x7cc2570)
	struct TArray<class AActor*> GetBoundActors(struct FMovieSceneObjectBindingID& ObjectBinding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DaySequence.DaySequenceDirector.GetBoundActor (Underlying native function: GetBoundActor 0x7cc24b4)
	class AActor* GetBoundActor(struct FMovieSceneObjectBindingID& ObjectBinding); // (Final | Native | Public | BlueprintCallable)
};

