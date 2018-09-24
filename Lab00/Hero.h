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
	char* mName;
public:
	Hero();
	char* GetName();
	void Fight(Hero&);
	bool IsAlive();
	void TakeDamage(int);
	int GetHealth();
	int GetPower();
	bool operator == (const Hero&);
};