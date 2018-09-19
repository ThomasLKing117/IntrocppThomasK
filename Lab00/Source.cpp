#include "Stack.h"

int main()
{
	Hero IronMan;
	Hero CaptainAmerica;
	Game* g = new Game();
	g->Battle(IronMan, CaptainAmerica);
}