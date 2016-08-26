#pragma once
#include "StructurePart.h"
class TowerLevel : public StructurePart
{
public:

	// Level root, top of decorator

	TowerLevel();
	~TowerLevel();

	virtual void Draw();

protected:
	StructurePart* m_structurePart;
private:
	Level* m_level;
};

