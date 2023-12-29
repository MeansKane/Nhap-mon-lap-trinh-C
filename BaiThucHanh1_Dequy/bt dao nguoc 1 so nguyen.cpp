#include<stdio.h>

void daonguoc(int n)
{
	if(n < 10)
	{
		printf("%d", n);
	}
	else
	{
		printf("%d", n % 10);
		daonguoc(n / 10);
	}
	
}

int main()
{
	daonguoc(1980);
	return 0;
}
