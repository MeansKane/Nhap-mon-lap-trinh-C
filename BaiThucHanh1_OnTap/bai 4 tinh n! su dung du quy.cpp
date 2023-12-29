#include <stdio.h>

int giaiThua (int n)
{
	if (n == 0)
	{
		return 1;
	}
	else 
	{
		return n * giaiThua(n - 1);
	}
}

int main ()
{
	int n;
	scanf ("%d", &n);
	printf ("%d", giaiThua(n));
	return 0;
}
