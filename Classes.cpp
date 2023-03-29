
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// C++ extends the structs in C through object oriented classes
// First I'll define a rectangle structure and several functions in C
// and then convert it to a rectangle class in C ++

/*          STRUCTURE         */

struct Rectangle
{
	int length;
	int width;
};

void initialize(struct Rectangle *rect_pointer, int l, int w)
{
	rect_pointer -> length = l;
	rect_pointer -> width = w;
}
int area(struct Rectangle rect)
{
	return rect.length * rect.width;
}

void double_length(struct Rectangle *rect_pointer)
{
	rect_pointer->length = rect_pointer->length * 2;
}


/*          STRUCTURE END        */


/*          CLASS         */

class Rectangle_class
{private:
	int length;
	int width;

public:
	// This is a constructor
	Rectangle_class (int l, int w)
	{
		length = l;
		width = w;
	}
	int area_class()
	{
		return length * width;
	}

	void double_length_class()
	{
		length = length * 2;
	}

	int get_length()
	{
		return length;
	}
};

/*          CLASS END         */

int main()
{
	// Non OOP use of Rectangle structure

	struct Rectangle r1;
	initialize(&r1, 10, 5); // (address, length, width)
	cout << "The area of r1 is: " << area(r1) << endl; // 50
	cout << "The length of r1 is: " << r1.length << endl; // 10
	double_length(&r1);
	cout << "The length of r1 is: " << r1.length << endl; // 20

	// OOP use of Rectangle class
	Rectangle_class r2(15, 20);
	cout << "The area of r2 is: " << r2.area_class() << endl; // 300
	cout << "The length of r2 is: " << r2.get_length() << endl; // 15
	r2.double_length_class();
	cout << "The length of r2 is: " << r2.get_length() << endl; // 30

	return 0;
					
}
