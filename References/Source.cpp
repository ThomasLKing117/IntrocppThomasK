#include <iostream>

int main()
{
	//problem 1
	{
		//b
		int variable = 10;
		//c
		std::cout << "variable:: " << variable << std::endl;
		system("pause");
		//d
		int& refToVariable = variable;
		//e
		std::cout << "refToVariable:: " << refToVariable << std::endl;
		system("pause");
		//f
		variable = 117;
		std::cout << "refToVariable:: " << refToVariable << std::endl;
		system("pause");
		//g
		int& anotherRefToVariable = variable;
		std::cout << "anotherRefToVariable:: " << anotherRefToVariable << std::endl;
		system("pause");
		//h
		/*int& refToNothing;*/
		int somethingElse = 20;
		refToVariable = somethingElse;
		std::cout << "somethingElse:: " << somethingElse << std::endl;
		system("pause");
		std::cout << "refToVariable:: " << refToVariable << std::endl;
		std::cout << "variable:: " << variable << std::endl;
		system("pause");
		//problem 2
		{

		}
	}
}