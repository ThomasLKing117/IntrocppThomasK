#pragma once
#include "Game.h"

class Stack
{
private:
	Hero mData[20];
	int mCount;
public:
	Hero Top()
	{

	}
	bool pop()
	{
		mData[mCount - 1];
		mCount = mCount - 1;
	}
	bool push(Hero* h)
	{
		mData[mCount] = *h;
		mCount = mCount + 1;
	}
	bool isEmpty()
	{

	}
	bool isFull()
	{

	}
};