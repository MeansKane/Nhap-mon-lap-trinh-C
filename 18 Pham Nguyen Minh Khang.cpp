#include <stdio.h>

int main()
{
	int a[100], n;
	do {
		printf ("Nhap so luong phan tu cho mang a : ");
		scanf ("%d", &n);
	}	while (n > 100 ||n < 0);
	for (int i = 0; i < n; i++)
	{
		printf ("Nhap phan tu a[%d]: ",i);
		scanf ("%d", &a[i]);
	}
	printf ("Day la mang cua ban : ");
	for (int i = 0; i < n; i++)
	{
		printf ("%d\t", a[i]);
	}
	printf ("\nMang sau khi giam dan : ");
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf ("%d\t", a[i]);
	}
	return 0;
}
