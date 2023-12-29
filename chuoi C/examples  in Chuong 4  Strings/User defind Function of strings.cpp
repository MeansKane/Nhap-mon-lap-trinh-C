#include<stdio.h>
#include<string.h>
#include<ctype.h>

char *lTrim (char s[])
{
	int i = 0;
	while (s[i] == ' ')
	{
		i++; 
		if (i > 0)
		{
			strcpy(&s[0], &s[i]);
		}
	}
	return 0;
}

char *rTrim (char s[])
{
	int i = strlen(s) - 1;
	while (s[i] == ' ')
	{
		i--;
		s[i + 1] = '\0';
	}
	return s;
}

char *trim (char s[])
{
	rTrim(lTrim(s));
	char *ptr = strstr(s, "  ");// 2 khoang trang
	while (ptr != NULL)
	{
		strcpy(ptr, ptr + 1);
		ptr = strstr(s, "  ");// 2 khoang trang
	}
	return s;
}

//void *nameStr (char s[])
//{
//	Trim(s);
//	strlwr(s);
//	for (int i = 0; i < strlen(s); i++)
//	{
//		if (i == 0 || (i > 0 && s[i - 1] == ' '))
//		{
//			if (s[i] >= 'a' && s[i] <= 'z')
//			{
//				s[i] -= 32;
//			}
//		}
//	}
//	puts(s);
//}

char *nameStr(char s[])
{
	trim(s);
	strlwr(s);
	for(int i = 0; i < strlen(s); i++)
	{
		if(i == 0 || (i > 0 && s[i - 1] == ' '))
		{
			s[i] = toupper(s[i]);
		}
	}
	return s;
}

int main ()
{
	char s[100];
	printf ("Enter string s1 :");
	gets(s);
	trim(s);
	printf ("\nAfter extra blanks are remove:");
	puts(s);
	nameStr(s);
	printf ("\nAfter convert it to a name:");
	puts(s);
	return 0;
}
