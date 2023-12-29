#include <stdio.h>

int main (){
	char a[100] ; // xau chua 99 ky tu vi tri cuoi cung cua xau la /0  
	scanf ("%s", &a); // nhap xau 
	printf ("%s" , a); // xuat xau 

	char ten[100] , diachi[100] ; 
	scanf ("%s %s", &ten , &diachi) ; 
	printf ("Ten : %s \nDia chi : %s", ten , diachi); 

/* //in ra ky tu thu k vi co 99 ky tu nen k - 1 
	char a[100] ; 
	int k ; 
	scanf ("%s", &a) ; 
	scanf ("%d", &k) ;
	printf ("%c", a[k - 1]) ; */
	return 0 ; 
}

/*

 dem cac ky tu trong xau 
 cach 1 
#include <stdio.h>
#include <string.h>

int main () { 
	char a[100] ;
	scanf ("%s", &a) ; 
	printf ("%d", strlen(a));	
}
cach 2 
#include <stdio.h>

int main () { 
	char a[100] ; 
	int len = 0 ; 
	scanf ("%s", &a) ; 
	while (a[len] != '\0'){
		len++ ; 
	}
	printf ("%d", len) ; 
	return 0 ; 
}
*/

//// ky tu c xuat hien trong xau may lan ? 
//#include <stdio.h>
//#include <string.h>
//
//int main (){
//	char c , a[100];
//	scanf ("%c", &c) ;
//	scanf ("%s", &a) ; 
//	int dem = 0 ; 
//	for (int i = 0 ; i < strlen(a) ; i++) { // i di tu dau xau den cuoi xau 
//		if (a[i] == c) {
//			dem++ ; 
//		}
//	}
//	printf ("%d", dem) ; 
//	return 0 ; 
//}



