#include "Hero.h"

Hero::Hero()
{
	mHealth = 100;
	mPower = rand() % 100 + 1;
	mName[255];
}

char Hero::GetName(char name)
{
	mName[255] = name;
	return mName[255];
}

void Hero::Fight(Hero &hero)
{
	hero.TakeDamage(mPower);
}

bool Hero::IsAlive()
{
	return mHealth > 0;
}

void Hero::TakeDamage(int amount)
{
	mHealth -= amount;
}

int Hero::GetHealth()
{
	return mHealth;
}

int Hero::GetPower()
{
	return mPower;
}