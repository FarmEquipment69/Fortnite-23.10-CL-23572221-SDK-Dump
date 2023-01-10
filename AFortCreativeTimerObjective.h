// Class /Script/FortniteGame.FortCreativeTimerObjective
// Size: 0xf18
class AFortCreativeTimerObjective : public ABuildingProp
{
	unsigned char unreflected_ef8[0x8]; // 0xef8 (0x8) 
	struct FTimerObjectiveHUDData* HUDData; // 0xf00 (0x8)
	class AFortVolume* Volume; // 0xf08 (0x8)
	bool MaintainInteractionWhileLookingAround; // 0xf10 (0x1)
	unsigned char padding_f11[0x7]; // 0xf11 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeTimerObjective.SetHUDData (Underlying native function: SetHUDData 0x8551eec)
	void SetHUDData(struct FTimerObjectiveHUDData*& NewHUDData); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerObjective.OnGameStateSet (Underlying native function: OnGameStateSet 0x8550d58)
	void OnGameStateSet(class AFortGameState*& GameState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCreativeTimerObjective.BroadcastUpdateToHUD (Underlying native function: BroadcastUpdateToHUD 0x854b480)
	void BroadcastUpdateToHUD(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTimerObjective.BP_IsHUDVisible (Has no native function)
	bool BPIsHUDVisible(); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortCreativeTimerObjective.BP_GetLabelText (Has no native function)
	struct FText BPGetLabelText(); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortCreativeTimerObjective.BP_GetDisplayTextStyle (Has no native function)
	struct FName BPGetDisplayTextStyle(); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortCreativeTimerObjective.AddTimerObjectiveToVolume (Underlying native function: AddTimerObjectiveToVolume 0x854b2c8)
	void AddTimerObjectiveToVolume(); // (Final | Native | Protected)
};

