#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <math.h>

int main ()
{
	int x  ;
	printf ("Nhap 1 so nguyen di ban oi ! : ") ; 
	scanf ("%d", &x) ; 
	printf ("So nguyen ban vua nhap : %d", x) ;
	char c[100] ;  
	// itoa (x , c , he co so muon chuyen)
	itoa (x , c, 10) ; // he co so 10 
//	itoa (x , c, 16) ; // he co so 16 
//	itoa (x , c , 2) ; // he co so 2 
	printf ("\nChuoi dc chuyen tu so nguyen : %s ", c) ; 
	return 0 ; 
}


