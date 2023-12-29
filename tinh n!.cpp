#include <stdio.h>
// 1 1 2 3 5 8 
void nhap (int &n) ; 
int giaithua (int n) ;

int main ()
{
	int n ; 
	nhap (n) ; 
	printf ("Giai thua cua %d la %d", n , giaithua (n)) ;
	return 0 ;
}

void nhap (int &n) 
{
	printf ("Nhap n : ") ; 
	scanf ("%d", &n) ; 
}

int giaithua (int n) 
{
	/* cach 1 
	int gt = 1 ; 
	for (int i = 1 ; i <= n ; i++)
	{
		gt *= i ; 
	}
	return gt ;
	*/
	
	// cach 2 
	if (n == 1)
	{
		return 1 ; 
	}
	else 
	{
		return n * giaithua (n - 1) ; 
	}
	
}
