#pragma once
#include "Game.h"

class Stack
{
private:
	Hero mData[20];
	int mCount;
public:
	Hero Top();
	bool pop();
	bool push(Hero*);
	bool isEmpty();
	bool isFull();
};