// Class /Script/FortniteGame.FortAthenaMutator_TimedRespawnHelper
// Size: 0x510
class AFortAthenaMutator_TimedRespawnHelper : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x20]; // 0x330 (0x20) 
	struct FAthenaGameMessageData GameMsgNoMoreRespawn; // 0x350 (0x50)
	struct FScalableFloat RespawnAllowedTime; // 0x3a0 (0x28)
	struct FFortRespawnLogicData RespawnLogicData; // 0x3c8 (0x140)
	float ServerTimeRespawnIsDisallowed; // 0x508 (0x4)
	unsigned char padding_50c[0x4]; // 0x50c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_TimedRespawnHelper.OnRep_ServerTimeRespawnIsDisallowed (Underlying native function: OnRep_ServerTimeRespawnIsDisallowed 0x82636f8)
	void OnRepServerTimeRespawnIsDisallowed(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_TimedRespawnHelper.OnMutatorGameplayEvent (Underlying native function: OnMutatorGameplayEvent 0x82630d0)
	void OnMutatorGameplayEvent(int& EventId, int& EventParam1, int& EventParam2, int& EventParam3); // (Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_TimedRespawnHelper.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x81d85d4)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Native | Protected)
};

