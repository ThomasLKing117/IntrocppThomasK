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
		std::cout << "Choose problem: (1), (2), (3), (4), (5), (6), (7)" << std::endl;
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
				std::cout << "x is greater..." << std::endl;
				std::cout << x << std::endl;
			}
			else if (y > x)
			{
				std::cout << "y is greater..." << std::endl;
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
			int a, b, c, d, e, sum;

			std::cout << "Enter five numbers..." << std::endl;
			std::cin >> a >> b >> c >> d >> e;

			sum = a + b + c + d + e;

			if (sum > 0)

			{

				if (a >= b && a >= c && a >= d && a >= e)

				{

					if (b >= c && b >= d && b >= e)

					{

						if (c >= d && c >= e)

						{

							if (d >= e)

							{

								std::cout << e << "\n" << d << "\n" << c << "\n" << b << "\n" << a << std::endl;

							}

							else

							{

								std::cout << d << "\n" << e << "\n" << c << "\n" << b << "\n" << a << std::endl;

							}

						}

						else if (d >= c && d >= e)

						{

							if (c >= e)

							{

								std::cout << e << "\n" << c << "\n" << d << "\n" << b << "\n" << a << std::endl;

							}

							else

							{

								std::cout << c << "\n" << e << "\n" << d << "\n" << b << "\n" << a << std::endl;

							}

						}

						else

						{

							if (c >= d)

							{

								std::cout << d << "\n" << c << "\n" << e << "\n" << b << "\n" << a << std::endl;

							}

							else

							{

								std::cout << c << "\n" << d << "\n" << e << "\n" << b << "\n" << a << std::endl;

							}

						}



					}

					else if (c >= b && c >= d && c >= e)

					{

						if (b >= d && b >= e)

						{

							if (d >= e)

							{

								std::cout << e << "\n" << d << "\n" << b << "\n" << c << "\n" << a << std::endl;

							}

							else

							{

								std::cout << d << "\n" << e << "\n" << b << "\n" << c << "\n" << a << std::endl;

							}

						}

						else if (d >= b && d >= e)

						{

							if (b >= e)

							{

								std::cout << e << "\n" << b << "\n" << d << "\n" << c << "\n" << a << std::endl;

							}

							else

							{

								std::cout << b << "\n" << e << "\n" << d << "\n" << c << "\n" << a << std::endl;

							}

						}

						else

						{

							if (b >= d)

							{

								std::cout << d << "\n" << b << "\n" << e << "\n" << c << "\n" << a << std::endl;

							}

							else

							{

								std::cout << b << "\n" << d << "\n" << e << "\n" << c << "\n" << a << std::endl;

							}

						}

					}

					else if (d >= b && d >= c && d >= e)

					{

						if (b >= c && b >= e)

						{

							if (c >= e)

							{

								std::cout << e << "\n" << c << "\n" << b << "\n" << d << "\n" << a << std::endl;

							}

							else

							{

								std::cout << c << "\n" << e << "\n" << b << "\n" << d << "\n" << a << std::endl;

							}

						}

						else if (c >= b && c >= e)

						{

							if (b >= e)

							{

								std::cout << e << "\n" << b << "\n" << c << "\n" << d << "\n" << a << std::endl;

							}

							else

							{

								std::cout << b << "\n" << e << "\n" << c << "\n" << d << "\n" << a << std::endl;

							}

						}

						else

						{

							if (b >= c)

							{

								std::cout << c << "\n" << b << "\n" << e << "\n" << d << "\n" << a << std::endl;

							}

							else

							{

								std::cout << b << "\n" << c << "\n" << e << "\n" << d << "\n" << a << std::endl;

							}

						}

					}

					else

					{

						if (b >= c && b >= d)

						{

							if (c >= d)

							{

								std::cout << d << "\n" << c << "\n" << b << "\n" << e << "\n" << a << std::endl;

							}

							else

							{

								std::cout << c << "\n" << d << "\n" << b << "\n" << e << "\n" << a << std::endl;

							}

						}

						else if (c >= b && c >= d)

						{

							if (b >= d)

							{

								std::cout << d << "\n" << b << "\n" << c << "\n" << e << "\n" << a << std::endl;

							}

							else

							{

								std::cout << b << "\n" << d << "\n" << c << "\n" << e << "\n" << a << std::endl;

							}

						}

						else

						{

							if (b >= c)

							{

								std::cout << b << "\n" << b << "\n" << d << "\n" << e << "\n" << a << std::endl;

							}

							else

							{

								std::cout << b << "\n" << c << "\n" << d << "\n" << e << "\n" << a << std::endl;

							}

						}

					}

				}

				else if (b >= a && b >= c && b >= d && b >= e)

				{

					if (a >= c && a >= d && a >= e)

					{

						if (c >= d && c >= e)

						{

							if (d >= e)

							{

								std::cout << e << "\n" << d << "\n" << c << "\n" << a << "\n" << b << std::endl;

							}

							else

							{

								std::cout << d << "\n" << e << "\n" << c << "\n" << a << "\n" << b << std::endl;

							}

						}

						else if (d >= c && d >= e)

						{

							if (c >= e)

							{

								std::cout << e << "\n" << c << "\n" << d << "\n" << a << "\n" << b << std::endl;

							}

							else

							{

								std::cout << c << "\n" << e << "\n" << d << "\n" << a << "\n" << b << std::endl;

							}

						}

						else

						{

							if (c >= d)

							{

								std::cout << d << "\n" << c << "\n" << e << "\n" << a << "\n" << b << std::endl;

							}

							else

							{

								std::cout << c << "\n" << d << "\n" << e << "\n" << a << "\n" << b << std::endl;

							}

						}



					}

					else if (c >= a && c >= d && c >= e)

					{

						if (a >= d && a >= e)

						{

							if (d >= e)

							{

								std::cout << e << "\n" << d << "\n" << a << "\n" << c << "\n" << b << std::endl;

							}

							else

							{

								std::cout << d << "\n" << e << "\n" << a << "\n" << c << "\n" << b << std::endl;

							}

						}

						else if (d >= a && d >= e)

						{

							if (a >= e)

							{

								std::cout << e << "\n" << a << "\n" << d << "\n" << c << "\n" << b << std::endl;

							}

							else

							{

								std::cout << a << "\n" << e << "\n" << d << "\n" << c << "\n" << b << std::endl;

							}

						}

						else

						{

							if (a >= d)

							{

								std::cout << d << "\n" << a << "\n" << e << "\n" << c << "\n" << b << std::endl;

							}

							else

							{

								std::cout << a << "\n" << d << "\n" << e << "\n" << c << "\n" << b << std::endl;

							}

						}

					}

					else if (d >= a && d >= c && d >= e)

					{

						if (a >= c && a >= e)

						{

							if (c >= e)

							{

								std::cout << e << "\n" << c << "\n" << a << "\n" << d << "\n" << b << std::endl;

							}

							else

							{

								std::cout << c << "\n" << e << "\n" << a << "\n" << d << "\n" << b << std::endl;

							}

						}

						else if (c >= a && c >= e)

						{

							if (a >= e)

							{

								std::cout << e << "\n" << a << "\n" << c << "\n" << d << "\n" << b << std::endl;

							}

							else

							{

								std::cout << a << "\n" << e << "\n" << c << "\n" << d << "\n" << b << std::endl;

							}

						}

						else

						{

							if (a >= c)

							{

								std::cout << c << "\n" << a << "\n" << e << "\n" << d << "\n" << b << std::endl;

							}

							else

							{

								std::cout << a << "\n" << c << "\n" << e << "\n" << d << "\n" << b << std::endl;

							}

						}

					}

					else

					{

						if (a >= c && a >= d)

						{

							if (c >= d)

							{

								std::cout << d << "\n" << c << "\n" << a << "\n" << e << "\n" << b << std::endl;

							}

							else

							{

								std::cout << c << "\n" << d << "\n" << a << "\n" << e << "\n" << b << std::endl;

							}

						}

						else if (c >= a && c >= d)

						{

							if (a >= d)

							{

								std::cout << d << "\n" << a << "\n" << c << "\n" << e << "\n" << b << std::endl;

							}

							else

							{

								std::cout << a << "\n" << d << "\n" << c << "\n" << e << "\n" << b << std::endl;

							}

						}

						else

						{

							if (a >= c)

							{

								std::cout << c << "\n" << a << "\n" << d << "\n" << e << "\n" << b << std::endl;

							}

							else

							{

								std::cout << a << "\n" << c << "\n" << d << "\n" << e << "\n" << b << std::endl;

							}

						}

					}

				}

				else if (c >= a && c >= b && c >= d && c >= e)

				{

					if (a >= b && a >= d && a >= e)

					{

						if (b >= d && b >= e)

						{

							if (d >= e)

							{

								std::cout << e << "\n" << d << "\n" << b << "\n" << a << "\n" << c << std::endl;

							}

							else

							{

								std::cout << d << "\n" << e << "\n" << b << "\n" << a << "\n" << c << std::endl;

							}

						}

						else if (d >= b && d >= e)

						{

							if (b >= e)

							{

								std::cout << e << "\n" << b << "\n" << d << "\n" << a << "\n" << c << std::endl;

							}

							else

							{

								std::cout << b << "\n" << e << "\n" << d << "\n" << a << "\n" << c << std::endl;

							}

						}

						else

						{

							if (b >= d)

							{

								std::cout << d << "\n" << b << "\n" << e << "\n" << a << "\n" << c << std::endl;

							}

							else

							{

								std::cout << b << "\n" << d << "\n" << e << "\n" << a << "\n" << c << std::endl;

							}

						}



					}

					else if (b >= a && b >= d && b >= e)

					{

						if (a >= d && a >= e)

						{

							if (d >= e)

							{

								std::cout << e << "\n" << d << "\n" << a << "\n" << b << "\n" << c << std::endl;

							}

							else

							{

								std::cout << d << "\n" << e << "\n" << a << "\n" << b << "\n" << c << std::endl;

							}

						}

						else if (d >= a && d >= e)

						{

							if (a >= e)

							{

								std::cout << e << "\n" << a << "\n" << d << "\n" << b << "\n" << c << std::endl;

							}

							else

							{

								std::cout << a << "\n" << e << "\n" << d << "\n" << b << "\n" << c << std::endl;

							}

						}

						else

						{

							if (a >= d)

							{

								std::cout << d << "\n" << a << "\n" << e << "\n" << b << "\n" << c << std::endl;

							}

							else

							{

								std::cout << a << "\n" << d << "\n" << e << "\n" << b << "\n" << c << std::endl;

							}

						}

					}

					else if (d >= a && d >= b && d >= e)

					{

						if (a >= b && a >= e)

						{

							if (b >= e)

							{

								std::cout << e << "\n" << b << "\n" << a << "\n" << d << "\n" << c << std::endl;

							}

							else

							{

								std::cout << b << "\n" << e << "\n" << a << "\n" << d << "\n" << c << std::endl;

							}

						}

						else if (b >= a && b >= e)

						{

							if (a >= e)

							{

								std::cout << e << "\n" << a << "\n" << b << "\n" << d << "\n" << c << std::endl;

							}

							else

							{

								std::cout << a << "\n" << e << "\n" << b << "\n" << d << "\n" << c << std::endl;

							}

						}

						else

						{

							if (a >= b)

							{

								std::cout << b << "\n" << a << "\n" << e << "\n" << d << "\n" << c << std::endl;

							}

							else

							{

								std::cout << a << "\n" << b << "\n" << e << "\n" << d << "\n" << c << std::endl;

							}

						}

					}

					else

					{

						if (a >= b && a >= d)

						{

							if (b >= d)

							{

								std::cout << d << "\n" << b << "\n" << a << "\n" << e << "\n" << c << std::endl;

							}

							else

							{

								std::cout << b << "\n" << d << "\n" << a << "\n" << e << "\n" << c << std::endl;

							}

						}

						else if (b >= a && b >= d)

						{

							if (a >= d)

							{

								std::cout << d << "\n" << a << "\n" << b << "\n" << e << "\n" << c << std::endl;

							}

							else

							{

								std::cout << a << "\n" << d << "\n" << b << "\n" << e << "\n" << c << std::endl;

							}

						}

						else

						{

							if (a >= b)

							{

								std::cout << b << "\n" << a << "\n" << d << "\n" << e << "\n" << c << std::endl;

							}

							else

							{

								std::cout << a << "\n" << b << "\n" << d << "\n" << e << "\n" << c << std::endl;

							}

						}

					}

				}

				else if (d >= a && d >= b && d >= c && d >= e)

				{

					if (a >= b && a >= c && a >= e)

					{

						if (b >= c && b >= e)

						{

							if (c >= e)

							{

								std::cout << e << "\n" << c << "\n" << b << "\n" << a << "\n" << d << std::endl;

							}

							else

							{

								std::cout << c << "\n" << e << "\n" << b << "\n" << a << "\n" << d << std::endl;

							}

						}

						else if (c >= b && c >= e)

						{

							if (b >= e)

							{

								std::cout << e << "\n" << b << "\n" << c << "\n" << a << "\n" << d << std::endl;

							}

							else

							{

								std::cout << b << "\n" << e << "\n" << c << "\n" << a << "\n" << d << std::endl;

							}

						}

						else

						{

							if (b >= c)

							{

								std::cout << c << "\n" << b << "\n" << e << "\n" << a << "\n" << d << std::endl;

							}

							else

							{

								std::cout << b << "\n" << c << "\n" << e << "\n" << a << "\n" << d << std::endl;

							}

						}



					}

					else if (b >= a && b >= c && b >= e)

					{

						if (a >= c && a >= e)

						{

							if (c >= e)

							{

								std::cout << e << "\n" << c << "\n" << a << "\n" << b << "\n" << d << std::endl;

							}

							else

							{

								std::cout << c << "\n" << e << "\n" << a << "\n" << b << "\n" << d << std::endl;

							}

						}

						else if (c >= a && c >= e)

						{

							if (a >= e)

							{

								std::cout << e << "\n" << a << "\n" << c << "\n" << b << "\n" << d << std::endl;

							}

							else

							{

								std::cout << a << "\n" << e << "\n" << c << "\n" << b << "\n" << d << std::endl;

							}

						}

						else

						{

							if (a >= c)

							{

								std::cout << c << "\n" << a << "\n" << e << "\n" << b << "\n" << d << std::endl;

							}

							else

							{

								std::cout << a << "\n" << c << "\n" << e << "\n" << b << "\n" << d << std::endl;

							}

						}

					}

					else if (c >= a && c >= b && c >= e)

					{

						if (a >= b && a >= e)

						{

							if (b >= e)

							{

								std::cout << e << "\n" << b << "\n" << a << "\n" << c << "\n" << d << std::endl;

							}

							else

							{

								std::cout << b << "\n" << e << "\n" << a << "\n" << c << "\n" << d << std::endl;

							}

						}

						else if (b >= a && b >= e)

						{

							if (a >= e)

							{

								std::cout << e << "\n" << a << "\n" << b << "\n" << c << "\n" << d << std::endl;

							}

							else

							{

								std::cout << a << "\n" << e << "\n" << b << "\n" << c << "\n" << d << std::endl;

							}

						}

						else

						{

							if (a >= b)

							{

								std::cout << b << "\n" << a << "\n" << e << "\n" << c << "\n" << d << std::endl;

							}

							else

							{

								std::cout << a << "\n" << b << "\n" << e << "\n" << c << "\n" << d << std::endl;

							}

						}

					}

					else

					{

						if (a >= b && a >= c)

						{

							if (b >= c)

							{

								std::cout << c << "\n" << b << "\n" << a << "\n" << e << "\n" << d << std::endl;

							}

							else

							{

								std::cout << b << "\n" << c << "\n" << a << "\n" << e << "\n" << d << std::endl;

							}

						}

						else if (b >= a && b >= c)

						{

							if (a >= c)

							{

								std::cout << c << "\n" << a << "\n" << b << "\n" << e << "\n" << d << std::endl;

							}

							else

							{

								std::cout << a << "\n" << c << "\n" << b << "\n" << e << "\n" << d << std::endl;

							}

						}

						else

						{

							if (a >= b)

							{

								std::cout << b << "\n" << a << "\n" << c << "\n" << e << "\n" << d << std::endl;

							}

							else

							{

								std::cout << a << "\n" << b << "\n" << c << "\n" << e << "\n" << d << std::endl;

							}

						}

					}

				}

				else

				{

					if (a >= b && a >= c && a >= d)

					{

						if (b >= c && b >= d)

						{

							if (c >= d)

							{

								std::cout << d << "\n" << c << "\n" << b << "\n" << a << "\n" << e << std::endl;

							}

							else

							{

								std::cout << c << "\n" << d << "\n" << b << "\n" << a << "\n" << e << std::endl;

							}

						}

						else if (c >= b && c >= d)

						{

							if (b >= d)

							{

								std::cout << d << "\n" << b << "\n" << c << "\n" << a << "\n" << e << std::endl;

							}

							else

							{

								std::cout << b << "\n" << d << "\n" << c << "\n" << a << "\n" << e << std::endl;

							}

						}

						else

						{

							if (b >= c)

							{

								std::cout << c << "\n" << b << "\n" << d << "\n" << a << "\n" << e << std::endl;

							}

							else

							{

								std::cout << b << "\n" << c << "\n" << d << "\n" << a << "\n" << e << std::endl;

							}

						}



					}

					else if (b >= a && b >= c && b >= d)

					{

						if (a >= c && a >= d)

						{

							if (c >= d)

							{

								std::cout << d << "\n" << c << "\n" << a << "\n" << b << "\n" << e << std::endl;

							}

							else

							{

								std::cout << c << "\n" << d << "\n" << a << "\n" << b << "\n" << e << std::endl;

							}

						}

						else if (c >= a && c >= d)

						{

							if (a >= d)

							{

								std::cout << d << "\n" << a << "\n" << c << "\n" << b << "\n" << e << std::endl;

							}

							else

							{

								std::cout << a << "\n" << d << "\n" << c << "\n" << b << "\n" << e << std::endl;

							}

						}

						else

						{

							if (a >= c)

							{

								std::cout << c << "\n" << a << "\n" << d << "\n" << b << "\n" << e << std::endl;

							}

							else

							{

								std::cout << a << "\n" << c << "\n" << d << "\n" << b << "\n" << e << std::endl;

							}

						}

					}

					else if (c >= a && c >= b && c >= d)

					{

						if (a >= b && a >= d)

						{

							if (b >= d)

							{

								std::cout << d << "\n" << b << "\n" << a << "\n" << c << "\n" << e << std::endl;

							}

							else

							{

								std::cout << b << "\n" << d << "\n" << a << "\n" << c << "\n" << e << std::endl;

							}

						}

						else if (b >= a && b >= d)

						{

							if (a >= d)

							{

								std::cout << d << "\n" << a << "\n" << b << "\n" << c << "\n" << e << std::endl;

							}

							else

							{

								std::cout << a << "\n" << d << "\n" << b << "\n" << c << "\n" << e << std::endl;

							}

						}

						else

						{

							if (a >= b)

							{

								std::cout << b << "\n" << a << "\n" << d << "\n" << c << "\n" << e << std::endl;

							}

							else

							{

								std::cout << a << "\n" << b << "\n" << d << "\n" << c << "\n" << e << std::endl;

							}

						}

					}

					else

					{

						if (a >= b && a >= c)

						{

							if (b >= c)

							{

								std::cout << c << "\n" << b << "\n" << a << "\n" << d << "\n" << e << std::endl;

							}

							else

							{

								std::cout << b << "\n" << c << "\n" << a << "\n" << d << "\n" << e << std::endl;

							}

						}

						else if (b >= a && b >= c)

						{

							if (a >= c)

							{

								std::cout << c << "\n" << a << "\n" << b << "\n" << d << "\n" << e << std::endl;

							}

							else

							{

								std::cout << a << "\n" << c << "\n" << b << "\n" << d << "\n" << e << std::endl;

							}

						}

						else

						{

							if (a >= b)

							{

								std::cout << b << "\n" << a << "\n" << c << "\n" << d << "\n" << e << std::endl;

							}

							else

							{

								std::cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << std::endl;

							}

						}

					}

				}
			}

			else if (sum < 0)

			{

				if (a >= b && a >= c && a >= d && a >= e)

				{

					if (b >= c && b >= d && b >= e)

					{

						if (c >= d && c >= e)

						{

							if (d >= e)

							{

								std::cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << std::endl;

							}

							else

							{

								std::cout << a << "\n" << b << "\n" << c << "\n" << e << "\n" << d << std::endl;

							}

						}

						else if (d >= c && d >= e)

						{

							if (c >= e)

							{

								std::cout << a << "\n" << b << "\n" << d << "\n" << c << "\n" << e << std::endl;

							}

							else

							{

								std::cout << a << "\n" << b << "\n" << d << "\n" << e << "\n" << c << std::endl;

							}

						}

						else

						{

							if (c >= d)

							{

								std::cout << a << "\n" << b << "\n" << e << "\n" << c << "\n" << d << std::endl;

							}

							else

							{

								std::cout << a << "\n" << b << "\n" << e << "\n" << d << "\n" << c << std::endl;

							}

						}



					}

					else if (c >= b && c >= d && c >= e)

					{

						if (b >= d && b >= e)

						{

							if (d >= e)

							{

								std::cout << a << "\n" << c << "\n" << b << "\n" << d << "\n" << e << std::endl;

							}

							else

							{

								std::cout << a << "\n" << c << "\n" << b << "\n" << e << "\n" << d << std::endl;

							}

						}

						else if (d >= b && d >= e)

						{

							if (b >= e)

							{

								std::cout << a << "\n" << c << "\n" << d << "\n" << b << "\n" << e << std::endl;

							}

							else

							{

								std::cout << a << "\n" << c << "\n" << d << "\n" << e << "\n" << b << std::endl;

							}

						}

						else

						{

							if (b >= d)

							{

								std::cout << a << "\n" << c << "\n" << e << "\n" << b << "\n" << d << std::endl;

							}

							else

							{

								std::cout << a << "\n" << c << "\n" << e << "\n" << d << "\n" << b << std::endl;

							}

						}

					}

					else if (d >= b && d >= c && d >= e)

					{

						if (b >= c && b >= e)

						{

							if (c >= e)

							{

								std::cout << a << "\n" << d << "\n" << b << "\n" << c << "\n" << e << std::endl;

							}

							else

							{

								std::cout << a << "\n" << d << "\n" << b << "\n" << e << "\n" << c << std::endl;

							}

						}

						else if (c >= b && c >= e)

						{

							if (b >= e)

							{

								std::cout << a << "\n" << d << "\n" << c << "\n" << b << "\n" << e << std::endl;

							}

							else

							{

								std::cout << a << "\n" << d << "\n" << c << "\n" << e << "\n" << b << std::endl;

							}

						}

						else

						{

							if (b >= c)

							{

								std::cout << a << "\n" << d << "\n" << e << "\n" << b << "\n" << c << std::endl;

							}

							else

							{

								std::cout << a << "\n" << d << "\n" << e << "\n" << c << "\n" << b << std::endl;

							}

						}

					}

					else

					{

						if (b >= c && b >= d)

						{

							if (c >= d)

							{

								std::cout << a << "\n" << e << "\n" << b << "\n" << c << "\n" << d << std::endl;

							}

							else

							{

								std::cout << a << "\n" << e << "\n" << b << "\n" << d << "\n" << c << std::endl;

							}

						}

						else if (c >= b && c >= d)

						{

							if (b >= d)

							{

								std::cout << a << "\n" << e << "\n" << c << "\n" << b << "\n" << d << std::endl;

							}

							else

							{

								std::cout << a << "\n" << e << "\n" << c << "\n" << d << "\n" << b << std::endl;

							}

						}

						else

						{

							if (b >= c)

							{

								std::cout << a << "\n" << e << "\n" << d << "\n" << b << "\n" << c << std::endl;

							}

							else

							{

								std::cout << a << "\n" << e << "\n" << d << "\n" << c << "\n" << b << std::endl;

							}

						}

					}

				}

				else if (b >= a && b >= c && b >= d && b >= e)

				{

					if (a >= c && a >= d && a >= e)

					{

						if (c >= d && c >= e)

						{

							if (d >= e)

							{

								std::cout << b << "\n" << a << "\n" << c << "\n" << d << "\n" << e << std::endl;

							}

							else

							{

								std::cout << b << "\n" << a << "\n" << c << "\n" << e << "\n" << d << std::endl;

							}

						}

						else if (d >= c && d >= e)

						{

							if (c >= e)

							{

								std::cout << b << "\n" << a << "\n" << d << "\n" << c << "\n" << e << std::endl;

							}

							else

							{

								std::cout << b << "\n" << a << "\n" << d << "\n" << e << "\n" << c << std::endl;

							}

						}

						else

						{

							if (c >= d)

							{

								std::cout << b << "\n" << a << "\n" << e << "\n" << c << "\n" << d << std::endl;

							}

							else

							{

								std::cout << b << "\n" << a << "\n" << e << "\n" << d << "\n" << c << std::endl;

							}

						}



					}

					else if (c >= a && c >= d && c >= e)

					{

						if (a >= d && a >= e)

						{

							if (d >= e)

							{

								std::cout << b << "\n" << c << "\n" << a << "\n" << d << "\n" << e << std::endl;

							}

							else

							{

								std::cout << b << "\n" << c << "\n" << a << "\n" << e << "\n" << d << std::endl;

							}

						}

						else if (d >= a && d >= e)

						{

							if (a >= e)

							{

								std::cout << b << "\n" << c << "\n" << d << "\n" << a << "\n" << e << std::endl;

							}

							else

							{

								std::cout << b << "\n" << c << "\n" << d << "\n" << e << "\n" << a << std::endl;

							}

						}

						else

						{

							if (a >= d)

							{

								std::cout << b << "\n" << c << "\n" << e << "\n" << a << "\n" << d << std::endl;

							}

							else

							{

								std::cout << b << "\n" << c << "\n" << e << "\n" << d << "\n" << a << std::endl;

							}

						}

					}

					else if (d >= a && d >= c && d >= e)

					{

						if (a >= c && a >= e)

						{

							if (c >= e)

							{

								std::cout << b << "\n" << d << "\n" << a << "\n" << c << "\n" << e << std::endl;

							}

							else

							{

								std::cout << b << "\n" << d << "\n" << a << "\n" << e << "\n" << c << std::endl;

							}

						}

						else if (c >= a && c >= e)

						{

							if (a >= e)

							{

								std::cout << b << "\n" << d << "\n" << c << "\n" << a << "\n" << e << std::endl;

							}

							else

							{

								std::cout << b << "\n" << d << "\n" << c << "\n" << e << "\n" << a << std::endl;

							}

						}

						else

						{

							if (a >= c)

							{

								std::cout << b << "\n" << d << "\n" << e << "\n" << a << "\n" << c << std::endl;

							}

							else

							{

								std::cout << b << "\n" << d << "\n" << e << "\n" << c << "\n" << a << std::endl;

							}

						}

					}

					else

					{

						if (a >= c && a >= d)

						{

							if (c >= d)

							{

								std::cout << b << "\n" << e << "\n" << a << "\n" << c << "\n" << d << std::endl;

							}

							else

							{

								std::cout << b << "\n" << e << "\n" << a << "\n" << d << "\n" << c << std::endl;

							}

						}

						else if (c >= a && c >= d)

						{

							if (a >= d)

							{

								std::cout << b << "\n" << e << "\n" << c << "\n" << a << "\n" << d << std::endl;

							}

							else

							{

								std::cout << b << "\n" << e << "\n" << c << "\n" << d << "\n" << a << std::endl;

							}

						}

						else

						{

							if (a >= c)

							{

								std::cout << b << "\n" << e << "\n" << d << "\n" << a << "\n" << c << std::endl;

							}

							else

							{

								std::cout << b << "\n" << e << "\n" << d << "\n" << c << "\n" << a << std::endl;

							}

						}

					}

				}

				else if (c >= a && c >= b && c >= d && c >= e)

				{

					if (a >= b && a >= d && a >= e)

					{

						if (b >= d && b >= e)

						{

							if (d >= e)

							{

								std::cout << c << "\n" << a << "\n" << b << "\n" << d << "\n" << e << std::endl;

							}

							else

							{

								std::cout << c << "\n" << a << "\n" << b << "\n" << e << "\n" << d << std::endl;

							}

						}

						else if (d >= b && d >= e)

						{

							if (b >= e)

							{

								std::cout << c << "\n" << a << "\n" << d << "\n" << b << "\n" << e << std::endl;

							}

							else

							{

								std::cout << c << "\n" << a << "\n" << d << "\n" << e << "\n" << b << std::endl;

							}

						}

						else

						{

							if (b >= d)

							{

								std::cout << c << "\n" << a << "\n" << e << "\n" << b << "\n" << d << std::endl;

							}

							else

							{

								std::cout << c << "\n" << a << "\n" << e << "\n" << d << "\n" << b << std::endl;

							}

						}



					}

					else if (b >= a && b >= d && b >= e)

					{

						if (a >= d && a >= e)

						{

							if (d >= e)

							{

								std::cout << c << "\n" << b << "\n" << a << "\n" << d << "\n" << e << std::endl;

							}

							else

							{

								std::cout << c << "\n" << b << "\n" << a << "\n" << e << "\n" << d << std::endl;

							}

						}

						else if (d >= a && d >= e)

						{

							if (a >= e)

							{

								std::cout << c << "\n" << b << "\n" << d << "\n" << a << "\n" << e << std::endl;

							}

							else

							{

								std::cout << c << "\n" << b << "\n" << d << "\n" << e << "\n" << a << std::endl;

							}

						}

						else

						{

							if (a >= d)

							{

								std::cout << c << "\n" << b << "\n" << e << "\n" << a << "\n" << d << std::endl;

							}

							else

							{

								std::cout << c << "\n" << b << "\n" << e << "\n" << d << "\n" << a << std::endl;

							}

						}

					}

					else if (d >= a && d >= b && d >= e)

					{

						if (a >= b && a >= e)

						{

							if (b >= e)

							{

								std::cout << c << "\n" << d << "\n" << a << "\n" << b << "\n" << e << std::endl;

							}

							else

							{

								std::cout << c << "\n" << d << "\n" << a << "\n" << e << "\n" << b << std::endl;

							}

						}

						else if (b >= a && b >= e)

						{

							if (a >= e)

							{

								std::cout << c << "\n" << d << "\n" << b << "\n" << a << "\n" << e << std::endl;

							}

							else

							{

								std::cout << c << "\n" << d << "\n" << b << "\n" << e << "\n" << a << std::endl;

							}

						}

						else

						{

							if (a >= b)

							{

								std::cout << c << "\n" << d << "\n" << e << "\n" << a << "\n" << b << std::endl;

							}

							else

							{

								std::cout << c << "\n" << d << "\n" << e << "\n" << b << "\n" << a << std::endl;

							}

						}

					}

					else

					{

						if (a >= b && a >= d)

						{

							if (b >= d)

							{

								std::cout << c << "\n" << e << "\n" << a << "\n" << b << "\n" << d << std::endl;

							}

							else

							{

								std::cout << c << "\n" << e << "\n" << a << "\n" << d << "\n" << b << std::endl;

							}

						}

						else if (b >= a && b >= d)

						{

							if (a >= d)

							{

								std::cout << c << "\n" << e << "\n" << b << "\n" << a << "\n" << d << std::endl;

							}

							else

							{

								std::cout << c << "\n" << e << "\n" << b << "\n" << d << "\n" << a << std::endl;

							}

						}

						else

						{

							if (a >= b)

							{

								std::cout << c << "\n" << e << "\n" << d << "\n" << a << "\n" << b << std::endl;

							}

							else

							{

								std::cout << c << "\n" << e << "\n" << d << "\n" << b << "\n" << a << std::endl;

							}

						}

					}

				}

				else if (d >= a && d >= b && d >= c && d >= e)

				{

					if (a >= b && a >= c && a >= e)

					{

						if (b >= c && b >= e)

						{

							if (c >= e)

							{

								std::cout << d << "\n" << a << "\n" << b << "\n" << c << "\n" << e << std::endl;

							}

							else

							{

								std::cout << d << "\n" << a << "\n" << b << "\n" << e << "\n" << c << std::endl;

							}

						}

						else if (c >= b && c >= e)

						{

							if (b >= e)

							{

								std::cout << d << "\n" << a << "\n" << c << "\n" << b << "\n" << e << std::endl;

							}

							else

							{

								std::cout << d << "\n" << a << "\n" << c << "\n" << e << "\n" << b << std::endl;

							}

						}

						else

						{

							if (b >= c)

							{

								std::cout << d << "\n" << a << "\n" << e << "\n" << b << "\n" << c << std::endl;

							}

							else

							{

								std::cout << d << "\n" << a << "\n" << e << "\n" << c << "\n" << b << std::endl;

							}

						}



					}

					else if (b >= a && b >= c && b >= e)

					{

						if (a >= c && a >= e)

						{

							if (c >= e)

							{

								std::cout << d << "\n" << b << "\n" << a << "\n" << c << "\n" << e << std::endl;

							}

							else

							{

								std::cout << d << "\n" << b << "\n" << a << "\n" << e << "\n" << c << std::endl;

							}

						}

						else if (c >= a && c >= e)

						{

							if (a >= e)

							{

								std::cout << d << "\n" << b << "\n" << c << "\n" << a << "\n" << e << std::endl;

							}

							else

							{

								std::cout << d << "\n" << b << "\n" << c << "\n" << e << "\n" << a << std::endl;

							}

						}

						else

						{

							if (a >= c)

							{

								std::cout << d << "\n" << b << "\n" << e << "\n" << a << "\n" << c << std::endl;

							}

							else

							{

								std::cout << d << "\n" << b << "\n" << e << "\n" << c << "\n" << a << std::endl;

							}

						}

					}

					else if (c >= a && c >= b && c >= e)

					{

						if (a >= b && a >= e)

						{

							if (b >= e)

							{

								std::cout << d << "\n" << c << "\n" << a << "\n" << b << "\n" << e << std::endl;

							}

							else

							{

								std::cout << d << "\n" << c << "\n" << a << "\n" << e << "\n" << b << std::endl;

							}

						}

						else if (b >= a && b >= e)

						{

							if (a >= e)

							{

								std::cout << d << "\n" << c << "\n" << b << "\n" << a << "\n" << e << std::endl;

							}

							else

							{

								std::cout << d << "\n" << c << "\n" << b << "\n" << e << "\n" << a << std::endl;

							}

						}

						else

						{

							if (a >= b)

							{

								std::cout << d << "\n" << c << "\n" << e << "\n" << a << "\n" << b << std::endl;

							}

							else

							{

								std::cout << d << "\n" << c << "\n" << e << "\n" << b << "\n" << a << std::endl;

							}

						}

					}

					else

					{

						if (a >= b && a >= c)

						{

							if (b >= c)

							{

								std::cout << d << "\n" << e << "\n" << a << "\n" << b << "\n" << c << std::endl;

							}

							else

							{

								std::cout << d << "\n" << e << "\n" << a << "\n" << c << "\n" << b << std::endl;

							}

						}

						else if (b >= a && b >= c)

						{

							if (a >= c)

							{

								std::cout << d << "\n" << e << "\n" << b << "\n" << a << "\n" << c << std::endl;

							}

							else

							{

								std::cout << d << "\n" << e << "\n" << b << "\n" << c << "\n" << a << std::endl;

							}

						}

						else

						{

							if (a >= b)

							{

								std::cout << d << "\n" << e << "\n" << c << "\n" << a << "\n" << b << std::endl;

							}

							else

							{

								std::cout << d << "\n" << e << "\n" << c << "\n" << b << "\n" << a << std::endl;

							}

						}

					}

				}

				else

				{

					if (a >= b && a >= c && a >= d)

					{

						if (b >= c && b >= d)

						{

							if (c >= d)

							{

								std::cout << e << "\n" << a << "\n" << b << "\n" << c << "\n" << d << std::endl;

							}

							else

							{

								std::cout << e << "\n" << a << "\n" << b << "\n" << d << "\n" << c << std::endl;

							}

						}

						else if (c >= b && c >= d)

						{

							if (b >= d)

							{

								std::cout << e << "\n" << a << "\n" << c << "\n" << b << "\n" << d << std::endl;

							}

							else

							{

								std::cout << e << "\n" << a << "\n" << c << "\n" << d << "\n" << b << std::endl;

							}

						}

						else

						{

							if (b >= c)

							{

								std::cout << e << "\n" << a << "\n" << d << "\n" << b << "\n" << c << std::endl;

							}

							else

							{

								std::cout << e << "\n" << a << "\n" << d << "\n" << c << "\n" << b << std::endl;

							}

						}



					}

					else if (b >= a && b >= c && b >= d)

					{

						if (a >= c && a >= d)

						{

							if (c >= d)

							{

								std::cout << e << "\n" << b << "\n" << a << "\n" << c << "\n" << d << std::endl;

							}

							else

							{

								std::cout << e << "\n" << b << "\n" << a << "\n" << d << "\n" << c << std::endl;

							}

						}

						else if (c >= a && c >= d)

						{

							if (a >= d)

							{

								std::cout << e << "\n" << b << "\n" << c << "\n" << a << "\n" << d << std::endl;

							}

							else

							{

								std::cout << e << "\n" << b << "\n" << c << "\n" << d << "\n" << a << std::endl;

							}

						}

						else

						{

							if (a >= c)

							{

								std::cout << e << "\n" << b << "\n" << d << "\n" << a << "\n" << c << std::endl;

							}

							else

							{

								std::cout << e << "\n" << b << "\n" << d << "\n" << c << "\n" << a << std::endl;

							}

						}

					}

					else if (c >= a && c >= b && c >= d)

					{

						if (a >= b && a >= d)

						{

							if (b >= d)

							{

								std::cout << e << "\n" << c << "\n" << a << "\n" << b << "\n" << d << std::endl;

							}

							else

							{

								std::cout << e << "\n" << c << "\n" << a << "\n" << d << "\n" << b << std::endl;

							}

						}

						else if (b >= a && b >= d)

						{

							if (a >= d)

							{

								std::cout << e << "\n" << c << "\n" << b << "\n" << a << "\n" << d << std::endl;

							}

							else

							{

								std::cout << e << "\n" << c << "\n" << b << "\n" << d << "\n" << a << std::endl;

							}

						}

						else

						{

							if (a >= b)

							{

								std::cout << e << "\n" << c << "\n" << d << "\n" << a << "\n" << b << std::endl;

							}

							else

							{

								std::cout << e << "\n" << c << "\n" << d << "\n" << b << "\n" << a << std::endl;

							}

						}

					}

					else

					{

						if (a >= b && a >= c)

						{

							if (b >= c)

							{

								std::cout << e << "\n" << d << "\n" << a << "\n" << b << "\n" << c << std::endl;

							}

							else

							{

								std::cout << e << "\n" << d << "\n" << a << "\n" << c << "\n" << b << std::endl;

							}

						}

						else if (b >= a && b >= c)

						{

							if (a >= c)

							{

								std::cout << e << "\n" << d << "\n" << b << "\n" << a << "\n" << c << std::endl;

							}

							else

							{

								std::cout << e << "\n" << d << "\n" << b << "\n" << c << "\n" << a << std::endl;

							}

						}

						else

						{

							if (a >= b)

							{

								std::cout << e << "\n" << d << "\n" << c << "\n" << a << "\n" << b << std::endl;

							}

							else

							{

								std::cout << e << "\n" << d << "\n" << c << "\n" << b << "\n" << a << std::endl;

							}

						}

					}

				}

			}

			else

			{

				std::cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << std::endl;

			}

			break;
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
			int x;
			int y;
			
			std::cout << "Enter x..." << std::endl;
			std::cin >> x;

			y = (x == 0) ? 0 : (10 / x);

			std::cout << "y is... " << y << std::endl;
		
			break;
		}
		case '6':
			//problem 6
		{
			int x;
			int y;
			char sign;
			
			std::cout << "Enter x..." << std::endl;
			std::cin >> x;
			std::cout << "Enter y..." << std::endl;
			std::cin >> y;
			std::cout << "Choose corresponding symbol..." << std::endl;
			std::cout << "Do you want to add(+), subtract(-), multiply(*), divide(/), modulus(%)" << std::endl;
			std::cin >> sign;
			
			if (sign == '+')
			{
				std::cout << x + y << std::endl;
			}
			else if (sign == '-')
			{
				std::cout << x - y << std::endl;
			}
			else if (sign == '*')
			{
				std::cout << x * y << std::endl;
			}
			else if (sign == '/')
			{
				std::cout << x / y << std::endl;
			}
			else if (sign == '%')
			{
				std::cout << x % y << std::endl;
			}
			break;
		}
		case '7':
			//problem 7
		{
			int x;
			int y;

			std::cout << "What month do you want to enter?" << std::endl;
			std::cout << "Type the corresponding number..." << std::endl;
			std::cout << "January(1), Febuary(2), March(3), April(4), May(5), June(6)," << std::endl;
			std::cout << "July(7), August(8), September(9), October(10), November(11), December(12)" << std::endl;
			std::cin >> x;

			y = (x == 1) ? 31 : (x == 2) ? 28 : (x == 3) ? 31 : (x == 4) ? 30 : (x == 5) ? 31 : (x == 6) ? 30 :
				(x == 7) ? 31 : (x == 8) ? 31 : (x == 9) ? 30 : (x == 10) ? 31 : (x == 11) ? 30 : (x == 12) ? 31 : 0;
			if (y == 0)
			{
				std::cout << "Error" << std::endl;
			}
			std::cout << "There are " << y << " days in this month" << std::endl;
			break;
		}
			//problem 8
		{
			//a. True
			//b. True
			//c. False
			//d. True
			//e. True
			//f. False
			//g. True
			//h. True
			//i. False
			//j. True
		}
			//problem 9
		{
			//a. True
			//b. False
			//c. False
			//d. True
			//e. True
		}
		default:
			break;
		}
	}
	system("pause");
}  