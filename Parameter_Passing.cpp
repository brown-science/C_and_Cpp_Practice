
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void swap_by_value(int a, int b)
{
	int temp;
	temp = b;
	b = a;
	a = temp;
}

void swap_by_address(int *a, int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}

void swap_by_reference(int &a, int &b)
{
	int temp;
	temp = b;
	b = a;
	a = temp;
}


int main()
{
						/*          PARAMETER PASSING         */
	// There are several ways to pass parameters in C/C++. we can pass 
	// parameters by value or reference in C/C++, and can also pass 
	// parameters by reference in C ++

	int x = 10;
	int y = 50;
	// The swap function won't work as we aren't altering the actual parameters (x and y)
	swap_by_value(x, y);
	cout << x << endl; // 10
	cout << y << endl; // 50

	// The swap function works if we pass the address of our actual parameters (x and y)
	// and make the formal parameters (a and b) pointers 
	swap_by_address(&x, &y);
	cout << x << endl; // 50
	cout << y << endl; // 10
	
	// We can also pass parameters by reference in C++ and functions that alter the 
	// actual parameters will work as intended
	x = 10;
	y = 50;
	swap_by_reference(x, y);
	cout << x << endl; // 50
	cout << y << endl; // 10
			
	return 0;
					
}
