#include <stdio.h>
// 1 1 2 3 5 8 
void nhap (int &n) ; 
int fibo (int n) ;

int main ()
{
	int n ; 
	nhap (n) ; 
	printf ("Phan tu thu n : %d" , fibo (n));
	return 0 ;
}

void nhap (int &n) 
{
	printf ("Nhap n : ") ; 
	scanf ("%d", &n) ; 
}

int fibo (int n) 
{
	int f1 = 1 , f2 = 1 , f = 1 ;
	for (int i = 3 ; i <= n ; i++)
	{
		f = f1 + f2 ; 
		f1 = f2 ; 
		f2 = f ; 	
	} 
	return f ; 
}
