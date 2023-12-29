#include <stdio.h>

int uoc_chung_lon_nhat(int a , int b);
int boi_chung_nho_nhat(int a , int b);
int main (){
	int  a , b , c , d; 
	do {
		printf ("Nhap a va b : ");
		scanf ("%d %d", &a , &b);
	}  while (a <= 0 || b <= 0);
	c = uoc_chung_lon_nhat(a , b);
	d = boi_chung_nho_nhat(a , b);
	printf ("Uoc chung lon nhat : %d", c);
	printf ("\nBoi chung nho nhat : %d", d);
return 0 ;	
}

int uoc_chung_lon_nhat(int a , int b){
	while (a != b){  
		if (a > b){
			a -= b ; // a = a - b	
		}
		else {
			b -= a ; // b = b - a;	
		}
	}
	return a ; 	
}

int boi_chung_nho_nhat(int a , int b){
	return (a * b) / uoc_chung_lon_nhat(a , b); 
}


