// Class /Script/FortniteGame.FortPlayerHealthInfoComponent
// Size: 0x100
class UFortPlayerHealthInfoComponent : public UActorComponent
{
	struct TArray<class AFortTeamHealthInfo*> TeamHealthInfoArray; // 0xa0 (0x10)
	struct TMap<unsigned char, class AFortTeamHealthInfo*> TeamInfoToTeamHealthMap; // 0xb0 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerHealthInfoComponent.OnRep_TeamHealthInfoArray (Underlying native function: OnRep_TeamHealthInfoArray 0x8bbe64c)
	void OnRepTeamHealthInfoArray(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerHealthInfoComponent.OnHealthChanged (Underlying native function: OnHealthChanged 0x6ce3320)
	void OnHealthChanged(class AFortTeamHealthInfo*& TeamHealthInfo); // (Final | Native | Private)
};

