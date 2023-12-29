#include <stdio.h>

int main ()
{
	int n = 7 , m = 6;
	int *pn = &n; 
	int *pm = &m;
	*pn = 2 * (*pm) + m * n;
	*pm += 3 * m - (*pn);
	printf ("Dia chi n = %d m = %d pn = %d pm = %d", &n , &m , pn , pm);
	printf ("\nm = %d va n = %d ", m , n);
	return 0;
}
