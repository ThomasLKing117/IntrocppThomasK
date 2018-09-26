#include <iostream>

int sumOfNums(int n)
{
	int temp = 0;
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		temp++;
		sum++;
		sum += temp;
	}
	return sum + 1;
}

int main()
{
	sumOfNums(9);
	return 0;
}