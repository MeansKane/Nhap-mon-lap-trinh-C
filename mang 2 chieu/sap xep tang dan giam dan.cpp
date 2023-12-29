#include <stdio.h>

void inRowsColumns (int *m , int *n);
void in2dArrays (int a[][100] , int m , int n);
void out2dArrays (int a[][100] , int m , int n);
void sortAscending (int a[][100] , int m , int n);
void sortDecrease (int a[][100] , int m , int n);

int main ()
{
	int a[100][100] , m , n;
	inRowsColumns (&m , &n);
	printf ("\nInput 2D arrays A : ");
	in2dArrays (a , m , n);
	printf ("\nOutput 2D arrays A : \n");
	out2dArrays (a , m , n);
	printf ("\nYour 2D arrays A after sort ascending : \n");
	sortAscending (a , m , n);
	out2dArrays (a , m , n);
	printf ("\nYour 2D arrays A after sort decrease : \n");
	sortDecrease (a , m , n);
	out2dArrays (a , m , n);
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
//void sortAscending (int a[][100] , int m , int n)
//{
//	// xem mang 2 chieu la mang 1 chieu 
//	int k = 1 * n; 
//	for (int i = 0 ; i < k - 1 ; i++)
//	{
//		for (int j = k - 1 ; j > i ; j--)
//		{
//			// tim vi tri cua i : i [i / n][i % n] = i [tim hang][tim cot]
//			if (a[i / n][i % n] > a[j / n][j % n])
//			{
//				int temp = a[i / n][i % n];
//				a[i / n][i % n] = a[j / n][j % n];
//				a[j / n][j % n] = temp;
//			}
//		}
//	}
//}

void sortAscending (int a[][100] , int m , int n)
{
	// xem mang 2 chieu la mang 1 chieu 
	int k = m * n; 
	for (int i = 0 ; i < k - 1 ; i++)
	{
		for (int j = i + 1 ; j < k ; j++)
		{
			if (a[i / n][i % n] > a[j / n][j % n])
			{
				int temp = a[i / n][i % n];
				a[i / n][i % n] = a[j / n][j % n];
				a[j / n][j % n] = temp;
			}
		}
	}
}
////giam dan
//void sortDecrease (int a[][100] , int m , int n)
//{
//	int k = m * n;
//	for (int i = 0 ; i < k - 1 ; i++)
//	{
//		for (int j = k - 1 ; j > i ; j--)
//		{
//			if (a[i / n][i % n] < a[j / n][j % n])
//			{
//				int temp = a[i / n][i % n];
//				a[i / n][i % n] = a[j / n][j % n];
//				a[j / n][j % n] = temp;	
//			}
//		}
//	}
//}

//giam dan
void sortDecrease (int a[][100] , int m , int n)
{
	int k = m * n;
	for (int i = 0 ; i < k - 1 ; i++)
	{
		for (int j = i + 1 ; j < k ; j++)
		{
			if (a[i / n][i % n] < a[j / n][j % n])
			{
				int temp = a[i / n][i % n];
				a[i / n][i % n] = a[j / n][j % n];
				a[j / n][j % n] = temp;
			}
		}
	}
}
