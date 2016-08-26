#pragma once
#include <stdio.h>
#include "Structures.h"

class StructurePart
{
public:
	StructurePart();
	~StructurePart();

	virtual void Draw() = 0;

protected:
	StructurePart* m_nextExtrusion;
};

