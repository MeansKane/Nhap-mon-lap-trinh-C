#include <stdio.h>
#include <limits.h>

void in (int a[] , int &n) ; 
int min_1 (int a[] , int n) ; 
int min_2 (int a[] , int n) ; 

int main ()
{
	int a[100] , n ; 
	in (a , n) ; 
	printf ("%d", min_1 (a , n)) ;
	printf ("\n%d", min_2 (a , n)) ; 
	return 0 ;
}

void in (int a[] , int &n)
{
	scanf ("%d", &n) ; 
	for (int i = 0 ; i < n ; i++)
	{
		scanf ("%d", &a[i]);
	}
}

int min_1 (int a[] , int n) 
{
	int min1 = a[0] ; 
	for (int i = 0 ; i < n ; i++)
	{
		if (min1 > a[i])
		{
			min1 = a[i] ;	
		}	
	}
	return min1 ; 
}
/* 
	*cach 1 : 
	tao thu vien : #include <limits.h> de lay gia tri lon nhat INT_MAX va gia tri nho nhat INT_ MIN
*/
int min_2 (int a[] , int n)
{
	int min1  = INT_MAX , min2 = INT_MAX ; 
	for (int i = 0 ; i < n ; i++)
	{
		if (min_1 (a , n) == a[i])
		{
			continue ; 
		}
		else 
		{
			if (min2 > a[i]) 
			{
				min2 = a[i] ;	
			} 
		}
	}
	return min2 ; 
}

/* 
	*cach 2 : 
int min_2 (int a[] , int n)
{
	if (a[0] < a[1])
	{
		min1 = a[0] ; 
		min2 = a[1] ;	
	}
	else 
	{
		min1 = a[1] ; 
		min2 = a[0] ;
	}
	for (int i = 0 ; i < n ; i++)
	{
		if (min1 >= a[i])
		{
			min2 = min1 ; 
			min1 = a[i] ; 
		}
		else if (min2 > a[i])
		{
			min2 = a[i] ; 
 		}
	}
	return min2 ; 
}*/
