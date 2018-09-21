#include "Game.h"

Hero Game::Battle(Hero &hero1, Hero &hero2)
{
	hero1.Fight(hero2);
	hero2.Fight(hero1);

	if (hero1.IsAlive())
	{
		return hero1;
	}
	else if (hero2.IsAlive())
	{
		return hero2;
	}
	return Hero();
}