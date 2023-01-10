// Class /Script/FortniteGame.FortControllerComponent_MinigameActivity
// Size: 0x178
class UFortControllerComponent_MinigameActivity : public UFortControllerComponent
{
	unsigned char unreflected_178[0x178]; 

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_MinigameActivity.SetUITimeEnabled (Underlying native function: SetUITimeEnabled 0x845eabc)
	void SetUITimeEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_MinigameActivity.SetUIProgressEnabled (Underlying native function: SetUIProgressEnabled 0x845ea38)
	void SetUIProgressEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_MinigameActivity.SetUIEnabled (Underlying native function: SetUIEnabled 0x845e9b4)
	void SetUIEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_MinigameActivity.SetUIBestLapTimeEnabled (Underlying native function: SetUIBestLapTimeEnabled 0x845e930)
	void SetUIBestLapTimeEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_MinigameActivity.GetMinigameActivityComponent (Underlying native function: GetMinigameActivityComponent 0x845d0b8)
	static class UFortControllerComponent_MinigameActivity* GetMinigameActivityComponent(class APawn*& Pawn, enum EMinigameActivityComponentValidityResult& OutIsValid); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_MinigameActivity.ForwardMinigameActivityStatChanged (Underlying native function: ForwardMinigameActivityStatChanged 0x845ccb8)
	void ForwardMinigameActivityStatChanged(enum EMinigameActivityStat& Stat, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_MinigameActivity.ForwardMinigameActivityStarted (Underlying native function: ForwardMinigameActivityStarted 0x845cbf8)
	void ForwardMinigameActivityStarted(struct FMinigameActivityStartedData& StartData); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_MinigameActivity.ForwardMinigameActivityScoreChanged (Underlying native function: ForwardMinigameActivityScoreChanged 0x845cad0)
	void ForwardMinigameActivityScoreChanged(int& CurrentScore, int& TotalScore); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_MinigameActivity.ForwardMinigameActivityRankChanged (Underlying native function: ForwardMinigameActivityRankChanged 0x845ca4c)
	void ForwardMinigameActivityRankChanged(int& Rank); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_MinigameActivity.ForwardMinigameActivityEnded (Underlying native function: ForwardMinigameActivityEnded 0x845c9a4)
	void ForwardMinigameActivityEnded(struct FMinigameActivityEndedData& EndData); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

