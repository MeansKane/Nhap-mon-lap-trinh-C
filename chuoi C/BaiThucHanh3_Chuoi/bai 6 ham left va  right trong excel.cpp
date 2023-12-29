#include<stdio.h>
#include<string.h>

void left(char s[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%c", s[i]);
	}
}

void right(char s[], int n)
{
	strrev(s);
	for(int i = n - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}


int main()
{
	char s[] = "Kernighan and Ritchie";
	printf("Chuoi goc : [%s]", s);	
	printf("\nleft(str, 9) : [");
	left(s, 9);
	printf("]");
	printf("\nright(str, 7) : [");
	right(s, 7);
	printf("]");
	return 0;
}
