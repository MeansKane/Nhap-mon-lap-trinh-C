#include <stdio.h>
#include <math.h> 

void nhapMang (int a[] , int &n) ; 
bool kTraDoixung (int a[] , int n) ;
float tongNghichdao (int a[] , int n) ; 
float tinhTBle (int a[] , int n) ;
int maxThu1 (int a[] , int n) ; 
int maxThu2 (int a[] , int n) ;
int min (int a[] , int n) ; 
void  timVitrimin (int a[] , int n) ; 
void timSochiahet4vaSocuoicungla6 (int a[] , int n) ; 
void xoaPhantuAm (int a[] , int n) ; 
bool ktraSongto (int n ) ; 
int timMaxSongto (int a[] , int n) ; 
void chen1 (int a[] , int n , int x , int k) ;
void xuatMangsaukhiChen1 (int a[] , int n) ; 

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
	printf("\n3. Tinh tong nghich dao cac phan tu trong mang.");
	printf ("\n==> Tong nghich dao : %f", tongNghichdao (a , n));
	printf ("\n4. Tinh trung binh cong cua cac so nguyen am le trong mang.") ; 
	printf ("\n==> Trung binh cong cua cac so nguyen am le : %.2f" , tinhTBle (a , n)) ; 
	printf("\n5. Tim so lon nhat va so lon thu 2.") ; 
	printf ("\n==> Lon nhat : %d . Lon thu 2 : %d " , maxThu1 (a , n) , maxThu2 (a , n)) ;
	printf ("\n6. Tim tat ca vi tri cua cac so nho nhat trong mang.");
	printf ("\n==> Vi tri nho nhat trong mang : ") ; 
	timVitrimin (a , n) ; 
	printf ("\n7. Liet ke cac phan tu chia het cho 4 va tan cung la 6.");
	printf ("\n==> So chia het cho 4 va tan cung la 6 : ");
	timSochiahet4vaSocuoicungla6 (a , n) ; 
	printf ("\n8. Xoa phan tu am trong mang.") ;
	printf ("\n==> Sau khi xoa am : ") ;
	xoaPhantuAm (a , n) ; 
	printf ("\n9. Tim so nguyen to lon nhat trong mang.") ;
	printf ("\n==> So nguyen to lon nhat trong mang : %d ", timMaxSongto (a , n)) ; 
	printf ("\n10. Chen 1 vao ben trai so nguyen to lon nhat o cau 9.");
	printf ("\n==> Chen 1 : ") ; 
	xuatMangsaukhiChen1 (a , n) ; 
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
	for (int i = 0 ; i <= n/2 ; i++)
	{
		// chay tu` dau` vao` va chay tu` cuoi' vao` ktra xem neu' co' cap nao` kh bang` nhau thi no kh doi' xung'
		if  (a[i] != a[n - 1 - i])  
		{
			return false ; 
		}
	}
	return true ; 
}

float tongNghichdao (int a[] , int n)
{
	float sum = 0 ; 
	for (int i = 0 ; i < n ; i++)
	{
		sum += 1.0 / a[i] ; 
 	}
 	return sum ; 
}

float tinhTBle (int a[] , int n)
{
	float tb = 0 , sum = 0 ; 
	int dem = 0 ; 
	for (int i = 0 ; i < n ; i++)
	{
		if (a[i] < 0 && a[i] % 2 != 0)
		{
			dem++ ;
			sum += a[i] ;
		}
	}
	tb = sum / dem ; 
	return tb ; 
}

int maxThu1 (int a[] , int n)
{
	int max = a[0] ; 
	for (int i = 0 ; i < n ; i++)
	{
		if (max < a[i])
		{
			max = a[i] ; 
		}
	}
	return max ; 
}

int maxThu2 (int a[] , int n)
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

int min (int a[] , int n)
{
	int min = a[0] ; 
	for (int i = 0 ; i < n ; i++)
	{
		if (min > a[i])
		{
			min = a[i] ; 
		}
	}
	return min ; 
}

void timVitrimin (int a[] , int n) 
{
	for (int i = 0 ; i < n ; i++)
	{
		if (a[i] == min (a , n))
		{
			printf ("%d  ", i + 1) ;  
		}
	} 
}

void timSochiahet4vaSocuoicungla6 (int a[] , int n)
{
	for (int i = 0 ; i < n ; i++)
	{
		if (a[i] % 4 == 0 && a[i] % 10 == 6)
		{
			printf ("%d " , a[i]) ;
		}
	}
}

void xoaPhantuAm (int a[] , int n)
{
	for (int i = 0 ; i < n ; i++) 
	{
		if (a[i] > 0)
		{
			printf ("%d ", a[i]) ;
		}
	}
}

bool ktraSongto (int n ) 
{
	if (n < 2)
	{
		return false ; 
	}
	for (int i = 2 ; i <= sqrt (n) ; i++)
	{
		if (n % i == 0)
		{
			return false ; 
		}
	}
	return true ; 
}

int timMaxSongto (int a[] , int n)
{
	int max = a[0] ; 
 	for (int i = 0 ; i < n ; i++)
	{
		if (ktraSongto(a[i]))
		{
			if (max < a[i]) 
			{
				max = a[i] ; 
			}
		}
	} 
	return max ; 
}

void chen1 (int a[] , int n , int x , int k)
{
	for (int i = n - 1 ; i > k ; i--)
	{
			a[i] = a[i - 1] ;
	} 
	a[k] = x ; 
}

void xuatMangsaukhiChen1 (int a[] , int n) 
{
	n += 1 ; 
	int x = 1 , k ; 
	chen1 (a , n , x , k ) ; 
	for (int i = 0 ; i < n ; i++)
	{
		if (a[i] > 0)
		{
			printf ("%d ", a[i]) ;
		}
	}
}

