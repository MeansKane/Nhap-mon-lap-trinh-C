#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *a, *b;
	a = (char*)malloc(sizeof(char));
	b = (char*)malloc(sizeof(char));
	printf ("Nhap 2 ki tu : ");
	scanf("%c%c", a, b);
	for (int i = *a; i <= *b; i++)
	{
		printf("%c\n", i);
	}
	return 0;
}
