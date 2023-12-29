#include <stdio.h>

int DoDai (char c[])
{
	int dem = 0;
	for (int i = 0; i < c[i] != '\0'; i++)
	{
		dem++;
	}
	return dem;
}

int main()
{
	char c[100];
	gets(c);
	printf ("%d", DoDai(c));
	return 0;
}
