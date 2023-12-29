#include<stdio.h>

void xuatnhiphan(int n) 
{
	if(n / 2 > 0)
	{
		xuatnhiphan(n / 2);
	}
	printf("%d", n % 2);
}

void xuat16phan(int n)
{
	if(n / 16 > 0)
	{
		xuat16phan(n / 16);
	}
	printf("%d", n % 16);
}

int main()
{
	xuatnhiphan(10);
	printf("\n");
	xuat16phan(17);
	return 0;
}
