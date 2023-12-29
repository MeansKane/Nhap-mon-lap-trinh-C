#include <stdio.h>

void nhapHangCot (int *m , int *n);
void nhapMatran (float a[100][100] , int m , int n);
float max (float a[100][100] , int m , int n);
void timVitriMax (float a[100][100] , int m , int n); 

int main ()
{
	float a[100][100];
	int  m , n;
	printf ("a) Nhap vao ma tran cac gia tri thuc kich thuoc m x n , voi n va m duoc nhap tu ban phim.\n");
	nhapHangCot (&m , &n);
	nhapMatran (a , m , n);
	printf ("\nb) Tim tat ca cac vi tri trong ma tran thoa yeu cau sau : gia tri cua ma tran tai vi tri do la gia tri lon nhat trong ma tran.\n");
	timVitriMax (a , m , n);
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

float max (float a[100][100] , int m , int n)
{
	float max = a[0][0];
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
	return max ; 
}

void timVitriMax (float a[100][100] , int m , int n)
{
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < n ; j++)
		{
			if (a[i][j] == max (a , m , n))
			{
				printf ("Vi tri cua gia tri lon nhat nam tai hang %d va cot %d. ", i , j);
			}
		}
	}
}



