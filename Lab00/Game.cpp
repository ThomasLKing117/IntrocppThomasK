#include "Game.h"

std::ostream& operator<<(std::ostream& os, Hero& hero)
{
	os << hero.GetHealth() << " " << hero.GetPower();
	return os;
}

Hero Game::Battle(Hero &hero1, Hero &hero2)
{
	std::cout << "Iron Man " << hero1 << std::endl;
	std::cout << "Captain America " << hero2 << std::endl;

	if (hero1.GetHealth() == hero2.GetHealth())
	{
		std::cout << "They are equal in health" << std::endl;
	}

	if (hero1.GetPower() == hero2.GetPower())
	{
		std::cout << "They are equal in power" << std::endl;
	}

	while (hero1.IsAlive() && hero2.IsAlive())
	{
		std::cout << std::endl;
		system("pause");
		std::cout << std::endl;
		hero1.Fight(hero2);
		hero2.Fight(hero1);
		std::cout << "Iron Man " << hero1 << std::endl;
		std::cout << "Captain America " << hero2 << std::endl;
	}
	if (hero1.IsAlive())
	{
		std::cout << std::endl;
		std::cout << "Iron Man Won!!!" << std::endl;
		std::cout << std::endl;
		return hero1;
	}
	else if (hero2.IsAlive())
	{
		std::cout << std::endl;
		std::cout << "Captain America Won!!!" << std::endl;
		std::cout << std::endl;
		return hero2;
	}
	std::cout << std::endl;
	std::cout << "They both lost???" << std::endl;
	std::cout << std::endl;
	return Hero();
}