#include<stdio.h>

void doigio(int n, int &h, int &m, int &s)
{
	if(n < 60)
	{
		s = n;
	}
	else if(n / 3600 > 0)
	{
		h = n / 3600;
		return doigio(n % 3600, h, m, s);
	}
	else 
	{
		m = n / 60;
		return doigio(n % 60, h, m, s);
	}
}

int main()
{
	int n, h, m, s;
	scanf("%d", &n);
	doigio(n, h, m, s);
	printf("%d giay -> %d : %d : %d", n, h, m, s);
	return 0;
}
