#include <iostream>
#include "TowerBuilder.h"


int main()
{

	StructurePart* towerLevel = new TowerLevel();

	int input = 1337;
	while (input != 0)
	{
		if (input == 2)
		{
			towerLevel = new AdvertBoard(towerLevel);
		}
		if (input == 3)
		{
			towerLevel = new FreakyAntennae(towerLevel);
		}
		if (input == 4)
		{
			towerLevel = new Window(towerLevel);
		}

		towerLevel->Draw();

		printf("\n\n\n0 - leaf");
		printf("\n1 - nûssing");
		printf("\n2 - add advert board");
		printf("\n3 - add Antennae");
		printf("\n4 - add Window");
		printf("\n\n\n :");
		std::cin >> input;
	}

	return 0;
}