
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Recursion

void fun_tail(int n) // Tail recurstion
{
	if (n > 0)
	{
		printf("%d ", n);
		fun_tail(n - 1);

	}

}

void fun_head(int n) // Head recurstion
{
	if (n > 0)
	{
		fun_head(n - 1);
		printf("%d ", n);
		

	}

}

int fun(int n)
{
	if (n > 0)
	{
		return fun(n - 1) + n;
		
	}
	return 0;
}
int main()
{
	int x = 4;
	fun_tail(x); // 4 3 2 1
	fun_head(x); // 1 2 3 4

	int r;
	r = fun(5);
	printf("\n %d", r); // 15
	return 0;
					
}
