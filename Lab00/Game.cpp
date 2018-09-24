#include "Game.h"

bool Hero::operator==(const Hero& other)
{
	return this->mHealth == other.mHealth && this->mPower == other.mPower;
}

Hero Game::Battle(Hero &hero1, Hero &hero2)
{
	std::cout << "" << hero1.GetHealth() << " " << hero1.GetPower() << std::endl;
	std::cout << "" << hero2.GetHealth() << " " << hero2.GetPower() << std::endl;

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
		std::cout << "" << hero1.GetHealth() << std::endl;
		std::cout << "" << hero2.GetHealth() << std::endl;
	}
	if (hero1.IsAlive())
	{
		std::cout << std::endl;
		std::cout << "" <<hero1.GetHealth() << " Wins!!!" << std::endl;
		std::cout << std::endl;
		return hero1;
	}
	if (hero2.IsAlive())
	{
		std::cout << std::endl;
		std::cout << "" <<hero2.GetHealth() << " Wins!!!" << std::endl;
		std::cout << std::endl;
		return hero2;
	}
	std::cout << std::endl;
	std::cout << "They both lost???" << std::endl;
	std::cout << std::endl;
	return Hero();
}