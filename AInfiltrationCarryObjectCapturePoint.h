// Class /Script/FortniteGame.InfiltrationCarryObjectCapturePoint
// Size: 0x2e8
class AInfiltrationCarryObjectCapturePoint : public AActor
{
	unsigned char unreflected_288[0x18]; // 0x288 (0x18) 
	struct FGameplayTagContainer GameplayTags; // 0x2a0 (0x20)
	float UIShowDistance; // 0x2c0 (0x4)
	float UIDetailDistance; // 0x2c4 (0x4)
	bool bCapturePointEnabled; // 0x2c8 (0x1)
	unsigned char padding_2c9[0x1f]; // 0x2c9 (0x1f)

	/* Functions */

	// Function /Script/FortniteGame.InfiltrationCarryObjectCapturePoint.StopUpdatingUIVisibility (Underlying native function: StopUpdatingUIVisibility 0x81acdc8)
	void StopUpdatingUIVisibility(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.InfiltrationCarryObjectCapturePoint.StartUpdatingUIVisibility (Underlying native function: StartUpdatingUIVisibility 0x81acd48)
	void StartUpdatingUIVisibility(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.InfiltrationCarryObjectCapturePoint.PlayOnIntelCapturedFX (Has no native function)
	void PlayOnIntelCapturedFX(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.InfiltrationCarryObjectCapturePoint.OnRep_bCapturePointEnabled (Underlying native function: OnRep_bCapturePointEnabled 0x81ab694)
	void OnRepbCapturePointEnabled(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.InfiltrationCarryObjectCapturePoint.OnPawnEndOverlap (Underlying native function: OnPawnEndOverlap 0x81ab028)
	void OnPawnEndOverlap(class AFortPlayerPawn*& TouchingPawn); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.InfiltrationCarryObjectCapturePoint.OnPawnBeginOverlap (Underlying native function: OnPawnBeginOverlap 0x81aaea4)
	void OnPawnBeginOverlap(class AFortPlayerPawn*& TouchingPawn); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.InfiltrationCarryObjectCapturePoint.OnNewUIVisibilityState (Has no native function)
	void OnNewUIVisibilityState(bool& bVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.InfiltrationCarryObjectCapturePoint.OnNewUIDetailState (Has no native function)
	void OnNewUIDetailState(bool& bDetailed); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.InfiltrationCarryObjectCapturePoint.MulticastIntelCaptured (Underlying native function: MulticastIntelCaptured 0x2466474)
	void MulticastIntelCaptured(); // (Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.InfiltrationCarryObjectCapturePoint.IntelTagCallback (Underlying native function: IntelTagCallback 0x81a9a08)
	void IntelTagCallback(struct FGameplayTag& tag, int& NewCount); // (Native | Protected)
};

