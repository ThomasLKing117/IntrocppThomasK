#include <iostream>
#include <string>

int main()
{
	std::string Name = "Thomas King";
	std::string ID = "s188036";
	std::cout << "Name: " << Name << std::endl;
	std::cout << "ID: " << ID << std::endl;

	std::string FirstName;
	std::string LastName;
	std::string space = " ";
	std::cout << "Enter First Name\n";
	std::cin >> FirstName;
	std::cout << "Enter Last Name\n";
	std::cin >> LastName;
	std::cout << "Hello, " << FirstName << space << LastName << "\n";

	int number;
	{
		number = 117;
		std::cout << number << std::endl;
	}
	
	system("pause");
}