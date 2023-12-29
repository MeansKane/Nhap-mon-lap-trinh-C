#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void inRowsColumns (int *m , int *n);
void in2dArrays (int a[][100] , int m , int n);
void out2dArrays (int a[][100] , int m , int n);
bool primeNumbers (int n);
int countPrimeNumbers (int a[][100] , int m , int n);
void outPrimeNumbers (int a[][100] , int m , int n);

int main ()
{
	int a[100][100] , m , n;
	inRowsColumns (&m , &n);
	printf ("\nInput 2D arrays A : ");
	in2dArrays (a , m , n);
	printf ("\nOutput 2D arrays A : \n");
	out2dArrays (a , m , n);
	printf ("\nPrime numbers in your 2D arrays A : \n");
	outPrimeNumbers (a , m , n);
	printf ("\nQuantily prime numbers in your 2D arrays A is : %d ", countPrimeNumbers (a , m , n));
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

bool primeNumbers (int n)
{
	if (n < 2)
	{
		return false; 
	}	
	for (int i = 2 ; i <= sqrt (n) ; i++)
	{
		if (n % i == 0)
		{		
			return false;
		}
	}
	return true;
}

int countPrimeNumbers (int a[][100] , int m , int n)
{
	int count = 0;
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{	
			if (primeNumbers (a[i][j]))
			{
				count++;
			}
		}	
	}	
	return count; 
}

void outPrimeNumbers (int a[][100] , int m , int n)
{
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{	
			if (primeNumbers (a[i][j]))
			{
				printf ("%d\t", a[i][j]);
			}
		}	
	}	
}
