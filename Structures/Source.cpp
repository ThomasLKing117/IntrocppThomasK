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
	walGreens.money = 1000;
	walGreens.swords.quantity = 10;
	walGreens.swords.item.price = 100;
	
	josh.Buy(walGreens.swords);
	josh.Money = 100;
	walGreens.money += josh.Money;
	josh.Money -= walGreens.swords.item.price;
	walGreens.swords.quantity -= 1;

	tk.Buy(walGreens.swords);
	tk.Money = 500;
	walGreens.money += tk.Money;
	tk.Money -= (walGreens.swords.item.price * 5);
	walGreens.swords.quantity -= 5;

	robRiley.Buy(walGreens.swords);
	robRiley.Money = 400;
	walGreens.money += robRiley.Money;
	robRiley.Money -= (walGreens.swords.item.price * 4);
	walGreens.swords.quantity -= 4;

}