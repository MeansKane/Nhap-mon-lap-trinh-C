#include <stdio.h>

int main ()
{
	char c[1000][50] ; // mang chua 1000 sinh vien va ten cua moi sinh vien khong qua 50 ki tu
	int n ;   
	do 
	{
		printf ("Nhap so luong sinh vien : ");
		scanf ("%d", &n) ; 
	}	while (n < 0 || n > 1000) ; 
	for (int i = 0 ; i < n ; i++)
	{
		printf ("Ten sinh vien %d : ", i + 1) ;
		fflush(stdin) ; 
		gets (c[i]) ;
	}
	printf ("\n") ; 
	printf ("Day la toan bo sinh vien : \n"); 
	for (int i = 0 ; i < n ; i++)
	{
		printf ("Ten sinh vien %d : %s\n", i + 1 , c[i]) ;
	}
	return 0 ; 
}
