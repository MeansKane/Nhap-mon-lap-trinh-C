#include <stdio.h>
#include <string.h> 

int main ()
{
	char c[100] ; 
	printf ("Nhap chuoi di ban oi : ") ; 
	gets (c) ; 
	printf ("\nSo luong ki tu cua chuoi : %d", strlen (c)) ; // tru 1 la do co dau ENTER hoac '/n' 
	return 0 ; 
}

