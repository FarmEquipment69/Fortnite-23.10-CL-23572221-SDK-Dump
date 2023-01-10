// Class /Script/MovieScene.MovieSceneCustomClockSource
// Size: 0x28
class IMovieSceneCustomClockSource : public IInterface
{

	/* Functions */

	// Function /Script/MovieScene.MovieSceneCustomClockSource.OnTick (Underlying native function: OnTick 0x979686c)
	void OnTick(float& DeltaSeconds, float& InPlayRate); // (Native | Public)

	// Function /Script/MovieScene.MovieSceneCustomClockSource.OnStopPlaying (Underlying native function: OnStopPlaying 0x97967cc)
	void OnStopPlaying(struct FQualifiedFrameTime& InStopTime); // (Native | Public | HasOutParms)

	// Function /Script/MovieScene.MovieSceneCustomClockSource.OnStartPlaying (Underlying native function: OnStartPlaying 0x979672c)
	void OnStartPlaying(struct FQualifiedFrameTime& InStartTime); // (Native | Public | HasOutParms)

	// Function /Script/MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime (Underlying native function: OnRequestCurrentTime 0x979663c)
	struct FFrameTime* OnRequestCurrentTime(struct FQualifiedFrameTime& InCurrentTime, float& InPlayRate); // (Native | Public | HasOutParms)
};

