#include "Stack.h"
#include "Hero.h"
Hero Stack::Top()
{
	return Hero();
}

bool Stack::pop()
{
	mData[mCount - 1];
	mCount--;
	return true;
}

bool Stack::push(Hero *hero)
{
	mData[mCount] = *hero;
	mCount++;
	return true;
}

bool Stack::isEmpty()
{
	if (mCount == 0)
	{
		return true;
	}
	return false;
}

bool Stack::isFull()
{
	if (mCount == 20)
	{
		return true;
	}
	return false;
}
