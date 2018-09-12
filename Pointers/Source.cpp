#include <iostream>

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

int main()
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