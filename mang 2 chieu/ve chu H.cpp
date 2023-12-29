#include <stdio.h>

int main ()
{
	int a[100][100] = {	{1 , 1 , 1 , 1 , 1} ,
						{1 , 0 , 0 , 0 , 1} ,
						{1 , 1 , 1 , 1 , 0} , 
						{1 , 0 , 0 , 0 , 1} , 
						{1 , 1 , 1 , 1 , 1} };
	for (int i = 0 ; i < 5 ; i++)
	{
		for (int j = 0 ; j < 5 ; j++)
		{
			if (a[i][j])
			{
				printf ("!");
			}
			else 
			{
				printf (" ");
			}
		}
		printf ("\n");
	}
	return 0 ; 
}
