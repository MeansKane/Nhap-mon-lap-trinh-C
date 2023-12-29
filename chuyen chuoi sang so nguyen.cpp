#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nhapCanh (char canh[]) ; 

int main ()
{
	char canh[100] ; 
	nhapCanh (canh) ; 
	return 0 ;
}

void nhapCanh (char canh[])
{
	printf ("Nhap canh : ") ; 
	scanf ("%s", canh) ; 
	int s = 0 , dem = 0 ; 
	int i ; 
	for ( i = 0 ; i < strlen(canh) ; i++)
	{
		if (canh[i] >= '0' && canh[i] <= '9')
		{
			dem++ ; 
		}
	}
	if (dem == i)
	{
		int canh_1 = atoi (canh) ; // chuyen chuoi thanh chu so "123" ==> 123 
		s = canh_1 * canh_1 ; 
		printf ("%d", s) ; 
	}
	else 
	{
		printf ("Khong hop le") ; 
	}
}
