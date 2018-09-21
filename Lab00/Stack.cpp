#include "Stack.h"

Hero Stack::Top()
{
	return Hero();
}

bool Stack::pop()
{
	mData[mCount - 1];
	mCount--;
	return false;
}

bool Stack::push(Hero *hero)
{
	mData[mCount] = *hero;
	mCount++;
	return false;
}

bool Stack::isEmpty()
{
	if (mData == 0)
	{
		return true;
	}
	return false;
}

bool Stack::isFull()
{
	return false;
}
