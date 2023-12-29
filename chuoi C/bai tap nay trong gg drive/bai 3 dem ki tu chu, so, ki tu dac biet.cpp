#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[1000];
	gets(s);
	int dem1 = 0, dem2 = 0, dem3 = 0;
//	for(int i = 0; i < strlen(s); i++)
//	{
//		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
//			dem1++;
//		if(s[i] >= '0' && s[i] <= '9')
//			dem2++;
//	}
	for(int i = 0; i < strlen(s); i++)
	{
		if(isalpha(s[i]))
			dem1++;
		if(isdigit(s[i]))
			dem2++;
	}
	printf("%d %d %d", dem1, dem2, strlen(s) - dem1 - dem2);
	return 0;
}
