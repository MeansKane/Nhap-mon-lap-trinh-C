#include <stdio.h>
#include <math.h>

void in (long long int a[] , int &n);
int sochinhphuong (int n) ; 
void out (long long int a[] , int n) ; 
int dem (long long int a[] , int n) ; 

int main (){
	long long int a[100] ;
	int n ; 
	in (a , n) ; 
	printf ("%d\n", dem(a , n));
	out (a , n) ; 
	return 0 ; 
}

void in (long long int a[] , int &n){
	scanf ("%d", &n);
	for (int i = 0 ; i < n ; i++){
		scanf ("%lld", &a[i]);
	}
}

int sochinhphuong (int n){
	int m = sqrt(n) ; 
	for (int i = 1 ; i <= n ; i++){
		if (m * m == n){
			return 1 ;
		}
		else {
			return 0 ; 
		}
	}
}

void out (long long int a[] , int n){
	for (int i = 0 ; i < n ; i++){
		if (sochinhphuong(a[i])){
			printf ("%lld ", a[i]);
		}
	}
}

int dem (long long int a[]  , int n){
	int dem = 0 ; 
	for (int i = 0 ; i < n ; i++){
		if (sochinhphuong(a[i])){
			dem++ ; 
		}
	}
	return dem ; 
}
