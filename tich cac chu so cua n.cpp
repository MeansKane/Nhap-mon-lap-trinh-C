#include<stdio.h>

int main()
{
	int n, s, tich = 1;
	scanf("%d", &n);
	if(n == 0)
	{
		printf("%d", n);
	}
	while(n != 0)
	{
		s = n % 10;
		tich *= s;
		n = n / 10;
	}
	printf("%d", tich);
	return 0;
}
