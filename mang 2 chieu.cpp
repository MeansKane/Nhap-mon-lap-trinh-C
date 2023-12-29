#include <stdio.h>

int main () { 
	int a[100][100]  , sum = 0 ; 
	int n , m ; //n so hang , m la so cot 
	do {
		printf ("Nhap so hang : ");
		scanf ("%d", &n); 
		printf ("Nhap so cot : ");
		scanf ("%d", &m); 
	}	while ((n < 0 || n > 100)&& (m < 0 || m > 100));
	// mang 2 chieu can co 2 vong lap de nhap 
	for (int i = 0 ; i < n ; i++){ // nhap hang 
		for (int j = 0 ; j < m ; j++){ // nhap cot 
			printf ("a[%d][%d] = ", i , j);
			scanf ("%d", &a[i][j]);
		}
	}
	printf ("====================\n") ; 
	// mang 2 chieu can co 2 vong lap de xuat  
	for (int i= 0 ; i < n ; i++){  // hang 
		for (int j = 0 ; j < m ; j++){ // cot 
			printf ("a[%d][%d] = %d\n", i , j , a[i][j]);
			sum += a[i][j]; 
		}
	}
	printf ("Tong cac phan tu : %d", sum);
	return 0 ; 
}
