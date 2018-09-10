#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime> 

//classwork functions

//int print(std::string input)
//{
//	for (int i = 0; i < input.length(); i++)
//	{
//		std::cout << input[i] << std::endl;
//	}
//	return 0;
//}
//bool IsMultOfThree(int value)
//{
//	/*if (value % 3 == 0)
//	{
//		return true;
//	}
//
//	else
//	{
//		return false;
//	}*/
//}
//void PrintValuesTo10()
//{
//	/*for (int i = 0; i <= 10; i++)
//	{
//		std::cout << i << std::endl;
//	}*/
//}
//void PrintValuesBetween(int low, int high)
//{
//	/*for (int i = low + 1; i < high; i++)
//	{
//		std::cout << i << " " << std::endl;
//	}*/
//}
//int ArraySum(int arr[], int size)
//{
//	/*int sum = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		sum += arr[i];
//	}
//	return sum;*/
//}
//void ReverseArray(int arr[], int size)
//{
//	/*int temp;
//	for (int i = 0; i < (size / 2); i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[(size - 1) - i];
//		arr[(size - 1) - i] = temp;
//	}*/
//}

//Home work functions

void CoinToss(int numberOfTosses)
{
	int x;
	int heads = 0;
	int tails = 0;

	srand(time(NULL));
	srand(time(0));
	
	for (int i = 0; i < numberOfTosses; i++)
	{
		x = rand() % 2;
		if (x == 0)
		{
			heads++;
		}
		else
		{
			tails++;
		}
	}
	std::cout << "Heads: " << heads << std::endl;
	std::cout << "Tails: " << tails << std::endl;
}

void  multiplyByIndex(int inputArray[], int size, int outputArray[])
{
	for (int i = 0; i < size; i++)
	{
		outputArray[i] = inputArray[i] * i;
	}
}

int power(int x, int y)
{
	int answer = 0;

	for (int i = 1; i <= y; i++)
	{
		answer = x * i;
	}
	return answer;
}

int main()
{
	//class work
	{
	/*bool is60MultOf3;
	is60MultOf3 = IsMultOfThree(60);
	PrintValuesTo10();
	PrintValuesBetween(10, 28);
	int list[] = { 1,2,3,4,5,6,7,8 };
	ArraySum(list, 8);
	ReverseArray(list, 8);*/
	}

	//homework

	char op;
	std::cout << "Select problem" << std::endl;
	std::cout << "5, 10, 15, 16, 17" << std::endl;
	std::cin >> op;
	system("cls");
	switch (op)
	{
	case '5':
	{
		{
			int coinFlip;
			std::cout << "How many times do you want to fip the coin?" << std::endl;
			std::cin >> coinFlip;
			CoinToss(coinFlip);
		}
		break;
	}
	case '10':
	{
		int myArray[10] = { 1,2,3,4,5,6,7,8,9,10 };
		int result[10];
		multiplyByIndex(myArray, 10, result);
		break;
	}
	case '15':
	{
		int answer = power(4, 2);
		break;
	}
	case '16':
	{

		break;
	}
	case '17':
	{

		break;
	}
	}
	system("pause");
	return 0;
}