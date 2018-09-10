#include <iostream>
#include <string>

int print(std::string input)
{
	for (int i = 0; i < input.length(); i++)
	{
		std::cout << input[i] << std::endl;
	}
	return 0;
}

bool IsMultOfThree(int value)
{
	if (value % 3 == 0)
	{
		return true;
	}

	else
	{
		return false;
	}
}

void PrintValuesTo10()
{
	for (int i = 0; i <= 10; i++)
	{
		std::cout << i << std::endl;
	}
}

void PrintValuesBetween(int low, int high)
{
	for (int i = low + 1; i < high; i++)
	{
		std::cout << i << " " << std::endl;
	}
}

int ArraySum(int arr[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

void ReverseArray(int arr[], int size)
{
	int temp;
	for (int i = 0; i < (size / 2); i++)
	{
		temp = arr[i];
		arr[i] = arr[(size - 1) - i];
		arr[(size - 1) - i] = temp;
	}
}


int main()
{
	bool is60MultOf3;
	is60MultOf3 = IsMultOfThree(60);
	PrintValuesTo10();
	PrintValuesBetween(10, 28);
	int list[] = { 1,2,3,4,5,6,7,8 };
	ArraySum(list, 8);
	ReverseArray(list, 8);

	system("pause");
}