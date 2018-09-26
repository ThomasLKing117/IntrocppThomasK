#include "Stack.h"
#include "Hero.h"
#include "Game.h"

int main()
{
	srand(time(NULL));
	Game* g = new Game();

	Hero* hero1 = new Hero;
	hero1->GetName("Iron Man");

	Hero* hero2 = new Hero;
	hero2->GetName("Captain America");

	while (hero1->IsAlive() && hero2->IsAlive())
		g->Battle(*hero1, *hero2);
	system("Pause");
	system("cls");

	Hero* hero3 = new Hero;
	hero3->GetName("War Machine");

	Hero* hero4 = new Hero;
	hero4->GetName("Hawkeye");

	while (hero3->IsAlive() && hero4->IsAlive())
		g->Battle(*hero3, *hero4);
	system("Pause");
	system("cls");

	Hero* hero5 = new Hero;
	hero5->GetName("Black Widow");

	Hero* hero6 = new Hero;
	hero6->GetName("Falcon");

	while (hero5->IsAlive() && hero6->IsAlive())
		g->Battle(*hero5, *hero6);
	system("Pause");
	system("cls");

	Hero* hero7 = new Hero;
	hero7->GetName("Black Panther");

	Hero* hero8 = new Hero;
	hero8->GetName("Bucky Barnes");

	while (hero7->IsAlive() && hero8->IsAlive())
		g->Battle(*hero7, *hero8);
	system("Pause");
	system("cls");

	Hero* hero9 = new Hero;
	hero9->GetName("The Vision");

	Hero* hero10 = new Hero;
	hero10->GetName("Ant Man");

	while (hero9->IsAlive() && hero10->IsAlive())
		g->Battle(*hero9, *hero10);
	system("Pause");
	system("cls");

	Hero* hero11 = new Hero;
	hero11->GetName("Spider Man");

	Hero* hero12 = new Hero;
	hero12->GetName("Scarlet Witch");

	while (hero11->IsAlive() && hero12->IsAlive())
		g->Battle(*hero11, *hero12);
	system("Pause");
	system("cls");

	system("pause");
	return 0;
}