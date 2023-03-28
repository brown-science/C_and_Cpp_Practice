
// Allows input and output of streams
#include <iostream>
#include <stdio.h>

// Allows the use of the std namespace (I can use cout without writting std::cout)
using namespace std;


                                     /*          STRUCTURES         */

// structures are similar to python classes, here I'm making a rectangle struct defined by length and width 
struct Rectangle
{
	int length;
	int width;

};

						/*          STRUCTURES END        */

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
					/*          ARRAYS END        */


					/*          STRUCTURES         */

	struct Rectangle r1 = { 10,5 };
	// ints take 4 bytes so members of the Rectangle struct take up 8 bytes
	cout << sizeof(r1) << endl; // 8
	// structs are accessed using dot notaion

	cout << r1.length << endl; // 10
	cout << r1.width << endl; // 5

	r1.length = 15;
	r1.width = 8;

	cout << r1.length << endl; // 15
	cout << r1.width << endl; // 8

	return 0;
					/*          STRUCTURES END         */
}
