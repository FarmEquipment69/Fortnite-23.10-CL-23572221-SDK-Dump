// Class /Script/FortniteUI.FortEventLevelScreen
// Size: 0x458
class UFortEventLevelScreen : public UAthenaSpatialFrontend
{
	class UFortEventLevelData* EventLevelScreenData; // 0x438 (0x8)
	class UFortActivatableVideoPanel* CinematicMovieWidgetInstance; // 0x440 (0x8)
	struct FTimerHandle* StreamedVideoOpeningTimer; // 0x448 (0x8)
	bool bCollapseTopbar; // 0x450 (0x1)
	bool bCollapseBottombar; // 0x451 (0x1)
	unsigned char padding_452[0x6]; // 0x452 (0x6)

	/* Functions */

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOpeningTimedOut (Underlying native function: StreamedVideoOpeningTimedOut 0xa55ddc0)
	void StreamedVideoOpeningTimedOut(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOnUrlSuccess (Underlying native function: StreamedVideoOnUrlSuccess 0xa55dc60)
	void StreamedVideoOnUrlSuccess(struct FString& OpenedURL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOnUrlFailure (Underlying native function: StreamedVideoOnUrlFailure 0xa55db00)
	void StreamedVideoOnUrlFailure(struct FString& OpenedURL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOnSkipButtonClicked (Underlying native function: StreamedVideoOnSkipButtonClicked 0xa55daec)
	void StreamedVideoOnSkipButtonClicked(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOnSkipBeforeVideoURLReceived (Underlying native function: StreamedVideoOnSkipBeforeVideoURLReceived 0xa55dad8)
	void StreamedVideoOnSkipBeforeVideoURLReceived(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOnOpenFailure (Underlying native function: StreamedVideoOnOpenFailure 0xa55d984)
	void StreamedVideoOnOpenFailure(struct FString& OpenedURL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOnMediaPlayerEndReached (Underlying native function: StreamedVideoOnMediaPlayerEndReached 0xa55d970)
	void StreamedVideoOnMediaPlayerEndReached(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOnMediaOpened (Underlying native function: StreamedVideoOnMediaOpened 0xa55d81c)
	void StreamedVideoOnMediaOpened(struct FString& OpenedURL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.OnEventCinematicVideoFinished (Underlying native function: OnEventCinematicVideoFinished 0x8b10a80)
	void OnEventCinematicVideoFinished(); // (Native | Protected)
};

