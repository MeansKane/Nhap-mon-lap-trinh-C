#include <stdio.h>

void inRowsColumns (int *m , int *n);
void in2dArrays (int a[][100] , int m , int n);
void out2dArrays (int a[][100] , int m , int n);
void sortAscendingAt (int a[][100] , int m , int n);
void sortDecreaseAt (int a[][100] , int m , int n);
int max (int a[][100] , int m , int n);
void minDivisibleBy3 (int a[][100] , int m , int n);

int main ()
{
	int a[100][100] , m , n;
	inRowsColumns (&m , &n);
	printf ("\nInput 2D arrays A : ");
	in2dArrays (a , m , n);
	printf ("\nOutput 2D arrays A : \n");
	out2dArrays (a , m , n);
	printf ("\nYour 2D arrays A after sort ascending at row 2 : \n");
	sortAscendingAt (a , m , n);
	out2dArrays (a , m , n);
	printf ("\nYour 2D arrays A after sort decrease at row 2  : \n");
	sortDecreaseAt (a , m , n);
	out2dArrays (a , m , n);
	printf ("\nMax value in your 2D arrays A is : %d ", max (a , m , n));
	minDivisibleBy3 (a , m , n);
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

// tang dan 
void sortAscendingAt (int a[][100] , int m , int n)
{
	// xem mang 2 chieu la mang 1 chieu 
	for (int j = 0 ; j < n - 1 ; j++)
	{
		for (int k = j + 1 ; k < n ; k++)
		{
			if (a[1][j] > a[1][k])
			{
				int temp = a[1][j];
				a[1][j] = a[1][k];
				a[1][k] = temp;
			}
		}
	}
}

//giam dan
void sortDecreaseAt (int a[][100] , int m , int n)
{
	for (int j = 0 ; j < n - 1 ; j++)
	{
		for (int k = j + 1 ; k < n ; k++)
		{
			if (a[1][j] < a[1][k])
			{
				int temp = a[1][j];
				a[1][j] = a[1][k];
				a[1][k] = temp;
			}
		}
	}
}

int max (int a[][100] , int m , int n)
{
	int max = a[0][0];
	for (int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	return max;
}

void minDivisibleBy3 (int a[][100] , int m , int n)
{
	int min = a[0][0] , kt = 0;
	for (int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			if (a[i][j] % 3 == 0)
			{
				min = a[i][j];
				kt = 1 ; 
				break;
			}
		}
	}
	if (kt == 1)
	{
		for (int i = 0 ; i < m ; i++)
		{
			for(int j = 0 ; j < n ; j++)
			{
				if ((a[i][j] % 3 == 0) && (a[i][j] < min))
				{
					min = a[i][j];
				}
			}
		}		
	printf ("\nMin value divisible by 3 in your 2D arrays A is : %d ", min);
	}
	else 
	{
		printf ("\nNot found min value divisible by 3 in your 2D arrays A !");
	}
}
