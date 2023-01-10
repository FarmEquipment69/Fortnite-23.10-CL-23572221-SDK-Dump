// Class /Script/FortniteUI.FortPlayerPowerRating
// Size: 0x2b8
class UFortPlayerPowerRating : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnPowerRatingUpdated; // 0x290 (0x10)
	enum EFortPlayerPowerRatingType PowerRatingType; // 0x2a0 (0x1)
	unsigned char padding_2a1[0x17]; // 0x2a1 (0x17)

	/* Functions */

	// Function /Script/FortniteUI.FortPlayerPowerRating.RepresentLocalPlayer (Underlying native function: RepresentLocalPlayer 0xa5f60dc)
	void RepresentLocalPlayer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPlayerPowerRating.OnTeamPowerRatingUpdated (Has no native function)
	void OnTeamPowerRatingUpdated(int& TeamPowerRating); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPlayerPowerRating.OnTeamMembershipChanged (Has no native function)
	void OnTeamMembershipChanged(); // (Event | Protected | BlueprintEvent)

	// DelegateFunction /Script/FortniteUI.FortPlayerPowerRating.OnPowerRatingUpdated__DelegateSignature (Has no native function)
	void OnPowerRatingUpdatedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortPlayerPowerRating.OnPowerRatingProgressUpdated (Has no native function)
	void OnPowerRatingProgressUpdated(float& BaseRatingProgress, float& TeamRatingProgress); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPlayerPowerRating.OnBasePowerRatingUpdated (Has no native function)
	void OnBasePowerRatingUpdated(int& BasePowerRating); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPlayerPowerRating.HasTeamMembers (Underlying native function: HasTeamMembers 0x2777a80)
	bool HasTeamMembers(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPlayerPowerRating.GetTeamPowerRating (Underlying native function: GetTeamPowerRating 0x2d7adec)
	int GetTeamPowerRating(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPlayerPowerRating.GetBasePowerRating (Underlying native function: GetBasePowerRating 0x2af7234)
	int GetBasePowerRating(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

