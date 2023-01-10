// Class /Script/WindRuntime.WindField
// Size: 0x398
class AWindField : public AFieldSystemActor
{
	float StartTime; // 0x290 (0x4)
	float StopTime; // 0x294 (0x4)
	float IncomingDuration; // 0x298 (0x4)
	float OutgoingDuration; // 0x29c (0x4)
	float StrengthMultiplier; // 0x2a0 (0x4)
	bool bIsActive; // 0x2a4 (0x1)
	unsigned char padding_2a5[0xf3]; // 0x2a5 (0xf3)

	/* Functions */

	// Function /Script/WindRuntime.WindField.SetActive (Underlying native function: SetActive 0x7486f10)
	void SetActive(bool& bInIsActive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/WindRuntime.WindField.RemoveIgnoredActor (Underlying native function: RemoveIgnoredActor 0x7486e08)
	void RemoveIgnoredActor(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/WindRuntime.WindField.RemoveCollider (Underlying native function: RemoveCollider 0x7486cd0)
	void RemoveCollider(class UShapeComponent*& ShapeComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/WindRuntime.WindField.OnEndOverlap (Underlying native function: OnEndOverlap 0x7486b7c)
	void OnEndOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& Other, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Native | Protected)

	// Function /Script/WindRuntime.WindField.OnBeginOverlap (Underlying native function: OnBeginOverlap 0x748698c)
	void OnBeginOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& Other, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Native | Protected | HasOutParms)

	// Function /Script/WindRuntime.WindField.AddIgnoredActor (Underlying native function: AddIgnoredActor 0x74867a4)
	void AddIgnoredActor(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/WindRuntime.WindField.AddCollider (Underlying native function: AddCollider 0x7486724)
	void AddCollider(class UShapeComponent*& ShapeComponent); // (Final | Native | Public | BlueprintCallable)
};

