#include<stdio.h>

void nhapmang(int a[], int n)
{
	if(n > 0)
	{
		nhapmang(a, n - 1);
		printf("Nhap phan tu [%d] : ", n - 1);
		scanf("%d", &a[n - 1]);
	}
}

void xuatmang(int a[], int n)
{
	if(n > 0)
	{
		xuatmang(a, n  - 1);
		printf("%d\t", a[n - 1]);
	}
}

int sumodd(int a[], int n)
{
	if(n == 0)
		return 0;
	if(a[n - 1] % 2 != 0)
		return a[n - 1] + sumodd(a, n - 1);
	return sumodd(a, n - 1);
}

int main()
{
	int a[100], n;
	do{
		printf("Nhap so luong phan tu cho mang : ");
		scanf("%d", &n);
	}while(n < 0 || n > 100);
	nhapmang(a, n);
	printf("Day la mang vua nhap : ");
	xuatmang(a, n );
	printf("\nTong cac phan tu le : %d", sumodd(a, n));
	return 0;
}
