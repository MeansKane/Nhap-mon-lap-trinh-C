#include<stdio.h>

int main()
{
	int a = 7;
	printf("%d\n", &a);
	int *b = &a;
	printf("%d\n", b);
	*b = 5;
	printf("%d\n", a);
	return 0;
}
