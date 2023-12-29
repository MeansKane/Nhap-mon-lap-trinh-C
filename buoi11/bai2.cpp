#include <stdio.h>
#include <math.h>

void nhapmang (int a[] , int &n);
bool nguyento (int n) ; 
int dem (int a[]  , int n) ; 

int main (){
	int a[100] , n ; 
	nhapmang(a , n) ;
	printf ("%d ", dem (a , n));
	return 0 ; 
}

void nhapmang (int a[] , int &n){
	scanf ("%d", &n);
	for (int i = 0 ; i < n ; i++){
		scanf ("%d", &a[i]);
	}
} 

bool nguyento(int n){
	if (n < 2) {
		return false ;
	}
	for (int i = 2 ; i <= sqrt(n) ; i++){
		if (n % i == 0){
			return false ; 
		}
	}
	return true ; 
}

int dem (int a[] , int n){
	int dem = 0 ; 
	for (int i = 0 ; i < n ; i++){
		if (nguyento(a[i])){
			dem++ ; 
		}
	}
	return dem ; 
}
