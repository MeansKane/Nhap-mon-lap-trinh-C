#include <stdio.h>

int main ()
{
	int a[100][100];
	int rows = 3 , columns = 4 ; 
	for (int i = 0 ; i < rows ; i++)
	{
		for (int j = 0 ; j < columns ; j++)
		{
			a[i][j] = i * j;
		}
	}
	printf ("Day la mang vua nhap : \n");
	for (int i = 0 ; i < rows ; i++)
	{
		for (int j = 0 ; j < columns ; j++)
		{
			printf ("%d\t", a[i][j]);
		}
		printf ("\n");
	}
	return 0 ; 
}
