#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[1000];
	gets(s);
	for(int i = 0; i < strlen(s); i++)
	{
		s[i] = tolower(s[i]);
	}
	printf("%s", s);
	return 0;
}
