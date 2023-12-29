#include <stdio.h>

void in (int a[], int &n); 
void out (int a[] , int n); 
void xoa1phantu(int a[] , int &n , int k) ;
void xoahetx (int a[] , int &n , int x);

int main (){
	int a[100] , n , x ; 
	in (a, n) ;
	out (a , n) ;
	xoahetx (a , n , x); 
	printf("Mang sau kh xoa cac gia tri trung nhau!\n");
	out (a , n); 
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

void xoa1phantu (int a[] , int &n , int k){
	for (int i = k ; i < n ; i++){ // tim vi tri k
		a[i] = a[i + 1] ;
	}
	n-- ; 
}
void xoahetx (int a[] , int &n , int x){
	printf ("\nNhap gia tri ban muon xoa : ");
	scanf ("%d", &x);
	for (int i = 0 ; i < n ; i++){
		for(int j = i + 1 ; j < n ; j++){
			if (a[j] == x){ // neu = x 
				xoa1phantu(a, n ,j); // xoa x di 
				j-=2;
			}
		} 
	}
}


