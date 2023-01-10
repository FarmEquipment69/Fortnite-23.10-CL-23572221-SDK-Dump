// Class /Script/FortniteUI.BarrierWidgetBase
// Size: 0x308
class UBarrierWidgetBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x10]; // 0x2d0 (0x10) 
	struct FBarrierObjectState FriendlyTeamState; // 0x2e0 (0x10)
	struct FBarrierObjectState EnemyTeamState; // 0x2f0 (0x10)
	unsigned char padding_300[0x8]; // 0x300 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.BarrierWidgetBase.UpdateHealth (Has no native function)
	void UpdateHealth(bool& bFriendlyTeam, float& HealthPercent, enum EBarrierFoodTeam& FoodTeam, bool& bFlashBar); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BarrierWidgetBase.OnMutatorObjectUpdated (Underlying native function: OnMutatorObjectUpdated 0xa3fbb1c)
	void OnMutatorObjectUpdated(struct FGameplayMutatorObjectDataArray& MutatorArray); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.BarrierWidgetBase.OnHandleSpectatingChanged (Underlying native function: OnHandleSpectatingChanged 0xa3fb4b8)
	void OnHandleSpectatingChanged(class AFortPlayerStateZone*& SpectatingTarget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.BarrierWidgetBase.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0xa3fb0a0)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)
};

