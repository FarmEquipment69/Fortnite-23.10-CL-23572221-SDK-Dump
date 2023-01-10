// ScriptStruct /Script/Engine.KBoxElem
// Size: 0x68
struct FKBoxElem : FKShapeElem
{
	struct FVector Center; // 0x28 (0x18)
	struct FRotator Rotation; // 0x40 (0x18)
	float X; // 0x58 (0x4)
	float Y; // 0x5c (0x4)
	float Z; // 0x60 (0x4)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};

