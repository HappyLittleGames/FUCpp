#pragma once
#include "TowerExtrusion.h"
class FreakyAntennae : public StructurePart
{
public:
	FreakyAntennae(StructurePart* nextExtrusion);
	~FreakyAntennae();

	void Draw();
};

