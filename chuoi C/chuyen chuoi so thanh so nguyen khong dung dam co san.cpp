#include <stdio.h>
#include <string.h>
#include <math.h>

// chuoi so : "123" = '1' * 10 ^ 2 + '2' * 10 ^ 1 + '3' * 10 ^ 0 
// <=> ('1' - 48 ) * 10 ^ 2 + ('2' - 48 )' * 10 ^ 1 + ('3' - 48 ) * 10 ^ 0 = 123 : so nguyen 

int bienHinh (char c[]) ; 

int main ()
{
	char c[100] ; 
	printf ("Nhap chuoi do di condi : ") ; 
	gets (c) ; 
	printf ("Chuoi cua may : %s", c) ; 
	int kq = bienHinh (c) ;
	printf ("\nChuoi cua may sau khi da chuyen thanh so nguyen : %d", kq) ; 
	return 0 ; 
}

int bienHinh (char c[]) 
{
	int sum = 0 ; 
	int mu = 0 ; 
	// chay tu cuoi chuoi len dau chuoi
	for (int i = strlen (c) - 1  ; i >= 0 ; i--)
	{
		sum = sum +((c[i] - 48) * pow (10 , mu)) ; 
		mu++ ; 
	}
	return sum ; 
}








//#include <stdio.h>
//#include <string.h> 
//#include <math.h>
//
//int bienHinh (char c[]) ; 
//
//int main ()
//{
//	char c[100] ; 
//	printf ("Nhap chuoi di ban oi : ") ; 
//	gets (c) ;
//	printf ("Chuoi chua chuyen thanh so nguyen : %s", c) ; 
//	printf ("\nChuoi sau khi chuyen thanh so nguyen : %d ", bienHinh (c)) ; 
//	return 0 ; 
//}
//
//int bienHinh (char c[])
//{
//	// chuoi so "123" = '1' * 10^2 + '2' * 10^1 + '1' * 10^0 
//	// <=> ('1' - 48) * 10^2 + ('2' - 48) * 10^1 + ('1' - 48) * 10^0 = 123 la so nguyen  
//	int sum = 0 ;  
//	int mu = 0 ; // 
//	// chay tu cuoi chuoi len dau chuoi  
//	for (int i = strlen (c) - 1 ; i >= 0 ; i--)
//	{
//		sum = sum + ((c[i] - 48) * pow(10 , mu)) ; 
//		mu++ ; 
//	}
//	return sum ; 
//}

