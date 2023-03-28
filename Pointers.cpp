
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

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
						/*          POINTERS         */
	int a = 10;
	// Declaration of a pointer
	int *p;
	// initalization of a pointer (& denotes a data item's address in memory)
	p = &a;
	// address of a
	cout << p <<endl;
	// value of a (* dereferences the pointer)
	cout << *p <<endl;

	int A[5] = { 2,4,6,8,10 };
	int *p2;
	// "&" isn't needed as the default for an array is its address
	p2 = A; // p2 = &A[0]; is the same

	// pointers are more often used to reference data items in heap memory
	int* p3;
	p3 = (int*)malloc(5 * sizeof(int));

	for (int i = 0; i < 5; i++)
	{
		p3[i] = 5 * i;
	}

	for (int i = 0; i < 5; i++)
	{
		cout<<p3[i]<<endl;
	}

	delete[] p3;

			/*          POINTERS  END       */

			
			/*          POINTER TO STRUCTURE         */
	struct Rectangle *p5;
	// creates rectangle object in heap
	p5 = (struct Rectangle *)malloc(sizeof(struct Rectangle));

	p5->length = 10;
	p5->width = 15;

	cout << "The area of the rectangle is:";
	cout << (p5->length * p5->width);
		/*          POINTER TO STRUCTURE END       */


	delete[] p5;

	return 0;
					
}
