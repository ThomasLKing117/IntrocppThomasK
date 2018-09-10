#include <iostream>
#include <string>

struct Shop
{
	Stock swords;
	int money = 1000;
};

struct Buyer
{
	int Buy(Item stock);
	int Money = 500;
};

struct Item
{
	std::string name;
	int price = 100;
};

struct Stock
{
	Item item;
	int quantity = 10;
};

int main()
{
	Buyer josh;
	Buyer tk;
	Buyer robRiley;

	Item swords;

	Shop walGreens;

	Stock stockSwords;
}











































//#include <iostream>
//
//struct Shop
//{
//	int sGold = 10000;
//	int sHealthPotion = 100;
//	int sManaPotion = 50;
//	int sStaminaPotion = 20;
//	int sStock[3] = { 20,20,20 };
//	int buy(int item, int size)
//	{
//		for (int i = item; i < size; i++)
//		{
//
//		}
//	}
//};
//
//struct Player
//{
//	int pGold;
//	int pHealthPotion;
//	int pManaPotion;
//	int pStaminaPotion;
//	int pStock[3];
//};
//
//void money(int &amount)
//{
//	std::cout << "How much gold do you have?" << std::endl;
//	std::cin >> amount;
//	std::cout << "You have " << amount << " gold!" << std::endl;
//	std::cout << std::endl;
//}
//
//void hPotion(int &health)
//{
//	std::cout << "How many Health Potions do you have?" << std::endl;
//	std::cin >> health;
//	std::cout << "You have " << health << " Health Potions" << std::endl;	
//	std::cout << std::endl;
//}
//
//void mPotion(int &mana)
//{
//	std::cout << "How many Mana Potions do you have?" << std::endl;
//	std::cin >> mana;
//	std::cout << "You have " << mana << " Mana Potions" << std::endl;
//	std::cout << std::endl;
//}
//
//void sPotion(int &stamina)
//{
//	std::cout << "How many Stamina Potions do you have?" << std::endl;
//	std::cin >> stamina;
//	std::cout << "You have " << stamina << " Stamina Potions" << std::endl;
//	std::cout << std::endl;
//}
//
//
//
//int main()
//{
//	int startingGold = 0;
//	int startingPotionH = 0;
//	int startingPotionM = 0;
//	int startingPotionS = 0;
//
//	money(startingGold);
//	hPotion(startingPotionH);
//	mPotion(startingPotionM);
//	sPotion(startingPotionS);
//
//	Player Buyer;
//	Buyer.pGold = startingGold;
//	Buyer.pHealthPotion = startingPotionH;
//	Buyer.pManaPotion = startingPotionM;
//	Buyer.pStaminaPotion = startingPotionS;
//	Buyer.pStock[3] = { startingPotionH, startingPotionM, startingPotionS };
//	system("cls");
//
//
//	
//	return 0;
//}