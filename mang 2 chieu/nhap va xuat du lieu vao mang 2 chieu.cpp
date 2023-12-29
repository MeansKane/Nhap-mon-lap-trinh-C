#include <stdio.h>

int main ()
{
	int a[100][100] , m , n;
	do {
		printf ("Input rows : ");
		scanf ("%d", &m);
		printf ("Input columns : ");
		scanf ("%d", &n);
	}	while (m < 0 && n < 0 || m > 100 && n > 100);
	printf ("\n");
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			printf ("Input array[%d][%d] : ", i , j);
			scanf ("%d", &a[i][j]);
		}
	}
	printf ("\nYour 2D arrays : \n");
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			printf ("%d\t", a[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
