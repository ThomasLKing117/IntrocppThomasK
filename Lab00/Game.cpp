#include "Game.h"

std::ostream& operator<<(std::ostream& os, Hero& hero)
{
	os << hero.GetHealth() << " " << hero.GetPower();
	return os;
}

Hero Game::Battle(Hero &hero1, Hero &hero2)
{
	while (hero1.IsAlive() && hero2.IsAlive())
	{
		std::cout << "Iron Man " << hero1 << std::endl;
		std::cout << "Captain America " << hero2 << std::endl;
		std::cout << std::endl;
		system("pause");
		std::cout << std::endl;
		hero1.Fight(hero2);
		hero2.Fight(hero1);
	}
	if (hero1.IsAlive())
	{
		std::cout << "Iron Man Won!!!" << std::endl;
		return hero1;
	}
	else if (hero2.IsAlive())
	{
		std::cout << "Captain America Won!!!" << std::endl;
		return hero2;
	}
	return Hero();
}