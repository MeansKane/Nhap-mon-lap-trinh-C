#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

/*
	baaaabca bbb  :  b xuat hien nhieu nhat
*/

int main()
{
	char s[1000];
	gets(s);
	int cnt[256] = {0};
	for(int i = 0; i < strlen(s); i++)// dem so lan xuat hien cua ki tu
	{
		cnt[s[i]]++;
	}
	int res = 0; // luu so lan xuat hien cua ki tu 
	char kt; // luu ki tu xuat hien nhieu nhat
	for(int i = 0; i < 256; i++)// duyet tu ki tu dau tien den ki tu cuoi cung theo bang ma ASCII
	{
		if(cnt[i])
		{
			if(cnt[i] >= res)
			{
				res = cnt[i];
				kt = (char)(i);
			}
		}
	}
	printf("%c", kt);
	return 0;
}
