#include <stdio.h>

int tong (int n)
{
	if (n == 0)
	{
		return 0;// diem dung
	}
	return tong(n - 1) + n;	
}

int main ()
{
	printf ("%d", tong(5));
	return 0;
}
