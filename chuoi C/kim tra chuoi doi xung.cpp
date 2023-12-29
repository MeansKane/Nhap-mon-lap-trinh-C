#include <stdio.h>
#include <string.h>
#include <stdlib.h>

bool ktraDoixung (char s[]);

int main ()
{
	char s[100] ; 
	printf ("Nhap chuoi di ne` : ");
	gets(s);
	printf ("Day la` chuoi ban vua` nhap : %s", s);
	if (ktraDoixung(s) == true)
	{
		printf ("\nChuoi doi xung !");
	}
	else 
	{
		printf ("\nChuoi khong doi xung !");
	}
	return 0 ; 
}

bool ktraDoixung (char s[])
{
	int ketQua = true ; 
	for (int i = 0 ; i < strlen(s) / 2 ; i++)
	{
		if (s[i] != s[strlen(s) - i - 1])
		{
			return false ; 
		}
	}
	return true ; 
}

