#include <stdio.h>

void in (int a[] , int &n);
void out (int a[] , int n);
void chenkhongk(int a[] , int n , int x) ; 
void chen1phantu (int a[] , int n , int x , int k); 
void xoa1phantu (int a[] , int n , int k) ;

int main (){
	int a[100] , n , k , x; 
	in (a , n); 
	n+= 1 ; 
	printf ("\nNhap phan tu ban muon chen : ");
	scanf ("%d", &x);
	chenkhongk(a, n , x);
	out (a , n);
	n+= 1 ; 
	printf ("\nNhap phan tu ban muon chen : ");
	scanf ("%d", &x);
	do {
		printf ("\nNhap vi tri muon chen : "); 
		scanf ("%d", &k); 
	}	while (k < 0 || k > n);
	chen1phantu (a, n , x , k);
	out (a , n);
	n= n - 1 ; 
	printf ("\nNhap vi tri ban muon xoa : ");
	scanf ("%d", &k); 
	xoa1phantu(a , n , k); 
	out (a , n);  
	return 0 ; 
}

void in (int a[] , int &n){
	do {
		printf ("Nhap n phan tu : ");
		scanf ("%d", &n);
	}	while (n < 0 && n > 100);
	for (int i = 0 ; i < n ; i++){
		printf ("a[%d] = ", i);
		scanf ("%d", &a[i]);
	}
}

void out (int a[] , int n){
	for (int i = 0 ; i < n ; i++){
		printf ("%d\t", a[i]);
	}
}
void chenkhongk(int a[] , int n , int x){
	int i ; 
	for (i = n - 1 ; i > n ; i--){
		a[i] = a[i - 1] ;
	}
	a[i] = x ; 
}
void chen1phantu (int a[] , int n , int x ,int k){
	for (int i = n - 1 ; i > k ; i--){ // dich chuyen cac phan tu sang ben phai 
		a[i] = a[i - 1] ;
	}
	a[k] = x ; 
}

void xoa1phantu (int a[] , int n , int k){
	for (int i = k ; i < n - 1 ; i++){
		a[i] = a[i + 1] ; 
	}
	n-- ;  
}
