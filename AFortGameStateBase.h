// Class /Script/FortniteGame.FortGameStateBase
// Size: 0x378
class AFortGameStateBase : public AFGF_GameState
{
	unsigned char unreflected_350[0x18]; // 0x350 (0x18) 
	struct TScriptInterface<class IFortTimeOfDayManagerInterface> FortTimeOfDayManager; // 0x368 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateBase.OnRep_TimeOfDayManager (Underlying native function: OnRep_TimeOfDayManager 0x305961c)
	void OnRepTimeOfDayManager(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateBase.GetTimeOfDayManager (Underlying native function: GetTimeOfDayManager 0x869ef44)
	struct TScriptInterface<class IFortTimeOfDayManagerInterface> GetTimeOfDayManager(); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

