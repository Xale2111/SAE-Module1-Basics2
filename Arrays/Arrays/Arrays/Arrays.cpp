/*
	Exercise : find the best score
	Create a program that finds the best score in this score array :
	int scores[]{ 84, 92, 76, 81, 56 };

	Exercise : find the value
	Write a program that asks the user to input an integer V between 0 and 20. 
	The program creates an array of 10 random integer between 0 and 20, and writes out the content of the array and a message “V is / is not in the array”

	Exercise : display multiplication table
	Using multidimensional array, create a program displaying the multiplication table.

 * 
 */

#include <algorithm>
#include <iostream>
using std::cout;
using std::cin;

void InitAndDisplayTable(int tableSize);


int main()
{
	int userInput;
	do
	{
		cout << "Enter a number between 1 and 12 to have the multiplication table of it : ";
		cin >> userInput;
	} while (userInput < 1 || userInput > 12);

	InitAndDisplayTable(userInput);
}

void InitAndDisplayTable(int tableSize)
{
	const int DefinedTableSize = 13;

	int tableArray[DefinedTableSize][DefinedTableSize];

	for (int i = 1; i < DefinedTableSize; ++i)
	{
		for (int j = 1; j < DefinedTableSize; ++j)
		{
			tableArray[i][j] = i * j;
		}
	}

	for (int i = 1; i < DefinedTableSize; ++i)
	{
		for (int j = 1; j < DefinedTableSize; ++j)
		{
			cout << tableArray[i][j];
			cout << " | ";
		}
		cout << "\n";

	}

}




//
//FIRST EXERCICE
//

/*const int arraySize = 5;

int ReturnHighestNumberInArray(int intArray[]);

int main()
{
	int numberArray[arraySize];
	std::cout << "Enter 5 numbers !";

	for (int i = 0; i < arraySize; ++i)
	{
		cout << "\nNumber " << i + 1 << " : ";
		cin >> numberArray[i];
	}
	cout << "\nHighest number in the list is : ";
	cout << ReturnHighestNumberInArray(numberArray);
}

int ReturnHighestNumberInArray(int intArray[])
{
	std::sort(intArray, intArray + arraySize, std::greater<int>());
	return intArray[0];
}*/

//
//SECOND EXERCICE
//

/*
const int arraySize = 10;
void InitRandomArray();
bool CheckIfNumberIsInArrayWithForLoop(int userNumber);
bool CheckIfNumberIsInArrayWithFind(int userNumber);



int randomNumberArray[arraySize];

int main()
{
	InitRandomArray();
	int userInput;
	do
	{
		cout << "Enter a number between 0 and 20 : ";
		cin >> userInput;
	}
	while (userInput < 0 || userInput > 20);
	cout << "Random array was : \n";
	for (int i = 0; i < arraySize; ++i)
	{
		cout << randomNumberArray[i] << "\n";
	}

	cout << "\n\n -------------------USING FOR LOOP METHOD-----------------";


	if (CheckIfNumberIsInArrayWithForLoop(userInput))
	{
		cout << "\n\nYour number is in the array !! NOICE";
	}
	else
	{
		cout << "\n\nYour number is NOT in the array ! Schade";
	}

	cout << "\n\n -------------------USING FIND METHOD-----------------";

	if (CheckIfNumberIsInArrayWithFind(userInput))
	{
		cout << "\n\nYour number is in the array !! NOICE";
	}
	else
	{
		cout << "\n\nYour number is NOT in the array ! Schade";
	}

	int temp;
	cin >> temp;

}


void InitRandomArray()
{
	for (int i = 0; i < arraySize; ++i)
	{
		srand((time(NULL) + rand()));
		randomNumberArray[i] = (rand() % 20) + 1;
	}
}


bool CheckIfNumberIsInArrayWithForLoop(int userNumber)
{
	for (int i = 0; i < arraySize; ++i)
	{
		if (userNumber == randomNumberArray[i])
		{
			return true;
		}
	}
	return false;
}


bool CheckIfNumberIsInArrayWithFind(int userNumber)
{
	if (std::any_of(std::begin(randomNumberArray), std::end(randomNumberArray), [=](int n) {return n == userNumber; }))
	{
		return true;
	}
	else
	{
		return false;
	}
}
*/


