// ScriptStruct /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// Size: 0x20
struct FGeometryCollectionSizeSpecificData
{
	float MaxSize; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FGeometryCollectionCollisionTypeData> CollisionShapes; // 0x8 (0x10)
	int DamageThreshold; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

