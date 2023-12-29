#include <stdio.h>

int main ()
{
	int n = 7; 
	int *pn = &n;
	int **ppn = &pn;
	printf ("Variable n : addr : %d, value : %d\n", &n, n);
	printf ("Variable pn : addr : %d, value : %d\n", &pn, pn);
	printf ("Variable ppn : addr : %d, value : %d\n", &ppn, ppn);
	return 0;
}
