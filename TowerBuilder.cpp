#include "TowerBuilder.h"



TowerBuilder::TowerBuilder()
{
}


TowerBuilder::~TowerBuilder()
{
}


StructurePart* TowerBuilder::OneWithEverything()
{
	return new AdvertBoard(new AdvertBoard(new TowerLevel()));
}

