#pragma once
#include "TowerExtrusion.h"
class Window : public StructurePart
{
public:
	Window(StructurePart* nextExtrusioon);
	~Window();

	void Draw();
};

