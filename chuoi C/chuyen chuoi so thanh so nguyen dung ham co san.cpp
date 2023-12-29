#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char c[100] ; 
	printf ("Nhap chuoi le le len gium tao cai : ") ; 
	gets (c) ; 
	printf ("Day la chuoi may vua nhap do : %s", c) ; 
	int kq = atof (c) ; // int sang string 
	/* 
	long sang string 
		int kq = atol (c)
	float sang string 
		int kq = atof (c)
	*/
	printf ("\nCon day la chuoi cua may sau khi da chuyen thanh so nguyen : %d", kq) ; 
	return 0 ; 
}






//#include <stdio.h> 
//#include <stdlib.h>
//
//int main ()
//{
//	char c[100] ; 
//	printf ("Nhap chuoi di ban oi : ") ; 
//	gets (c) ;
//	printf ("Chuoi chua chuyen thanh so nguyen : %s", c) ; 
//	// ham chuyen chuoi so sang so nguyen (int)
//	int a = atoi (c) ; 
//	// ham chuyen chuoi so sang so nguyen (long)
//	// long a = atol (c)
//	// ham chuyen chuoi so sang so thuc (float)
//	// long a = atof (c)
//	printf ("\nChuoi sau khi chuyen thanh so nguyen : %d", a ) ; 
//	return 0 ; 
//}
//

