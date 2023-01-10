// Class /Script/CommonUI.CommonDateTimeTextBlock
// Size: 0x3b0
class UCommonDateTimeTextBlock : public UCommonTextBlock
{
	unsigned char unreflected_3b0[0x3b0]; 

	/* Functions */

	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetTimespanValue (Underlying native function: SetTimespanValue 0x66304dc)
	void SetTimespanValue(struct FTimespan*& InTimespan); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetDateTimeValue (Underlying native function: SetDateTimeValue 0x662edb8)
	void SetDateTimeValue(struct FDateTime*& InDateTime, bool& bShowAsCountdown, float& InRefreshDelay); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText (Underlying native function: SetCountDownCompletionText 0x662ece8)
	void SetCountDownCompletionText(struct FText& InCompletionText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonDateTimeTextBlock.GetDateTime (Underlying native function: GetDateTime 0x662cb2c)
	struct FDateTime* GetDateTime(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

