#include <stdio.h>
/*
	Khai niem : la 1 bien ma gia tri chua trong no la dia chi cua 1 bien khac 
	Gia tri cua con tro : dia chi ma con tro tro den 
	Dia chi cua con tro : dia chi cua ban than bien con tro do 
	Gia tri cua bien la noi con tro tro den
	Dia chi cua bien noi con tro dang tro toi = gia tri cua con tro  
	
*/

int main ()
{
	int a = 255 , b = 203; 
	float f = 3.14 ; 
	// khai bao con tro : <kieu du lieu>  *<ten bien> ;
	int *abc ; 
	float *xyz ; 
	
	/* khoi tao gia tri 
		int *abc = 0   ; 
		float *xyz = 2 ; 
	*/ 
	
	// gan gia tri phai cung kieu du lieu !  
	abc = &a ; 
	xyz = &f ; 
	
	/*khai bao va gan gia tri 
		int *abc = &a ; 
		float *xyz  = &f;
	*/
//	printf ("Dia chi cua bien a : %d" , &a); 
//	printf ("\nGia tri chua trong con tro *abc : %d", abc);
 
 	// muon truy xuat tro den dia chi ta muon thi *abc 
	printf ("Gia tri cua bien a : %d", *abc ) ;
	abc = &b ;
	printf ("\nGia tri cua bien b : %d ", *abc) ; 
	return 0 ; 
}
