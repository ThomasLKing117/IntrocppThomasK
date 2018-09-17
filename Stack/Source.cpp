#include <iostream>

class Stack
{
private: //AF
	int values[20];
	int count = 0;
public:
	bool isEmpty()
	{

	}
	int top()
	{

	}
	void pop()
	{
		count = count - 1;
	}
	void push(int value)
	{
		values[count] = value;
		count = count + 1;
	}
};

int main()
{
	Stack stack;
	stack.push(7);
}