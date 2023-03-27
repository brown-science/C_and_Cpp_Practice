// C_and_Cpp_Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Allows input and output of streams
#include <iostream>

// Allows the use of the std namespace (I can use cout without writting std::cout
using namespace std;

int main()
{
	                                   /*          ARRAYS         */

	// Arrays can be declared with or without initialization

	// no initialization, array of size 5
	int A[5];

	// with initialization
	int B[] = { 2,4,6,8,10 };

	// All of an array's elements can be printed using a for loop

	// Classic C for loop
	for (int i = 0; i < 5; i++)
	{
		cout << B[i] << endl;
	}

	// C++ for each loop
	for (int x : B)
	{
		cout << x << endl;
	}
}
