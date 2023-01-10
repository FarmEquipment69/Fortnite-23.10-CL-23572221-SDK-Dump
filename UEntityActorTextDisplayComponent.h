// Class /Script/EntityActor.EntityActorTextDisplayComponent
// Size: 0xb8
class UEntityActorTextDisplayComponent : public UEntityActorComponent
{
	struct FText DisplayText; // 0x90 (0x18)
	float ShadowVarWorldSize; // 0xa8 (0x4)
	struct FColor ShadowVarTextRenderColor; // 0xac (0x4)
	bool bAddedTextRenderComponent; // 0xb0 (0x1)
	unsigned char padding_b1[0x7]; // 0xb1 (0x7)

	/* Functions */

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetWorldSize (Underlying native function: SetWorldSize 0x663e520)
	void SetWorldSize(float& Value); // (Final | Native | Public)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x663e468)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalTextAligment>& Value); // (Final | Native | Public)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetTextRenderColor (Underlying native function: SetTextRenderColor 0x663e3ec)
	void SetTextRenderColor(struct FColor& Value); // (Final | Native | Public | HasDefaults)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetText (Underlying native function: SetText 0x663e350)
	void SetText(struct FText& Text); // (Final | Native | Public)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetRelativeScale (Underlying native function: SetRelativeScale 0x663e278)
	void SetRelativeScale(struct FVector& RelativeScale); // (Final | Native | Public | HasDefaults)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetRelativeRotation (Underlying native function: SetRelativeRotation 0x663e18c)
	void SetRelativeRotation(struct FRotator& RelativeRotation); // (Final | Native | Public | HasDefaults)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetRelativeLocation (Underlying native function: SetRelativeLocation 0x663e0fc)
	void SetRelativeLocation(struct FVector& RelativeLocation); // (Final | Native | Public | HasDefaults)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x663e044)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizTextAligment>& Value); // (Final | Native | Public)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.OnRep_WorldSize (Underlying native function: OnRep_WorldSize 0x663dda8)
	void OnRepWorldSize(); // (Final | Native | Private)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.OnRep_TextRenderColor (Underlying native function: OnRep_TextRenderColor 0x663dd7c)
	void OnRepTextRenderColor(); // (Final | Native | Private)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.OnRep_DisplayText (Underlying native function: OnRep_DisplayText 0x663dd1c)
	void OnRepDisplayText(); // (Final | Native | Private)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetWorldSize (Underlying native function: GetWorldSize 0x663d6c0)
	float GetWorldSize(); // (Final | Native | Public | Const)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetVerticalAlignment (Underlying native function: GetVerticalAlignment 0x663d648)
	struct TEnumAsByte<EVerticalTextAligment> GetVerticalAlignment(); // (Final | Native | Public)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetTextRenderColor (Underlying native function: GetTextRenderColor 0x663d5d0)
	struct FColor GetTextRenderColor(); // (Final | Native | Public | HasDefaults | Const)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetText (Underlying native function: GetText 0x663d554)
	struct FText GetText(); // (Final | Native | Public | Const)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetRelativeLocation (Underlying native function: GetRelativeLocation 0x663d4c4)
	struct FVector GetRelativeLocation(); // (Final | Native | Public | HasDefaults)

	// Function /Script/EntityActor.EntityActorTextDisplayComponent.GetHorizontalAlignment (Underlying native function: GetHorizontalAlignment 0x663d44c)
	struct TEnumAsByte<EHorizTextAligment> GetHorizontalAlignment(); // (Final | Native | Public)
};

