
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*          STRUCTURES         */

struct Rectangle
{
	int length;
	int width;

};

/*          STRUCTURES END        */


/*          FUNCTIONS         */

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

int area(struct Rectangle r)
{
	return (r.length * r.width);
}

void double_length(struct Rectangle *r)
{
	r -> length = r -> length * 2;
}

/*          FUNCTIONS END         */

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

	// Structures can also be passed as parameters by value, address, or reference
	// Here is an example of passing a structure by value

	struct Rectangle rect = { 10, 15 }; // (length, width)
	int rect_area = area(rect); // 150
	cout << "The area of rect is: " << rect_area << endl;
	
	// Here is an example of passing a structure by address (reference would work too)

	cout << "The length of rect is: " << rect.length << endl; // 10
	double_length(&rect);
	cout << "The length of rect is: " << rect.length; // 20


	return 0;
					
}
