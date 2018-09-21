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

bool Stack::push(Hero *)
{
	mData[mCount];
	mCount++;
	return false;
}

bool Stack::isEmpty()
{
	return false;
}

bool Stack::isFull()
{
	return false;
}
