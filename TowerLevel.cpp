#include "TowerLevel.h"



TowerLevel::TowerLevel()
{
}


TowerLevel::~TowerLevel()
{
}

void TowerLevel::Draw()
{
	printf(" ||||\n");
	printf(" ||||\n");
	printf("_|HH|_			- base level\n" /* THIS IS WHERE OVERLOADING SHOULD HAPPEN ON THE "LEVEL" LEVEL */);

	// Should also count extrusions though!
}
