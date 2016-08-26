#include "AdvertBoard.h"



AdvertBoard::AdvertBoard(StructurePart* nextExtrusion)
{
	m_nextExtrusion = nextExtrusion;
}


AdvertBoard::~AdvertBoard()
{
}

void AdvertBoard::Draw()
{
	printf(" ||||_\n");
	printf(" ||||[]\n");
	printf(" ||||/		- advert board\n");

	m_nextExtrusion->Draw();

	// dipsplay those sweet adverts on the boards
}
