#include <stdio.h>

void in (int a[] , int &n) ; 
int max_1 (int a[] , int n) ; 
int max_2 (int a[] , int n) ; 

int main ()
{
	int a[100] , n ; 
	in (a , n) ; 
	printf ("So lon thu nhat : %d\n", max_1 (a , n)) ;
	printf ("So lon thu hai : %d", max_2 (a , n)) ; 
	return 0 ; 
}

void in (int a[] , int &n)
{
	do {
		printf ("Nhap so luong phan tu : ") ;
		scanf ("%d", &n) ; 
	}	while (n > 100 || n <  0) ;
	for (int i = 0 ; i < n ; i++) 
	{ 
		printf ("a[%d] = ", i) ; 
		scanf ("%d", &a[i]) ; 
	}
}

int max_1 (int a[] , int n)
{
	int max1 = a[0] ;  
	for (int i = 0 ; i < n ; i++)
	{
		if (max1 < a[i])
		{
			max1 = a[i] ; 
		}
	}
	return max1 ; 
}

int max_2 (int a[] , int n)
{
	int max1 , max2 ; 
	if (a[0] > a[1])
	{
		max1 = a[0] ; 
		max2 = a[1] ; 
	}
	else
	{
		max1 = a[1] ; 
		max2 = a[0] ;
	}
	for (int i = 0 ; i < n ; i++)
	{
		if (max1 <= a[i])
		{
			max2 = max1 ; 
			max1 = a[i] ; 
		}
		else if (max2 < a[i])
		{
			max2 = a[i] ; 
		}
	}
	return max2 ; 
}
