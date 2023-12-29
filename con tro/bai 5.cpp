#include<stdio.h>

int main ()
{
	int n2 = 10, n1 = 6, n0 =5;
	printf ("n2 = %d, n1 = %d, n0 = %d\n", n2, n1, n0);
	int *p = &n1;
	*p = 9;
	p++;
	*p = 15; 
	p--;
	p--;
	*p =- 3;
	printf ("n2 = %d, n1 = %d, n0 = %d", n2, n1, n0);
	return 0;
}
