// Class /Script/FortniteUI.AthenaSpectatorHitPointBarBase
// Size: 0x2a8
class UAthenaSpectatorHitPointBarBase : public UCommonUserWidget
{
	enum EHealthBarType BarType; // 0x290 (0x1)
	unsigned char unreflected_291[0x3]; // 0x291 (0x3) 
	float LastToCurrentUpdateRate; // 0x294 (0x4)
	bool bIsDBNO; // 0x298 (0x1)
	unsigned char unreflected_299[0x3]; // 0x299 (0x3) 
	struct TWeakObjectPtr<class UAthenaRemotePlayerViewData> PlayerData; // 0x29c (0x8)
	unsigned char padding_2a4[0x4]; // 0x2a4 (0x4)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorHitPointBarBase.SetPlayerData (Underlying native function: SetPlayerData 0x15b20ec)
	void SetPlayerData(class UAthenaRemotePlayerViewData*& InPlayerData); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaSpectatorHitPointBarBase.OnValueHealed (Underlying native function: OnValueHealed 0x226dd90)
	void OnValueHealed(class UAthenaRemotePlayerViewData*& InPlayerData, float& InValue, float& InValueMax); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorHitPointBarBase.OnValueDamaged (Underlying native function: OnValueDamaged 0x1117880)
	void OnValueDamaged(class UAthenaRemotePlayerViewData*& InPlayerData, float& InValue, float& InValueMax); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorHitPointBarBase.OnEliminatedStateChanged (Underlying native function: OnEliminatedStateChanged 0x16dd70c)
	void OnEliminatedStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bInIsEliminated); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorHitPointBarBase.OnDeltaValueChanged (Has no native function)
	void OnDeltaValueChanged(float& InDeltaValue); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorHitPointBarBase.OnDBNOStateChanged (Underlying native function: OnDBNOStateChanged 0x22d7c1c)
	void OnDBNOStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bInIsDBNO); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorHitPointBarBase.OnDBNOChanged (Has no native function)
	void OnDBNOChanged(bool& bInIsDBNO); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorHitPointBarBase.OnCurrentValueChanged (Has no native function)
	void OnCurrentValueChanged(float& InCurrentValue); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorHitPointBarBase.ChangeTextVisibility (Has no native function)
	void ChangeTextVisibility(bool& bIsVisible); // (Event | Protected | BlueprintCallable | BlueprintEvent)
};

