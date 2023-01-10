// Class /Script/ControlRig.ControlRigPoseAsset
// Size: 0x88
class UControlRigPoseAsset : public UObject
{
	struct FControlRigControlPose Pose; // 0x28 (0x60)

	/* Functions */

	// Function /Script/ControlRig.ControlRigPoseAsset.SelectControls (Underlying native function: SelectControls 0x77e0b74)
	void SelectControls(class UControlRig*& InControlRig, bool& bDoMirror); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigPoseAsset.SavePose (Underlying native function: SavePose 0x77e0aac)
	void SavePose(class UControlRig*& InControlRig, bool& bUseAll); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigPoseAsset.ReplaceControlName (Underlying native function: ReplaceControlName 0x77e09d4)
	void ReplaceControlName(struct FName& CurrentName, struct FName& NewName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigPoseAsset.PastePose (Underlying native function: PastePose 0x77e0818)
	void PastePose(class UControlRig*& InControlRig, bool& bDoKey, bool& bDoMirror); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigPoseAsset.GetCurrentPose (Underlying native function: GetCurrentPose 0x77e06b8)
	void GetCurrentPose(class UControlRig*& InControlRig, struct FControlRigControlPose& OutPose); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ControlRig.ControlRigPoseAsset.GetControlNames (Underlying native function: GetControlNames 0x77e064c)
	struct TArray<struct FName> GetControlNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ControlRig.ControlRigPoseAsset.DoesMirrorMatch (Underlying native function: DoesMirrorMatch 0x77e0508)
	bool DoesMirrorMatch(class UControlRig*& ControlRig, struct FName& ControlName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

