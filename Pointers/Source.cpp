#include <iostream>

//class work
void reverseArray(int* ptr, int size)
{
	int* first;
	int* last;
	int temp;
	first = ptr;
	last = first + (size - 1);

	
	for (int i = 0; i < size; i++)
	{
		temp = *first;
		*first = *last;
		*last = temp;
	}
}
//function A
void reverseString(char* arr)
{
	char* first = arr;
	char* second = arr;
	int size = 0;
	while (second != "\0")
	{
		second++;
		size++;
	}
	char temp = *first;
	for (int i = 0; i < size / 2; i++)
	{
		temp = *first;
		*first = *second;
		*second = temp;
	}
}
//function B
int countEven(int* arr, int arrLen)
{
	int x = 0;
	for (int i = 0; i < arrLen; i++)
	{
		if (*arr % 2 == 0)
		{
			x++;
		}
		arr++;
	}
	return x;
}
//function C
double maximum(double* arr, int size)
{
	int* empty = nullptr;
	if (arr = nullptr)
	{
		return *empty;
	}
	double extr = *arr;
	for (int i = 0; i < size; i++)
	{
		extr = *arr++;
	}
	return extr;
}
//function D
bool contains(char* arr, char searchValue)
{
	{
		for (int i = *arr; i < '\0'; i++)
		{
			if (*arr == searchValue)
			{
				return true;
			}
			arr++;
		}
	}
	return false;
}

int main()
{
	//class work
	{
		int nums[6];
		int* ptr = &nums[0];
		for (int i = 0; i < 6; i++)
		{
			*(ptr++) = 1;
		}
		int myNums[3] = { 2,4,6 };
		int* myNumsPtr = &myNums[0];
		reverseArray(myNumsPtr, 3);
	}
	//A
	{
		char myArray[12] = { "Hello World" };
		char* ptr = &myArray[0];
		reverseString(ptr);
	}
	//B
	{
		int myArray[10] = { 1,2,3,4,5,6,7,8,9,10 };
		int* ptr = &myArray[0];
		countEven(ptr, 10);
	}
	//C
	{
		double myArray[10] = { 1,2,3,4,5,6,7,8,9,10 };
		double* ptr = &myArray[0];
		maximum(ptr, 10);
	}
	//D
	{
		char myArray[12] = { "Hello World" };
		char* ptr = &myArray[0];
		contains(ptr, 'd');
	}
}
//D.Write a function Contains(char* array, char search_value) which returns true if the 1st parameter contains the 2nd parameter, or false otherwise.