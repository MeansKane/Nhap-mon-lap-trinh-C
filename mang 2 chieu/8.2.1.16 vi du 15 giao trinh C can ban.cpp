#include <stdio.h>

void inRowsColumns (int *n);
void inArray2 (float a[][100] , int n);
void outArray2 (float a[][100] , int n);
void addArray2	(float a[][100] , float b[][100] , float c[][100] , int n);
float max (float a[][100] , int n);
float min (float a[][100] , int n);

int main ()
{
	float a[100][100] , b[100][100] , c[100][100];
	int n ; 
	inRowsColumns (&n);
	printf ("\nInput array A , please : \n");
	inArray2 (a , n);
	printf ("\nInput array B , please : \n");
	inArray2 (b , n);
	printf ("\nOutput array A : \n");
	outArray2 (a , n);	
	printf ("\nOutput array B : \n");
	outArray2 (b , n);	
	printf ("\nOutput array C : \n");
	addArray2 (a , b , c , n);
	outArray2 (c , n);
	printf ("\nMax in array C : %.2f\n", max (c , n));
	printf ("\nMin in array C : %.2f\n", min (c , n));
	return 0 ; 
}

void inRowsColumns (int *n)
{
	do 
	{
		printf ("Input rows and columns , please : ");
		scanf ("%d", n);
	}	while (*n < 0 || *n > 100);
}

void inArray2 (float a[][100] , int n)
{
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			printf ("Input array[%d][%d] : ", i , j);
			scanf ("%f", &a[i][j]);
		}
	}
}

void outArray2 (float a[][100] , int n)
{
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			printf ("%.2f\t", a[i][j]);
		}
		printf ("\n");
	}
}

void addArray2	(float a[][100] , float b[][100] , float c[][100] , int n)
{
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			c[i][j] = a[i][j] + b[i][j]	;
		}
	}
}

float max (float a[][100] , int n)
{
	float max = a[0][0];
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			if (max < a[i][j])
			{
				max = a[i][j];
			}
		}
	}	
	return max ;
}


float min (float a[][100] , int n)
{
	float min = a[0][0];
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			if (min > a[i][j])
			{
				min = a[i][j];
			}
		}
	}	
	return min ;
}
