// Class /Script/FortniteGame.FortCosmeticReactivePreview
// Size: 0x2b8
class AFortCosmeticReactivePreview : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct TArray<class UObject*> PotentiallyResponsiveObjects; // 0x290 (0x10)
	struct TArray<struct FFCRP_LoopingUpdate> ActiveLoops; // 0x2a0 (0x10)
	unsigned char padding_2b0[0x8]; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCosmeticReactivePreview.StartSteppedDynamicStat (Underlying native function: StartSteppedDynamicStat 0x84d6af4)
	void StartSteppedDynamicStat(class UObject*& Requester, int& From, int& To, int& AtRate, enum EFCRP_LoopBehavior& EndBehavior); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCosmeticReactivePreview.StartSmoothDynamicStat (Underlying native function: StartSmoothDynamicStat 0x84d68d8)
	void StartSmoothDynamicStat(class UObject*& Requester, float& From, float& To, float& AtRate, enum EFCRP_LoopBehavior& EndBehavior); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCosmeticReactivePreview.OnFortPlayerPawnFinishedCustomization (Underlying native function: OnFortPlayerPawnFinishedCustomization 0x84d65b8)
	void OnFortPlayerPawnFinishedCustomization(class AFortPlayerPawn*& Pawn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCosmeticReactivePreview.OnBoundingActorEndedPlay (Underlying native function: OnBoundingActorEndedPlay 0x84d64fc)
	void OnBoundingActorEndedPlay(class AActor*& ActorEndingPlay, struct TEnumAsByte<EEndPlayReason>& Reason); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCosmeticReactivePreview.GetVariantInfo (Underlying native function: GetVariantInfo 0x6f89394)
	struct FCosmeticVariantInfo* GetVariantInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCosmeticReactivePreview.DispatchReactStart (Underlying native function: DispatchReactStart 0x2466474)
	void DispatchReactStart(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCosmeticReactivePreview.DispatchReactEnd (Underlying native function: DispatchReactEnd 0x1598df4)
	void DispatchReactEnd(); // (Native | Public | BlueprintCallable)
};

