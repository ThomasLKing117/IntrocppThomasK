#pragma once
#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime> 

class Hero
{
private:
	int mHealth = 100;
	int mPower = rand() % 100 + 1;
public:
	Hero();
	void Fight(Hero&);
	bool IsAlive();
	void TakeDamage(int);
	int GetHealth();
	int GetPower();
	friend std::ostream& operator<<(std::ostream os, const Hero& hero);
	bool operator == (const Hero&);
};