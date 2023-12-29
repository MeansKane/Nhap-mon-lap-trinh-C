#include <stdio.h>

void inRowsColumns (int *m , int *n);
void in2dArrays (int a[][100] , int m , int n);
void out2dArrays (int a[][100] , int m , int n);
void add2dArrays (int a[][100] , int b [][100] , int c[][100] , int m , int n);

int main ()
{
	int a[100][100] , b[100][100] , c[100][100] , m , n;
	inRowsColumns (&m , &n);
	printf ("\nInput 2D arrays A : ");
	in2dArrays (a , m , n);
	printf ("\nInput 2D arrays B : ");
	in2dArrays (b , m , n);
	printf ("\nOutput 2D arrays A : \n");
	out2dArrays (a , m , n);
	printf ("\nOutput 2D arrays B : \n");
	out2dArrays (b , m , n);
	printf ("\nOutput 2D arrays C : \n");
	add2dArrays (a  , b , c , m , n);
	out2dArrays (c , m , n);
	return 0;
}

void inRowsColumns (int *m , int *n)
{
	do {
		printf ("Input rows : ");
		scanf ("%d", m);
		printf ("Input columns : ");
		scanf ("%d", n);		
	}	while (*m < 0 && *n < 0 || *m > 100 && *n > 100);
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

void add2dArrays (int a[][100] , int b [][100] , int c[][100] , int m , int n)
{
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{	
			c[i][j] = a[i][j] + b[i][j];
		}	
	}
}
