#include "Stack.h"

int main()
{
	Hero IronMan;
	Hero CaptainAmerica;
	Game* g = new Game();
	g->Battle(IronMan, CaptainAmerica);
	system("pause");
	return 0;
}
//srand(time(NULL));
//mPower = rand() % 100 + 1;

//void Fight(Hero& hero)
//{
//	mHealth = mHealth - mPower;
//}

//bool push(Hero*)
//{
//	mData[mCount];
//	mCount = mCount + 1;
//}

//bool pop()
//{
//	mData[mCount - 1];
//	mCount = mCount - 1;
//}