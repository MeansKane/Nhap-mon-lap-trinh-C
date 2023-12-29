//#include <stdio.h>
//
//int main () 
//{
//	int a[] = {1 , 2 , 3 , 5 , 10 , 18} ; 
//	int *abc = a ; 
//	
////	// moi quan he giua mang va con tro : ten mang thuc ra la 1 con tro do no tro den dia chi cua phan tu dau tien trong mang 
////	printf ("Dia chi cua mang : %d", a) ; 
////	printf ("\nDia chi cua mang a[0] : %d", &a[0]) ; 
////	printf ("\nGia tri cua abc : %d", abc) ; 
//
//	for (int i = 0 ; i < 6 ; i++)
//	{
//		printf ("%5d", a[i]);
//	}
//	printf ("\n") ;
//	// *(abc + i) tuong tu nhu *a[i]
////	 for (int i = 0 ; i < 6 ; i++)
////	{
////		printf ("%5d", *(abc + i)); // con tro nhay tu dia chi nay sang dia chi kia
////	}
//	
//	abc = 3000 ; 
//	abc++ ; // hoac la ++abc ; abc = abc + (1 * 4) = 3000 + 4 = 3004
//	abc++ ; // abc = abc + (1 * 4) = 3004 + 4 = 3008
//	abc-- = 3004 ; // lui lai 
//	
//	abc += 5 ; // abc = abc + (5 * 4) = abc + 20 = 3020 ; la dia chi khong phai gia tri  
//	for ( ; abc < &a[6] ; abc++)
//	{
//		printf ("%5d", *abc);
//	}
//	
//	return 0 ; 
//}

#include <stdio.h>

int main ()
{
	int a[10];// ten mang la 1 con tro, chua dia chi cua phan tu dau tien 
	for (int i = 0 ; i < 10 ; i++)
	{
		printf ("%d\t", a + i);
	}
	for (int i = 0 ; i < 10 ; i++)
	{
		scanf ("%d", a + i);// &a[i]
	}
	for (int i = 0 ; i < 10 ; i++)
	{
		printf ("%d\t", *(a + i));//a[i]
	}
	return 0;
}

