#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

/*
	baaaabca :  b 2
				a 5
				c 1			
*/
int main()
{
	char s[1000];
	scanf("%s", s);
	int cnt[26] = {0};
	for(int i = 0; i < strlen(s); i++)// dem so lan ki tu xuat hien
	{
		cnt[s[i] - 'a']++;
	}
	for(int i = 0; i < strlen(s); i++)
	{
		if(cnt[s[i] - 'a'])	
		{
			printf("%c %d\n", s[i], cnt[s[i] - 'a']);
			cnt[s[i] - 'a'] = 0;
		}
	} 
	return 0;
}
