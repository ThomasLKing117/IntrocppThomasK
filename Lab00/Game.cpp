#include "Game.h"

std::ostream& operator<<(std::ostream& os, Hero& hero)
{
	os << hero.GetName() << " " << hero.GetHealth() << " " << hero.GetPower();
	return os;
}

bool Hero::operator==(const Hero& other)
{
	return this->mHealth == other.mHealth && this->mPower == other.mPower;
}

Hero Game::Battle(Hero &hero1, Hero &hero2)
{
	std::cout << hero1 << std::endl;
	std::cout << hero2 << std::endl;

	while (hero1.IsAlive() && hero2.IsAlive())
	{
		std::cout << std::endl;
		system("pause");
		std::cout << std::endl;
		if (hero1.IsAlive())
		{
			hero1.Fight(hero2);
		}
		if (hero2.IsAlive())
		{
			hero2.Fight(hero1);
		}
		std::cout << hero1 << std::endl;
		std::cout << hero2 << std::endl;
	}
	if (hero1.IsAlive())
	{
		std::cout << std::endl;
		std::cout << hero1.GetName() << " Wins!!!" << std::endl;
		std::cout << std::endl;
		return hero1;
	}
	if (hero2.IsAlive())
	{
		std::cout << std::endl;
		std::cout << hero2.GetName() << " Wins!!!" << std::endl;
		std::cout << std::endl;
		return hero2;
	}
	std::cout << std::endl;
	std::cout << "They both lost???" << std::endl;
	std::cout << std::endl;
	return 0;
}