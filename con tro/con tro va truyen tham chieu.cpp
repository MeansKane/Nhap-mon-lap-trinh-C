#include <stdio.h>

// truyen va nhan dia chi ; thay doi gia tri cua gia tri ban dau

void volume (int *x) 
{
	*x = (*x) * (*x) * (*x) ; 
}

int main ()
{
	int x = 5 ; 
	printf ("%5d\n", x) ;
	 
	volume (&x) ; 
	
	printf ("%5d", x) ; 
	return 0 ; 
}
