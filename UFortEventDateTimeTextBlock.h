// Class /Script/FortniteUI.FortEventDateTimeTextBlock
// Size: 0x390
class UFortEventDateTimeTextBlock : public UCommonTextBlock
{
	unsigned char unreflected_390[0x390]; 

	/* Functions */

	// Function /Script/FortniteUI.FortEventDateTimeTextBlock.SetTimespanValue (Underlying native function: SetTimespanValue 0xa2a5478)
	void SetTimespanValue(struct FTimespan*& InTimespan, struct TEnumAsByte<DateFormat>& InFormatStyle); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortEventDateTimeTextBlock.SetDateTimeValue (Underlying native function: SetDateTimeValue 0xa2a5378)
	void SetDateTimeValue(struct FDateTime*& InDateTime, struct TEnumAsByte<DateFormat>& InFormatStyle, float& InRefreshDelay); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortEventDateTimeTextBlock.SetCountDownCompletionText (Underlying native function: SetCountDownCompletionText 0xa2a52dc)
	void SetCountDownCompletionText(struct FText& InCompletionText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortEventDateTimeTextBlock.GetDateTime (Underlying native function: GetDateTime 0x662cb2c)
	struct FDateTime* GetDateTime(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

