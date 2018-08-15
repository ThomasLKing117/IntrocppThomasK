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
	std::cout << "Hey give me a number...\n" << std::endl;
	std::cin >> userInput;
	std::cout << "You entered " << userInput << std::endl;
	
	// Problem A
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

	// Problem B
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
	// Problem C
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

	// Problem D
	// My answer: 3
	// main.cpp/main()
	// ...
	// D)
	int numberD = 1;
	int somethingD = 3;
	numberD = somethingD;
	std::cout << "D) " << somethingD << std::endl;
	// ...

	// Problem E
	// My answer: 6
	// main.cpp/main()
	// ...
	// E)
	int x = 13;
	x = x / 2;
	std::cout << "E) " << x << std::endl;
	// ...

	// Problem F 
	// My answer: 6.5
	// main.cpp/main()
	// ...
	// F)
	float y = 13;
	y = y / 2;
	std::cout << "F) " << y << std::endl;
	// ...
	// main.cpp/main()
	// ...
	// Celsius to Fahrenheit)
	float degCelsius = 78.0f;
	float degFahrenheit = 0.0f; // Modify this variable below.
	
	// <Your work goes here>
	float myVariable = 0;
	myVariable = 78.0 * 1.8 + 32;
	
	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius: " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << myVariable << std::endl;
	// ...



	system("pause");
}