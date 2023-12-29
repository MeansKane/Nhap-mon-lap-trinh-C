#include <stdio.h>

int UCLN (int a, int b)
{
	if (a == b)
	{
		return a;
	}
	if (a > b)
	{
		return UCLN(a - b, b);	
	}
	if (a < b)
	{
		return UCLN(a, b - a);	
	}
	
}

int main ()
{
	printf ("%d", UCLN(16, 10));
	return 0;
}
