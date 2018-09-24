#include "Stack.h"
#include "Hero.h"
#include "Game.h"
int main()
{
	
	srand(time(NULL));
	Hero hero1 = Hero("Iron Man");

	Hero hero2 = Hero("Captain America");
	 
	Game* g = new Game();
	g->Battle(hero1, hero2);
	system("pause");
	return 0;
}