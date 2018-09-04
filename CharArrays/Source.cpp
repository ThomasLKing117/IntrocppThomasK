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
			char name[255];
			std::cout << "Enter your first and last name" << std::endl;
			std::cin.ignore();
			std::cin.getline(name, 255);
			int x = 0;
			while (name[x] != '\0')
			{
				x++;
			}
			for (int i = x; i >= 0; i--)
			{
				std::cout << name[i];
			}
			std::cout << std::endl;
		}
		//problem 3
		{
			char names[5][255];
			int length = 0;
			std::cout << "Enter 5 different names" << std::endl;
			std::cin.ignore();
			for (int i = 0; i < 5; i++)
			{
				std::cin.getline(names[i], 255);
			}
			for (int i = 0; i < 5; i++)
			{
				while (names[i][length] != '\0')
				{
					length++;
				}
				for (int j = length; j >= 0; j--)
				{
					std::cout << names[i][j];
				}
				std::cout << std::endl;
				length = 0;
			}
		}
		//problem 4
		{
			// the character \a make the computer beep
		}
		//problem 5
		{

		}
		//problem 6
		{
			char username[255];
			char password[255];
			char realPass[] = "Pa55w0rd";
			std::cin.ignore();
			bool usr;
			for (int i = 0; i < 1; i++)
			{
				std::cout << "Enter a username with the phrase 'usr' in it" << std::endl;
				std::cin.getline(username, 255);
				for (int j = 0; j < (strlen(username)); j++)
				{
					if (username[j] == 'u')
					{
						j++;
						if (username[j] == 's')
						{
							j++;
							if (username[j] = 'r')
							{
								usr = true;
							}
						}
					}
					if (usr)
					{
						continue;
					}
					else
					{
						j--;
					}
				}
			}
		}
		//problem 7
		{
			//a
			//Its trying to give the character array 'name' a value of 'John'
			//It doesn't need to give it a set length if it is already initializing it
			//I would delete the '4' in the siubscript operators

			//b
			//Its trying to print the character array 'name' to the console
			//It need to assign 'name' a value
			//I would assign 'name' a value

			//c
			//Its trying to print 'Donald Knoth' to the console
			//It needs to add a space after the 'd' in Donald
			//I would add a space after the 'd' in Donald

			//d
			//Its trying to add a '!' to the end of Stop, then print it to the console
			//The length of the sring is 5, so it can only access errorMsg up to index 4 
			//I would add a ' - 1' at the end of strlen(errorMsg)
		}
		//problem 8
		{
			char input[255];
			std::cout << "Enter a word to be translated to pig latin" << std::endl;
			std::cin.ignore();
			std::cin.getline(input, 255);
			for (int i = 1; i < (strlen(input)); i++)
			{
				std::cout << input[i];
			}
			std::cout << input[0] << "ay" << std::endl;
		}
		//problem 9
		{
			char input[255];
			int numbers = 0;
			int letters = 0;
			std::cout << "Enter any numbers and/or letters" << std::endl;
			std::cin.ignore();
			std::cin.getline(input, 255);
			for (int i = 0; i < (strlen(input)); i++)
			{
				if (int(input[i]) >= 48 && int(input[i]) <= 57)
				{
					numbers++;
				}
				else if (int(input[i]) >= 65 && int(input[i]) <= 90)
				{
					letters++;
				}
				else if (int(input[i]) >= 97 && int(input[i]) <= 122)
				{
					letters++;
				}
			}
			std::cout << "Number of numbers... " << numbers << std::endl;
			std::cout << "Number of letters... " << letters << std::endl;
		}
		//problem 10
		{

		}
		//problem 11
		{

		}
		//problem 12
		{

		}
		//problem 13
		{

		}
		//problem 14
		{
			std::cin.ignore();
			char input[255];
			char string[255];
			std::cout << "Enter any sentence" << std::endl;
			std::cin.getline(input, 255);
			for (int i = 0; i < 255; i++)
			{
				if (input[i] != ' ')
				{
					string[i] = input[i];
				}
				else
				{
					string[i] = '+';
				}
			}
		}
		//problem 15
		{

		}
		break;
	}
	}
	system("pause");
}