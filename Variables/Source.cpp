#include <iostream>

int main()
{
	int number;
	number = 27;
	std::cout << number << std::endl;
	number = 90;
	std::cout << number << std::endl;
	number = 117;
	std::cout << number << std::endl;
	int numA;
	int numB;
	int sum;
	numA = 27;
	numB = 90;
	sum = numA + numB;
	std::cout << sum << std::endl;
	float h;
	float t;
	float sumA;
	h = .4f;
	t = .6f;
	sumA = h + t;
	std::cout << sumA << std::endl;
	int userInput;
	std::cout << "Hey give me a number..." << std::endl;
	std::cin >> userInput;
	std::cout << "You entered " << userInput << std::endl;

	// Problem A
	{
		// My answer: 14

		// main.cpp/main()
		// ...
		// A)
		int numberA = 5;
		numberA = 9;
		numberA = 11;
		numberA = 14;
		std::cout << "A) " << numberA << std::endl;
		// ...
	}
	// Problem B
	{
		// My answer: 9
		// main.cpp/main()
		// ...
		// B)
		int numberB = 10;
		numberB = 9;
		int thingB = 55;
		thingB = 22;
		std::cout << "B) " << numberB << std::endl;
		// ...
	}
	// Problem C
	{
		// My answer: 21
		// main.cpp/main()
		// ...
		// C)
		int numberC = 3;
		numberC = 7;
		numberC = 1;
		int somethingC = 23;
		somethingC = 21;
		numberC = somethingC;
		std::cout << "C) " << numberC << std::endl;
		// ...
	}
	// Problem D
	{
		// My answer: 3
		// main.cpp/main()
		// ...
		// D)
		int numberD = 1;
		int somethingD = 3;
		numberD = somethingD;
		std::cout << "D) " << somethingD << std::endl;
		// ...
	}
	// Problem E
	{
		// My answer: 6
		// main.cpp/main()
		// ...
		// E)
		int x = 13;
		x = x / 2;
		std::cout << "E) " << x << std::endl;
		// ...
	}
	// Problem F 
	{
		// My answer: 6.5
		// main.cpp/main()
		// ...
		// F)
		float y = 13;
		y = y / 2;
		std::cout << "F) " << y << std::endl;
		// ...
	}
	// Celsius to Fahrenheit)
	{
		// main.cpp/main()
		// ...

		// <Your work goes here>
		float celsius;


		std::cout << "Celsius to Fahrenheit)" << std::endl;
		std::cout << "what is celius..." << std::endl;
		std::cin >> celsius;
		std::cout << "Celsius: " << celsius << std::endl;
		float fahrenheit = celsius * 1.8 + 32;
		std::cout << "Fahrenheit: " << fahrenheit << std::endl;
		// ...
	}
	// Area of a Rectangle) 
	{
		// main.cpp/main() 
		// ...

		float rectWidth = 0.0f; // Modify this variable below. 
		float rectHeight = 0.0f; // Modify this variable below. 
		float rectArea = 0.0f; // Modify this variable below. 

		// <Your work goes here>

		std::cout << "Area of a Rectangle)" << std::endl;
		std::cout << "Enter Height..." << std::endl;
		std::cin >> rectHeight;
		std::cout << "Enter Width..." << std::endl;
		std::cin >> rectWidth;
		std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
		std::cout << "Area: " << rectHeight * rectWidth << std::endl;
		// ... 
	}
	// Average of Five)
	{
		// main.cpp/main() 
		// ... 

		float a, b, c, d, e;    // Modify these variables below. 
		float avg;              // Modify this variable below. 
		avg = a = b = c = d = e = 0.0f; // Initialize all to zero. 

		// <Your work goes here> 

		std::cout << "Average of Five)" << std::endl;
		std::cout << "Enter number five numbers..." << std::endl;
		std::cin >> a >> b >> c >> d >> e;
		std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
		std::cout << "avg: " << (a + b + c + d + e) / 5 << std::endl;
		// ...
	}
	// Number Swap)
	{
		// main.cpp/main() 
		// ... 
		// <Your work goes here> 
		int x;
		int y;

		std::cout << "Number Swap)" << std::endl;
		std::cout << "Enter x..." << std::endl;
		std::cin >> x;
		std::cout << "Enter y..." << std::endl;
		std::cin >> y;
		
		int a = x;
		
		x = y;
		y = a;
		
		std::cout << "x is " << x << std::endl;
		std::cout << "y is " << y << std::endl;
		
		// ...
	}
	// Fun Facts for Your Age) 
	{
		// main.cpp/main() 
		// ... 
		// <Your work can go here.> 
		int age;

		// <You must add more lines to output to the terminal> 
		std::cout << "Your age..." << std::endl;
		std::cin >> age;
		std::cout << "Howdy! You are " << age << " years old!" << std::endl;
		std::cout << "You've been alive for at least " << (age * 12) << " months, cool!" << std::endl;
		std::cout << "You also are expected to have " << (79 - age) << " years to live! (If in the US)" << std::endl;
		// ... 
	}
	// Conforming to Conventions)
	{
		// main.cpp/main()
		// ...
		int age;

		int bulletCount;
		int bullet_count;

		float dogYears;
		float dog_years;

		int qty;

		float shieldValue;
		float shield_value;

		float defenseMatrixCooldown;
		float defense_matrix_cooldown;

		int redArmorValue;
		int red_armor_value;

		float redArmorRatio;
		float red_armor_ratio;

		int happiness;

		int gandhiAggression;
		int gandhi_aggression;
		// ...
	}
	// The Right Tool for the Job)
	{
		// main.cpp/main()
		// ...
		int num; // integer
		float num2; // single precision floating point
		char letter; // single letter
		bool decide; // true or false
		short small; // larger than or equal to the size of type char, and shorter than or equal to the size of type int
		long large; //  larger than or equal to the size of type int
		double two; // larger than or equal to type float, but shorter than or equal to the size of type long double
		long double twoPlustwo; // larger than or equal to type double
		long long xtrLarge; // Larger than an unsigned long
		wchar_t moreLetters; // wide-character or multibyte character type
		// ...
	}
	// Number Swap (Difficulty up)
	{
		// main.cpp/main() 
		// ... 
		// <Your work goes here> 
		int x;
		int y;

		std::cout << "Number Swap)" << std::endl;
		std::cout << "Enter x..." << std::endl;
		std::cin >> x;
		std::cout << "Enter y..." << std::endl;
		std::cin >> y;
		std::cout << "x is: " << y << std::endl;
		std::cout << "y is: " << x << std::endl;
		// ...
	}
	system("pause");
}