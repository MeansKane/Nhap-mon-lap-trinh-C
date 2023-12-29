#include<stdio.h>

int T(int y)
{
	if(y == 0)
	{
		return 1000;
	}
	return T(y - 1) * 1.12;
}

int main()
{
	printf("%d", T(0));
	return 0;
}
