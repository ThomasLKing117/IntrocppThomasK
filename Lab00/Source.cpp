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

	Hero* hero3 = new Hero;
	hero3->GetName("War Machine");

	Hero* hero4 = new Hero;
	hero4->GetName("Hawkeye");

	Hero* hero5 = new Hero;
	hero5->GetName("Black Widow");

	Hero* hero6 = new Hero;
	hero6->GetName("Falcon");

	Hero* hero7 = new Hero;
	hero7->GetName("Black Panther");

	Hero* hero8 = new Hero;
	hero8->GetName("Bucky Barnes");

	Hero* hero9 = new Hero;
	hero9->GetName("The Vision");

	Hero* hero10 = new Hero;
	hero10->GetName("Ant Man");

	Hero* hero11 = new Hero;
	hero11->GetName("Spider Man");

	Hero* hero12 = new Hero;
	hero12->GetName("Scarlet Witch");

	Stack team1;
	team1.push(hero1);
	team1.push(hero3);
	team1.push(hero5);
	team1.push(hero7);
	team1.push(hero9);
	team1.push(hero11);

	Stack team2;
	team2.push(hero2);
	team2.push(hero4);
	team2.push(hero6);
	team2.push(hero8);
	team2.push(hero10);
	team2.push(hero12);

	while ()
	{
		team1.Top().Fight(team2.Top());
		team2.Top().Fight(team1.Top());
		team1.pop();
		team2.pop();
	}
	//Then place all heros back on their team in the descending order according to health
	
	system("pause");
	return 0;
}
/*
	Hero* hero1 = new Hero;
	hero1->GetName("Iron Man");
	
	Hero* hero2 = new Hero;
	hero2->GetName("Captain America");

	while (hero1->IsAlive() && hero2->IsAlive())
		g->Battle(*hero1, *hero2);

	Hero* hero3 = new Hero;
	hero3->GetName("War Machine");

	Hero* hero4 = new Hero;
	hero4->GetName("Hawkeye");

	while (hero3->IsAlive() && hero4->IsAlive())
		g->Battle(*hero3, *hero4);

	Hero* hero5 = new Hero;
	hero5->GetName("Black Widow");

	Hero* hero6 = new Hero;
	hero6->GetName("Falcon");

	while (hero5->IsAlive() && hero6->IsAlive())
		g->Battle(*hero5, *hero6);

	Hero* hero7 = new Hero;
	hero7->GetName("Black Panther");

	Hero* hero8 = new Hero;
	hero8->GetName("Bucky Barnes");

	while (hero7->IsAlive() && hero8->IsAlive())
		g->Battle(*hero7, *hero8);

	Hero* hero9 = new Hero;
	hero9->GetName("The Vision");

	Hero* hero10 = new Hero;
	hero10->GetName("Ant Man");

	while (hero9->IsAlive() && hero10->IsAlive())
		g->Battle(*hero9, *hero10);

	Hero* hero11 = new Hero;
	hero11->GetName("Spider Man");

	Hero* hero12 = new Hero;
	hero12->GetName("Scarlet Witch");

	while (hero11->IsAlive() && hero12->IsAlive())
		g->Battle(*hero11, *hero12);*/