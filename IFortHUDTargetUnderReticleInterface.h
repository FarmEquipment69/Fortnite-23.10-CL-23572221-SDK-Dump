// Class /Script/FortniteGame.FortHUDTargetUnderReticleInterface
// Size: 0x28
class IFortHUDTargetUnderReticleInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortHUDTargetUnderReticleInterface.GetHUDTargetUpgradeDisplayName (Underlying native function: GetHUDTargetUpgradeDisplayName 0x8d73f04)
	struct FText GetHUDTargetUpgradeDisplayName(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHUDTargetUnderReticleInterface.GetHUDTargetHealthPercentage (Underlying native function: GetHUDTargetHealthPercentage 0x8d73edc)
	float GetHUDTargetHealthPercentage(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHUDTargetUnderReticleInterface.GetHUDTargetDisplayName (Underlying native function: GetHUDTargetDisplayName 0x877bb0c)
	struct FText GetHUDTargetDisplayName(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHUDTargetUnderReticleInterface.GetHUDTargetDisplayModifiers (Underlying native function: GetHUDTargetDisplayModifiers 0x8d73ea0)
	struct TArray<struct FText> GetHUDTargetDisplayModifiers(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortHUDTargetUnderReticleInterface.GetHUDTargetDifficultyRating (Underlying native function: GetHUDTargetDifficultyRating 0x7dc7810)
	float GetHUDTargetDifficultyRating(); // (Native | Public | BlueprintCallable)
};

