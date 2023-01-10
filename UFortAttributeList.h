// Class /Script/FortniteUI.FortAttributeList
// Size: 0x290
class UFortAttributeList : public UFortUserWidget
{
	class UClass* AttributeItemClass; // 0x278 (0x8)
	bool bHoverEnabledOnElements; // 0x280 (0x1)
	unsigned char unreflected_281[0x7]; // 0x281 (0x7) 
	class UVerticalBox* AttributeContainer; // 0x288 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAttributeList.SetPreviewData (Underlying native function: SetPreviewData 0xa7f5bc0)
	void SetPreviewData(struct TArray<struct FFortDisplayAttribute>& Data); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortAttributeList.SetData (Underlying native function: SetData 0xa7f5048)
	struct TArray<struct FFortDisplayAttribute> SetData(struct TArray<struct FFortDisplayAttribute>& Data); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortAttributeList.ClearPreviewData (Underlying native function: ClearPreviewData 0xa7ebfa8)
	void ClearPreviewData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAttributeList.Clear (Underlying native function: Clear 0xa7ebf28)
	void Clear(); // (Final | Native | Public | BlueprintCallable)
};

