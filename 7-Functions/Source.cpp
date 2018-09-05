#include <iostream>
#include <string>

int print(std::string input)
{
	std::cout << input;
	return 0;
}

bool multipleOfThree(int value)
{
	return (value % 3 == 0);
}

void valuesTo10()
{
	for (int i = 0; i <= 10; i++)
	{
		std::cout << i << " ";
	}
}

void valuesBetween(int low, int high)
{
	for (int i = low + 1; i < high; i++)
	{
		std::cout << i << " ";
	}
}

int arraySum(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return 0;
}

int main()
{
	print("Hello World!!!\n");
	valuesTo10();
	valuesBetween(10,15);
	print("\n");
	system("pause");
	return 0;
}