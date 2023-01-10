// Class /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor
// Size: 0x2b8
class ASpecialEventScriptMeshActor : public AInfo
{
	struct FDateTime* RootStartTime; // 0x288 (0x8)
	struct FString CalendarEventName; // 0x290 (0x10)
	float CalenderEventOffsetInSeconds; // 0x2a0 (0x4)
	float EncryptionKeyDeliveryTimeOffset; // 0x2a4 (0x4)
	unsigned char unreflected_2a8[0x8]; // 0x2a8 (0x8) 
	class UMeshNetworkComponent* MeshNetworkComponent; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.OnRep_RootStartTime (Underlying native function: OnRep_RootStartTime 0x735f220)
	void OnRepRootStartTime(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartEvent (Underlying native function: MeshRootStartEvent 0x735d738)
	void MeshRootStartEvent(); // (Final | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimerOnly (Underlying native function: MeshRootStartCalendarTimerOnly 0x735d6c8)
	void MeshRootStartCalendarTimerOnly(); // (Final | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimer (Underlying native function: MeshRootStartCalendarTimer 0x735d6b4)
	void MeshRootStartCalendarTimer(); // (Final | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootResetEvent (Underlying native function: MeshRootResetEvent 0x735d6a0)
	void MeshRootResetEvent(); // (Final | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootLogCalendarTimer (Underlying native function: MeshRootLogCalendarTimer 0x735d68c)
	void MeshRootLogCalendarTimer(); // (Final | Exec | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootClearCalendarTimer (Underlying native function: MeshRootClearCalendarTimer 0x735d678)
	void MeshRootClearCalendarTimer(); // (Final | Exec | Native | Public)
};

