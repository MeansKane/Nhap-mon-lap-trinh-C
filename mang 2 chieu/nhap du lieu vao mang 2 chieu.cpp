#include <stdio.h>

int main ()
{
	int a[100][100] , n , m;
	printf ("Nhap so luong hang : ");
	scanf ("%d", &n);
	printf ("Nhap so luong cot : ");
	scanf ("%d", &m); 
	for (int i = 0 ; i < n ; i++) // hang 
	{
		for (int j = 0 ; j < m ; j++) // cot
		{
			printf ("Nhap phan tu a[%d][%d] : ", i , j );
			scanf ("%d", &a[i][j]);
		}
	}
	printf ("Day la mang vua nhap : \n");
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < m ; j++)
		{
			printf ("%3d\t", a[i][j]);
		}
		printf ("\n");
	}
	return 0 ; 
}
