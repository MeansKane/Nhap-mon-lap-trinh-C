#include <stdio.h>

void nhapMatran (int x[][100] , int m , int n);
void xuatMatran (int x[][100] , int m , int n);
void tong2Matran (int a[][100] , int b[][100] , int c[][100] , int m , int n);

int main ()
{
	int a[100][100] , b[100][100] , c[100][100] , m , n ;
	do 
	{
		printf ("Nhap so hang : ");
		scanf ("%d", &m);
		printf ("Nhap so cot : ");
		scanf ("%d", &n);
	}	while (m <= 0 || m > 100 && n <= 0 || n > 100);
	printf ("\nNhap ma tran A : \n");
	nhapMatran (a , m , n);
	printf ("\nNhap ma tran B : \n");
	nhapMatran (b , m , n);	
	printf ("\nDay la ma tran A : \n");
	xuatMatran (a , m , n);
	printf ("\nDay la ma tran B : \n");
	xuatMatran (b , m , n);	
	printf ("\nDay la ma tran C (tong cua 2 ma tran A va B) : \n");
	tong2Matran (a , b , c , m , n);
	xuatMatran (c , m , n);	
	return 0 ; 
}

void nhapMatran (int x[][100] , int m , int n)
{
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			printf ("Phan tu [%d][%d] : ", i , j);
			scanf ("%d", &x[i][j]);
		}
	}
}

void xuatMatran (int x[][100] , int m , int n)
{
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			printf ("%d\t", x[i][j]);
		}
		printf ("\n");
	}
}

void tong2Matran (int a[][100] , int b[][100] , int c[][100] , int m , int n)
{
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}
