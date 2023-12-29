#include<stdio.h>

void HN(int n, char A, char B, char C)
{
	if(n == 1)
	{
		printf("%c -> %c\n", A, C);
	}
	else
	{
		HN(n - 1, A, C, B);
		HN(1, A, B, C);
		HN(n - 1, B, A, C);
	}
}

int main()
{
	HN(5, 'A', 'B', 'C');
	return 0;
}
