#include <iostream>

int main()
{
	char op;
	std::cout << "Class work(1) or Home work(2)\n";
	std::cin >> op;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	switch (op)
	{
	case '1':
		// Class work
	{
		// name in intergers form
		{
			char name[] = "Thomas";
			for (int i = 0; i < 6; i++)
			{
				std::cout << name[i] << " ";
				std::cout << (int)name[i] << std::endl;
			}
		}
		// while loop determine number of characters
		{
			char school[] = "AIEUS";
			int count = 0;
			while (school[count] != '\0')
			{
				count++;
			}
			std::cout << count << std::endl;
		}
		// string compare
		{
			char nameOne[] = "Thomas";
			char nameTwo[] = "Thomas";
			int lenOne = 0;
			int lenTwo = 0;
			bool isSame = true;
			for (int i = 0; nameOne[i] != '\0'; i++)
			{
				lenOne++;
			}
			for (int i = 0; nameTwo[i] != '\0'; i++)
			{
				lenTwo++;
			}
			if (lenTwo != lenOne)
				isSame = false;
			for (int i = 0; i < lenOne; i++)
			{
				if (nameOne[i] == nameTwo[i])
				{
					continue;
				}
				else
				{
					isSame = false;
					break;
				}
			}
			if (isSame == true)
			{
				std::cout << "These strings are the same" << std::endl;
			}
			else
			{
				std::cout << "They are not the same" << std::endl;
			}
		}
		break;
	}
	case '2':
		// Home work
	{
		// Problem 1
		{
			char name[255];
			std::cout << "Enter your first and last name" << std::endl;
			std::cin.getline(name, 255);
			std::cout << "Hello, " << name << "!" <<  std::endl;
		}
		// Problem 2
		{

		}
		break;
	}
	}
	system("pause");
}