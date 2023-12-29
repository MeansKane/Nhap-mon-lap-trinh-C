#include <stdio.h>

void in (int a[] , int &n) ;
float tinhTb (int a[] , int n) ; 
int max (int a[] , int n) ; 
int min (int a[] , int n) ; 

int main ()
{
	int a[100] , n ; 
	in (a , n) ; 
	printf ("Gia tri trung binh : %.2f", tinhTb (a , n)) ; 
	printf ("\nGia tri lon nhat : %d", max (a , n)) ; 
	printf ("\nGia tri nho nhat : %d", min (a , n)) ; 
	return 0 ;
}

void in (int a[] , int &n)
{
	do {
		printf ("Nhap n phan tu : ") ; 
		scanf ("%d", &n) ; 
	}	while (n < 0) ;
	for (int i = 0 ; i < n ; i++)
	{
		printf ("Phan tu %d : ", i) ; 
		scanf ("%d", &a[i]) ;
	}
}

float tinhTb (int a[] , int n) 
{
	float tb = 0 ; 
	float sum = 0 ;
	for (int i = 0 ; i < n ; i++)
	{
		sum += a[i] ; 
	} 
	tb = sum / n ; 
	return tb ; 
} 

int max (int a[] , int n)
{
	int max = a[0] ; 
	for (int i =0 ; i < n ; i++)
	{
		if (max < a[i])
		{
			max = a[i] ; 
		}
	}
	return max ; 
}

int min (int a[] , int n)
{
	int min = a[0] ; 
	for (int i =0 ; i < n ; i++)
	{
		if (min > a[i])
		{
			min = a[i] ; 
		}
	}
	return min ; 
}
