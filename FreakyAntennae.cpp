#include "FreakyAntennae.h"



FreakyAntennae::FreakyAntennae(StructurePart* nextExtrusion)
{
	m_nextExtrusion = nextExtrusion;
}


FreakyAntennae::~FreakyAntennae()
{
}

void FreakyAntennae::Draw()
{
	printf(" ||||\n");
	printf(" ||||-/-/-\n");
	printf(" ||||		- Freaky antenna\n");

	m_nextExtrusion->Draw();

	// do freaky antenna things
}
