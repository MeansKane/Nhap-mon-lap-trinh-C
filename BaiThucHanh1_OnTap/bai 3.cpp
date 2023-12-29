#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void nhapMang (int a[], int n)
{
	srand(time(NULL));	
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}
}

void xuatMang (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf ("%d\t", a[i]);
	}
}

int sum (int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			sum += a[i];
		}
	}
	return sum;
}

int max (int a[], int n)
{
	float max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

bool ktraSongto (int n)
{
	if (n < 2)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

void inraSongto (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ktraSongto(a[i]))
		{
			printf ("%d\t", a[i]);
		}
	}
}

bool ktraDoixung (int a[], int n)
{
	for (int i =0; i < n; i++)
	{
		if (a[i] != a[n - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main ()
{
	int a[100], n;
	do {
		printf ("Nhap n phan tu cho mang duoc tao ngau nhien : ");
		scanf ("%d", &n);
	}	while (n > 100 || n < 0);
	nhapMang(a, n);
	printf ("\nDay la mang duoc tao ngau nhien : ");
	xuatMang(a, n);
	printf ("\nTong cac phan tu le trong mang : %d", sum(a, n));
	printf ("\nGia tri lon nhat trong mang : %d", max(a, n));
	printf ("\nXuat ra cac so nguyen to trong mang : ");
	inraSongto(a, n);
	if (ktraDoixung(a, n))
	{
		printf ("\nMang doi xung !");
	}
	else
	{
		printf ("\nMang khong doi xung !");
	}
	return 0;
}
