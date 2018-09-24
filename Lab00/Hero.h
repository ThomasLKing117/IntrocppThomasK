#pragma once
#include <iostream>
#include <cstdlib> 
#include <ctime> 

class Hero
{
private:
	int mHealth = 100;
	int mPower = rand() % 100 + 1;
public:
	void Fight(Hero&);
	bool IsAlive();
	void TakeDamage(int);
	int GetHealth();
	int GetPower();
	friend std::ostream& operator<<(std::ostream os, const Hero& hero);
	bool operator == (Hero& other)
	{
		return mHealth == other.mHealth;
	}
};