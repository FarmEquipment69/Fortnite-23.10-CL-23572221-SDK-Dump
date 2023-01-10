// Class /Script/FortniteGame.AutomationPerfMonitorManager
// Size: 0xa8
class UAutomationPerfMonitorManager : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct TArray<struct FString> DesiredStats; // 0x30 (0x10)
	bool bRecording; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	float TimeSinceLastRecord; // 0x44 (0x4)
	int LastGoodFrame; // 0x48 (0x4)
	unsigned char padding_4c[0x5c]; // 0x4c (0x5c)

	/* Functions */

	// Function /Script/FortniteGame.AutomationPerfMonitorManager.StopRecordingFTestPerf (Underlying native function: StopRecordingFTestPerf 0x273fd14)
	void StopRecordingFTestPerf(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AutomationPerfMonitorManager.StartRecordingFTestPerf (Underlying native function: StartRecordingFTestPerf 0x8b11cc8)
	void StartRecordingFTestPerf(struct TArray<struct FString>& StatsToRecord); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AutomationPerfMonitorManager.IsRecordingFTestPerf (Underlying native function: IsRecordingFTestPerf 0x876110c)
	bool IsRecordingFTestPerf(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AutomationPerfMonitorManager.GetStatAverage (Underlying native function: GetStatAverage 0x8d265e8)
	float GetStatAverage(struct FString& StatName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AutomationPerfMonitorManager.GetPerfMonitorInstance (Underlying native function: GetPerfMonitorInstance 0x8d263ec)
	static class UAutomationPerfMonitorManager* GetPerfMonitorInstance(); // (Final | Native | Static | Public | BlueprintCallable)
};

