#include <stdio.h>

void nhapHangCot (int *m , int *n);
void nhapMatran (int x[100][100] , int m , int n);
void xuatMatran (int x[100][100] , int m , int n);
void tich2Matran (int a[100][100] , int b[100][100] , int c[100][100] , int m , int n , int k);

int main ()
{
	int a[100][100] , b[100][100] , c[100][100] , ma , na , mb , nb;
	printf ("Nhap ma tran A : \n");
	nhapHangCot (&ma , &na);
	nhapMatran (a , ma , na);
	printf ("\nNhap ma tran B : \n");
	nhapHangCot (&mb , &nb);
	nhapMatran (b , mb , nb);
	printf ("\nDay la ma tran A : \n");
	xuatMatran (a , ma , na);
	printf ("\nDay la ma tran B : \n");
	xuatMatran (b , mb , nb);
	if (na != mb) // cot A != hang B 
	{
		printf ("\n2 ma tran khong kha tich nen khong tinh duoc tich cua 2 ma tran A va B !");
	}
	else // cot A = hang B
	{
		printf ("\nDay la ma tran C (tich 2 ma tran A va B) : \n");
		tich2Matran (a , b , c , ma , na , nb);
		xuatMatran (c , ma , nb);	
	}
	return 0 ; 
}

void nhapHangCot (int *m , int *n)
{
	do {
		printf ("Nhap so hang : ");
		scanf ("%d", m);
		printf ("Nhap so cot : ");
		scanf ("%d", n);
	}	while (*m <= 0 && *n <= 0 || *m > 100 && *n > 100);
}

void nhapMatran (int x[100][100] , int m , int n)
{
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			printf ("Nhap arr[%d][%d] : ", i , j);
			scanf ("%d", &x[i][j]);
		}
	}
}

void xuatMatran (int x[100][100] , int m , int n)
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

void tich2Matran (int a[100][100] , int b[100][100] , int c[100][100] , int m , int n , int k)
{
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < k ; j++)
		{
			for (int l = 0 ; l < n ; l++)// bien chay chung
			{
				c[i][j] = c[i][j] + (a[i][l] * b[l][j]);
			}
		}
	}
}
