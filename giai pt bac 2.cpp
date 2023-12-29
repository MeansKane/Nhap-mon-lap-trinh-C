#include <stdio.h>
#include <math.h>

void giaiPt (int a , int b , int c) ; 
int main ()
{
	printf ("1. Phuong trình bac 2. \n") ;
	printf ("2. Van de tien gui ngan hang.\n");
	int chon ; 
	printf ("Chon de bai lam on : ") ;
	scanf ("%d", &chon) ; 
	switch (chon)
	{
		case 1 : 
			int a , b ,c ; 
			printf ("Hay nhap a , b , c : ") ; 
			scanf ("%d %d %d ", &a , &b , &c);
			giaiPt (a , b , c) ; 
	}
	return 0 ; 
}

void giaiPt (int a , int b , int c) 
{
	float delta ; 
	float x1 , x2 ; 
	delta = (b * b) - (4 * a * c) ;
	if (delta < 0)
	{
		printf ("Phuong trinh vo nghiem") ; 
	}
	else if (delta = 0)
	{
		x1 = -(b / 2 * a) ; 
		x2 = -(b / 2 * a) ;
		printf ("Phuong trinh co 2 nghiem kep x1 = x2 = -(b / 2a) = %.2f" , x1) ;
	}
	else if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a) ; 
		x2 = (-b - sqrt(delta)) / (2 * a) ; 
		printf ("Phuong trinh co 2 nghiem phan biet x1 = %.2f va x2 = %.2f", x1 , x2) ;  
	}
	else 
	{
		printf ("Phuong trinh co vo so nghiem");
	}
	
}
