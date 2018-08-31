#include <iostream>

int main()
{
	char op;
	std::cout << "Class work(1) or Home work(2)\n";
	std::cin >> op;
	switch (op)
	{
	case '1':
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
			for (int i = 0; i < 20; i += 2)
			{
				even[input++] = i;
			}
		}
		//2D
		{
			int tic[3][3] = { { 1,2,3 },{ 4,5,6 },{ 7,8,9 } };
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					std::cout << tic[i][j] << std::endl;
				}
			}
		}
		break;
	}
	case '2':
		//home work
	{
		//problem 1
		{
			int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; // This is valid
			//int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; // This is invalid because it has to many assigned values
			//double radii[10] = (3.2, 4.7}; // This is invlaid becasue its parenthesis and a scope operation
			//int table[7] = { 2, , , 27, , 45, 39 }; // This is invalid because you cannot leave open spaces between commas
			char codes[] = { 'A', 'X', '1', '2', 'S' }; // This is valid
			//int blanks[]; // This is invalid because there are no assigned values
			//int collection[-20]; // This is invalid because the index cannot contain a (-) sign
			//int hours[3] = 8, 12, 16; // This is invalid because missing the scope operation
		}
		//problem 2
		{
			int values[] = { 2, 6, 10, 14 };
			// a) cout << values[2]; // This will display the number 10
			// b) cout << ++values[0] // This will diplay the number 3
			// c) cout << values [1]++; // This will display the number 6
			// d) x = 2;
			//    cout << values[++x]; // This will display the number 12
			// e) cout << values[4]; // There will be no assigned value for this index
		}
		//problem 3
		{
			int data[10];
			for (int i = 10; i > 0; i--)
			{
				data[i - 1] = i;
			}
		}
		//problem 4
		{
			int input[5];
			int x;
			std::cout << "Input five numbers" << std::endl;
			for (int i = 0; i < 5; i++)
			{
				std::cin >> x;
				input[i] = x;
			}
			for (int i = 4; i >= 0; i--)
			{
				std::cout << input[i] << std::endl;
			}
		}
		//problem 5
		{
			int input[10];
			int x;
			std::cout << "Enter ten numbers" << std::endl;
			for (int i = 0; i < 10; i++)
			{
				std::cin >> x;
				input[i] = x;
			}
		}
		break;
	}
	break;
	}
	system("pause");
}