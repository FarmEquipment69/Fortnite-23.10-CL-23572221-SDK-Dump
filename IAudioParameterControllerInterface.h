// Class /Script/AudioExtensions.AudioParameterControllerInterface
// Size: 0x28
class IAudioParameterControllerInterface : public IInterface
{

	/* Functions */

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter (Underlying native function: SetTriggerParameter 0x1638d68)
	void SetTriggerParameter(struct FName& InName); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetStringParameter (Underlying native function: SetStringParameter 0x984b0f8)
	void SetStringParameter(struct FName& InName, struct FString& InValue); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter (Underlying native function: SetStringArrayParameter 0x984b018)
	void SetStringArrayParameter(struct FName& InName, struct TArray<struct FString>& InValue); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint (Underlying native function: SetParameters_Blueprint 0x984af7c)
	void SetParametersBlueprint(struct TArray<struct FAudioParameter>& InParameters); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetObjectParameter (Underlying native function: SetObjectParameter 0x984aeb8)
	void SetObjectParameter(struct FName& InName, class UObject*& InValue); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter (Underlying native function: SetObjectArrayParameter 0x984add4)
	void SetObjectArrayParameter(struct FName& InName, struct TArray<class UObject*>& InValue); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetIntParameter (Underlying native function: SetIntParameter 0x163a004)
	void SetIntParameter(struct FName& InName, int& inInt); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter (Underlying native function: SetIntArrayParameter 0x984acf0)
	void SetIntArrayParameter(struct FName& InName, struct TArray<int>& InValue); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetFloatParameter (Underlying native function: SetFloatParameter 0x15018c4)
	void SetFloatParameter(struct FName& InName, float& InFloat); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter (Underlying native function: SetFloatArrayParameter 0x984ac0c)
	void SetFloatArrayParameter(struct FName& InName, struct TArray<float>& InValue); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetBoolParameter (Underlying native function: SetBoolParameter 0x1638c1c)
	void SetBoolParameter(struct FName& InName, bool& InBool); // (Native | Public | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter (Underlying native function: SetBoolArrayParameter 0x984ab24)
	void SetBoolArrayParameter(struct FName& InName, struct TArray<bool>& InValue); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioExtensions.AudioParameterControllerInterface.ResetParameters (Underlying native function: ResetParameters 0x268d874)
	void ResetParameters(); // (Native | Public | BlueprintCallable)
};

