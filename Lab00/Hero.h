#pragma once
#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime> 
#include <string>

class Hero
{
private:
	int mHealth;
	int mPower;
	char mName[255];
public:
	Hero();
	char GetName(char);
	void Fight(Hero&);
	bool IsAlive();
	void TakeDamage(int);
	int GetHealth();
	int GetPower();
	friend std::ostream& operator<<(std::ostream os, const Hero& hero);
	bool operator == (const Hero&);
};