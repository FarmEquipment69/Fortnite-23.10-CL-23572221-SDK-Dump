// Class /Script/FortniteGame.FortPlaysetGrenadeInputComponent
// Size: 0xb8
class UFortPlaysetGrenadeInputComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnPlaysetGrenadeTarget; // 0xa0 (0x10)
	class UInputComponent* PlaysetGrenadeInputComponent; // 0xb0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlaysetGrenadeInputComponent.PushPlaysetGrenadeInputMode (Underlying native function: PushPlaysetGrenadeInputMode 0x86e86e4)
	void PushPlaysetGrenadeInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlaysetGrenadeInputComponent.PopPlaysetGrenadeInputMode (Underlying native function: PopPlaysetGrenadeInputMode 0x86e7d30)
	void PopPlaysetGrenadeInputMode(class APlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable)
};

