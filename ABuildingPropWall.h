// Class /Script/FortniteGame.BuildingPropWall
// Size: 0xf10
class ABuildingPropWall : public ABuildingProp
{
	struct FBuildingActorNavArea AreaPatternOverride; // 0xef8 (0x4)
	struct TEnumAsByte<EBuildingWallArea> AreaShapeType; // 0xefc (0x1)
	unsigned char unreflected_efd[0x3]; // 0xefd (0x3) 
	float AreaWidthOverride; // 0xf00 (0x4)
	unsigned char unreflected_f04[0x4]; // 0xf04 (0x4) 
	unsigned char bOverrideAreaWidth; // 0xf08 (0x1)
	unsigned char padding_f09[0x7]; // 0xf09 (0x7)
};

