#include<stdio.h>

void inSao(int n)
{
	if(n > 1)
	{
		inSao(n - 1);	
	}	
	for(int i = 0; i < n; i++)
	{
		printf("*");
	}
	printf("\n");
}

int main()
{
	inSao(10);
	return 0;	
}
