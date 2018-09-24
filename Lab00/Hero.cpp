#include "Hero.h"

Hero::Hero(const char* name)
{
	mName = name;
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

char Hero::GetName()
{
	return *mName;
}