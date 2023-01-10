// Class /Script/Engine.BlueprintPlatformLibrary
// Size: 0x28
class UBlueprintPlatformLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.BlueprintPlatformLibrary.SetAllowedDeviceOrientation (Underlying native function: SetAllowedDeviceOrientation 0x9c7687c)
	static void SetAllowedDeviceOrientation(struct TEnumAsByte<EScreenOrientation>& NewAllowedDeviceOrientation); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationFromNow (Underlying native function: ScheduleLocalNotificationFromNow 0x9c76484)
	static int ScheduleLocalNotificationFromNow(int& inSecondsFromNow, struct FText& Title, struct FText& Body, struct FText& Action, struct FString& ActivationEvent); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationBadgeFromNow (Underlying native function: ScheduleLocalNotificationBadgeFromNow 0x9c762f0)
	static void ScheduleLocalNotificationBadgeFromNow(int& inSecondsFromNow, struct FString& ActivationEvent); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationBadgeAtTime (Underlying native function: ScheduleLocalNotificationBadgeAtTime 0x9c76104)
	static int ScheduleLocalNotificationBadgeAtTime(struct FDateTime*& FireDateTime, bool& LocalTime, struct FString& ActivationEvent); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.ScheduleLocalNotificationAtTime (Underlying native function: ScheduleLocalNotificationAtTime 0x9c75de8)
	static int ScheduleLocalNotificationAtTime(struct FDateTime*& FireDateTime, bool& LocalTime, struct FText& Title, struct FText& Body, struct FText& Action, struct FString& ActivationEvent); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.GetLaunchNotification (Underlying native function: GetLaunchNotification 0x9c71fe8)
	static void GetLaunchNotification(bool& NotificationLaunchedApp, struct FString& ActivationEvent, int& FireDate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.GetDeviceOrientation (Underlying native function: GetDeviceOrientation 0x9c71bd8)
	static struct TEnumAsByte<EScreenOrientation> GetDeviceOrientation(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPlatformLibrary.GetAllowedDeviceOrientation (Underlying native function: GetAllowedDeviceOrientation 0x9c717a4)
	static struct TEnumAsByte<EScreenOrientation> GetAllowedDeviceOrientation(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.BlueprintPlatformLibrary.ClearAllLocalNotifications (Underlying native function: ClearAllLocalNotifications 0x9c6e6b0)
	static void ClearAllLocalNotifications(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.CancelLocalNotificationById (Underlying native function: CancelLocalNotificationById 0x9c6e384)
	static void CancelLocalNotificationById(int& NotificationId); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.BlueprintPlatformLibrary.CancelLocalNotification (Underlying native function: CancelLocalNotification 0x9c6e1e8)
	static void CancelLocalNotification(struct FString& ActivationEvent); // (Final | Native | Static | Public | BlueprintCallable)
};

