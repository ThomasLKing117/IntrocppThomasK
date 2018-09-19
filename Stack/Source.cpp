#include <iostream>

class Stack
{
private: //AF
	int values[20];
	int count = 0;
public:
	Stack()
	{
		for (int& item : values)
		{
		item = -1;
		}
	}
	bool isEmpty()
	{

	}
	int top()
	{

	}
	void pop()
	{
		values[count - 1] = -1;
		count = count - 1;
	}
	void push(int value)
	{
		values[count] = value;
		count = count + 1;
	}
	void printInfo()
	{
		for (int item : values)
		{
			std::cout << item << std::endl;
		}
	}
};

int main()
{
	Stack stack;
	for (int i = 0; i < 20; i++)
	{
		stack.push(i);
		stack.printInfo();
		system("pause");
		system("cls");
	}
	for (int i = 0; i < 20; i++)
	{
		stack.pop();
		stack.printInfo();
		system("pause");
		system("cls");
	}
}
//Where do i go from here?
//1. Default constructor	(Success)
//2. Default initialize to -1	(Success)
//3. Paramartized constructor to allow for arbitrary stack sizes	(Did not get to do)
//4. Check if stack is empty	(Did not get to do)
//5. Check if stack is full    (Did not get to do)