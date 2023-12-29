#include <stdio.h>

int fibonacci (int n);

int main ()
{
	int n;
	printf ("Nhap 1 so nguyen : ");
	scanf ("%d", &n);
	printf ("So hang thu %d cua day fibonacci la %d ", n , fibonacci (n));
	return 0;
}

int fibonacci (int n)
{
	if (n > 2)
	{
		return  fibonacci (n - 1) - fibonacci (n - 2);
	}
}


