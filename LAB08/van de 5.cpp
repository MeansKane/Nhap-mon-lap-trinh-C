#include <stdio.h>

int tinh_tong_cac_so_hang(int n);

int main (){
	int n , S = 0 ; 
	do {
		printf ("\nnhap n : ");
		scanf ("%d", &n);
		if (n >= 0){
			S = tinh_tong_cac_so_hang(n);
			printf ("S = %d", S);
		}
	}	while (n >= 0);
}
int tinh_tong_cac_so_hang(int n){
	int sum = 0; 
	do {
		int so_du = n % 10 ; 
		n = n / 10 ; 
		sum += so_du; 
	}	while (n > 0);
	return sum;
}
