#include <iostream>
#include <string>

struct Item
{
	std::string name;
	int price;
};

struct Stock
{
	Item item;
	int quantity;
};

struct Shop
{
	Stock swords;
	int money;
};

struct Buyer
{
	int Buy(Stock item)
	{
		return 0;
	}
	int Money;
};

int main()
{
	Buyer josh;

	Buyer tk;

	Buyer robRiley;

	Item swords;

	Shop walGreens;

	Stock stockSwords;
	walGreens.swords = stockSwords;
	josh.Buy(walGreens.swords);
}