// Class /Script/FortniteGame.FortMissionPowerPointsInterface
// Size: 0x28
class IFortMissionPowerPointsInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortMissionPowerPointsInterface.GetPowerPointsCost (Underlying native function: GetPowerPointsCost 0x88ea730)
	float GetPowerPointsCost(float& LerpValue); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortMissionPowerPointsInterface.GetMaxRangeLerpValue (Underlying native function: GetMaxRangeLerpValue 0x88ea0d8)
	float GetMaxRangeLerpValue(float& PointsAvailable, float& PreviousLerpValue); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortMissionPowerPointsInterface.GetInitialRangeLerpValue (Underlying native function: GetInitialRangeLerpValue 0x854daf8)
	float GetInitialRangeLerpValue(float& PointsAvailable); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortMissionPowerPointsInterface.GetAvailabilityWeight (Underlying native function: GetAvailabilityWeight 0x854db90)
	float GetAvailabilityWeight(float& DifficultyLevel); // (Native | Public | Const)
};

