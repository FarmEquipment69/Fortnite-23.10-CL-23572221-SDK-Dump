// Class /Script/FortniteUI.FortGridWidgetBase
// Size: 0x2e0
class UFortGridWidgetBase : public UContentWidget
{
	class UClass* ClearWidgetType; // 0x160 (0x8)
	float TileWidth; // 0x168 (0x4)
	float TileHeight; // 0x16c (0x4)
	int TilesAcross; // 0x170 (0x4)
	int TilesDown; // 0x174 (0x4)
	bool bShrinkToFit; // 0x178 (0x1)
	unsigned char unreflected_179[0x3]; // 0x179 (0x3) 
	float PeekOverflowTilePercentage; // 0x17c (0x4)
	struct Fmargin TilePadding; // 0x180 (0x10)
	struct FSlateBrush GridBackground; // 0x190 (0xc0)
	struct Fmargin GridBackgroundPadding; // 0x250 (0x10)
	struct TArray<class UObject*> DataProvider; // 0x260 (0x10)
	struct FMulticastInlineDelegate OnTileGenerated; // 0x270 (0x10)
	struct FMulticastInlineDelegate OnTileClicked; // 0x280 (0x10)
	struct FMulticastInlineDelegate OnMouseEnterTile; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnMouseLeaveTile; // 0x2a0 (0x10)
	class UClass* TileWidgetType; // 0x2b0 (0x8)
	enum EGridSortKind SortKind; // 0x2b8 (0x1)
	bool bReversed; // 0x2b9 (0x1)
	unsigned char unreflected_2ba[0x2]; // 0x2ba (0x2) 
	struct FDelegate GetSortKeyFor; // 0x2bc (0xc)
	unsigned char padding_2c8[0x18]; // 0x2c8 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortGridWidgetBase.SetTileWidth (Underlying native function: SetTileWidth 0xa699eb8)
	void SetTileWidth(float& Width); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.SetTilesDown (Underlying native function: SetTilesDown 0xa699fc0)
	void SetTilesDown(int& Down); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.SetTilesAcross (Underlying native function: SetTilesAcross 0xa699f40)
	void SetTilesAcross(int& Across); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.SetTilePadding (Underlying native function: SetTilePadding 0xa699e30)
	void SetTilePadding(struct Fmargin& Padding); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.SetTileHeight (Underlying native function: SetTileHeight 0xa699da8)
	void SetTileHeight(float& Height); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.SetPeekOverflowTilePercentage (Underlying native function: SetPeekOverflowTilePercentage 0xa6998ec)
	void SetPeekOverflowTilePercentage(float& Percent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.SetDataProvider (Underlying native function: SetDataProvider 0xa69970c)
	void SetDataProvider(struct TArray<class UObject*>& Data); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.SetClearWidgetType (Underlying native function: SetClearWidgetType 0xa69968c)
	void SetClearWidgetType(class UClass*& InClearWidgetType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortGridWidgetBase.GetTiles (Underlying native function: GetTiles 0x8a8e8c4)
	struct TArray<class UFortGridPickerTile*> GetTiles(); // (Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortGridWidgetBase.GetTileForObject (Underlying native function: GetTileForObject 0xa698888)
	class UFortGridPickerTile* GetTileForObject(class UObject*& Object); // (Native | Public | BlueprintCallable | BlueprintPure)
};

