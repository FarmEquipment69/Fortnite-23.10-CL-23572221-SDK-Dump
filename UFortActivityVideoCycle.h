// Class /Script/FortniteUI.FortActivityVideoCycle
// Size: 0x2e0
class UFortActivityVideoCycle : public UCommonUserWidget
{
	class UClass* MovieWidgetClass; // 0x290 (0x8)
	class UFortActivatableMovieWidget* ActivityMovieWidget; // 0x298 (0x8)
	unsigned char padding_2a0[0x40]; // 0x2a0 (0x40)

	/* Functions */

	// Function /Script/FortniteUI.FortActivityVideoCycle.PlayVideoOutro (Has no native function)
	void PlayVideoOutro(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityVideoCycle.PlayVideoIntro (Has no native function)
	void PlayVideoIntro(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityVideoCycle.HandleVideoCycleClosed (Underlying native function: HandleVideoCycleClosed 0xa55bbe4)
	void HandleVideoCycleClosed(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortActivityVideoCycle.HandleMovieWidgetMediaStarted (Underlying native function: HandleMovieWidgetMediaStarted 0xa55bb58)
	void HandleMovieWidgetMediaStarted(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortActivityVideoCycle.HandleMovieWidgetMediaPreEndEvent (Underlying native function: HandleMovieWidgetMediaPreEndEvent 0xa55bb44)
	void HandleMovieWidgetMediaPreEndEvent(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortActivityVideoCycle.HandleMovieWidgetMediaOpenFailed (Underlying native function: HandleMovieWidgetMediaOpenFailed 0xa55b89c)
	void HandleMovieWidgetMediaOpenFailed(struct FString& FailedUrl); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortActivityVideoCycle.HandleMovieWidgetMediaOpened (Underlying native function: HandleMovieWidgetMediaOpened 0xa55b9f0)
	void HandleMovieWidgetMediaOpened(struct FString& OpenedURL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortActivityVideoCycle.HandleMovieWidgetMediaError (Underlying native function: HandleMovieWidgetMediaError 0xa55b748)
	void HandleMovieWidgetMediaError(struct FString& StreamedVideoError); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortActivityVideoCycle.HandleMovieWidgetMediaEndReached (Underlying native function: HandleMovieWidgetMediaEndReached 0xa55b734)
	void HandleMovieWidgetMediaEndReached(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortActivityVideoCycle.HandleMovieWidgetMediaClosed (Underlying native function: HandleMovieWidgetMediaClosed 0xa55b720)
	void HandleMovieWidgetMediaClosed(); // (Final | Native | Private)
};

