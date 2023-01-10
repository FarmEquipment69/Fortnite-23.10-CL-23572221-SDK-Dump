// ScriptStruct /Script/Engine.NavigationLinkBase
// Size: 0x30
struct FNavigationLinkBase
{
	float LeftProjectHeight; // 0x0 (0x4)
	float MaxFallDownLength; // 0x4 (0x4)
	unsigned char unreflected_8[0x4]; // 0x8 (0x4) 
	float SnapRadius; // 0xc (0x4)
	float SnapHeight; // 0x10 (0x4)
	struct FNavAgentSelector SupportedAgents; // 0x14 (0x4)
	unsigned char bSupportsAgent0; // 0x18 (0x1)
	unsigned char bSupportsAgent1; // 0x18 (0x1)
	unsigned char bSupportsAgent2; // 0x18 (0x1)
	unsigned char bSupportsAgent3; // 0x18 (0x1)
	unsigned char bSupportsAgent4; // 0x18 (0x1)
	unsigned char bSupportsAgent5; // 0x18 (0x1)
	unsigned char bSupportsAgent6; // 0x18 (0x1)
	unsigned char bSupportsAgent7; // 0x18 (0x1)
	unsigned char bSupportsAgent8; // 0x19 (0x1)
	unsigned char bSupportsAgent9; // 0x19 (0x1)
	unsigned char bSupportsAgent10; // 0x19 (0x1)
	unsigned char bSupportsAgent11; // 0x19 (0x1)
	unsigned char bSupportsAgent12; // 0x19 (0x1)
	unsigned char bSupportsAgent13; // 0x19 (0x1)
	unsigned char bSupportsAgent14; // 0x19 (0x1)
	unsigned char bSupportsAgent15; // 0x19 (0x1)
	unsigned char unreflected_1a[0x2]; // 0x1a (0x2) 
	struct TEnumAsByte<ENavLinkDirection> Direction; // 0x1c (0x1)
	unsigned char bUseSnapHeight; // 0x1d (0x1)
	unsigned char bSnapToCheapestArea; // 0x1d (0x1)
	unsigned char bCustomFlag0; // 0x1d (0x1)
	unsigned char bCustomFlag1; // 0x1d (0x1)
	unsigned char bCustomFlag2; // 0x1d (0x1)
	unsigned char bCustomFlag3; // 0x1d (0x1)
	unsigned char bCustomFlag4; // 0x1d (0x1)
	unsigned char bCustomFlag5; // 0x1d (0x1)
	unsigned char bCustomFlag6; // 0x1e (0x1)
	unsigned char bCustomFlag7; // 0x1e (0x1)
	unsigned char unreflected_1f[0x1]; // 0x1f (0x1) 
	class UClass* AreaClass; // 0x20 (0x8)
	unsigned char padding_28[0x8]; // 0x28 (0x8)
};

