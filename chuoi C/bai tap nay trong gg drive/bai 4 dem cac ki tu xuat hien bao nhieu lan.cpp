#include<stdio.h>
#include<string.h>
#include<ctype.h>
/*
	a = 97 -> count[0] 
	b = 98 -> count[1]
	c = 99 -> count[2]
	d = 100 -> count[3]
	...
	z = 122 -> count[25]
	aaababca :	a 5
				b 2
				c 1
*/
int main()
{
	//	ki tu thuong
//	char s[1000];
//	scanf("%s", s); 
//	int cnt[26] = {0};
//	for(int i = 0; i < strlen(s); i++)
//	{
//		cnt[s[i] - 'a']++;
//	}
//	for(int i = 0; i < 26; i++)
//	{
//		if(cnt[i] != 0)
//		{
//			printf("%c %d\n", (i + 'a'), cnt[i]);
//		}
//	}

	//ki tu in hoa
//	char s[1000];
//	scanf("%s", s);	
//	int cnt[26] = {0};
//	for(int i = 0; i < strlen(s); i++)
//	{
//		cnt[s[i] - 'A']++;
//	}
//	for(int i = 0; i < 26; i++)
//	{
//		if(cnt[i] != 0)
//		{
//			printf("%c %d\n", (i + 'A'), cnt[i]);
//		}
//	}

	// tat ca cac ki tu 
	char s[1000];
	gets(s);
	int cnt[256] = {0};
	for(int i = 0; i < strlen(s); i++)
	{
		cnt[(int)s[i]]++;
	}
	for(int i = 0; i < 256; i++)
	{
		if(cnt[i] != 0)
		{
			printf("%c %d\n", i, cnt[i]);
		}
	}
	return 0;
}
