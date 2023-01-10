// Class /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
// Size: 0x28
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes (Underlying native function: StartSessionWithAttributes 0xa285358)
	static bool StartSessionWithAttributes(struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession (Underlying native function: StartSession 0xa2852f0)
	static bool StartSession(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId (Underlying native function: SetUserId 0xa285168)
	static void SetUserId(struct FString& UserId); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId (Underlying native function: SetSessionId 0xa284fb8)
	static void SetSessionId(struct FString& SessionId); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation (Underlying native function: SetLocation 0xa284e08)
	static void SetLocation(struct FString& Location); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender (Underlying native function: SetGender 0xa284c58)
	static void SetGender(struct FString& Gender); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo (Underlying native function: SetBuildInfo 0xa284aa8)
	static void SetBuildInfo(struct FString& BuildInfo); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge (Underlying native function: SetAge 0xa2849e0)
	static void SetAge(int& Age); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes (Underlying native function: RecordSimpleItemPurchaseWithAttributes 0xa2847f4)
	static void RecordSimpleItemPurchaseWithAttributes(struct FString& ItemId, int& ItemQuantity, struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase (Underlying native function: RecordSimpleItemPurchase 0xa284660)
	static void RecordSimpleItemPurchase(struct FString& ItemId, int& ItemQuantity); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes (Underlying native function: RecordSimpleCurrencyPurchaseWithAttributes 0xa284474)
	static void RecordSimpleCurrencyPurchaseWithAttributes(struct FString& GameCurrencyType, int& GameCurrencyAmount, struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase (Underlying native function: RecordSimpleCurrencyPurchase 0xa2842e0)
	static void RecordSimpleCurrencyPurchase(struct FString& GameCurrencyType, int& GameCurrencyAmount); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes (Underlying native function: RecordProgressWithFullHierarchyAndAttributes 0xa2840d8)
	static void RecordProgressWithFullHierarchyAndAttributes(struct FString& ProgressType, struct TArray<struct FString>& ProgressNames, struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes (Underlying native function: RecordProgressWithAttributes 0xa283e18)
	static void RecordProgressWithAttributes(struct FString& ProgressType, struct FString& ProgressName, struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress (Underlying native function: RecordProgress 0xa283bb4)
	static void RecordProgress(struct FString& ProgressType, struct FString& ProgressName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase (Underlying native function: RecordItemPurchase 0xa2838dc)
	static void RecordItemPurchase(struct FString& ItemId, struct FString& Currency, int& PerItemCost, int& ItemQuantity); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes (Underlying native function: RecordEventWithAttributes 0xa283730)
	static void RecordEventWithAttributes(struct FString& EventName, struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute (Underlying native function: RecordEventWithAttribute 0xa2833c8)
	static void RecordEventWithAttribute(struct FString& EventName, struct FString& AttributeName, struct FString& AttributeValue); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent (Underlying native function: RecordEvent 0xa283278)
	static void RecordEvent(struct FString& EventName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes (Underlying native function: RecordErrorWithAttributes 0xa2830cc)
	static void RecordErrorWithAttributes(struct FString& Error, struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError (Underlying native function: RecordError 0xa282f1c)
	static void RecordError(struct FString& Error); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase (Underlying native function: RecordCurrencyPurchase 0xa282b38)
	static void RecordCurrencyPurchase(struct FString& GameCurrencyType, int& GameCurrencyAmount, struct FString& RealCurrencyType, float& RealMoneyCost, struct FString& PaymentProvider); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes (Underlying native function: RecordCurrencyGivenWithAttributes 0xa28294c)
	static void RecordCurrencyGivenWithAttributes(struct FString& GameCurrencyType, int& GameCurrencyAmount, struct TArray<struct FAnalyticsEventAttr>& Attributes); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven (Underlying native function: RecordCurrencyGiven 0xa2827b8)
	static void RecordCurrencyGiven(struct FString& GameCurrencyType, int& GameCurrencyAmount); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute (Underlying native function: MakeEventAttribute 0xa282538)
	static struct FAnalyticsEventAttr MakeEventAttribute(struct FString& AttributeName, struct FString& AttributeValue); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId (Underlying native function: GetUserId 0xa2824c4)
	static struct FString GetUserId(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId (Underlying native function: GetSessionId 0xa282450)
	static struct FString GetSessionId(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents (Underlying native function: FlushEvents 0xa2823d0)
	static void FlushEvents(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession (Underlying native function: EndSession 0xa282350)
	static void EndSession(); // (Final | Native | Static | Public | BlueprintCallable)
};

