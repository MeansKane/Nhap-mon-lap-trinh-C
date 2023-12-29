#include <stdio.h>

void DrawHeart (int m , int n);

int main ()
{
	int m = 6 , n = 7 ;
	DrawHeart(m , n);
	return 0 ; 
}

void DrawHeart (int m , int n)
{
	for (int i = 1 ; i < 7 ; i++)
	{
		for (int j = 1 ; j <= 7 ; j++)
		{
			if (!((i == 1 && (j == 1 || j == 4 || j == 7)) 
			|| (i == 4 && (j == 1 || j == 7)) 
			|| (i == 5 && (j <= 2 || j >= 6)) 
			|| (i == 6 && (j <= 3 || j >= 5))))
			{
				printf (" * ");
			}
			else 
			{
				printf ("   ");
			}
		}
		printf ("\n");
	}
}
