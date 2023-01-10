// Class /Script/FortniteGame.FortAthenaMutator_HideHUDElements
// Size: 0x340
class AFortAthenaMutator_HideHUDElements : public AFortAthenaMutator
{
	struct TArray<struct FHUDElementsToHideData> HUDElementsToHideDataArray; // 0x330 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_HideHUDElements.OnSafeZonePhaseChanged (Underlying native function: OnSafeZonePhaseChanged 0x8227834)
	void OnSafeZonePhaseChanged(int& SafeZoneIndex); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_HideHUDElements.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x8226950)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | Native | Private)
};

