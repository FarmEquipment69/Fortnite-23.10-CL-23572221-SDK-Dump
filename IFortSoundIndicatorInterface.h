// Class /Script/FortniteGame.FortSoundIndicatorInterface
// Size: 0x28
class IFortSoundIndicatorInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortSoundIndicatorInterface.ShouldShowSoundIndicator (Underlying native function: ShouldShowSoundIndicator 0x863fd0c)
	bool ShouldShowSoundIndicator(class AFortPlayerController*& PlayerController); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSoundIndicatorInterface.GetAffiliationsToShowFor (Underlying native function: GetAffiliationsToShowFor 0x8760f3c)
	struct TArray<struct TEnumAsByte<EFortTeamAffiliation>> GetAffiliationsToShowFor(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

