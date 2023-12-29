#include<stdio.h>

int isprime(int n)
{
	if(n == 1)
	{
		return 1;	
	}	
	int static m = n - 1;
	if(m == 1)
	{
		return 1;
	}
	else if(n % m == 0)
	{
		return 0;
	}
	else
	{
		m--;
		isprime(n);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	if(isprime(n) == 0)
	{
		printf("Khong la so nguyen to !");
	}
	else
	{
		printf("la so nguyen to !");
	}
	return 0;
}
