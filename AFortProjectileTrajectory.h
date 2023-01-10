// Class /Script/FortniteGame.FortProjectileTrajectory
// Size: 0x2a0
class AFortProjectileTrajectory : public AActor
{
	class USplineComponent* SplineComponent; // 0x288 (0x8)
	struct TArray<class USplineMeshComponent*> SplineMeshComponents; // 0x290 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortProjectileTrajectory.SetTrajectorySpline (Underlying native function: SetTrajectorySpline 0x8e6c918)
	void SetTrajectorySpline(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)
};

