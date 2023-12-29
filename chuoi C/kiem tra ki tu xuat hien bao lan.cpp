#include <stdio.h>
#include <string.h>

char KiemTra (char c[], char c1)
{
	int dem = 0;
	for (int i =0; i < strlen(c); i++)
	{
		if (c[i] == c1)
		{
			dem++;
		}
	}
	if (dem > 0)
	{
		printf ("'%c' xuat hien %d lan", c1, dem);
	}
	else 
	{
		return 1;	
	}
}

int main()
{
	char c[100], c1;
	gets(c);
	scanf ("%c", &c1);
	if (KiemTra(c, c1) == 1)
	{
		printf ("'%c' khong xuat hien lan nao ", c1);
	}
	return 0;
}
