// Class /Script/Engine.DrawFrustumComponent
// Size: 0x550
class UDrawFrustumComponent : public UPrimitiveComponent
{
	bool bFrustumEnabled; // 0x530 (0x1)
	unsigned char unreflected_531[0x3]; // 0x531 (0x3) 
	struct FColor FrustumColor; // 0x534 (0x4)
	float FrustumAngle; // 0x538 (0x4)
	float FrustumAspectRatio; // 0x53c (0x4)
	float FrustumStartDist; // 0x540 (0x4)
	float FrustumEndDist; // 0x544 (0x4)
	class UTexture* Texture; // 0x548 (0x8)
};

