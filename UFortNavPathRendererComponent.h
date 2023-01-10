// Class /Script/FortniteAI.FortNavPathRendererComponent
// Size: 0x120
class UFortNavPathRendererComponent : public UActorComponent
{
	class UNiagaraSystem* PathVFX; // 0xa0 (0x8)
	struct FVector PathVFXOffset; // 0xa8 (0x18)
	struct TArray<struct FColor> PathColors; // 0xc0 (0x10)
	class UNiagaraComponent* PathVFXComponent; // 0xd0 (0x8)
	struct TArray<struct FPathRendererInfo> PathRendererList; // 0xd8 (0x10)
	struct TArray<struct FVector4f> AllPathsPoints; // 0xe8 (0x10)
	struct TArray<struct FVector> NavPathPoints; // 0xf8 (0x10)
	struct TArray<int> NavPathPointsStatus; // 0x108 (0x10)
	enum EPatrollingMode PathMode; // 0x118 (0x1)
	unsigned char unreflected_119[0x3]; // 0x119 (0x3) 
	int CurrentPathColorIndex; // 0x11c (0x4)

	/* Functions */

	// Function /Script/FortniteAI.FortNavPathRendererComponent.UpdatePathsVisualOnClient (Underlying native function: UpdatePathsVisualOnClient 0xa1818cc)
	void UpdatePathsVisualOnClient(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortNavPathRendererComponent.OnRep_PathPointsUpdated (Underlying native function: OnRep_PathPointsUpdated 0xa1817f0)
	void OnRepPathPointsUpdated(); // (Final | Native | Private)

	// Function /Script/FortniteAI.FortNavPathRendererComponent.OnRep_PathModeUpdated (Underlying native function: OnRep_PathModeUpdated 0xa1817dc)
	void OnRepPathModeUpdated(); // (Final | Native | Private)

	// Function /Script/FortniteAI.FortNavPathRendererComponent.OnRep_ColorIndexUpdated (Underlying native function: OnRep_ColorIndexUpdated 0xa1817dc)
	void OnRepColorIndexUpdated(); // (Final | Native | Private)

	// Function /Script/FortniteAI.FortNavPathRendererComponent.DeactivateFX (Underlying native function: DeactivateFX 0xa1817c8)
	void DeactivateFX(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

