#include <iostream>

int main()
{
	//class work
	{
		//MATTHEW
		{
			char myfirstname[] = { 'M','A','T','T','H','E','W' };
			int myfirstnumbers[7];
			for (int i = 0; i < 7; i++)
			{
				std::cout << myfirstname[i] << " ";
				myfirstnumbers[i] = myfirstname[i];
				std::cout << myfirstnumbers[i] << std::endl;
			}
		}
		//array order
		{
			int myArray[5] = { 12, 21, 3, 7, 13 };
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if (myArray[i] < myArray[j])
					{
						int x = myArray[i];
						myArray[i] = myArray[j];
						myArray[j] = x;
					}
				}
			}
		}
		//only even
		{
			int even[10];
			int input = 0;
			for (int i = 0; i < 20; i+= 2)
			{
				even[input++] = i;
			}
		}
		//2D
		{
			int tic[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					std::cout << tic[i][j] << std::endl;
				}
			}
		}
	}
	system("pause");
}