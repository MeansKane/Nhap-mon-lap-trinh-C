#include <stdio.h>

void inRowsColumns (int *m , int *n);
void in2dArrays (int a[][100] , int m , int n);
void out2dArrays (int a[][100] , int m , int n);
int max (int a[][100] , int m , int n);
int min (int a[][100] , int m , int n);

int main ()
{
	int a[100][100] , m , n;
	inRowsColumns (&m , &n);
	in2dArrays (a , m , n);
	printf ("\nYour 2D arrays : \n");
	out2dArrays (a , m , n);
	printf ("\nMax in your 2D arrays : %d\n", max (a , m , n));
	printf ("Min in your 2D arrays : %d\n", min (a , m , n));
	return 0;
}

void inRowsColumns (int *m , int *n)
{
	do {
		printf ("Input rows : ");
		scanf ("%d", m);
		printf ("Input columns : ");
		scanf ("%d", n);
	}	while (*m < 0 &&  *n < 0 || *m > 100 && *n > 100);
}

void in2dArrays (int a[][100] , int m , int n)
{
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			printf ("\nInput array[%d][%d] : ", i , j);
			scanf ("%d", &a[i][j]);
		}
	}
}

void out2dArrays (int a[][100] , int m , int n)
{
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			printf ("%d\t", a[i][j]);
		}
		printf ("\n");
	}
}

int max (int a[][100] , int m , int n)
{
	int max = a[0][0];
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
			}
		}
	}	
	return max;
}

int min (int a[][100] , int m , int n)
{
	int min = a[0][0];
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			if (min > a[i][j])
			{
				min = a[i][j];
			}
		}
	}	
	return min;	
}
