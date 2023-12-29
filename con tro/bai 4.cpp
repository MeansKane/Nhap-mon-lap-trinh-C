#include <stdio.h>

int main ()
{
	double x = 0.5;
	double *pD = &x;
	printf ("%d %d\n", &x , &pD);
	int i;
	for (i = -2 ; i <= 2 ; i++)
	{
		printf ("%u, ", pD + i);
	}
	printf ("\n");
	int n = 3;
	int *pI = &n;
	printf ("\n%d %d\n", &n , &pI);
	for (i = -2 ; i <= 2 ; i++)
	{
		printf ("%u, ", pI + i);
	}
	printf ("\n");
	pI++; 
	printf ("%u, ", pI);
	printf ("\n");
	pI--; 
	printf ("%u, ", pI);
	return 0; 
}
