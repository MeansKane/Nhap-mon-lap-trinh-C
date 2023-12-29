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
	int t1 = 1 , t2 = 1 , f = 0;
	for (int i = 3 ; i <= n ; i++)
	{
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	}
	return f;
}


