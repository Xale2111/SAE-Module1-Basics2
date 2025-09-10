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

const int arraySize = 5;

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
}


