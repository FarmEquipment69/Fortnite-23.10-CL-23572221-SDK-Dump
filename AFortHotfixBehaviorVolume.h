// Class /Script/FortniteGame.FortHotfixBehaviorVolume
// Size: 0x290
class AFortHotfixBehaviorVolume : public AActor
{
	class UBoxComponent* TriggerBoxComponent; // 0x288 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortHotfixBehaviorVolume.OnOverlapEnd (Underlying native function: OnOverlapEnd 0x7dbf9e4)
	void OnOverlapEnd(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortHotfixBehaviorVolume.OnOverlapBegin (Underlying native function: OnOverlapBegin 0x7dbf588)
	void OnOverlapBegin(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortHotfixBehaviorVolume.CopyToClipboard (Underlying native function: CopyToClipboard 0x273fd14)
	void CopyToClipboard(); // (Final | Native | Public)
};

