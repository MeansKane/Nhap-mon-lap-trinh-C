#include <stdio.h>
#include <string.h>
// abcd ==> dcba
// b1 : dbca
// b2 : dcba

void DaoNguoc (char c[])
{
	for (int i = 0; i < strlen(c) / 2; i++)
	{
		int temp = c[i];
		c[i] = c[strlen(c) - 1 - i];
		c[strlen(c) - 1 - i] = temp;
	}
}

int main()
{
	char c[100];
	gets(c);
	DaoNguoc(c);
	puts(c);
	return 0;
}
