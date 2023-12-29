#include<stdio.h>
#include<stdlib.h>
const int MAXN = 100;

int main()
{
	int n, *p1, *p2, *p3;
	printf ("Address of MAXN : %u\n", &MAXN);
	printf ("Main function is allocated at : %u\n", &main);
	printf ("Address of n : %u\n", &n);
	printf ("Address of p1 : %u\n", &p1);
	printf ("Address of p2 : %u\n", &p2);
	printf ("Address of p3 : %u\n", &p3);
	p1 = (int*)malloc(sizeof(int));
	p2 = (int*)malloc(sizeof(int));
	p3 = (int*)malloc(sizeof(int));	
	printf ("Dynamic allocation (p1) at : %u\n", p1);
	printf ("Dynamic allocation (p2) at : %u\n", p2);
	printf ("Dynamic allocation (p3) at : %u\n", p3);
	free(p1);
	free(p2);
	free(p3);	
	return 0;
}
