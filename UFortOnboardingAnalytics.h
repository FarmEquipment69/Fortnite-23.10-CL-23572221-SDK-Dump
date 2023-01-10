// Class /Script/FortniteGame.FortOnboardingAnalytics
// Size: 0x28
class UFortOnboardingAnalytics : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_VinderTipPlayed (Underlying native function: FireAnalyticsEvent_VinderTipPlayed 0x7f3d460)
	static void FireAnalyticsEventVinderTipPlayed(class UObject*& SourceBp, struct FString& VinderTipTag); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_TutorialStartupFailed (Underlying native function: FireAnalyticsEvent_TutorialStartupFailed 0x7f3d3ac)
	static void FireAnalyticsEventTutorialStartupFailed(class UObject*& SourceBp, int& MatchmakingResult); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_TutorialCompleted (Underlying native function: FireAnalyticsEvent_TutorialCompleted 0x7f3d2f8)
	static void FireAnalyticsEventTutorialCompleted(class UObject*& SourceBp, bool& WasSuccessful); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_TutorialCanceled (Underlying native function: FireAnalyticsEvent_TutorialCanceled 0x7f3d288)
	static void FireAnalyticsEventTutorialCanceled(class UObject*& SourceBp); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_MineCartDestroyed (Underlying native function: FireAnalyticsEvent_MineCartDestroyed 0x7f3c0c0)
	static void FireAnalyticsEventMineCartDestroyed(class UObject*& SourceBp); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortOnboardingAnalytics.FireAnalyticsEvent_CinematicSkipped (Underlying native function: FireAnalyticsEvent_CinematicSkipped 0x7f3aeec)
	static void FireAnalyticsEventCinematicSkipped(class UObject*& SourceBp, struct FString& CinematicName); // (Final | Native | Static | Public | BlueprintCallable)
};

