#include <stdio.h>
#include <string.h>

int main ()
{
	char c[100] ;
	printf ("Nhap chuoi vao lam on : ") ; 
	gets (c) ; 
	printf ("Chuoi vua nhap : %s", c) ; 
	strrev (c) ; 
	printf ("\nChuoi vua nhap bi dao nguoc  : %s", c) ;
	return 0 ; 
}




//#include <stdio.h>
//#include <string.h>
//
//int main ()
//{
//	char c[100] ;  
//	printf ("Nhap chuoi di ban oi ! : ") ; 
//	gets(c) ;
//	printf ("Chuoi truoc khi bi dao nguoc : %s " , c) ; 
//	strrev(c) ; 
//	printf ("\nChuoi sau khi bi dao nguoc : %s ", c) ; 
//	return 0 ; 
//}

