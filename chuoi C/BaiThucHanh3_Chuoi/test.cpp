#include<stdio.h>
#include<string.h>

void left(char s[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%c", s[i]);
	}
}

void right(char s[], int m)
{
	strrev(s);// minh khang -> gnahk hnim
	for(int i = m - 1; i >= 0; i--)// 
	{
		printf("%c", s[i]);
	}
}

int main()
{
	char s[100];
	gets(s);
	int n,m;
	scanf("%d%d", &n, &m);
	left(s, n);
	printf("\n");
	right(s, m);
	return 0;
}
