#include <stdio.h>

void nhapMatran (int a[][100] , int &m , int &n); 
void xuatMatran (int a[][100] , int m , int n); 
void MatranChuyenvi (int a[][100] , int m , int n);

int main ()
{
	int a[100][100] , m , n ;
	nhapMatran (a , m , n);
	printf ("Ma tran ban dau ne : \n");
	xuatMatran (a , m , n);
	printf ("Ma tran sau khi da chuyen vi ne : \n");
	MatranChuyenvi (a , m , n);
	xuatMatran (a , n , m);
	return 0 ; 
}

void nhapMatran (int a[][100] , int &m , int &n)
{
	do 
	{
		printf ("Nhap so hang : "); 
		scanf ("%d", &m);
		printf ("Nhap so cot : "); 
		scanf ("%d", &n);
	}	while (m < 0 && n < 0 || m > 100 && n > 100);
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			printf ("Nhap phan tu a[%d][%d] : ", i , j); 
			scanf ("%d", &a[i][j]);
		}
	}
}

void xuatMatran (int a[][100] , int m , int n)
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

void MatranChuyenvi (int a[][100] , int m , int n)
{
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < i ; j++)
		{
			int temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp; 
		}
	}
}
