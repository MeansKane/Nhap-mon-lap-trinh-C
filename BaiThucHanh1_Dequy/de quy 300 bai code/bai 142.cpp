#include<stdio.h>

void nhap(char a)
{
	scanf("%c", &a);
	nhap(a - 1);
}

void xuat(char a)
{
	printf("%c", a);
	xuat(a - 1);
}

int main()
{
	char a;
	printf("Nhap van van : ");
	if(nhap(a) == '\n')
	{
		xuat(a);	
	}
	return 0;
}
