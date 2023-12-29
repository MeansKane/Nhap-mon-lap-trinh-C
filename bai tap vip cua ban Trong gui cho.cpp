#include <stdio.h>

void nhapMang (int a[] , int &n) ; 
bool kTraDoixung (int a[] , int n) ;

int main ()
{
	int a[100] , n ; 
	printf ("1. Nhap tu ban phim mang so nguyen gom n phan tu.\n") ;
	nhapMang (a , n) ; 
	printf ("2. Kiem tra xem mang co doi xung hay khong.\n"); 
	if (kTraDoixung(a , n))
	{
		printf ("==> Mang doi xung");
	}
	else 
	{
		printf ("==> Mang khong doi xung");	
	}
	return 0 ; 
}

void nhapMang (int a[] , int &n)
{
	do {
		printf ("Nhap n [1 , 99] : ");
		scanf ("%d", &n) ;
	}	while (n < 0 || n > 100) ;
	for (int i = 0 ; i < n ; i++)
	{
		scanf ("%d", &a[i]) ; 
	}
}

bool kTraDoixung (int a[] , int n)
{
	for (int i = 0 ; i < n ; i++)
	{
		// chay tu` dau` vao` va chay tu` cuoi' vao` ktra xem neu' co' cap nao` kh bang` nhau thi no kh doi' xung'
		if  (a[i] != a[n - 1 - i])  
		{
			return false ; 
		}
	}
	return true ; 
}
