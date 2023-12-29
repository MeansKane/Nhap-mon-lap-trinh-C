#include <stdio.h>
// 1 1 2 3 5 8 
int fibonacci (int n)
{
	int f1 = 1, f2 = 1, f3 = 2;
	for (int i = 3; i <= n; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f3; 
}

int main ()
{
	printf ("%d", fibonacci(6));
	return 0;
}
