#pragma once
#include "StructurePart.h"
class TowerExtrusion : public StructurePart
{
public:
	TowerExtrusion(StructurePart* nextExtrusion);
	~TowerExtrusion();

	void Draw();
protected:
};

