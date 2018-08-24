#include <iostream>

int main()
{
	//Class work
	{
		char problem;

		std::cout << "Class work" << std::endl;
		std::cout << "Enter 0 to continue to Home work" << std::endl;
		std::cout << "Choose problem: Grade(1), Fizz Buzz(2), Calculator(3), Player Health(4)" << std::endl;
		std::cin >> problem;
		switch (problem)
		{
		case '1':
			//Grade
		{
				int grade;
				char gradeLetter;

				std::cout << "Enter number grade... ";
				std::cin >> grade;

				if (grade >= 90)
				{
					gradeLetter = 'A';
				}
				else if (grade >= 80 && grade < 90)
				{
					gradeLetter = 'B';
				}
				else if (grade >= 70 && grade < 80)
				{
					gradeLetter = 'C';
				}
				else if (grade >= 60 && grade < 70)
				{
					gradeLetter = 'D';
				}
				else
				{
					gradeLetter = 'F';
				}

				std::cout << "Your letter grade is... " << gradeLetter << std::endl;
				break;
			}
		case '2':
			//Fizz Buzz
		{
			int input;

			std::cout << "Enter a number" << std::endl;
			std::cin >> input;

			if (input % 3 == 0 && input % 5 == 0)
			{
				std::cout << "FizzBuzz" << std::endl;
			}
			else if (input % 3 == 0)
			{
				std::cout << "Fizz" << std::endl;
			}
			else if (input % 5 == 0)
			{
				std::cout << "Buzz" << std::endl;
			}
			break;

		}
		case '3':
			//Calcualtor
		{
			float lhs;
			float rhs;
			char op;

			std::cout << "Enter two numbers..." << std::endl;
			std::cin >> lhs >> rhs;
			std::cout << "Do you want to add(+) or subtract(-)?" << std::endl;
			std::cin >> op;
			switch (op)
			{
			case '+':
			{
				//Do stuff
				std::cout << lhs + rhs << std::endl;
				break;
			}
			case '-':
			{
				//Do stuff
				std::cout << lhs - rhs << std::endl;
				break;
			}
			default:
			{
				std::cout << "invalid math operator" << std::endl;
				break;
			}
			}
			break;
		}
		case '4':
			//Player Health
		{
			int health;

			std::cout << "What is your health at..." << std::endl;
			std::cin >> health;

			if (health > 0)
			{
				std::cout << "You are alive" << std::endl;

				if (health <= 25)
				{
					std::cout << "Your health is at a critcal level!!!" << std::endl;
				}
				std::cout << "You have currently have " << health << " health" << std::endl;
			}
			else
			{
				std::cout << "You are dead" << std::endl;
			}
			break;
		}
		default:
			break;
		}

	}
	//Home work
	{
		char problem;
		std::cout << "Home work" << std::endl;
		std::cout << "Choose problem: (1), (2), (3), (4), (5), (6), (7), (8), (9)" << std::endl;
		std::cin >> problem;
		switch (problem)
		{
		case '1':
			//Problem 1
		{
			int x;
			int y = 0;
			if (y == 0)
			{
				x = 100;
			}
			std::cout << "The value of x is... " << x << std::endl;
			break;
		}
		case '2':
			//Problem 2
		{
			int x;
			int y;
			
			std::cout << "Enter x..." << std::endl;
			std::cin >> x;
			std::cout << "Enter y..." << std::endl;
			std::cin >> y;
			
			if (x > y)
			{
				std::cout << "x is greater" << std::endl;
				std::cout << x << std::endl;
			}
			else if (y > x)
			{
				std::cout << "y is greater" << std::endl;
				std::cout << y << std::endl;
			}
			else
			{
				std::cout << "x and y are equal..." << std::endl;
			}
			break;
		}
		case '3':
			//Problem 3
		{

		}
		case '4':
			//problem 4
		{
			char choice;
			
			std::cout << "Choose a number 1 - 4" << std::endl;
			std::cin >> choice;
			switch (choice)
			{
			case '1':
				{
					std::cout << "You choose... 1" << std::endl;
					break;
				}
			case '2': case '3':
				{
					std::cout << "You choose... 2 or 3" << std::endl;
					break;
				}
			case '4':
				{
					std::cout << "You choose... 4" << std::endl;
					break;
				}
			default:
				{
				std::cout << "Invalid choice..." << std::endl;
					break;
				}
			}
			break;
		}
		case '5':
			//problem 5
		{

		}
		default:
			break;
		}
	}
	system("pause");
}  