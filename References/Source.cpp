#include <iostream>

//problem 3a
struct Numbers
{
	int a = 1;
	int b = 2;
	int c = 3;
};

void prob3(int& var1, int& var2, Numbers&)
{
	var1 = 0;
	var2 = 100;
	Numbers prob3C;
	prob3C.a = 29;
	prob3C.b = 77;
}

// problem 2a
void prob2(int& var1, int& var2)
{
	var1 = 0;
	var2 = 100;
}

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
		system("cls");
	}
	//problem 2
	{
		//b
		int x = 117;
		int y = 50;
		prob2(x, y);
		std::cout << "x is..." << x << "\n" << "y is..." << y << std::endl;
		system("pause");
		system("cls");
	}
	//problem 3
	{
		int x = 117;
		int y = 50;
		Numbers change;
		prob3(x, y, change);
		std::cout << "x is..." << x << "\n" << "y is..." << y << std::endl;
		std::cout << "a is..." << change.a << std::endl;
		std::cout << "b is..." << change.b << std::endl;
		std::cout << "c is..." << change.c << std::endl;
		system("pause");
		system("cls");
	}
}