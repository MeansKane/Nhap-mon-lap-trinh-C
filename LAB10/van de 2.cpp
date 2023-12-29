#include <stdio.h>
#include <math.h>

int songuyento(int n);
int sochinhphuong(int n);
int sodoixung(int n);
int soboi3(int n);

int main (){
	int A[10000] , n , dem = 0 , dem1 = 0 ;
	float sum = 0 , tb = 0 , sum1 = 0 ;
	do {
		printf ("Nhap n phan tu trong mang A : ");
		scanf ("%d", &n);	
	}	while (n < 0);
	for (int i = 0 ; i < n ; i++){
		printf("A[%d] = ", i);
		scanf ("%d", &A[i]);
	}
	
	printf ("Cac so nguyen to trong mang A : ");
	for (int i = 0 ; i < n ; i++){
		if(songuyento(A[i]))
		printf ("%d\t", A[i]);
	}
	
	printf ("\nTong cua cac so chinh phuong trong mang A : ");
	for (int i = 0 ; i < n ; i++){
		if (sochinhphuong(A[i]))
			sum += A[i] ;
	}
	printf ("%.0f", sum);
	
	printf ("\nSo luong cac so doi xung co trong mang A : ");
	for (int i = 0 ; i < n ; i++){
		if (sodoixung(A[i])){
			dem++ ;
		}
	}
	printf("%d", dem);
	
	printf ("\nTrung binh cong cac so boi 3 trong mang A : ");
	for (int i = 0 ; i < n ; i++){
		if (soboi3(A[i])){
			sum1 = sum1 + A[i] ;
			dem1++ ;
		}
	}
	tb = sum1 / dem1 ; 
	printf ("%.0f", tb);
	return 0 ; 
}

int songuyento(int n){
	if(n < 2){
		return 0 ; 
	}
	for (int i = 2 ; i <= sqrt(n) ; i++){
		if (n % i == 0){
			return 0 ;
		}
	}
	return 1 ; 
}

int sochinhphuong(int n){
	int m = sqrt(n); 
	for (int i = 1 ; i <= n ; i++){
		if (m*m == n){
			return 1 ; 
		}	
		else {
			return 0 ; 
		}
	}
}

int sodoixung(int n){ // tim va tra ve so doi xung cua n 
	int so_dao = 0, so_du = 0, m  ;
	m = n ; 
	while (m > 0){
		so_du = m % 10 ; // lay so cuoi 
		so_dao = (so_dao * 10) + so_du ; // lay so dao nhan 10 cong so cuoi 
		m = m / 10 ; // lam mat di so cuoi bang cach lay phan nguyen
	}
	if (so_dao == n){
		return 1 ;
	}
	else {
		return 0 ;
	}
}

int soboi3(int n){
	int sum = 0 , so_du = 0 ; 
	while (n != 0){
		so_du = n % 10 ; 
		n = n / 10 ; 
		sum += so_du ; 
	}
	if (sum % 3 == 0){
		return 1 ; 
	}
	else {
		return 0 ; 
	}
}

