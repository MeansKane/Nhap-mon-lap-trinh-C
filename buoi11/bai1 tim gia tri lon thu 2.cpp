#include <stdio.h>
#include <limits.h>

void in (int a[] , int &n) ; 
int max_1 (int a[] , int n) ;  
int max_2 (int a[] , int n) ; 

int main ()
{	
	int a[100] , n ;
	in (a , n) ; 
	printf ("%d", max_1 (a , n)) ; 
	printf ("\n%d", max_2 (a , n)) ; 
	return 0 ; 
}

void in (int a[] , int &n)
{
	scanf ("%d", &n) ; 
	for (int i = 0 ; i < n ; i++)
	{
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
/*
	*cach 1 : 
	- Neu co 1 so >= max1 : 
		max2 = max1 ; 
		max1 = so lon nhat moi tim dc ; 
	- Neu co 1 so chi > max2 : 
		max2 = so lon hon moi tim dc ;  
*/
/*
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
}*/

/*
	*cach 2 : 
	co the tao thu vien : #include <limits.h> de lay gia tri lon nhat INT_MAX va gia tri nho nhat INT_ MIN
	neu ra gia tri xam cuc thi khong co max2 
*/

int max_2 (int a[] , int n) 
{
	int max1 = INT_MIN , max2 = INT_MIN ;
	for (int i = 0 ; i < n ; i++)
	{
		if (max_1 (a , n) == a[i])
		{
			continue ; // dung vong lap 
		}
		else if (max2 < a[i])
		{
			max2 = a[i] ; 
		}
	}
	return max2 ; 
}




