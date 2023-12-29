#include <stdio.h>

void nhapMatran (int a[][100]);
void xuatMatran (int a[][100]);
void MatranChuyenvi (int a[][100]);

int main ()
{
	int a[100][100] ;
	nhapMatran (a);
	printf ("Ma tran ba dau : \n");
	xuatMatran (a);
	printf ("Ma tran tong quat cap m * n : \n");
	MatranChuyenvi (a);
	xuatMatran (a);
	return 0 ; 
}

void nhapMatran (int a[][100])
{
	for (int i = 0 ; i < 4 ; i++)
	{
		for (int j = 0 ; j < 4 ; j++)
		{
			printf ("Nhap phan tu a[%d][%d] : ", i , j);
			scanf ("%d", &a[i][j]);
		}
	}
}

void xuatMatran (int a[][100])
{
	for (int i = 0 ; i < 4 ; i++)
	{
		for (int j = 0 ; j < 4 ; j++)
		{
			printf ("%d\t", a[i][j]);
		}
		printf ("\n");
	}
}
// so hang = so cot va nguoc lai : a[i][j] = a[j][i] 
void MatranChuyenvi (int a[][100])
{
	for (int i = 0 ; i < 4 ; i++)
	{
		for (int j = 0 ; j < i ; j++)
		{
			int temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp; 
		}
	}
}

