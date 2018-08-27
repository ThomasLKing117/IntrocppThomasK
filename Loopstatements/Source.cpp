#include <iostream>

int main()
{
	char x;
	std::cout << "Classwork(1) or Homework(2)" << std::endl;
	std::cin >> x;
	switch (x)
	{
		case '1':
			//Class work
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
					x++;
				}
				std::cout << "\n";
			}
			//Close application using do while loop
			{
				char input;
				do
				{
					std::cout << "Press 'q' or 'Q' to exit" << std::endl;
					std::cin >> input;
					system("cls");
				} while (input != 'q' && input != 'Q');
			}
			//print even numbers 0 - 10 only even using for loop
			{
				for (int x = 0; x <= 10; x += 2)
				{
					std::cout << x << std::endl;
				}
			}
			break;
		}
		case '2':
			//Home work
		{
			//problem 1
			{
				for (int i = 100; i >= 0; i --)
				{
					std::cout << i << std::endl;
				}
			}
			{
				for (int i = 99; i >= 0 ; i --)
				{
					std::cout << i << std::endl;
				}
			}
			{
				for (int i = 100; i > 0; i --)
				{
					std::cout << i << std::endl;
				}
			}
			{
				for (int i = 100; i >= 0; i -= 2)
				{
					std::cout << i << std::endl;
				}
			}
			//problem 2
			{
				for (int i = 0; i <= 100; i ++)
				{
					if (i % 3 == 0 && i % 5 == 0)
					{
						std::cout << "FizzBuzz" << std::endl;
					}
					else if (i % 3 == 0)
					{
						std::cout << "Fizz" << std::endl;
					}
					else if (i % 5 == 0)
					{
						std::cout << "Buzz" << std::endl;
					}
					else
					{
						std::cout << i << std::endl;
					}
				}
			}
			//problem 3
			{
				int x = 0;
				int y = 0;

				while (y <= 1000)
				{
					if (y % 3 == 0 && y % 5 == 0)
					{
						x += y;
					}
					y++;
				}
				std::cout << x << std::endl;
			}
			break;
		}
	}
	system("pause");
}