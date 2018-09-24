#include "Stack.h"
#include "Hero.h"
#include "Game.h"
int main()
{
	srand(time(NULL));
	Hero* hero1 = new Hero;
	hero1->GetName("Iron Man");
	Hero* hero2 = new Hero;
	hero2->GetName("Captain America");
	Game* g = new Game();
	g->Battle(*hero1, *hero2);
	system("pause");
	return 0;
}