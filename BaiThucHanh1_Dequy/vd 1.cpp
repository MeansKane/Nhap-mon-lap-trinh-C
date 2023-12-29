#include<stdio.h>

int v(int h)
{
	if(h == 0)
	{
		return 2;
	}
	return v(h - 1) * 2;
}

int main()
{
	printf("%d", v(4));
	return 0;
}
