#include <stdio.h>

int main ()
{
	int a[4][4];
	int sum = 0;
	for (int i = 0 ; i < 4 ; i++)
	{
		for (int j = 0 ; j < 4 ; j++)
		{
//			printf ("Tai hang thu %d va cot thu %d : ", i + 1 , j + 1);
			printf ("Nhap phan tu a[%d][%d] : ", i + 1, j + 1);
			scanf ("%d", &a[i][j]);
			printf ("\n");
		}
	}
	for (int i = 0 ; i < 4 ; i++)
	{
		for (int j = 0 ; j < 4 ; j++)
		{
			if (i == j)
			{
				sum += a[i][j];
			}
		}
	}
	printf ("\nTong duong cheo la : %d", sum);
	return 0 ; 
}
