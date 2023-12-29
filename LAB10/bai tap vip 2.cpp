#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void nhapMang (int a[] , int n) ; 
void xuatMangdautien (int a[] , int n) ;
int ktraSongto (int n) ; 
int max (int a[] , int n) ; 
int timVitriMax (int a[] , int n) ; 
float tinhTB (int a[] , int n) ; 
void xoa1Ptu (int a[] , int n , int k) ; 
int min (int a[] , int n) ;  
int  timVitriX (int a[] , int n , int x) ; 
int ktraMangSapxep (int a[] , int n) ; 
int thongKe (int a[] , int n) ;

int main ()
{
	srand(time(NULL)) ; 
	int a[100] , n , x; 
	
	do 
	{
		printf ("Nhap n phan tu : ") ; 
		scanf ("%d", &n) ; 
	}	while (n < 0 || n > 100) ; 
	nhapMang (a , n) ; 
	printf ("==> Mang voi %d phan tu random : " , n) ;  
	xuatMangdautien (a , n) ; 
	printf ("\n") ; 	
	printf ("\n1. Liet ke cac so nguyen to trong mang.") ;   
	printf ("\n==> Danh sach cac so nguyen to trong mang : ") ; 
	for (int i = 0 ; i < n ; i++)
	{
		if (ktraSongto (a[i]))
		{
			printf ("%d\t", a[i]) ;
		}
	}
	printf ("\n") ; 
	printf ("\n2. Liet ke vi tri cac phan tu lon nhat trong mang.") ; 
	printf ("\n==> Danh sach vi tri cua cac so lon nhat trong mang : %d " , timVitriMax (a , n)) ;   
	printf ("\n") ; 	
	printf ("\n3. Liet ke cac phan tu lon hon gia tri trung binh trong mang.") ;
	printf ("\n==> Gia tri trung binh cua mang : %.2f", tinhTB (a , n)) ; 
	printf ("\n==> Danh sach cac phan tu lon hon gia tri trung binh cua mang : ") ; 
	for (int i = 0 ; i < n ; i++)
	{
		if (a[i] > tinhTB (a , n))
		{
			printf ("%d\t" , a[i]) ; 	
		}	
	}		 
	printf ("\n") ; 
	printf ("\n4. Xoa gia tri nho nhat trong mang.") ;
	printf ("\n==> Gia tri nho nhat cua mang : %d " , min (a , n)) ; 
	for (int i = 0 ; i < n ; i++)
	{
		if (a[i] == min (a , n))
		{
			xoa1Ptu (a , n , i) ; 
			n-- ;
		}		 
	} 
	printf ("\n==> Mang sau khi xoa gia tri nho nhat : ") ; 
	xuatMangdautien (a , n) ;
	printf ("\n") ; 
	printf ("\n5. Tim cac vi tri cua x trong mang (x duoc nhap tu ban phim) , neu khong tim thay x thi thong bao *Khong tim thay*") ;
	printf ("\nNhap gia tri x muon tim vi tri : ") ; 
	scanf ("%d", &x) ; 
	if (timVitriX (a , n , x) == -1) 
	{
		printf ("==> Khong tim thay %d " , x) ; 
	}
	else 
	{
		printf ("==> Vi tri cua %d trong mang : %d" , x , timVitriX (a , n , x)) ; 
	}
	printf ("\n") ; 
	printf ("\n6. Kiem tra mang tang dan hay giam hay khong theo thu tu.") ; 
	if (ktraMangSapxep (a , n) == -1)
	{
		printf ("\n==> Mang giam dan !") ; 
	}
	else if (ktraMangSapxep (a , n) == 0)
	{
		printf ("\n==> Mang tang dan !") ; 
	}
	else 
	{
		printf ("\n==> Mang khong theo thu tu !") ; 
	}
	printf("\n") ; 
	printf ("\n7. Thong ke tan suat xuat hien cac gia tri trong mang.") ; 
	for (int i = 0 ; i < n ; i++)
	{
		printf ("\n==> Tan suat xuat hien cua phan tu %d : " ,a[i]) ;
	}
	printf ("%d\t", thongKe (a , n) );
	return 0 ; 
}

void nhapMang (int a[] , int n)
{
	for (int i = 0 ; i < n ; i++)
	{
		a[i] = rand () ; 
	}
}

void xuatMangdautien(int a[] , int n)
{
	for (int i = 0 ; i < n ; i++)
	{ 
		printf ("%d\t", a[i]) ; 
	}
}

int ktraSongto (int n) 
{
	int kq = 0 ; 
	if (n < 2) 
		kq = 0 ;
	for (int i = 2 ; i <= sqrt(n) ; i++)
	{
		if (n % i == 0) 
		{
			kq = 0 ; 
		}
	}
	kq = 1 ; 
	return kq ; 
}

int max (int a[] , int n)
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

int timVitriMax (int a[] , int n)
{
	int kq = -1 ;
	for (int i = 0 ; i < n ; i++)
	{
		if (max(a , n) == a[i])
		{
			kq = i + 1; 
		}
	}
	return kq ; 
}

float tinhTB (int a[] , int n)
{
	float tb = 0 , sum = 0 ; 
	for (int i = 0 ; i < n ; i++)
	{
		sum += a[i] ; 
	}
	tb = sum / n ; 
	return tb ; 
}

void xoa1Ptu (int a[] , int n , int k) 
{
	for (int i = k ; i < n - 1  ; i++)
	{
		a[i] = a[i + 1] ; 
	}
	n-- ; 
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

int timVitriX (int a[] , int n , int x)
{
	int kq = -1 ; 
	for (int i = 0 ; i < n ; i++)
	{
		if (a[i] == x) 
		{
			kq = i + 1;   
		}
	}
	return kq ; 
}

int ktraMangSapxep (int a[] , int n)
{
	int kq = 1 ; 
	for (int i = 0 ; i < n ; i++)
	{
		if (a[i] > a[i + 1])
		{
			kq = -1 ; 
		}
		else if (a[i] < a[i + 1])
		{
			kq = 0 ;  
		}
		else 
		{
			kq = 1 ; 
		}
	}
	return kq ; 
}

int thongKe (int a[] , int n)
{
	int dem = 0 ; 
	for (int i = 0 ; i < n ; i++)
	{
		if (a[i] == a[i])
		{
			dem++ ; 
		}
	}
	return dem ; 
}

