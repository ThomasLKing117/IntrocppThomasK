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

	Stack* team1 = new Stack;
	team1->push(hero1);
	team1->push(hero3);
	team1->push(hero5);
	team1->push(hero7);
	team1->push(hero9);
	team1->push(hero11);

	Stack* team2 = new Stack;
	team2->push(hero2);
	team2->push(hero4);
	team2->push(hero6);
	team2->push(hero8);
	team2->push(hero10);
	team2->push(hero12);

	while (!(team1->isEmpty()) && !(team2->isEmpty()))
	{
		Hero Top1 = team1->Top();
		Hero Top2 = team2->Top();

		Top1.PrintName();
		std::cout << " " << Top1.GetHealth() << " " << Top1.GetPower() << std::endl;
		Top2.PrintName();
		std::cout << " " << Top2.GetHealth() << " " << Top2.GetPower() << std::endl;

		Hero result = g->Battle(Top1, Top2);
		system("pause");
		system("cls");
	}

	/*while (!(team1->isEmpty()) && !(team2->isEmpty()))
	{
		team1->Top().Fight(&team2->Top());
		team2->Top().Fight(&team1->Top());
		team1->pop();
		team2->pop();
	}*/
	//Then place all heros back on their team in the descending order according to health

	system("pause");
	return 0;
}