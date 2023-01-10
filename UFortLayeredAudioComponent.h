// Class /Script/FortniteGame.FortLayeredAudioComponent
// Size: 0xc80
class UFortLayeredAudioComponent : public UAudioComponent
{
	bool bFadeWhenOwnerDestroyed; // 0xc58 (0x1)
	unsigned char unreflected_c59[0x3]; // 0xc59 (0x3) 
	float FadeTimeWhenOwnerDestroyed; // 0xc5c (0x4)
	struct TArray<struct FFortLayeredAudioFloatParam> FloatParameters; // 0xc60 (0x10)
	struct FMulticastInlineDelegate OnOneshotEvent; // 0xc70 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortLayeredAudioComponent.StopAllAudio (Underlying native function: StopAllAudio 0x8c434b8)
	void StopAllAudio(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortLayeredAudioComponent.SetFloatParameterExt (Underlying native function: SetFloatParameterExt 0x1501394)
	void SetFloatParameterExt(struct FName& Name, float& Value); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortLayeredAudioComponent.ResetFloatParameter (Underlying native function: ResetFloatParameter 0x8c4264c)
	void ResetFloatParameter(struct FName& Name); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortLayeredAudioComponent.ResetAllFloatParameters (Underlying native function: ResetAllFloatParameters 0x25a94d0)
	void ResetAllFloatParameters(); // (Final | Native | Public | BlueprintCallable)
};

