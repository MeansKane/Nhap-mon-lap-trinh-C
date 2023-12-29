#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	char s1[100], s2[100];
	printf ("Nhap chuoi s1 : ");
	gets(s1); 
	printf ("Nhap chuoi s1 : ");
	gets(s2);
	printf ("Xuat chuoi s1 : ");
	puts(s1);
	printf ("Xuat chuoi s2 : ");
	puts(s2);
	printf ("So sanh chuoi s1 va s2: ");
	strcmp(s1, s2);
	if (strcmp(s1, s2) > 0)
	{
		printf ("s1 > s2");
	}
	if (strcmp(s1, s2) < 0)
	{
		printf ("s1 < s2");
	}
	if (strcmp(s1, s2) == 0)
	{
		printf ("s1 = s2");
	}
	printf ("\nNoi chuoi s1 voi chuoi s2 : %s", strcat(s1, s2));
	printf ("\nKiem tra chuoi s1 co chua chuoi s2 hay khong ? ");
	if (*strstr(s1, s2) == s1[0])
	{
		printf ("Co !");
	}
	else 
	{
		printf ("Khong !");
	}
	return 0;
}
