#include <stdio.h>

void in_ra_min_max(int n);
int main (){
	int n ; 
	do {
		printf ("Nhap n > 0 : ");
		scanf ("%d", &n);
	}	while (n < 0);
	in_ra_min_max(n);
return 0 ;
}

void in_ra_min_max(int n){
	int so_du ; // lay so du ra 
	int min , max ; 
	so_du = n % 10 ; // lay so du ra n = 1093 => 3 
	n = n / 10 ; // tiep lay tiep cac so du con lai
	min = max = so_du ;   
	while (n > 0){
		so_du = n % 10 ; // tiep tuc lay so du 
		n = n / 10 ; 
		if (min > so_du){
			min = so_du ; 
		}
		else if (max < so_du){
			max = so_du ;
		}
	} 	
		printf ("Max = %d", max);
		printf ("\nMin = %d", min);
}
