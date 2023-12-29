#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
	int n;
	scanf("%d", &n);
	int kq = 1;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			kq = 0;		
		}
	}
	if(kq == 1)
	{
		printf("la so nguyen to");
	}
	if(kq == 0)
		printf("khong la so nguyen to");
	return 0;
}
