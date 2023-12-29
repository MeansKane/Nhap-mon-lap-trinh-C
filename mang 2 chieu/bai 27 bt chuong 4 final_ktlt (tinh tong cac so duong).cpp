#include <stdio.h>

void nhapHangCot (int *m , int *n);
void nhapMatran (float a[100][100] , int m , int n);
float tinhTongDuong (float a[100][100] , int m , int n);

int main ()
{
	float a[100][100];
	int  m , n;
	printf ("a) Nhap vao ma tran cac gia tri thuc kich thuoc m x n , voi n va m duoc nhap tu ban phim.\n");
	nhapHangCot (&m , &n);
	nhapMatran (a , m , n);
	printf ("\nb) Tinh tong cac so duong trong mang.\n");
	printf ("%.2f", tinhTongDuong (a , m , n));
	return 0 ; 
}

void nhapHangCot (int *m , int *n)
{
	do 
	{
		printf ("Nhap so hang : ");
		scanf ("%d", m);
		printf ("Nhap so cot : ");
		scanf ("%d", n);
	}	while (*m <= 0 && *n <= 0 || *m > 100 && *n > 100);
}

void nhapMatran (float a[100][100] , int m , int n)
{
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			printf ("Nhap arr[%d][%d] : ", i , j);
			scanf ("%f", &a[i][j]);
		}
	}
}

float tinhTongDuong (float a[100][100] , int m , int n)
{
	float sum = 0 ; 
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			if (a[i][j] >= 0)
			{
				sum += a[i][j];
			}
		}
	}
	return sum ; 
}


