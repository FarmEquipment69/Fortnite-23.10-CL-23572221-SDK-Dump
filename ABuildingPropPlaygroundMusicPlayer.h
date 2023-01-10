// Class /Script/FortniteGame.BuildingPropPlaygroundMusicPlayer
// Size: 0xf88
class ABuildingPropPlaygroundMusicPlayer : public ABuildingPropMusicPlayer
{
	class UFortMinigameLogicComponent* MinigameLogicComponent; // 0xf68 (0x8)
	class UFortGameplayReceiverMessageComponent* PlayReceiverComponent; // 0xf70 (0x8)
	class UFortGameplayReceiverMessageComponent* StopReceiverComponent; // 0xf78 (0x8)
	bool PlayDuringWaitingForPlayers; // 0xf80 (0x1)
	bool PlayDuringGameCountdown; // 0xf81 (0x1)
	bool PlayDuringGameplay; // 0xf82 (0x1)
	bool PlayDuringRoundEnd; // 0xf83 (0x1)
	bool PlayDuringGameEnd; // 0xf84 (0x1)
	unsigned char padding_f85[0x3]; // 0xf85 (0x3)

	/* Functions */

	// Function /Script/FortniteGame.BuildingPropPlaygroundMusicPlayer.StopReceiver (Underlying native function: StopReceiver 0x6df70d4)
	void StopReceiver(class AController*& TriggerInstigator); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingPropPlaygroundMusicPlayer.Stop (Underlying native function: Stop 0x273fd14)
	void Stop(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropPlaygroundMusicPlayer.PlayReceiver (Underlying native function: PlayReceiver 0x6df70d4)
	void PlayReceiver(class AController*& TriggerInstigator); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingPropPlaygroundMusicPlayer.Play (Underlying native function: Play 0x273fd14)
	void Play(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropPlaygroundMusicPlayer.OnMinigameStateChanged (Underlying native function: OnMinigameStateChanged 0x6fbd4fc)
	void OnMinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& NewMinigameState); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropPlaygroundMusicPlayer.ConditionallyLoadSongBasedOnMinigameState (Underlying native function: ConditionallyLoadSongBasedOnMinigameState 0x82a8b5c)
	void ConditionallyLoadSongBasedOnMinigameState(); // (Final | Native | Protected)
};

