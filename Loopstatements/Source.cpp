#include <iostream>

int main()
{
	//Count to 10 using for loop
	{
		for (int i = 1; i <= 10; i++)
		{
			std::cout << i << std::endl;
		}
	}
	//Count to 10 using while loop
	{
		int x = 1;
		while (x <= 10)
		{
			if (x == 10)
			{
				std::cout << x;
				break;
			}
			std::cout << x << ",";
			x ++;
		}
		std::cout << "\n";
	}
	//Close application using do while
	{
		char input;
		do
		{
			std::cout << "Press 'q' or 'Q' to exit" << std::endl;
			std::cin >> input;
			system("cls");
		}while (input != 'q' && input != 'Q');
	}
	//print even numbers 0 - 10 only even using for loop
	{
		for (int x = 0; x <= 10; x += 2)
		{
			std::cout << x << std::endl;
		}
	}
	system("pause");
}