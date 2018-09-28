#include "Game.h"

Hero Game::Battle(Hero *hero1, Hero *hero2)
{
	hero1->PrintName();
	std::cout << " " << hero1->GetHealth() << " " << hero1->GetPower() << std::endl;
	hero1->PrintName();
	std::cout << " " << hero1->GetHealth() << " " << hero1->GetPower() << std::endl;
	while (hero1->IsAlive() && hero2->IsAlive())
	{
		hero1->Fight(hero2);
		hero2->Fight(hero1);
		hero1->PrintName();
		std::cout << " " << hero1->GetHealth() << std::endl;
		hero2->PrintName();
		std::cout << " " << hero2->GetHealth() << std::endl;
		system("pause");
	}
	
	if (hero1->IsAlive())
	{
		hero1->PrintName();
		std::cout << " wins!!!" << std::endl;
		system("pause");
		system("cls");
		return *hero1;
	}

	if (hero2->IsAlive())
	{
		hero2->PrintName();
		std::cout << " wins!!!" << std::endl;
		system("pause");
		system("cls");
		return *hero2;
	}

	return Hero();
}