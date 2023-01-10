// Class /Script/FortniteGame.FortClientAnnouncement_Basic
// Size: 0x420
class AFortClientAnnouncement_Basic : public AFortClientAnnouncement
{
	unsigned char unreflected_2f8[0x8]; // 0x2f8 (0x8) 
	struct FFortClientAnnouncementData_Basic BasicData; // 0x300 (0x120)

	/* Functions */

	// Function /Script/FortniteGame.FortClientAnnouncement_Basic.SetTitleText (Underlying native function: SetTitleText 0x7f989f4)
	void SetTitleText(struct FText& TitleText); // (BlueprintAuthorityOnly | Native | Public)

	// Function /Script/FortniteGame.FortClientAnnouncement_Basic.SetIcon (Underlying native function: SetIcon 0x7f98674)
	void SetIcon(struct FSlateBrush& Icon); // (BlueprintAuthorityOnly | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortClientAnnouncement_Basic.SetDisplayTime (Underlying native function: SetDisplayTime 0x7f9856c)
	void SetDisplayTime(float& DisplayTime); // (BlueprintAuthorityOnly | Native | Public)

	// Function /Script/FortniteGame.FortClientAnnouncement_Basic.SetDetailText (Underlying native function: SetDetailText 0x7f98428)
	void SetDetailText(struct FText& DetailText); // (BlueprintAuthorityOnly | Native | Public)

	// Function /Script/FortniteGame.FortClientAnnouncement_Basic.OnRep_BasicData (Underlying native function: OnRep_BasicData 0x7f97ac0)
	void OnRepBasicData(struct FFortClientAnnouncementData_Basic& PreviousBasicData); // (Final | Native | Protected | HasOutParms)
};

