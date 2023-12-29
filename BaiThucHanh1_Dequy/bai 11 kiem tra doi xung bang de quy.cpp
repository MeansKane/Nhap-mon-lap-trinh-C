#include <stdio.h>

void nhapmang (int a[], int n)
{
	if (n > 0)
	{
		nhapmang(a, n - 1);
		printf ("Nhap phan tu [%d] : ", n - 1);
		scanf ("%d", &a[n - 1]);
	}
}

void xuatmang (int a[], int n)
{
	if (n > 0)
	{
		xuatmang(a, n - 1);	
		printf ("%d\t", a[n - 1]);
	}
}

int isSym(int a[], int l, int r){
	if(l >= r)
		return 1;
	if(a[l] == a[r])
		return isSym(a, l + 1, r - 1);
	return 0;
}

int main ()
{
	int a[100], n;
	do {
		printf ("Nhap so luong phan tu cho mang : ");
		scanf ("%d", &n);
	}	while (n < 0 || n > 100);
	nhapmang(a, n);
	printf ("Day la mang vua nhap : ");
	xuatmang(a, n);
	if (isSym(a, 0, n - 1) == 1)
	{
		printf ("\nMang doi xung");
	}
	else 
	{
		printf ("\nMang khong doi xung");
	}
	return 0;
}
