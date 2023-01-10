// Class /Script/VKEditGameplay.VKEditPlayspace
// Size: 0x740
class AVKEditPlayspace : public AFortPlayspace
{
	unsigned char unreflected_670[0x20]; // 0x670 (0x20) 
	struct TWeakObjectPtr<class UClass> EditorOnlyMinigameSettingsMachineClassToSpawn; // 0x690 (0x28)
	struct TWeakObjectPtr<class UClass> EditorOnlyWorldManagerClassToSpawn; // 0x6b8 (0x28)
	class UFortLevelStreamComponent* LevelStreamComponent; // 0x6e0 (0x8)
	class UFortProjectEditComponent* ProjectEditComponent; // 0x6e8 (0x8)
	class UPlayspaceComponent_PlayStopPauseManager* PlayStopPauseManager; // 0x6f0 (0x8)
	class UPlayspaceComponent_EditConnectionManager* EditConnectionManager; // 0x6f8 (0x8)
	class UPlayspaceComponent_LiveEdit* LiveEditComponent; // 0x700 (0x8)
	class UPlayspaceComponent_CreativeToolsPermission* CreativeToolsPermission; // 0x708 (0x8)
	class UPlayspaceComponent_CreativeLoadingStateProxy* CreativeLoadingStateProxy; // 0x710 (0x8)
	class UPlayspaceComponent_SpatialGameplay* SpatialGameplayComponent; // 0x718 (0x8)
	class UFortVolumeObjectTrackingComponent* ObjectTrackingComponent; // 0x720 (0x8)
	class UPlayspaceComponent_DeviceTracking* DeviceTrackerComponent; // 0x728 (0x8)
	class UPlayspaceComponent_CreativeInventory* CreativeInventoryComponent; // 0x730 (0x8)
	class UPlayspaceComponent_ActorMemoryTracker* ActorMemoryTrackerComponent; // 0x738 (0x8)

	/* Functions */

	// Function /Script/VKEditGameplay.VKEditPlayspace.OnClientActivatedContent (Underlying native function: OnClientActivatedContent 0x7476de8)
	void OnClientActivatedContent(struct FUniqueNetIdRepl& ClientNetId); // (Final | Native | Private | HasOutParms | Const)
};

