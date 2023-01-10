// Class /Script/FortniteAI.FortAIEnvironmentalDangerSourceInterface
// Size: 0x28
class IFortAIEnvironmentalDangerSourceInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerSourceBounds (Underlying native function: GetDangerSourceBounds 0xa05ac84)
	struct FBox GetDangerSourceBounds(); // (Native | Event | Public | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerSourceActive (Underlying native function: GetDangerSourceActive 0x7db6c20)
	bool GetDangerSourceActive(); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerAtLocation (Underlying native function: GetDangerAtLocation 0xa05abec)
	float GetDangerAtLocation(struct FVector& Location); // (Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent | Const)
};

