#include <stdio.h>

void in (int a[] , int &n); 
void out (int a[] , int n); 
void sapxepgiam (int a[] , int n); 
void chen (int a[] , int n , int x); 

int main(){
	int a[100] , n , x; 
	in (a , n);
	printf ("Cac phan tu trong mang\n");
	out (a , n); 
	printf ("\nSau khi da sap xep theo thu tu giam dan:\n ");
	sapxepgiam(a , n);
	out (a , n);
	n = n + 1 ; 
	chen (a , n , x);
	printf ("\nSau khi chen gia tri:\n");
	sapxepgiam(a , n);
	out (a, n);	
	return 0 ; 
}

void in (int a[] , int &n){
	do {
		printf ("Nhap n phan tu : "); 
		scanf ("%d", &n);
	}	while (n <= 0) ; 
	for (int i = 0 ; i < n ; i++){
		printf ("a[%d] = ",i);
		scanf ("%d", &a[i]);
	}
}

void out (int a[] , int n){
	for (int i = 0 ; i < n ; i++){
		printf ("%d\t", a[i]);
	}
}

void sapxepgiam(int a[] , int n){
	for (int i = 0 ; i < n ; i++){
		for (int j = n - 1 ; j > i ; j--){
			if (a[j] > a[j - 1]){
				int temp = a[j] ; 
				a[j] = a[j - 1] ; 
				a[j - 1] = temp ;
			}
		}
	}
}

void chen (int a[] , int n , int x){
	printf ("\nNhap gia tri ban muon chen : ");
	scanf ("%d", &x);
	int i ;
	for (i = n - 1 ; i > n ; i--){
		a[i]  = a[i - 1] ; 
	}
	a[i] = x ; 
}
