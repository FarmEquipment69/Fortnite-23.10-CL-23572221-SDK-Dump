// Class /Script/FortniteGame.BuildingPropMusicPlayer
// Size: 0xf68
class ABuildingPropMusicPlayer : public ABuildingProp
{
	unsigned char bCheckAlternateHotfixValue; // 0xef8 (0x1)
	unsigned char bPlayingByDefault; // 0xef8 (0x1)
	unsigned char bPlayRandomSong; // 0xef8 (0x1)
	unsigned char unreflected_ef9[0x7]; // 0xef9 (0x7) 
	struct TArray<int> AvailableSongIndices; // 0xf00 (0x10)
	class UDataTable* MusicTrackTable; // 0xf10 (0x8)
	struct TArray<struct TWeakObjectPtr<class UObject>> MusicArray; // 0xf18 (0x10)
	struct FMusicPlayerData* PlayingSongData; // 0xf28 (0x8)
	class UAudioComponent* SongAudioComponent; // 0xf30 (0x8)
	unsigned char unreflected_f38[0x10]; // 0xf38 (0x10) 
	struct FString SavedTrackName; // 0xf48 (0x10)
	enum EMusicTrackPlayback PlaybackType; // 0xf58 (0x1)
	unsigned char padding_f59[0xf]; // 0xf59 (0xf)

	/* Functions */

	// Function /Script/FortniteGame.BuildingPropMusicPlayer.StartSongForOptionsChange (Underlying native function: StartSongForOptionsChange 0x273fd14)
	void StartSongForOptionsChange(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingPropMusicPlayer.OnRep_PlayingSongData (Underlying native function: OnRep_PlayingSongData 0x838788c)
	void OnRepPlayingSongData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingPropMusicPlayer.LoadThenPlaySong (Underlying native function: LoadThenPlaySong 0x1a4539c)
	void LoadThenPlaySong(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingPropMusicPlayer.GetSavedTrackName (Underlying native function: GetSavedTrackName 0x83849e4)
	struct FString GetSavedTrackName(); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingPropMusicPlayer.GetMusicDataTable (Underlying native function: GetMusicDataTable 0x838431c)
	class UDataTable* GetMusicDataTable(); // (Native | Event | Protected | BlueprintEvent | Const)
};

