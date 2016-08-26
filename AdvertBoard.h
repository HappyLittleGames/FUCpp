#pragma once
#include "TowerExtrusion.h"
class AdvertBoard : public StructurePart
{
public:
	AdvertBoard(StructurePart* nextExtrusion);
	~AdvertBoard();

	void Draw();
};

