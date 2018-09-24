#include "Stack.h"
#include "Hero.h"
#include "Game.h"
int main()
{
	srand(time(NULL));
	Hero hero1;
	hero1.GetName();
	Hero hero2;
	hero2.GetName();
	Game* g = new Game();
	g->Battle(hero1, hero2);
	system("pause");
	return 0;
}