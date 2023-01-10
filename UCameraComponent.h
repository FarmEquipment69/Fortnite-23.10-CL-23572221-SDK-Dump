// Class /Script/Engine.CameraComponent
// Size: 0xa30
class UCameraComponent : public USceneComponent
{
	float FieldOfView; // 0x2a0 (0x4)
	float OrthoWidth; // 0x2a4 (0x4)
	float OrthoNearClipPlane; // 0x2a8 (0x4)
	float OrthoFarClipPlane; // 0x2ac (0x4)
	float AspectRatio; // 0x2b0 (0x4)
	unsigned char bConstrainAspectRatio; // 0x2b4 (0x1)
	unsigned char bUseFieldOfViewForLOD; // 0x2b4 (0x1)
	unsigned char bLockToHmd; // 0x2b4 (0x1)
	unsigned char bUsePawnControlRotation; // 0x2b4 (0x1)
	struct TEnumAsByte<ECameraProjectionMode> ProjectionMode; // 0x2b5 (0x1)
	unsigned char unreflected_2b6[0x6a]; // 0x2b6 (0x6a) 
	float PostProcessBlendWeight; // 0x320 (0x4)
	unsigned char unreflected_324[0x2c]; // 0x324 (0x2c) 
	struct FPostProcessSettings PostProcessSettings; // 0x350 (0x6e0)

	/* Functions */

	// Function /Script/Engine.CameraComponent.SetUseFieldOfViewForLOD (Underlying native function: SetUseFieldOfViewForLOD 0x9af1d48)
	void SetUseFieldOfViewForLOD(bool& bInUseFieldOfViewForLOD); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetProjectionMode (Underlying native function: SetProjectionMode 0x9af1aec)
	void SetProjectionMode(struct TEnumAsByte<ECameraProjectionMode>& InProjectionMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetPostProcessBlendWeight (Underlying native function: SetPostProcessBlendWeight 0x9af1a68)
	void SetPostProcessBlendWeight(float& InPostProcessBlendWeight); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetOrthoWidth (Underlying native function: SetOrthoWidth 0x9af19e4)
	void SetOrthoWidth(float& InOrthoWidth); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetOrthoNearClipPlane (Underlying native function: SetOrthoNearClipPlane 0x9af1960)
	void SetOrthoNearClipPlane(float& InOrthoNearClipPlane); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetOrthoFarClipPlane (Underlying native function: SetOrthoFarClipPlane 0x9af18dc)
	void SetOrthoFarClipPlane(float& InOrthoFarClipPlane); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetFieldOfView (Underlying native function: SetFieldOfView 0x2971efc)
	void SetFieldOfView(float& InFieldOfView); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetConstraintAspectRatio (Underlying native function: SetConstraintAspectRatio 0x9af1170)
	void SetConstraintAspectRatio(bool& bInConstrainAspectRatio); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.SetAspectRatio (Underlying native function: SetAspectRatio 0x9af10ec)
	void SetAspectRatio(float& InAspectRatio); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.RemoveBlendable (Underlying native function: RemoveBlendable 0x9aef9b0)
	void RemoveBlendable(struct TScriptInterface<class IBlendableInterface>& InBlendableObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.OnCameraMeshHiddenChanged (Underlying native function: OnCameraMeshHiddenChanged 0x273fd14)
	void OnCameraMeshHiddenChanged(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.GetCameraView (Underlying native function: GetCameraView 0x9aeedec)
	void GetCameraView(float& DeltaTime, struct FMinimalViewInfo& DesiredView); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.CameraComponent.AddOrUpdateBlendable (Underlying native function: AddOrUpdateBlendable 0x9aeda64)
	void AddOrUpdateBlendable(struct TScriptInterface<class IBlendableInterface>& InBlendableObject, float& InWeight); // (Final | Native | Public | BlueprintCallable)
};

