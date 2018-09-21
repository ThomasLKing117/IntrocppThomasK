#include "Stack.h"

int main()
{
	srand(time(NULL));
	Hero IronMan;
	Hero CaptainAmerica;
	Game* g = new Game();
	g->Battle(IronMan, CaptainAmerica);
	system("pause");
	return 0;
}
//srand(time(NULL));
//mPower = rand() % 100 + 1;